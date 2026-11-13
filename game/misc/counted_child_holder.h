// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a holder with a vtable and one counted child, which it releases when it is torn down.
#pragma once

#include <cstddef>
#include <cstdint>

#include "counted_child.h"

namespace misc {

/**
 *
 * The holder: its vtable address point is stored at the start, and its child pointer sits at +0x8.
 *
 */
struct CountedChildHolder {
    const void *vtable;            /**< The holder's vtable address point. */
    CountedChild *child;           /**< The counted child, or null once it is released. */
};
static_assert(offsetof(CountedChildHolder, child) == 0x8);

}  // namespace misc
