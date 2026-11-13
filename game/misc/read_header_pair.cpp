// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: reads a header block and then a trailing word from a source reader, and reports whether both reads were complete.
#include <cstdint>

#include "header_pair_record.h"
#include "source_reader_object.h"

/**
 *
 * Reads the header block into the record, then the trailing word, and reports whether both reads were complete.
 *
 * A short first read ends the routine before the second read is issued.
 */
extern "C" bool bb_misc_read_header_pair(HeaderPairRecord *record, SourceReaderObject *reader)
{
    if (reader->vtable->read(reader, record->header_block, header_pair_block_size) != header_pair_block_size)
        return false;
    return reader->vtable->read(reader, &record->trailer_word, header_pair_word_size) == header_pair_word_size;
}
