// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a two-word slot holding a value and a link to the next item.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * A two-word slot: the value at +0x0 and the link at +0x8.
 *
 */
struct ValueLink {
    uint64_t value;     /**< The value the slot holds. */
    uint64_t link;      /**< The link to the next item, or zero when there is none. */
};
static_assert(offsetof(ValueLink, value) == 0x0);
static_assert(offsetof(ValueLink, link) == 0x8);

}  // namespace misc
