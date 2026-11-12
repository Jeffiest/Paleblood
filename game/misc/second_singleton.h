// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the second shared singleton (kept at its own fixed globals) and the pair a routine fills with it.
#pragma once

#include <cstddef>
#include <cstdint>

#include "runtime/original.h"

namespace misc {

/**
 *
 * The second singleton object: its vtable, then two words that its builder clears.
 *
 */
struct SecondSingleton {
    const void *vtable;                       /**< The object's vtable, stored as is. */
    uint8_t unknown_0x08[0x38];               /**< Not read by the routine that fills the pair. */
    uint64_t value_0x40;                      /**< Set to zero when the singleton is built. */
    uint64_t value_0x48;                      /**< Set to zero when the singleton is built. */
};
static_assert(offsetof(SecondSingleton, value_0x40) == 0x40);
static_assert(offsetof(SecondSingleton, value_0x48) == 0x48);
static_assert(sizeof(SecondSingleton) == 0x50);

/**
 *
 * The pair a routine fills in its caller's record: the second singleton, then the word computed from the source.
 *
 */
struct SecondSingletonResult {
    SecondSingleton *singleton;      /**< The second singleton, or null when the source is ready. */
    uint64_t result;                 /**< The word the source's routine returned, or zero. */
};
static_assert(offsetof(SecondSingletonResult, singleton) == 0x0);
static_assert(offsetof(SecondSingletonResult, result) == 0x8);

}  // namespace misc
