// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: appends a node to one of two value vectors of an owner, choosing the second when the node's list holds a matching entry.
#include <cstddef>
#include <cstdint>

#include "runtime/original.h"
#include "value_owner.h"

namespace {

/** A link of the node's list. Only its address is passed on. */
struct WalkLink;

/** A list entry: a flag byte at +0x04 that selects it, and a payload pointer at +0x58 whose kind code is tested. */
struct WalkEntry {
    uint8_t unknown_0x00[0x04];
    uint8_t selector_0x04;        /**< Selects the entry when any of selector_mask bits is set. */
    uint8_t unknown_0x05[0x53];
    void *payload_0x58;           /**< The payload whose kind code is read; null entries are skipped. */
};
static_assert(offsetof(WalkEntry, selector_0x04) == 0x04);
static_assert(offsetof(WalkEntry, payload_0x58) == 0x58);

/** The owner: the two vectors the node is appended to, the second one at +0x38. */
struct NodeSink {
    uint8_t unknown_0x00[0x10];
    misc::ValueVector vector_0x10;    /**< Receives the node when no entry of the list matches. */
    uint8_t unknown_0x30[0x08];
    misc::ValueVector vector_0x38;    /**< Receives the node when a matching entry is found. */
};
static_assert(offsetof(NodeSink, vector_0x10) == 0x10);
static_assert(offsetof(NodeSink, vector_0x38) == 0x38);

/** The node that is appended: its list of links at +0x78. */
struct WalkNode {
    uint8_t unknown_0x00[0x78];
    WalkLink *first_link_0x78;    /**< The first link of the list, or null when it is empty. */
};
static_assert(offsetof(WalkNode, first_link_0x78) == 0x78);

/** The selector bits that make an entry count, and the kind codes that match. */
constexpr uint8_t selector_mask = 0x5;
constexpr int32_t matching_kind_small = 0x3;
constexpr int32_t matching_kind_mid = 0x3d;
constexpr int32_t matching_kind_large = 0x6c;

RT_GLOBAL(0x0553b318, walk_enabled, const uint8_t);
RT_ORIGINAL(0x02c4f0e0, next_link, WalkLink *(WalkLink *link));
RT_ORIGINAL(0x02c4f340, link_entry, WalkEntry *(WalkLink *link));
RT_ORIGINAL(0x02c69560, payload_kind, int32_t *(void *payload));
RT_ORIGINAL(0x027071a0, push_value_by_reference, void(misc::ValueVector *vector, const uint64_t *value));

/** Whether the entry is one that the walk tests: it is selected, and its payload has a matching kind. */
bool entry_matches(WalkEntry *entry)
{
    if (entry == nullptr || (entry->selector_0x04 & selector_mask) == 0 || entry->payload_0x58 == nullptr) {
        return false;
    }
    const int32_t *kind = payload_kind(entry->payload_0x58);
    if (kind == nullptr) return false;
    return *kind == matching_kind_small || *kind == matching_kind_mid || *kind == matching_kind_large;
}

/** Whether any entry of the node's list matches, when the walk is enabled. */
bool list_has_matching_entry(WalkNode *node)
{
    for (WalkLink *link = node->first_link_0x78; link != nullptr; link = next_link(link)) {
        if (entry_matches(link_entry(link))) return true;
    }
    return false;
}

}  // namespace

/**
 *
 * Appends the node to the owner's second vector when its list has a matching entry and the walk is enabled,
 * and to the first vector otherwise.
 *
 * The node's address is appended as a value taken by reference, so the append copies it from a local.
 * The original leaves the stack guard in RAX, so the function returns nothing.
 *
 */
extern "C" void bb_misc_push_walk_node(NodeSink *sink, WalkNode *node)
{
    const bool matched = walk_enabled.get() != 0 && list_has_matching_entry(node);
    misc::ValueVector *vector = matched ? &sink->vector_0x38 : &sink->vector_0x10;
    const uint64_t node_value = reinterpret_cast<uint64_t>(node);
    push_value_by_reference(vector, &node_value);
}
