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
    int32_t mode_0x0080;         /**< Mode forwarded with each request. */
};
static_assert(offsetof(ResourceManager, mode_0x0080) == 0x80);

}  // namespace misc
