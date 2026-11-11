// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a holder that is active or not, and the owner its shared instance is allocated for.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * The holder: an active word at offset 0x00 and the owner at offset 0x08.
 *
 */
struct OwnedHolder {
    uint32_t active_0x00;         /**< Nonzero when the holder is active. */
    uint8_t unknown_0x04[0x04];
    void *owner_0x08;             /**< Owner that the shared instance is allocated for. */
};
static_assert(offsetof(OwnedHolder, active_0x00) == 0x00);
static_assert(offsetof(OwnedHolder, owner_0x08) == 0x08);

}  // namespace misc
