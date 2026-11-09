// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: refreshes a cache's two indices from its pool context: a keyed list search and two lookups, then the key provider's tag lookup.
#include <cstdint>

#include "index_cache.h"
#include "index_entry.h"
#include "key_provider.h"
#include "key_source.h"
#include "list_head.h"
#include "list_node.h"
#include "index_lookup_result.h"
#include "pool_context.h"
#include "runtime/original.h"
#include "tagged_entry.h"

namespace {

using misc::IndexCache;
using misc::IndexEntry;
using misc::KeyProvider;
using misc::KeySource;
using misc::ListNode;
using misc::IndexLookupResult;
using misc::PoolContext;
using misc::TaggedEntry;

RT_ORIGINAL(0x0231e3d0, fn_0231e3d0, void(IndexLookupResult *result, uint32_t id));
RT_ORIGINAL(0x023210e0, fn_023210e0, void(IndexLookupResult *result, uint32_t id));

/** The index mask: only the low 28 bits of an index are used. */
constexpr uint32_t index_mask = 0x0fffffff;

/** The index that means none: all ones. */
constexpr uint32_t index_none = 0xffffffff;

/** The requested id a lookup result holds before any lookup has run. */
constexpr int32_t lookup_unset = -1;

/** A lookup result nothing has written yet: the requested id is unset and no entry is set. */
IndexLookupResult unset_lookup()
{
    IndexLookupResult result{};
    result.requested_0x00 = lookup_unset;
    return result;
}

}  // namespace

/**
 *
 * Refreshes the cache's two indices from its pool context.
 *
 * The first index is the first lookup's entry index, found by the masked key of the context. Its key
 * selects a node of the context's list: when one matches, the second lookup uses the entry's masked
 * second key, otherwise the masked context key. The provider's key then gives the second index, the
 * sign extended tag of its lookup, or minus one when that lookup finds nothing.
 *
 */
extern "C" void bb_misc_refresh_cached_indices(IndexCache *cache)
{
    PoolContext *context = cache->context_0x08;
    const uint32_t masked_key = context->key_0x1c0 & index_mask;

    IndexLookupResult first = unset_lookup();
    fn_0231e3d0(&first, masked_key == index_mask ? index_none : masked_key);

    uint32_t second_key = masked_key;
    auto *entry = static_cast<IndexEntry *>(first.entry_0x08);
    if (entry != nullptr && context != nullptr && context->list_0x1c8 != nullptr) {
        const uint32_t wanted = entry->key_0x68;
        for (ListNode *node = context->list_0x1c8->first_0x08; node != nullptr; node = node->next_0x58) {
            if (node->key_0x40 == wanted) {
                second_key = entry->key_0x64 & index_mask;
                break;
            }
        }
    }
    if (second_key == index_mask) second_key = index_none;

    IndexLookupResult second = unset_lookup();
    fn_0231e3d0(&second, second_key);
    uint32_t index = index_none;
    auto *second_entry = static_cast<IndexEntry *>(second.entry_0x08);
    if (second_entry != nullptr) index = second_entry->index_0x04;
    cache->index_0x10 = index;

    KeySource *source = cache->context_0x08->source_0x3b0;
    KeyProvider *provider = source->provider_0x60;
    const uint32_t provided = provider->vtable->slot_0x20(provider);

    IndexLookupResult tag = unset_lookup();
    fn_023210e0(&tag, provided);
    int32_t tag_index = static_cast<int32_t>(index_none);
    auto *tagged = static_cast<TaggedEntry *>(tag.entry_0x08);
    if (tagged != nullptr) tag_index = static_cast<int32_t>(tagged->tag_0x1c);
    cache->index_0x14 = tag_index;
}
