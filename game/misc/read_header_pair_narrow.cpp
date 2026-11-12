// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: reads a header block and then a trailing word from a source reader, comparing only the low 32 bits of each count.
#include <cstdint>

#include "header_pair_record.h"
#include "source_reader_object.h"

/**
 *
 * Reads the header block into the record, then the trailing word, and reports whether both reads were complete.
 *
 * Each returned count is compared in its low 32 bits, so a count with bits set above them still completes a read.
 */
extern "C" bool bb_misc_read_header_pair_narrow(HeaderPairRecord *record, SourceReaderObject *reader)
{
    const uint32_t header_count = static_cast<uint32_t>(
        reader->vtable->read(reader, record->header_block, header_pair_block_size));
    if (header_count != header_pair_block_size) return false;
    const uint32_t word_count = static_cast<uint32_t>(
        reader->vtable->read(reader, &record->trailer_word, header_pair_word_size));
    return word_count == header_pair_word_size;
}
