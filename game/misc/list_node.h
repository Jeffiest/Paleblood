// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a node of a keyed list: its key at +0x40 and the next node at +0x58.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

struct ListNode;

/**
 *
 * A keyed list node: its key at +0x40 and the following node at +0x58.
 *
 */
struct ListNode {
    uint8_t unknown_0x00[0x40];
    uint32_t key_0x40;        /**< Compared with the wanted key when searching the list. */
    uint8_t unknown_0x44[0x14];
    ListNode *next_0x58;      /**< The following node, or null at the end of the list. */
};
static_assert(offsetof(ListNode, key_0x40) == 0x40 && offsetof(ListNode, next_0x58) == 0x58);

}  // namespace misc
