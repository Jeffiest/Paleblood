// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: sizes a table of elements from a source description, allocates it and a record buffer, and fills the records.
#include <cstddef>
#include <cstdint>

#include "../engine/allocator.h"
#include "runtime/original.h"

namespace {

/** The alignment of the element block, and the bytes of its header. */
constexpr uint64_t element_block_alignment = 0x10;
constexpr uint64_t element_block_header_size = 0x10;

/** Bytes that one output record takes. */
constexpr uint32_t output_record_size = 0x1c;

/** The source object: only its element count is read here. */
struct SourceObject {
    uint8_t unknown_0x0000[0x54];
    uint32_t element_count;   /**< The number of elements the source describes. */
};
static_assert(offsetof(SourceObject, element_count) == 0x54);

/** The source description: only its object is read here. */
struct SourceDescription {
    SourceObject *object;   /**< The object that holds the element count. */
};

/** One source record, five words. */
struct SourceRecord {
    uint32_t first_word;      /**< Copied to the third output word. */
    uint32_t second_word;     /**< Copied to the fifth output word. */
    uint32_t lookup_second;   /**< Index into the second lookup table. */
    uint32_t lookup_first;    /**< Index into the first lookup table. */
    uint32_t last_word;       /**< Copied to the second output word. */
};
static_assert(sizeof(SourceRecord) == 0x14);

/** One output record. */
struct OutputRecord {
    uint32_t first_looked_up;    /**< The first table's entry for the source's first index. */
    uint32_t last_word;          /**< The source's last word. */
    uint32_t second_looked_up;   /**< The second table's entry for the source's second index. */
    uint32_t first_word;         /**< The source's first word. */
    uint32_t second_word;        /**< The source's second word. */
    uint32_t cleared_first;      /**< Always zero. */
    uint32_t cleared_second;     /**< Always zero. */
};
static_assert(sizeof(OutputRecord) == output_record_size);

/** One element: where its records start, how many it holds, and a cleared word. */
struct TableElement {
    OutputRecord *records;      /**< The element's first output record. */
    uint32_t record_count;      /**< The number of output records. */
    uint8_t unknown_0x000c[4];
    uint64_t cleared;           /**< Always zero. */
};
static_assert(sizeof(TableElement) == 0x18);
static_assert(offsetof(TableElement, record_count) == 0x08);
static_assert(offsetof(TableElement, cleared) == 0x10);

/** The block the elements live in: a self pointer, the count, then the elements. */
struct ElementBlock {
    ElementBlock *self;        /**< The block's own address. */
    uint64_t element_count;    /**< The number of elements after the header. */
    TableElement elements[1];  /**< The elements. */
};
static_assert(offsetof(ElementBlock, elements) == element_block_header_size);

/** The table being built. */
struct ElementTable {
    uint8_t unknown_0x0000[0x08];
    uint32_t element_count;          /**< The number of elements. */
    uint8_t unknown_0x000c[4];
    TableElement *elements;          /**< The elements, after the block header. */
    uint8_t unknown_0x0018[0x28];
    engine::Allocator *allocator;    /**< The allocator of the block and of the records. */
    OutputRecord *records;           /**< The buffer all elements' records live in. */
};
static_assert(offsetof(ElementTable, element_count) == 0x08);
static_assert(offsetof(ElementTable, elements) == 0x10);
static_assert(offsetof(ElementTable, allocator) == 0x40);
static_assert(offsetof(ElementTable, records) == 0x48);

RT_GLOBAL(0x04b2ab40, first_lookup_table, const uint32_t);
RT_GLOBAL(0x04b2aa80, second_lookup_table, const uint32_t);

RT_ORIGINAL(0x0124f960, reset_table, void(ElementTable *table, SourceDescription *source));
RT_ORIGINAL(0x025cedc0, element_record_count, uint32_t(SourceDescription *source, uint32_t index));
RT_ORIGINAL(0x025cedd0, element_source_records, SourceRecord *(SourceDescription *source, uint32_t index,
                                                              uint32_t flags));

}  // namespace

/**
 *
 * Resets the table, reads the element count from the source, allocates the element block, clears every element and
 * sums the elements' record counts. It then allocates one buffer for all the records and fills each element's
 * records from the source. Returns false only when the record buffer cannot be allocated.
 *
 */
extern "C" bool bb_misc_build_element_table(ElementTable *table, SourceDescription *source)
{
    reset_table(table, source);
    const uint32_t element_count = source->object->element_count;
    if (element_count == 0) return true;

    table->element_count = element_count;
    engine::Allocator *allocator = table->allocator;
    const uint64_t block_size = element_block_header_size + static_cast<uint64_t>(element_count) * sizeof(TableElement);
    ElementBlock *block = static_cast<ElementBlock *>(allocator->allocate(block_size, element_block_alignment));
    if (block != nullptr) {
        TableElement *element = block->elements;
        for (uint64_t remaining = element_count; remaining != 0; --remaining) {
            if (element != nullptr) {
                element->records = nullptr;
                element->record_count = 0;
                element->cleared = 0;
            }
            ++element;
        }
        block->element_count = element_count;
        block->self = block;
        table->elements = block->elements;
    } else {
        table->elements = nullptr;
    }

    uint32_t total_records = 0;
    for (uint32_t index = 0; index < element_count; ++index) {
        TableElement *element = &table->elements[index];
        const uint32_t record_count = element_record_count(source, index);
        element->record_count = record_count;
        total_records = record_count * output_record_size + total_records;
        element->cleared = 0;
    }
    if (total_records == 0) return true;

    OutputRecord *buffer = static_cast<OutputRecord *>(table->allocator->vtable->allocate_default(table->allocator, total_records));
    table->records = buffer;
    if (buffer == nullptr) return false;

    for (uint32_t index = 0; index < element_count; ++index) {
        TableElement *element = &table->elements[index];
        const uint32_t step = element->record_count * output_record_size;
        element->records = buffer;
        const SourceRecord *input = element_source_records(source, index, 0);
        OutputRecord *output = element->records;
        if (output != nullptr) {
            for (uint32_t remaining = element->record_count; remaining != 0; --remaining) {
                output->first_looked_up = first_lookup_table.address()[input->lookup_first];
                output->last_word = input->last_word;
                output->second_looked_up = second_lookup_table.address()[input->lookup_second];
                output->first_word = input->first_word;
                output->second_word = input->second_word;
                output->cleared_first = 0;
                output->cleared_second = 0;
                output = reinterpret_cast<OutputRecord *>(reinterpret_cast<uint8_t *>(output) + output_record_size);
                ++input;
            }
        }
        buffer = reinterpret_cast<OutputRecord *>(reinterpret_cast<uint8_t *>(buffer) + step);
    }
    return true;
}
