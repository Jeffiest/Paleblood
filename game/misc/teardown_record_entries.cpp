// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: tears down the entry table a record owns. Each live entry drops the two tagged references it
// holds (an object whose count reaches zero goes back to the scratch service), and is marked empty.
// The entry array and the table then go back to the scratch service, and the record takes the
// base teardown's vtable, which the tail call sets.
#include <cstdint>

#include "misc.h"

namespace {
using misc::RecordObject;
using misc::Service;

/** An entry array: a header, then its entries. The loop runs for indices zero to last_index. */
struct EntryArray {
    uint8_t unknown_0x00[0x08];
    uint64_t last_index; /**< The loop covers indices zero through this value, inclusive. */
};
static_assert(offsetof(EntryArray, last_index) == 0x08);
static_assert(sizeof(EntryArray) == 0x10);

/** One entry: its key, two tagged references to counted objects, and unused words. */
struct Entry {
    int64_t key;               /**< Entries holding the empty key are skipped. */
    uint8_t unknown_0x08[0x08];
    uint64_t second_reference; /**< Tagged pointer whose low bits are tags. */
    uint64_t first_reference;  /**< Tagged pointer whose low bits are tags; dropped first. */
    uint8_t unknown_0x20[0x08];
};
static_assert(offsetof(Entry, second_reference) == 0x10);
static_assert(offsetof(Entry, first_reference) == 0x18);
static_assert(sizeof(Entry) == 0x28);

/** The table a record points at: its first word is the entry array. */
struct EntryTable {
    EntryArray *array; /**< The entry array, or null when none is held. */
};
static_assert(offsetof(EntryTable, array) == 0x00);

/** A reference-counted object: its count is a 32-bit word at +0x8. */
struct CountedObject {
    uint8_t unknown_0x00[0x08];
    int32_t references;
};
static_assert(offsetof(CountedObject, references) == 0x08);

/** The key that marks an entry as empty. */
constexpr int64_t empty_key = -2;

RT_ORIGINAL(0x0045a480, fn_0045a480, uint64_t(RecordObject *));

/**
 *
 * Hands a block to the scratch service's release slot.
 *
 */
void release_to_scratch(void *block)
{
    Service *service = misc::scratch_service.get();
    service->vtable->release(service, block);
}

/**
 *
 * Drops one reference held through a tagged pointer. The object goes back to the scratch service
 * when that was its last reference.
 *
 */
void release_reference(uint64_t tagged)
{
    CountedObject *object = reinterpret_cast<CountedObject *>(tagged & ~misc::tag_bits_mask);
    const int32_t before = __atomic_fetch_sub(&object->references, 1, __ATOMIC_SEQ_CST);
    if (before == 1) release_to_scratch(object);
}

/**
 *
 * Returns the entry at an index. Entries follow the array header and are one entry apart, with the
 * machine's wrapping address arithmetic.
 *
 */
Entry *entry_at(EntryArray *array, uint64_t index)
{
    const uintptr_t first = reinterpret_cast<uintptr_t>(array) + sizeof(EntryArray);
    return reinterpret_cast<Entry *>(first + static_cast<uintptr_t>(index) * sizeof(Entry));
}
}  // namespace

/**
 *
 * Tears down a record's entry table: live entries drop their references and become empty, the
 * array and the table go back to the scratch service, and the base teardown runs last.
 *
 * The array is read again after each live entry, because dropping a reference may change it.
 *
 */
extern "C" uint64_t bb_misc_teardown_record_entries(RecordObject *record)
{
    record->vtable = misc::record_vtable.address();

    EntryTable *table = static_cast<EntryTable *>(record->block_0x10);
    if (table != nullptr) {
        EntryArray *array = table->array;
        if (array != nullptr) {
            const uint64_t last_index = array->last_index;
            uint64_t index = 0;
            do {
                Entry *entry = entry_at(array, index);
                if (entry->key != empty_key) {
                    release_reference(entry->first_reference);
                    release_reference(entry->second_reference);
                    entry->key = empty_key;
                    array = table->array;
                }
                index += 1;
            } while (index <= last_index);

            release_to_scratch(array);
            table->array = nullptr;
        }
        release_to_scratch(table);
    }

    return fn_0045a480(record);
}
