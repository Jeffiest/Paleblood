// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: copies the word of one entry of a strided word table into a caller's word and returns that word's address.
#include <cstdint>

#include "strided_word_table.h"

/**
 *
 * Copies the 32-bit word of the entry at index into destination and returns destination.
 *
 * Only the low 32 bits of index are used, zero-extended, so the entry is found by a 32-bit index. The entry is read
 * from the table's entries, which repeat every 16 bytes from offset 0x1c; the table keeps no count, so index must
 * lie inside the table. Returns the destination address in RAX, which callers may read.
 */
extern "C" uint64_t bb_misc_read_strided_word_01e91980(uint32_t *destination, const misc::StridedWordTable *table,
                                                        uint32_t index)
{
    *destination = table->entries[index].word;
    return reinterpret_cast<uint64_t>(destination);
}
