// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * The description of a table object: its kind and a level.
 *
 */
struct TableInfo {
    uint8_t unknown_0x00[0xc];
    int32_t kind;     /**< Kind of the object. */
    uint16_t level;   /**< Level of the object. */
};
static_assert(offsetof(TableInfo, kind) == 0xc);
static_assert(offsetof(TableInfo, level) == 0x10);

}  // namespace misc
