// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: returns a level bucket of the target plus the byte values of the unflagged nodes of a list.
#include <cstddef>
#include <cstdint>

namespace {

/** Node flag bits that exclude a node from the sum. */
constexpr uint32_t node_flags_skip_mask = 0x800c0003;

/** The level thresholds: the bucket counts how many of them the level reaches. */
constexpr int32_t level_thresholds[] = {10, 12, 14, 16, 19, 23, 28, 34, 41};
/** A level above this limit adds one more to the bucket. */
constexpr int32_t level_top_bucket_limit = 49;

/** A value object whose byte is added into the sum. */
struct SummedChainValue {
    uint8_t unknown_0x0000[0x142];
    uint8_t byte_value;
};
static_assert(offsetof(SummedChainValue, byte_value) == 0x142);

/** A chain node: flags, a value and the next node. */
struct SummedChainNode {
    uint8_t unknown_0x0000[0x1c];
    uint32_t flags;
    uint8_t unknown_0x0020[0x28];
    SummedChainValue *value;
    uint8_t unknown_0x0050[0x8];
    SummedChainNode *next;
};
static_assert(offsetof(SummedChainNode, flags) == 0x1c);
static_assert(offsetof(SummedChainNode, value) == 0x48);
static_assert(offsetof(SummedChainNode, next) == 0x58);

/** A list whose first node is at 0x08. */
struct SummedChainList {
    uint8_t unknown_0x0000[0x8];
    SummedChainNode *first;
};
static_assert(offsetof(SummedChainList, first) == 0x8);

/** The target with a level at 0x48 and a default list at 0x670. */
struct SummedChainTarget {
    uint8_t unknown_0x0000[0x48];
    uint32_t level;
    uint8_t unknown_0x004c[0x624];
    SummedChainList *list;
};
static_assert(offsetof(SummedChainTarget, level) == 0x48);
static_assert(offsetof(SummedChainTarget, list) == 0x670);

/** The parent whose target is at 0x290. */
struct SummedChainParent {
    uint8_t unknown_0x0000[0x290];
    SummedChainTarget *target;
};
static_assert(offsetof(SummedChainParent, target) == 0x290);

/** The owner whose parent is at 0x10. */
struct SummedChainOwner {
    uint8_t unknown_0x0000[0x10];
    SummedChainParent *parent;
};
static_assert(offsetof(SummedChainOwner, parent) == 0x10);

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

}  // namespace

/**
 *
 * Returns the level bucket of the owner's target plus the byte values of the list's unflagged nodes.
 *
 * A missing parent or target gives zero. A null list argument is replaced by the target's list, and
 * when that is also null only the bucket is returned.
 */
extern "C" uint32_t bb_misc_level_bucket_plus_chain_bytes(SummedChainOwner *owner, SummedChainList *list)
{
    SummedChainParent *parent = owner->parent;
    if (parent == nullptr) return 0;
    SummedChainTarget *target = parent->target;
    if (target == nullptr) return 0;
    if (list == nullptr) list = target->list;
    const uint32_t bucket = level_bucket(static_cast<int32_t>(target->level));
    if (list == nullptr) return bucket;

    uint32_t sum = 0;
    for (SummedChainNode *node = list->first; node != nullptr; node = node->next) {
        if ((node->flags & node_flags_skip_mask) != 0 || node->value == nullptr) continue;
        sum += node->value->byte_value;
    }
    return sum + bucket;
}
