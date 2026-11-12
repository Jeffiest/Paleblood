// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: looks a key up in the owner's slot table and links the value to the slot's payload, under the owner's lock when its level is low.
#include <cstdint>

#include "indexed_record_owner.h"
#include "runtime/original.h"

namespace {

RT_ORIGINAL(0x02fbe598, lock_owner, void(void *lock));
RT_ORIGINAL(0x02fbe5a8, unlock_owner, uint64_t(void *lock));
RT_ORIGINAL(0x0278de80, prepare_table, void(void *table, uint64_t key, uint64_t extra));
RT_ORIGINAL(0x0278fa00, find_slot_index, int64_t(void *table, misc::IndexedLookup *lookup));
RT_ORIGINAL(0x027914b0, link_lookup, void(void *first, void *second, misc::IndexedLookup *lookup));

/** The level below which the lock is taken around the lookup. */
constexpr int32_t locked_level_limit = 2;

}  // namespace

/**
 *
 * Prepares the owner's slot table for the key, finds the slot the key names and links the value to the slot's
 * payload. The work runs under the owner's lock when the owner's level is below the limit, and the result is the
 * unlock's result in that case. Otherwise the result is zero.
 *
 */
extern "C" uint64_t bb_misc_index_record_locked(misc::IndexedRecordOwner *owner, uint64_t key, uint64_t value,
                                                uint64_t extra)
{
    const bool locked = owner->level_0xe4 < locked_level_limit;
    if (locked) lock_owner(owner->lock_0x0148);

    prepare_table(&owner->table_0x0160, key, extra);
    misc::IndexedLookup lookup{key, nullptr};
    const int64_t index = find_slot_index(&owner->table_0x0160, &lookup);
    if (index < 0) __builtin_trap();  /* The original loads through a null table pointer for a negative index. */

    lookup.key = value;
    lookup.payload = &owner->table_0x0160.slots[index].payload_0x20;
    link_lookup(&owner->unknown_0x0168, &owner->unknown_0x0168, &lookup);

    if (!locked) return 0;
    return unlock_owner(owner->lock_0x0148);
}
