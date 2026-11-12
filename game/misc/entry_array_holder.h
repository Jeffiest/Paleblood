// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: an object holding the storage of two arrays of 1200-byte entries, located by an entry index.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/** Distance in bytes between two consecutive entries of an entry array. */
constexpr uint64_t entry_array_stride = 0x4b0;

/**
 *
 * An object holding the storage of two arrays of entries: the first array at offset 0x10, the second at 0x18.
 *
 */
struct EntryArrayHolder {
    uint8_t unknown_0x0000[0x10];
    uint8_t *first_entries;       /**< Storage of the first array of entries. */
    uint8_t *second_entries;      /**< Storage of the second array of entries. */
};
static_assert(offsetof(EntryArrayHolder, first_entries) == 0x10 && offsetof(EntryArrayHolder, second_entries) == 0x18);

/**
 *
 * Returns the address of the entry at an index of an array of entries: the index is taken as 32 bits and scaled by the
 * entry stride from the start of the storage.
 *
 */
inline uint8_t *entry_array_element(uint8_t *entries, uint32_t index)
{
    return reinterpret_cast<uint8_t *>(reinterpret_cast<uintptr_t>(entries) +
                                       static_cast<uint64_t>(index) * entry_array_stride);
}

}  // namespace misc
