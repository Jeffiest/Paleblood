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
    uint32_t kind;          /**< The kind a made member carries: one. */
    uint32_t width;         /**< The width given when the member is made. */
    uint32_t value;         /**< The value word, cleared when the member is made. */
    uint8_t unknown_0x0014[0x04];
    ListSource *source;     /**< The source the list comes from; released when the member is removed. */
};
static_assert(offsetof(ListMember, kind) == 0x08);
static_assert(offsetof(ListMember, width) == 0x0c);
static_assert(offsetof(ListMember, value) == 0x10);
static_assert(offsetof(ListMember, source) == 0x18);

}  // namespace misc
