// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a pool context: a key, a list of keyed nodes, and the source of a provided key.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

struct ListHead;
struct KeySource;

/**
 *
 * The pool context: a key at +0x1c0, the node list head at +0x1c8, and the key source at +0x3b0.
 *
 */
struct PoolContext {
    uint8_t unknown_0x0000[0x1c0];
    uint32_t key_0x1c0;     /**< The index key; only its low 28 bits are used. */
    uint8_t unknown_0x1c4[0x4];
    ListHead *list_0x1c8;   /**< The node list head, or null when there is none. */
    uint8_t unknown_0x1d0[0x1e0];
    KeySource *source_0x3b0; /**< Provides the key that selects the second lookup's tag. */
};
static_assert(offsetof(PoolContext, key_0x1c0) == 0x1c0 && offsetof(PoolContext, list_0x1c8) == 0x1c8);
static_assert(offsetof(PoolContext, source_0x3b0) == 0x3b0);

}  // namespace misc
