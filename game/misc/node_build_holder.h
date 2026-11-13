// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the holder of a node build, which reaches its build state through a context and clears two locked words.
#pragma once

#include <cstddef>
#include <cstdint>

#include "node_build_state.h"

namespace misc {

/** The room each of the holder's two locks takes. */
constexpr size_t holder_lock_size = 0x8;

/** The mask that selects the mode bits of the holder's mode word. */
constexpr uint32_t holder_mode_mask = 0xe;

/** The mode value below which the holder's flag is set. */
constexpr uint32_t holder_mode_limit = 0x2;

/**
 *
 * The context a holder reaches its build state through: the state sits at +0x40.
 *
 */
struct NodeBuildContext {
    uint8_t unknown_0x0000[0x40];
    NodeBuildState *state;      /**< The build state the context points at. */
};
static_assert(offsetof(NodeBuildContext, state) == 0x40);

/**
 *
 * The holder of a node build: its context, two locked words, the mode word and the flag set for small modes.
 *
 */
struct NodeBuildHolder {
    uint8_t unknown_0x0000[0x18];
    NodeBuildContext *context;  /**< The context this holder reaches its build state through. */
    uint64_t value;             /**< Cleared under the second lock. */
    uint8_t unknown_0x0028[0x20];
    uint8_t first_lock[holder_lock_size];   /**< The first lock; its address is given to the lock calls. */
    bool ready;                 /**< Set to true by the sink release path. */
    uint8_t unknown_0x0051[0x7];
    uint64_t word;              /**< Cleared under the first lock. */
    uint8_t unknown_0x0060[0x18];
    uint8_t second_lock[holder_lock_size];  /**< The second lock; its address is given to the lock calls. */
    uint8_t unknown_0x0080[0x20];
    uint32_t mode;              /**< The mode word, whose masked bits select the flag. */
    uint8_t unknown_0x00a4[0x4];
    NodeBuildNode *node;        /**< The node the holder finishes, or null. */
    uint8_t unknown_0x00b0[0x8];
    bool flag;                  /**< Set when the masked mode is below the limit. */
};
static_assert(offsetof(NodeBuildHolder, context) == 0x18);
static_assert(offsetof(NodeBuildHolder, value) == 0x20);
static_assert(offsetof(NodeBuildHolder, first_lock) == 0x48);
static_assert(offsetof(NodeBuildHolder, ready) == 0x50);
static_assert(offsetof(NodeBuildHolder, word) == 0x58);
static_assert(offsetof(NodeBuildHolder, second_lock) == 0x78);
static_assert(offsetof(NodeBuildHolder, mode) == 0xa0);
static_assert(offsetof(NodeBuildHolder, node) == 0xa8);
static_assert(offsetof(NodeBuildHolder, flag) == 0xb8);

}  // namespace misc
