// SPDX-License-Identifier: GPL-2.0-or-later
// A handle is the address of a 0x38-byte record inside a 4 KiB page. The page holds a pointer to a
// table, and the table's slot for the record's number points at a HandleEntry. Used by 0x00400e40,
// 0x00400f20 and 0x00401020.
#pragma once

#include <cstddef>
#include <cstdint>
#include <cstring>

namespace engine::handle {

/**
 *
 * Size of the page a handle points into; clearing the handle's low bits gives the page address.
 *
 */
constexpr uint64_t page_size = 0x1000;

/**
 *
 * Mask that keeps the page part of a handle.
 *
 */
constexpr uint64_t page_mask = ~(page_size - 1);

/**
 *
 * Offset in the page of the pointer to the entry table.
 *
 */
constexpr uintptr_t page_table_offset = 0x20;

/**
 *
 * Offset in the page of the first record, which is where record number zero starts.
 *
 */
constexpr uintptr_t first_record_offset = 0x38;

/**
 *
 * Shift applied to the byte distance from the first record before dividing by the record size.
 *
 */
constexpr uint32_t record_shift = 3;

/**
 *
 * Multiplicative inverse of seven modulo 2^32, which divides a shifted distance by the record size.
 *
 * Records are 0x38 bytes, so the shifted distance divided by seven is the record number. The original
 * code multiplies by -0x49249249, which is the same value.
 *
 */
constexpr uint32_t record_divisor_inverse = 0xb6db6db7;

/**
 *
 * Offset in the entry table of the first slot.
 *
 */
constexpr uintptr_t table_slots_offset = 0x28;

/**
 *
 * Size of one table slot, a pointer to a HandleEntry.
 *
 */
constexpr uintptr_t table_slot_size = sizeof(uintptr_t);

/**
 *
 * An entry that a handle's table slot points at.
 *
 */
struct HandleEntry {
    uint8_t unknown_0x0000[0x0b];
    uint8_t flags; /**< Flag bits; a caller tests only the bits it knows. */
    uint8_t unknown_0x000c[0x04];
    uint8_t payload[1]; /**< First byte of the payload, which callers receive by address. */
};
static_assert(offsetof(HandleEntry, flags) == 0x0b);
static_assert(offsetof(HandleEntry, payload) == 0x10);

/**
 *
 * Returns the entry that a non-zero handle names.
 *
 * The handle is not checked: the caller passes a non-zero handle whose record is in use.
 *
 */
inline HandleEntry *resolve(uint64_t handle_value)
{
    const auto page = static_cast<uintptr_t>(handle_value & page_mask);
    uintptr_t table;
    std::memcpy(&table, reinterpret_cast<const uint8_t *>(page) + page_table_offset, sizeof(table));
    const uint32_t record_number = static_cast<uint32_t>((handle_value - (page + first_record_offset)) >> record_shift)
                                   * record_divisor_inverse;
    HandleEntry *entry;
    std::memcpy(&entry, reinterpret_cast<const uint8_t *>(table) + table_slots_offset
                            + static_cast<uintptr_t>(record_number) * table_slot_size,
                sizeof(entry));
    return entry;
}

}  // namespace engine::handle
