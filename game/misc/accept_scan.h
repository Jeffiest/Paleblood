// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the scan record an accept walk passes to the accept routine, initialised before the walk and finished after it.
#pragma once

#include <cstdint>

namespace misc {

/**
 *
 * The scan record: a block of bytes the accept routine reads while a walk asks each item in turn.
 *
 * Its layout is not known; only its address is passed around, so it is kept as raw bytes.
 *
 */
struct AcceptScan {
    uint8_t unknown_0x0000[0x20];
};

}  // namespace misc
