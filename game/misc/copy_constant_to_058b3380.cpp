// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: copy a 48-byte constant block from the read-only image into the global at 0x058b3380.
#include <cstdint>

#include "runtime/original.h"

namespace {

constexpr int lane_bytes = 16;
constexpr int lane_count = 3;

/** Three 16-byte lanes copied together as one block. */
struct ConstantBlock {
    uint8_t lanes[lane_count * lane_bytes];
};

RT_GLOBAL(0x04cb8db0, constant_block, const ConstantBlock);
RT_GLOBAL(0x058b3380, destination_block, ConstantBlock);

}  // namespace

/**
 *
 * Copies the constant block from the read-only image into the writable global block.
 *
 * All three lanes are copied, and no input register is read.
 */
extern "C" void bb_misc_copy_constant_to_058b3380()
{
    destination_block.get() = constant_block.get();
}
