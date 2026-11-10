// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: builds a table object from the flag heap and binds it to the owner's member; when the member
// hands back that same table and a source block is given, copies the block into a heap buffer and sets
// the table's entry ranges from the buffer's header.
#include <cstddef>
#include <cstdint>

#include "../engine/allocator.h"
#include "../engine/engine.h"
#include "runtime/original.h"

namespace {

/** An owner with a member sub-object at +0x68; the member's bytes are only passed on, never read here. */
struct Owner {
    uint8_t unknown_0x00[0x68];
    uint8_t unknown_0x68[0x08];
};
static_assert(offsetof(Owner, unknown_0x68) == 0x68);

/** A table object: its vtable, the copied block and its entry ranges. */
struct Table {
    const void *vtable;             /**< The table's vtable, stored as is. */
    uint8_t unknown_0x08[0x60];
    void *block;                    /**< The heap buffer the block was copied into. */
    void *reserved_0x70;            /**< Cleared when the table is built. */
    uint8_t *block_begin;           /**< Start of the copied block. */
    uint8_t *first_entries;         /**< Start of the first entry range. */
    uint8_t *second_entries;        /**< Start of the second entry range. */
    uint8_t *block_end;             /**< One past the last entry. */
};
static_assert(offsetof(Table, block) == 0x68 && offsetof(Table, block_end) == 0x90 && sizeof(Table) == 0x98);

/** The header at the start of a copied block: two 16-bit entry counts. */
struct BlockHeader {
    uint8_t unknown_0x00[0x06];
    uint16_t first_count;           /**< Entries in the first range. */
    uint16_t second_count;          /**< Entries in the second range. */
};
static_assert(offsetof(BlockHeader, first_count) == 0x06 && offsetof(BlockHeader, second_count) == 0x08);

/** The record the table's base part is built from: its vtable address point and the second allocator. */
struct BaseInit {
    const void *vtable;             /**< The base part's vtable address point. */
    engine::Allocator *allocator;   /**< The second allocator. */
};

/** The record the member is built from: the caller's context, a zero word and a flag byte. */
struct MemberRecord {
    void *context;                  /**< The context the caller passed in. */
    uint32_t zero;                  /**< Zero. */
    uint8_t flag;                   /**< Set, so the member is built flagged. */
    uint8_t unknown_0x0d[3];
};
static_assert(offsetof(MemberRecord, zero) == 0x08 && offsetof(MemberRecord, flag) == 0x0c);

RT_GLOBAL(0x05940408, flag_heap, engine::Allocator *);
RT_GLOBAL(0x05940420, second_allocator, engine::Allocator *);
RT_GLOBAL(0x0574f310, table_vtable, const uint8_t);
RT_GLOBAL(0x056f0f90, base_vtable, const uint8_t);
RT_ORIGINAL(0x01384700, construct_base, void(Table *table, const BaseInit *init));
RT_ORIGINAL(0x013e6a70, construct_member, void *(void *member, const MemberRecord *record, Table *table));
RT_ORIGINAL(0x02a1a1b0, copy_block, void(void *destination, const void *source, uint64_t size));

constexpr uint64_t table_bytes = 0x98;
constexpr uint64_t table_alignment = 8;
constexpr uint64_t entries_offset = 0x20;
constexpr uint64_t entry_bytes = 8;
constexpr uint8_t member_flag = 1;

}  // namespace

/**
 *
 * Builds a table from the flag heap and binds it to the owner's member. When the member comes back as the
 * same table and a source block with a size is given, the block is copied into a heap buffer, and the table's
 * entry ranges are set from the buffer's header counts. Returns the member's result.
 *
 */
extern "C" void *bb_misc_build_block_object_02244030(Owner *owner, void *context, const void *source, uint64_t size)
{
    Table *table = nullptr;
    engine::Allocator *heap = flag_heap.get();
    table = static_cast<Table *>(heap->allocate(table_bytes, table_alignment));
    if (table != nullptr) {
        const BaseInit init{base_vtable.address() + engine::vtable_address_point, second_allocator.get()};
        construct_base(table, &init);
        table->vtable = table_vtable.address();
        table->block_end = nullptr;
        table->second_entries = nullptr;
        table->first_entries = nullptr;
        table->block_begin = nullptr;
        table->reserved_0x70 = nullptr;
        table->block = nullptr;
    }
    const MemberRecord record{context, 0, member_flag, {0, 0, 0}};
    void *bound = construct_member(owner->unknown_0x68, &record, table);
    if (bound != table || source == nullptr || size == 0) return bound;
    engine::Allocator *block_heap = flag_heap.get();
    void *block = block_heap->vtable->allocate_default(block_heap, size);
    table->block = block;
    copy_block(block, source, size);
    const BlockHeader *header = static_cast<const BlockHeader *>(block);
    table->block_begin = static_cast<uint8_t *>(block);
    table->first_entries = table->block_begin + entries_offset;
    table->second_entries = table->first_entries + entry_bytes * header->first_count;
    table->block_end = table->second_entries + entry_bytes * header->second_count;
    return bound;
}
