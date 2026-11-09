// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the root state that the game keeps a pointer to, and the resource manager it holds.
#pragma once

#include <cstddef>
#include <cstdint>

#include "resource_manager.h"

namespace misc {

/**
 *
 * The root state: the resource manager sits at +0x5ad0.
 *
 */
struct RootState {
    uint8_t unknown_0x0000[0x5ad0];
    ResourceManager *resources_0x5ad0;  /**< Resource manager the requests go to. */
};
static_assert(offsetof(RootState, resources_0x5ad0) == 0x5ad0);

}  // namespace misc
