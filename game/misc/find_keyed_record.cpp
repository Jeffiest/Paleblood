// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: looks a key up in the cache's table under the cache's lock when its level is low. A slot
// found for the key gives its flag and object to the record, which first releases its own object
// when it had not kept it and the slot takes a reference to the object it keeps.
#include <cstdint>

#include "locked_keyed_cache.h"
#include "runtime/original.h"

namespace {

using misc::KeyedCacheBlock;
using misc::KeyedCacheEntry;
using misc::KeyedCacheRecord;
using misc::LockedKeyedCache;

RT_ORIGINAL(0x02fbe598, lock_cache, void(void *lock));
RT_ORIGINAL(0x02fbe5a8, unlock_cache, int32_t(void *lock));
RT_ORIGINAL(0x0042e5c0, add_reference, void(void *object));
RT_ORIGINAL(0x0042e5d0, release_reference, void(void *object));

/** The cache level below which the lock is taken. */
constexpr int32_t locked_level_limit = 2;
/** The shift that folds the key's upper bits into its hash. */
constexpr uint32_t hash_fold_shift = 8;
/** The link value of a slot that holds nothing. */
constexpr uint64_t empty_link = static_cast<uint64_t>(-2);
/** The link value that ends a chain. */
constexpr uint64_t chain_end_link = static_cast<uint64_t>(-1);

uint32_t hash_of(uint32_t key_value)
{
    return (key_value >> hash_fold_shift) ^ key_value;
}

/**
 * Finds the slot the key is filed under: its home slot, or a later slot of the chain from it. Returns
 * false when the key has no slot.
 */
bool find_slot(KeyedCacheBlock *block, uint32_t key_value, uint64_t *slot_index)
{
    const uint64_t home = hash_of(key_value) & block->mask_0x0008;
    const KeyedCacheEntry *home_entry = &block->entries_0x0010[home];
    if (home_entry->link_0x00 == empty_link) return false;
    if ((hash_of(home_entry->key_0x08) & block->mask_0x0008) != home) return false;
    if (home_entry->key_0x08 == key_value) {
        *slot_index = home;
        return true;
    }

    for (uint64_t next = home_entry->link_0x00; next != chain_end_link;) {
        const KeyedCacheEntry *entry = &block->entries_0x0010[next];
        if ((hash_of(entry->key_0x08) & block->mask_0x0008) == home && entry->key_0x08 == key_value) {
            *slot_index = next;
            return true;
        }
        next = entry->link_0x00;
    }
    return false;
}

}  // namespace

/**
 *
 * Looks the key up in the cache's table and, when its slot is found, gives the record that slot's
 * flag and object, releasing the record's own object first when the record had not kept it. The
 * result is whether a slot was found.
 *
 */
extern "C" bool bb_misc_find_keyed_record(LockedKeyedCache *cache, KeyedCacheRecord *record, const uint32_t *key)
{
    const bool locked = cache->level_0xe4 < locked_level_limit;
    if (locked) lock_cache(cache->lock_0x0148);

    bool found = false;
    KeyedCacheBlock *block = cache->table_0x0158.block_0x0000;
    if (block != nullptr) {
        uint64_t slot = 0;
        if (find_slot(block, *key, &slot) && slot <= block->mask_0x0008) {
            KeyedCacheEntry *entry = &block->entries_0x0010[slot];
            if (entry->flag_0x10 == 0 && entry->object_0x18 != nullptr) add_reference(entry->object_0x18);
            if (record->kept_flag == 0 && record->object != nullptr) release_reference(record->object);
            record->kept_flag = static_cast<int32_t>(entry->flag_0x10);
            record->object = entry->object_0x18;
            found = true;
        }
    }

    if (locked) unlock_cache(cache->lock_0x0148);
    return found;
}
