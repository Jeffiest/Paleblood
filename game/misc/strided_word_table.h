// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * One 16-byte entry of a strided word table, holding its 32-bit word at the start.
 *
 */
struct StridedWordEntry {
    uint32_t word;                /**< The 32-bit word the entry holds. */
    uint8_t unknown_0x0004[12];   /**< Rest of the entry, not read by the table readers. */
};
static_assert(sizeof(StridedWordEntry) == 16, "strided word entries are 16 bytes");

/**
 *
 * A strided word table whose entries begin at offset 0x1c and repeat every 16 bytes.
 *
 * The declared entries array holds only the first entry; the table is longer and later entries are reached by index.
 *
 */
struct StridedWordTable {
    uint8_t unknown_0x0000[0x1c];   /**< Header before the first entry. */
    StridedWordEntry entries[1];    /**< First entry; further entries follow at 16-byte steps. */
};
static_assert(offsetof(StridedWordTable, entries) == 0x1c, "entries begin at offset 0x1c");

}  // namespace misc
