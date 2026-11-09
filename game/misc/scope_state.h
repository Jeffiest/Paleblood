// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the state of a scope, with its child, its root node and the two counters it clamps.
#pragma once

#include <cstddef>
#include <cstdint>

#include "scope_child.h"

namespace misc {

/** The largest value the scope lets its first counter keep. */
constexpr uint32_t scope_counter_cap = 11;

/** The smallest value the scope lets its second counter keep. */
constexpr uint32_t scope_counter_floor = 12;

/**
 *
 * The scope's state: its child at +0x08, the root node it attached at +0x9c0, and the two counters
 * clamped on each attach.
 *
 */
struct ScopeState {
    uint8_t unknown_0x0000[0x08];
    ScopeChild *child_0x08;     /**< Child the scope works through. */
    uint8_t unknown_0x0010[0x9b0];
    FlagNode *root_0x9c0;       /**< Root node attached to the scope. */
    uint8_t unknown_0x09c8[0x10];
    uint32_t counter_0x9d8;     /**< First counter, clamped to at most the cap. */
    uint32_t counter_0x9dc;     /**< Second counter, raised to at least the floor. */
};
static_assert(offsetof(ScopeState, child_0x08) == 0x08);
static_assert(offsetof(ScopeState, root_0x9c0) == 0x9c0);
static_assert(offsetof(ScopeState, counter_0x9d8) == 0x9d8);
static_assert(offsetof(ScopeState, counter_0x9dc) == 0x9dc);

}  // namespace misc
