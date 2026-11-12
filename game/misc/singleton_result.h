// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a result pair that holds the shared forwarding singleton and a second word computed beside it.
#pragma once

#include <cstddef>
#include <cstdint>

#include "forwarding_singleton.h"

namespace misc {

/**
 *
 * The pair a routine fills in its caller's record: the shared singleton, then the word computed from the
 * source, both zero when the source is ready.
 *
 */
struct SingletonResult {
    ForwardingSingleton *singleton;  /**< The shared singleton, or null when the source is ready. */
    uint64_t result;                 /**< The word the source's routine returned, or zero. */
};
static_assert(offsetof(SingletonResult, singleton) == 0x0);
static_assert(offsetof(SingletonResult, result) == 0x8);

}  // namespace misc
