// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the state a node build copies its source into, the builder slot it fills, and the node the
// state points at.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/** The size of the node's inner object, from its offset 0x10 up to its link at 0x38. */
constexpr size_t node_inner_size = 0x28;
/** The size of the link inside the node that is only addressed, not read, by the build. */
constexpr size_t node_link_size = 0x8;

/**
 *
 * The source a node build reads: a word, a 16-byte block, and the words the builder is given.
 *
 */
struct NodeBuildSource {
    uint64_t word_0x00;                 /**< Copied into the state. */
    uint8_t unknown_0x0008[0x8];
    uint64_t low_0x10;                  /**< Low word of the 16-byte block copied into the state. */
    uint64_t high_0x18;                 /**< High word of the 16-byte block copied into the state. */
    uint64_t word_0x20;                 /**< Copied into the state. */
    uint32_t dword_0x28;                /**< Copied into the state. */
    uint8_t unknown_0x002c[0x4];
    uint32_t dword_0x30;                /**< Passed to the builder as its third argument. */
    uint8_t unknown_0x0034[0x4];
    uint64_t word_0x38;                 /**< Passed to the builder as its fifth argument. */
    uint64_t word_0x40;                 /**< Passed to the builder as its fourth argument. */
    uint16_t half_0x48;                 /**< Passed to the builder as its second argument. */
    uint8_t unknown_0x004a[0x2];
    uint32_t dword_0x4c;                /**< Passed to the builder as its sixth argument. */
};
static_assert(offsetof(NodeBuildSource, low_0x10) == 0x10);
static_assert(offsetof(NodeBuildSource, word_0x20) == 0x20);
static_assert(offsetof(NodeBuildSource, dword_0x30) == 0x30);
static_assert(offsetof(NodeBuildSource, word_0x38) == 0x38);
static_assert(offsetof(NodeBuildSource, half_0x48) == 0x48);
static_assert(offsetof(NodeBuildSource, dword_0x4c) == 0x4c);

/**
 *
 * The builder slot the build fills in place: its fields are written by the builder.
 *
 */
struct NodeBuildSlot {
    uint8_t unknown_0x0000[0x64];
};

/**
 *
 * The node the state points at: an inner object at +0x10 and a link at +0x38.
 *
 */
struct NodeBuildNode {
    uint8_t unknown_0x0000[0x10];
    uint8_t inner_0x0010[node_inner_size]; /**< The inner object, passed to the node calls. */
    uint8_t link_0x0038[node_link_size];   /**< The link, passed to the link call. */
};
static_assert(offsetof(NodeBuildNode, inner_0x0010) == 0x10);
static_assert(offsetof(NodeBuildNode, link_0x0038) == 0x38);

/**
 *
 * The state a node build works on: the copied source, the builder slot, the count and the node.
 *
 */
struct NodeBuildState {
    uint8_t unknown_0x0000[0x50];
    uint64_t word_0x50;                 /**< Copied from the source's first word. */
    uint8_t unknown_0x0058[0x8];
    uint64_t low_0x60;                  /**< Low word of the copied 16-byte block. */
    uint64_t high_0x68;                 /**< High word of the copied 16-byte block. */
    uint64_t word_0x70;                 /**< Copied from the source's word at 0x20. */
    uint32_t dword_0x78;                /**< Copied from the source's dword at 0x28. */
    uint8_t unknown_0x007c[0x4];
    NodeBuildSlot slot_0x0080;          /**< The builder slot, filled in place by the builder. */
    int32_t flag_0x00e4;                /**< Set to one when the build finishes on the node path. */
    uint32_t count_0x00e8;              /**< The count the build keeps. */
    uint8_t unknown_0x00ec[0xc];
    NodeBuildNode *node_0x00f8;         /**< The node the state points at, or null. */
};
static_assert(offsetof(NodeBuildState, word_0x50) == 0x50);
static_assert(offsetof(NodeBuildState, low_0x60) == 0x60);
static_assert(offsetof(NodeBuildState, word_0x70) == 0x70);
static_assert(offsetof(NodeBuildState, dword_0x78) == 0x78);
static_assert(offsetof(NodeBuildState, slot_0x0080) == 0x80);
static_assert(offsetof(NodeBuildState, flag_0x00e4) == 0xe4);
static_assert(offsetof(NodeBuildState, count_0x00e8) == 0xe8);
static_assert(offsetof(NodeBuildState, node_0x00f8) == 0xf8);

}  // namespace misc
