// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

#include "../engine/engine.h"
#include "runtime/original.h"

namespace {

/** Owner flag bit that answers true before any global is checked. */
constexpr uint8_t owner_flag_bypass = 0x4;

/** Owner flag bit that answers true after the ready checks. */
constexpr uint8_t owner_flag_skip = 0x1;

/** Answer for a true result. */
constexpr uint8_t answer_true = 1;

/** Head mode bits that enable the first chain walk. */
constexpr uint8_t head_mode_walk_mask = 0x38;

/** Head mask bits that enable the second chain walk. */
constexpr uint16_t head_mask_walk_bits = 0x1c0;

/** Node flag bits that skip a node in both chain walks. */
constexpr uint32_t node_flags_skip_mask = 0x800c0003;

/** Tag kind that answers true in the first chain walk. */
constexpr uint16_t tag_kind_first = 0x8f;

/** Tag kind that answers true in the second chain walk. */
constexpr uint16_t tag_kind_second = 0xeb;

/** Group bit whose value, shifted down one place, is the final answer. */
constexpr uint8_t group_answer_bit = 0x2;

RT_GLOBAL(0x0593e880, ready_registry, void *);
RT_GLOBAL(0x0593e890, bypass_latch, uint8_t);
RT_GLOBAL(0x0593e888, final_latch, uint8_t);
RT_GLOBAL(0x04d35c4a, ready_registry_name, const char);

struct ChainChild;
struct ChainNode;
struct ChainTag;
struct ChainHead;
struct ChainHolder;
struct ChainGroup;

struct ChainChildVtable {
    uint8_t unknown_0x0000[0x1b8];
    uint8_t (*ready)(ChainChild *child);
};
static_assert(offsetof(ChainChildVtable, ready) == 0x1b8);

struct ChainChild {
    const ChainChildVtable *vtable;
    uint8_t unknown_0x0008[0x50];
    ChainHolder *holder;
    uint8_t unknown_0x0060[0x168];
    ChainHead *head;
};
static_assert(offsetof(ChainChild, holder) == 0x58);
static_assert(offsetof(ChainChild, head) == 0x1c8);

struct ChainHead {
    uint8_t unknown_0x0000[0x8];
    ChainNode *first;
    uint8_t unknown_0x0010[0x10];
    uint16_t mask_0x20;
    uint8_t unknown_0x0022[0x1];
    uint8_t mode_0x23;
};
static_assert(offsetof(ChainHead, first) == 0x8);
static_assert(offsetof(ChainHead, mask_0x20) == 0x20);
static_assert(offsetof(ChainHead, mode_0x23) == 0x23);

struct ChainNode {
    uint8_t unknown_0x0000[0x1c];
    uint32_t flags_0x1c;
    uint8_t unknown_0x0020[0x28];
    ChainTag *tag_0x48;
    uint8_t unknown_0x0050[0x8];
    ChainNode *next_0x58;
};
static_assert(offsetof(ChainNode, flags_0x1c) == 0x1c);
static_assert(offsetof(ChainNode, tag_0x48) == 0x48);
static_assert(offsetof(ChainNode, next_0x58) == 0x58);

struct ChainTag {
    uint8_t unknown_0x0000[0x156];
    uint16_t kind_0x156;
};
static_assert(offsetof(ChainTag, kind_0x156) == 0x156);

struct ChainHolder {
    uint8_t unknown_0x0000[0x38];
    ChainGroup *group;
};
static_assert(offsetof(ChainHolder, group) == 0x38);

struct ChainGroup {
    uint8_t unknown_0x0000[0x44];
    uint8_t bits_0x44;
};
static_assert(offsetof(ChainGroup, bits_0x44) == 0x44);

struct ChainOwner {
    uint8_t unknown_0x0000[0x8];
    ChainChild *child;
    uint8_t unknown_0x0010[0x1f0];
    uint8_t flags_0x0200;
};
static_assert(offsetof(ChainOwner, child) == 0x8);
static_assert(offsetof(ChainOwner, flags_0x0200) == 0x200);

}  // namespace

/**
 *
 * Answers whether the owner's child is ready, or whether its chains hold a matching node, and
 * otherwise the group bit of the child's holder.
 *
 * The bypass flag answers true at once. The registry and the bypass latch are checked as in the
 * ready check. The child's ready query decides the first part; a true answer is followed by the
 * final latch. The skip flag then answers true. A head with its mode bits runs the first chain walk,
 * which answers true for a flagless node whose tag has the first kind. The ready query is asked
 * again; a true answer with the head mask bits runs the second walk, which answers true for a
 * flagless node whose tag has the second kind. Otherwise the answer is bit one of the group bits.
 * A missing registry is reported by name, and the checks go on after the report.
 */
extern "C" uint8_t bb_misc_chain_ready_or_group_bit(ChainOwner *owner)
{
    if ((owner->flags_0x0200 & owner_flag_bypass) != 0) return answer_true;

    if (ready_registry.get() == nullptr) engine::report_missing(ready_registry_name.address());
    if (bypass_latch.get() != 0) return answer_true;

    ChainChild *child = owner->child;
    if (child->vtable->ready(child) != 0) {
        if (ready_registry.get() == nullptr) engine::report_missing(ready_registry_name.address());
        if (final_latch.get() != 0) return answer_true;
    }

    if ((owner->flags_0x0200 & owner_flag_skip) != 0) return answer_true;

    ChainHead *head = child->head;
    if ((head->mode_0x23 & head_mode_walk_mask) != 0) {
        for (ChainNode *node = head->first; node != nullptr; node = node->next_0x58) {
            if ((node->flags_0x1c & node_flags_skip_mask) == 0 && node->tag_0x48 != nullptr &&
                node->tag_0x48->kind_0x156 == tag_kind_first) {
                return answer_true;
            }
        }
    }

    if (child->vtable->ready(child) != 0) {
        head = child->head;
        if ((head->mask_0x20 & head_mask_walk_bits) != 0) {
            for (ChainNode *node = head->first; node != nullptr; node = node->next_0x58) {
                if ((node->flags_0x1c & node_flags_skip_mask) != 0) continue;
                if (node->tag_0x48 == nullptr) continue;
                if (node->tag_0x48->kind_0x156 == tag_kind_second) return answer_true;
            }
        }
    }

    ChainGroup *group = child->holder->group;
    return static_cast<uint8_t>((group->bits_0x44 & group_answer_bit) >> 1);
}
