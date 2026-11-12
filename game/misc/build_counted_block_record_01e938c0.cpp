// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: builds a counted block record: its tables, two cleared words, a counted word block with five objects, then binds the objects to a registry entry when one is found.
#include <cstddef>
#include <cstdint>

#include "counted_block_record.h"
#include "counted_word_block.h"
#include "counted_word_object.h"
#include "runtime/original.h"

namespace {

/** The registry: when it is set, the record is looked up in it and its objects are bound to the entry found. */
RT_GLOBAL(0x058b3570, record_registry, void *);
/** The name passed to the scratch lookup handle. */
RT_GLOBAL(0x04d95374, counted_block_lookup_name, uint8_t);

RT_ORIGINAL(0x01e8a3a0, fn_01e8a3a0, void(misc::CountedBlockRecord *record, const uint32_t *value));
RT_ORIGINAL(0x013aeaf0, fn_013aeaf0, void(void *scratch, const uint8_t *name));
RT_ORIGINAL(0x013a29e0, fn_013a29e0, void *(void *registry, misc::CountedBlockRecord **key));
RT_ORIGINAL(0x013aebc0, fn_013aebc0, void(void *scratch));
RT_ORIGINAL(0x01e91090, fn_01e91090, void(misc::CountedWordObject *object, void *entry));

/** The size of the scratch handle that the lookup fills on the stack. */
constexpr size_t scratch_handle_size = 8;

}  // namespace

/**
 *
 * Builds the record: the value it is given goes to the base routine, the record gets its reset table and two cleared words,
 * and its counted word block gets its table, its kind and five counted word objects with default masks and zero words.
 *
 * When a registry is set, the record is looked up in it, and each of the block's five objects is bound to the entry found.
 * The record's final table is never set here, and the function returns nothing.
 */
extern "C" void bb_misc_build_counted_block_record_01e938c0(misc::CountedBlockRecord *record, const uint32_t *value)
{
    const uint32_t copied_value = *value;
    fn_01e8a3a0(record, &copied_value);
    record->vtable = misc::counted_block_record_reset_vtable.address();
    record->first_word = 0;
    record->second_word = 0;
    record->block.vtable_0x00 = misc::counted_word_block_vtable.address();
    record->block.kind = misc::counted_word_block_kind;
    for (misc::CountedWordObject &slot : record->block.slots) {
        slot.vtable_0x00 = misc::counted_word_vtable.address();
        slot.mask_0x08 = misc::counted_word_default_mask;
        slot.word_0x0c = 0;
    }

    void *const registry = record_registry.get();
    if (registry != nullptr) {
        uint8_t scratch_handle[scratch_handle_size];
        fn_013aeaf0(scratch_handle, counted_block_lookup_name.address());
        misc::CountedBlockRecord *key = record;
        void *const entry = fn_013a29e0(registry, &key);
        fn_013aebc0(scratch_handle);
        if (entry != nullptr) {
            for (misc::CountedWordObject &slot : record->block.slots) fn_01e91090(&slot, entry);
        }
    }
}
