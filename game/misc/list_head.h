// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the head of a list of keyed nodes; its first link is at +0x8.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

struct ListNode;

/**
 *
 * A list head: the link to the first node at +0x8.
 *
 */
struct ListHead {
    uint8_t unknown_0x00[0x8];
    ListNode *first_0x08; /**< The first node, or null when the list is empty. */
};
static_assert(offsetof(ListHead, first_0x08) == 0x8);

}  // namespace misc
