// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the resource manager that the root state points at, and the mode it forwards.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * The resource manager: its mode is forwarded with each request.
 *
 */
struct ResourceManager {
    uint8_t unknown_0x0000[0x80];
    int32_t mode_0x0080;         /**< Mode forwarded with each request; -1 means none. */
    uint8_t unknown_0x0084[0x134];
    uint8_t unknown_0x01b8[0x8]; /**< Sub-object whose address the prepare call receives. */
};
static_assert(offsetof(ResourceManager, mode_0x0080) == 0x80 && offsetof(ResourceManager, unknown_0x01b8) == 0x1b8);

}  // namespace misc
