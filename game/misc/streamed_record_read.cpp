// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstdint>

#include "streamed_record.h"

namespace {

/** Reads the record's body from the reader; the result is the low byte of AL. */
RT_ORIGINAL(0x01c95110, body_read, uint8_t(void *body, misc::RecordReader *reader));

/** Reads the record's member from the reader; the result is EAX, nonzero on success. */
RT_ORIGINAL(0x01ec5d10, member_read, uint32_t(void *member, misc::RecordReader *reader));

/**
 *
 * Asks the reader for size bytes into destination and returns the count it gave.
 *
 */
int64_t read_bytes(misc::RecordReader *reader, void *destination, uint32_t size)
{
    return reader->vtable->read_bytes(reader, destination, size);
}

}  // namespace

/**
 *
 * Reads a streamed record from a reader: a header, the body, the member, a tag word, the first child
 * when the record has one, then two blocks and a word, and the second child when the record has one.
 *
 * Every read must give exactly the size asked for, or the record is rejected and zero returned. The
 * result of the second child is returned as it is; a record without a second child returns one.
 *
 */
extern "C" uint64_t bb_misc_streamed_record_read(misc::StreamedRecord *record, misc::RecordReader *reader)
{
    const int64_t header_read = read_bytes(reader, record->header, misc::streamed_header_bytes);
    bool accepted = header_read == static_cast<int64_t>(misc::streamed_header_bytes);
    if (accepted) accepted = body_read(record->body, reader) != 0;
    if (!accepted) return 0;
    if (member_read(record->member, reader) == 0) return 0;

    const int64_t tag_read = read_bytes(reader, &record->tag, sizeof(record->tag));
    accepted = tag_read == static_cast<int64_t>(sizeof(record->tag));
    misc::RecordChild *first = record->first_child;
    if (accepted && first != nullptr)
        accepted = static_cast<uint8_t>(first->vtable->read(first, reader)) != 0;
    if (!accepted) return 0;

    const int64_t first_block_read = read_bytes(reader, record->first_block, misc::streamed_block_bytes);
    const int64_t stamp_read = read_bytes(reader, &record->stamp, sizeof(record->stamp));
    const int64_t second_block_read = read_bytes(reader, record->second_block, misc::streamed_block_bytes);
    const auto block_size = static_cast<int64_t>(misc::streamed_block_bytes);
    if (second_block_read != block_size || stamp_read != static_cast<int64_t>(sizeof(record->stamp)) ||
        first_block_read != block_size)
        return 0;

    misc::RecordChild *second = record->second_child;
    if (second == nullptr) return 1;
    return second->vtable->read(second, reader);
}
