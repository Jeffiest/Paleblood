// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: returns the address of an entry in the 0x38-byte table that starts at 0x1f88 of its object.
#include <cstddef>
#include <cstdint>

namespace {

/** Bytes that one table entry takes. */
constexpr uint64_t table_entry_size = 0x38;

/** Offset of the table within the object. */
constexpr uint64_t table_offset = 0x1f88;

}  // namespace

/**
 *
 * Returns the address of the entry at the index in the object's table. The index is a signed 32-bit value,
 * sign-extended before it scales the entry offset.
 *
 */
extern "C" uint64_t bb_misc_entry_address_1f88(uint8_t *object, int32_t index)
{
    const int64_t signed_index = index;
    return reinterpret_cast<uintptr_t>(object) + table_offset + static_cast<uint64_t>(signed_index) * table_entry_size;
}
