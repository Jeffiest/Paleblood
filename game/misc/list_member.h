// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a member of a list: its vtable, and the source that holds the list it is removed from.
#pragma once

#include <cstddef>
#include <cstdint>

#include "list_source.h"

namespace misc {

/**
 *
 * A list member: its vtable pointer, and the source at +0x18 that gives the list.
 *
 */
struct ListMember {
    const uint8_t *vtable;  /**< Dispatch table of the member, which is the game's member table. */
    uint8_t unknown_0x0008[0x10];
    ListSource *source;     /**< The source the list comes from; released when the member is removed. */
};
static_assert(offsetof(ListMember, source) == 0x18);

}  // namespace misc
