// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the source objects that point at a text node, whose tagged word names the text that is assigned to a target.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * A node that carries a tagged word at +0x48: its low two bits are tags and the rest addresses a text record.
 *
 */
struct TextNode {
    uint8_t unknown_0x0000[0x48];
    uint64_t tagged_0x48;        /**< The tagged address of the text record. */
};
static_assert(offsetof(TextNode, tagged_0x48) == 0x48);

/**
 *
 * A source whose text node is held at +0x40.
 *
 */
struct TextSourceAt40 {
    uint8_t unknown_0x0000[0x40];
    TextNode *node_0x40;         /**< The text node of the source. */
};
static_assert(offsetof(TextSourceAt40, node_0x40) == 0x40);

/**
 *
 * A source whose text node is held at +0x20.
 *
 */
struct TextSourceAt20 {
    uint8_t unknown_0x0000[0x20];
    TextNode *node_0x20;        /**< The text node of the source. */
};
static_assert(offsetof(TextSourceAt20, node_0x20) == 0x20);

}  // namespace misc
