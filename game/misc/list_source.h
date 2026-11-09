// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the object a list member takes its list from, which holds the list owner.
#pragma once

#include <cstddef>
#include <cstdint>

#include "list_owner.h"

namespace misc {

/**
 *
 * The source of a list member: the list owner it refers to at +0x68.
 *
 */
struct ListSource {
    uint8_t unknown_0x0000[0x68];
    ListOwner *list; /**< The list owner the member is removed from. */
};
static_assert(offsetof(ListSource, list) == 0x68);

}  // namespace misc
