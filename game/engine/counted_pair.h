// SPDX-License-Identifier: GPL-2.0-or-later
// Counted objects, an owner embedding one, and a pair of slots that refer to counted objects
// (engine_counted_pair_retarget, 0x004090b0).
#pragma once

#include <cstddef>
#include <cstdint>

#include "runtime/original.h"

namespace engine {

/**
 *
 * A counted object whose use count is at 0x18; the other bytes are not known.
 *
 */
struct RefCounted {
    uint8_t unknown_0x0000[0x18];
    uint32_t use_count; /**< Holders of the object; the one that drops the last use releases it. */
};
static_assert(offsetof(RefCounted, use_count) == 0x18);

/**
 *
 * Releases a counted object whose use count has dropped to zero (0x004f0410).
 *
 */
RT_ORIGINAL(0x004f0410, counted_release, void(RefCounted *));

/**
 *
 * An owner that embeds a counted object at 0x48.
 *
 */
struct CountedOwner {
    uint8_t unknown_0x0000[0x48];
    RefCounted embedded; /**< Counted object that the pair slots can refer to. */
};
static_assert(offsetof(CountedOwner, embedded) == 0x48);

/**
 *
 * Two slots, each holding a reference to a counted object.
 *
 */
struct CountedPair {
    uint8_t unknown_0x0000[0x10];
    RefCounted *first;  /**< Object held by the first slot. */
    RefCounted *second; /**< Object held by the second slot. */
};
static_assert(offsetof(CountedPair, first) == 0x10);
static_assert(offsetof(CountedPair, second) == 0x18);

}  // namespace engine
