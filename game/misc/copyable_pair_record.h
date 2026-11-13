// SPDX-License-Identifier: GPL-2.0-or-later
// A record whose middle block and trailing word are copied from one record to another.
#pragma once

#include <cstddef>
#include <cstdint>

/** The byte count of the block copied from the record's 0x10 field. */
constexpr size_t copyable_block_size = 0x68;

/** A record with a copied block at 0x10 and a copied word at 0x78. */
struct CopyablePairRecord {
    uint8_t unknown_0x0000[0x10];
    uint8_t copied_block[copyable_block_size]; /**< Copied from the source record. */
    uint32_t copied_word;                      /**< Copied from the source record. */
};
static_assert(offsetof(CopyablePairRecord, copied_block) == 0x10);
static_assert(offsetof(CopyablePairRecord, copied_word) == 0x78);
