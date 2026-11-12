// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: files an object reference under a key in a lock-guarded cache. The lock is taken only
// while the cache's level is below two. The table takes its own reference through the record; the
// caller's reference is released when the table did not keep it.
#include <cstdint>

#include "locked_keyed_cache.h"
#include "runtime/original.h"

namespace {

using misc::KeyedCacheObject;
using misc::KeyedCacheRecord;
using misc::KeyedInsertRequest;
using misc::LockedKeyedCache;

RT_ORIGINAL(0x02fbe598, lock_cache, void(void *lock));
RT_ORIGINAL(0x02fbe5a8, unlock_cache, int32_t(void *lock));
RT_ORIGINAL(0x0042e5c0, add_reference, void(KeyedCacheObject *object));
RT_ORIGINAL(0x0042e5d0, release_reference, void(KeyedCacheObject *object));
RT_ORIGINAL(0x02792dc0, insert_keyed_record, void(void *table, void *table_again, KeyedInsertRequest *request,
                                                  uint64_t hash));

/** The cache level below which the lock is taken. */
constexpr int32_t locked_level_limit = 2;
/** The shift that folds the key's upper bits into its hash. */
constexpr uint32_t hash_fold_shift = 8;

}  // namespace

/**
 *
 * Files the object under the key's hash in the cache's table, under the cache's lock when its level
 * is low. The caller's reference is taken first; when the table did not keep the object, that
 * reference is released again.
 *
 */
extern "C" void bb_misc_store_keyed_record_locked(LockedKeyedCache *cache, const uint32_t *key,
                                                  KeyedCacheObject *object)
{
    const bool locked = cache->level_0xe4 < locked_level_limit;
    if (locked) lock_cache(cache->lock_0x0148);

    KeyedCacheRecord record{};
    record.object = object;
    if (object != nullptr) add_reference(object);

    KeyedInsertRequest request{key, &record};
    const uint32_t key_value = *key;
    const uint32_t hash = (key_value >> hash_fold_shift) ^ key_value;
    insert_keyed_record(&cache->table_0x0158, &cache->table_0x0158, &request, static_cast<uint64_t>(hash));

    if (record.kept_flag == 0 && record.object != nullptr) release_reference(record.object);
    if (locked) unlock_cache(cache->lock_0x0148);
}
