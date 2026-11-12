// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: copies a record's middle block and trailing word into another record, and returns the copied word.
#include <cstdint>
#include <cstring>

#include "copyable_pair_record.h"

/**
 *
 * Copies the block and the trailing word from the source record into the destination record.
 *
 * The routine returns the copied word: the original leaves it in RAX as the last value it loads.
 */
extern "C" uint64_t bb_misc_copy_pair_record(CopyablePairRecord *destination, const CopyablePairRecord *source)
{
    std::memcpy(destination->copied_block, source->copied_block, copyable_block_size);
    const uint32_t word = source->copied_word;
    destination->copied_word = word;
    return word;
}
