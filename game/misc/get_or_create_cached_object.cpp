// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: returns the cache's object, creating it through the cache's factory when it is not held yet.
// A newly created object replaces any object the create left in the cache.
#include <cstdint>

#include "lazy_object_cache.h"
#include "runtime/original.h"

namespace {

using misc::CachedObject;
using misc::CachedObjectRequest;
using misc::LazyObjectCache;

RT_GLOBAL(0x04b3bdf4, creation_name, const char);

/** The creation kind the cached object is made with. */
constexpr uint32_t creation_kind = 0x4;
/** The first request word the caller sets. */
constexpr uint64_t request_capacity = 0x20;
/** The second request word the caller sets. */
constexpr uint64_t request_limit = 0x1000;
/** The request word that is minus one: no bound. */
constexpr int64_t request_unbounded = -1;
/** The mode word the caller sets. */
constexpr uint64_t request_mode = 0x5;

}  // namespace

/**
 *
 * Returns the cache's held object, and when there is none creates one through the cache's factory,
 * releasing whatever object the create left in the cache, then holds and returns the new object.
 *
 */
extern "C" CachedObject *bb_misc_get_or_create_cached_object(LazyObjectCache *cache)
{
    if (cache->object_0x40 != nullptr) return cache->object_0x40;

    CachedObjectRequest request{};
    request.kind_0x00 = creation_kind;
    request.word_0x08 = request_capacity;
    request.word_0x10 = request_limit;
    request.word_0x20 = request_unbounded;
    request.word_0x30 = request_mode;

    CachedObject *created = cache->factory_0x38->vtable->create(cache->factory_0x38, creation_name.address(),
                                                                &request);
    if (cache->object_0x40 != nullptr) cache->object_0x40->vtable->release(cache->object_0x40);
    cache->object_0x40 = created;
    return created;
}
