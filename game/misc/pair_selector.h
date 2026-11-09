// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a selector that picks one entry of a pair lookup by index, or none when its index is absent.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/** Index value that marks a selector as absent. */
constexpr int32_t pair_selector_absent = -1;

/**
 *
 * A selector: its index says which entry the lookup resolves, or that none is set.
 *
 */
struct PairSelector {
    uint32_t unknown_0x0000;
    int32_t index_0x0004; /**< Index of the entry, or the absent marker. */
};
static_assert(offsetof(PairSelector, index_0x0004) == 0x4);
static_assert(sizeof(PairSelector) == 0x8);

}  // namespace misc
