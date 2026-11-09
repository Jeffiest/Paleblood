// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

struct TableInfo;

/**
 *
 * An object an entry lists, with the info that describes it.
 *
 */
struct TableObject {
    uint8_t unknown_0x00[0x88];
    TableInfo *info; /**< The object's info. */
};
static_assert(offsetof(TableObject, info) == 0x88);

}  // namespace misc
