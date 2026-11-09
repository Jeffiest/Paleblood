// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: copies three 16-byte default blocks from the executable's data into three globals.
//
// misc_copy_default_blocks (0x0139bd70) copies the blocks at 0x04cb8e50, 0x04cb8e60 and 0x04cb8e70 into the
// globals at 0x058b33c0, 0x058b33d0 and 0x058b33e0, one after another. It takes no arguments and returns
// nothing.
#include <cstddef>
#include <cstdint>
#include <cstring>

#include "runtime/original.h"

namespace {

// Bytes in one default block.
constexpr std::size_t default_block_bytes = 16;

RT_GLOBAL(0x04cb8e50, default_block_source_first, uint8_t[default_block_bytes]);
RT_GLOBAL(0x04cb8e60, default_block_source_second, uint8_t[default_block_bytes]);
RT_GLOBAL(0x04cb8e70, default_block_source_third, uint8_t[default_block_bytes]);
RT_GLOBAL(0x058b33c0, default_block_first, uint8_t[default_block_bytes]);
RT_GLOBAL(0x058b33d0, default_block_second, uint8_t[default_block_bytes]);
RT_GLOBAL(0x058b33e0, default_block_third, uint8_t[default_block_bytes]);

}  // namespace

/**
 *
 * Copies the three default blocks into their globals, in order.
 *
 * Each block is copied whole, with no test of the destination.
 */
extern "C" void bb_misc_copy_default_blocks()
{
    std::memcpy(default_block_first.address(), default_block_source_first.address(), default_block_bytes);
    std::memcpy(default_block_second.address(), default_block_source_second.address(), default_block_bytes);
    std::memcpy(default_block_third.address(), default_block_source_third.address(), default_block_bytes);
}
