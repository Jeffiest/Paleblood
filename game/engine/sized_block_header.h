// SPDX-License-Identifier: GPL-2.0-or-later
// The header at the start of a block that carries a flag byte and a 16-bit count before its payload.
#pragma once

#include <cstddef>
#include <cstdint>

namespace engine {

/**
 *
 * The header of a sized block: the flag and the payload's byte count, followed by the payload.
 *
 */
struct SizedBlockHeader {
    uint8_t unknown_0x00;
    uint8_t flag_0x01;   /**< Set from the caller's flag. */
    uint16_t count_0x02; /**< Set from the caller's count; the payload holds this many bytes. */
};
static_assert(offsetof(SizedBlockHeader, flag_0x01) == 0x01);
static_assert(offsetof(SizedBlockHeader, count_0x02) == 0x02);
static_assert(sizeof(SizedBlockHeader) == 0x04);

}  // namespace engine
