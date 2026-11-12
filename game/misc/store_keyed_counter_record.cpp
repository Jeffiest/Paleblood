// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: numbers a record from the cache's counter, marks it as not yet kept and files it under the
// key's hash in the cache's table, under the cache's lock when its level is low.
#include <cstdint>

#include "locked_keyed_cache.h"
#include "runtime/original.h"

namespace {

using misc::KeyedCacheRecord;
using misc::KeyedInsertRequest;
using misc::LockedKeyedCache;

RT_ORIGINAL(0x02fbe598, lock_cache, void(void *lock));
RT_ORIGINAL(0x02fbe5a8, unlock_cache, int32_t(void *lock));
RT_ORIGINAL(0x02792dc0, insert_keyed_record, void(void *table, void *table_again, KeyedInsertRequest *request,
                                                  uint64_t hash));

/** The cache level below which the lock is taken. */
constexpr int32_t locked_level_limit = 2;
/** The shift that folds the key's upper bits into its hash. */
constexpr uint32_t hash_fold_shift = 8;
/** The flag the record is given before it is filed: the table has not kept it yet. */
constexpr int32_t not_yet_kept = 1;

}  // namespace

/**
 *
 * Numbers the record from the cache's counter, which then advances, and files the record under the
 * key's hash in the cache's table under the cache's lock when its level is low. The record is the
 * result.
 *
 */
extern "C" KeyedCacheRecord *bb_misc_store_keyed_counter_record(KeyedCacheRecord *record, LockedKeyedCache *cache,
                                                                const uint32_t *key)
{
    record->kept_flag = not_yet_kept;
    record->counter_0x08 = cache->counter_0x0140;
    cache->counter_0x0140 += 1;

    const bool locked = cache->level_0xe4 < locked_level_limit;
    if (locked) lock_cache(cache->lock_0x0148);

    KeyedInsertRequest request{key, record};
    const uint32_t key_value = *key;
    const uint32_t hash = (key_value >> hash_fold_shift) ^ key_value;
    insert_keyed_record(&cache->table_0x0158, &cache->table_0x0158, &request, static_cast<uint64_t>(hash));

    if (locked) unlock_cache(cache->lock_0x0148);
    return record;
}
