// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: returns a target's level bucket and chain byte sum, less the weights that lookups find for twelve owner entries.
#include <cstddef>
#include <cstdint>

#include "index_lookup_result.h"
#include "nonnegative_entry_record.h"
#include "runtime/original.h"

namespace {

using misc::IndexLookupResult;

RT_ORIGINAL(0x023210e0, fn_023210e0, void(IndexLookupResult *result, uint32_t id));

/** The requested id a lookup result holds before its lookup runs. */
constexpr int32_t lookup_unset = -1;

/** Node flag bits that exclude a node from the chain sum. */
constexpr uint32_t node_flags_skip_mask = 0x800c0003;

/** The level thresholds: the bucket counts how many of them the level reaches. */
constexpr int32_t level_thresholds[] = {10, 12, 14, 16, 19, 23, 28, 34, 41};
/** A level above this limit adds one more to the bucket. */
constexpr int32_t level_top_bucket_limit = 49;

/** A lookup's entry: its weight byte is added into the total. */
struct LookupMatch {
    uint8_t unknown_0x0000[0x1d];
    uint8_t weight;
};
static_assert(offsetof(LookupMatch, weight) == 0x1d);

/** A value object whose byte is added into the chain sum. */
struct ChainValue {
    uint8_t unknown_0x0000[0x142];
    uint8_t byte_value;
};
static_assert(offsetof(ChainValue, byte_value) == 0x142);

/** A chain node: flags, a value and the next node. */
struct ChainNode {
    uint8_t unknown_0x0000[0x1c];
    uint32_t flags;
    uint8_t unknown_0x0020[0x28];
    ChainValue *value;
    uint8_t unknown_0x0050[0x8];
    ChainNode *next;
};
static_assert(offsetof(ChainNode, flags) == 0x1c);
static_assert(offsetof(ChainNode, value) == 0x48);
static_assert(offsetof(ChainNode, next) == 0x58);

/** A list whose first node is at 0x08. */
struct ChainList {
    uint8_t unknown_0x0000[0x8];
    ChainNode *first;
};
static_assert(offsetof(ChainList, first) == 0x8);

/** The target with a level at 0x48 and a default list at 0x670. */
struct ChainTarget {
    uint8_t unknown_0x0000[0x48];
    uint32_t level;
    uint8_t unknown_0x004c[0x624];
    ChainList *list;
};
static_assert(offsetof(ChainTarget, level) == 0x48);
static_assert(offsetof(ChainTarget, list) == 0x670);

/** The parent whose target is at 0x290. */
struct ChainParent {
    uint8_t unknown_0x0000[0x290];
    ChainTarget *target;
};
static_assert(offsetof(ChainParent, target) == 0x290);

/** The owner: its parent at 0x10 and its twelve entries from 0x18. */
struct LookupOwner {
    uint8_t unknown_0x0000[0x10];
    ChainParent *parent;
    SignedEntry entries[signed_entry_count];
};
static_assert(offsetof(LookupOwner, parent) == 0x10);
static_assert(offsetof(LookupOwner, entries) == 0x18);

/** Counts the thresholds the level reaches, plus one above the top limit. */
uint32_t level_bucket(int32_t level)
{
    uint32_t bucket = 0;
    for (int32_t threshold : level_thresholds) {
        if (level < threshold) return bucket;
        ++bucket;
    }
    return level > level_top_bucket_limit ? bucket + 1 : bucket;
}

/** Sums the weights that a lookup finds for each of the owner's entries. */
uint32_t lookup_weight_sum(const LookupOwner *owner)
{
    uint32_t sum = 0;
    for (const SignedEntry &entry : owner->entries) {
        IndexLookupResult result;
        result.requested_0x00 = lookup_unset;
        result.entry_0x08 = nullptr;
        fn_023210e0(&result, static_cast<uint32_t>(entry.value));
        const LookupMatch *match = static_cast<const LookupMatch *>(result.entry_0x08);
        if (match != nullptr) sum += match->weight;
    }
    return sum;
}

/** The level bucket of the target plus the chain's byte sum, using the target's list when none is given. */
uint32_t level_bucket_plus_chain_bytes(const ChainTarget *target, ChainList *list)
{
    if (list == nullptr) list = target->list;
    const uint32_t bucket = level_bucket(static_cast<int32_t>(target->level));
    if (list == nullptr) return bucket;

    uint32_t sum = 0;
    for (ChainNode *node = list->first; node != nullptr; node = node->next) {
        if ((node->flags & node_flags_skip_mask) != 0 || node->value == nullptr) continue;
        sum += node->value->byte_value;
    }
    return sum + bucket;
}

}  // namespace

/**
 *
 * Returns the level bucket and chain byte sum of the owner's target, less the weights the owner's entries look up.
 *
 * The lookups run first, for every entry, whatever the parent and target are. A missing parent or target
 * contributes nothing to the total. The result wraps in 32 bits, as the original's arithmetic does.
 */
extern "C" uint32_t bb_misc_level_chain_minus_lookups(LookupOwner *owner, ChainList *list)
{
    const uint32_t lookup_sum = lookup_weight_sum(owner);
    uint32_t total = 0;
    ChainParent *parent = owner->parent;
    const ChainTarget *target = parent != nullptr ? parent->target : nullptr;
    if (target != nullptr) total = level_bucket_plus_chain_bytes(target, list);
    return total - lookup_sum;
}
