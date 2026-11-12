// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

#include "streamed_block_record.h"

namespace {

/** Reads the record's body from the reader; the result is the low byte of AL. */
RT_ORIGINAL(0x01c95290, body_read, uint8_t(void *body, misc::RecordReader *reader));

/** Reads the record's member object from the reader; the result is the low byte of AL. */
RT_ORIGINAL(0x018d8fb0, member_read, uint8_t(void *member, misc::RecordReader *reader));

/** The read slot of a child of this variant, which is at +0x18 instead of +0x10. */
struct ChildReadVtable {
    uint8_t unknown_0x0000[0x18];
    uint64_t (*read)(misc::RecordChild *child, misc::RecordReader *reader); /**< Slot at 0x18. */
};
static_assert(offsetof(ChildReadVtable, read) == 0x18);

/** The byte counts each read is checked against, as the 32-bit values the original compares. */
constexpr uint32_t header_count = static_cast<uint32_t>(misc::streamed_header_bytes);
constexpr uint32_t block_count = static_cast<uint32_t>(misc::streamed_block_bytes);
constexpr uint32_t stamp_count = static_cast<uint32_t>(sizeof(uint32_t));

/**
 *
 * Asks the reader for size bytes into destination and returns the count it gave, from EAX.
 *
 */
uint32_t read_bytes(misc::RecordReader *reader, void *destination, uint32_t size)
{
    return static_cast<uint32_t>(reader->vtable->read_bytes(reader, destination, size));
}

/**
 *
 * Reads a child through its read slot, which this variant keeps at +0x18; the result is RAX.
 *
 */
uint64_t read_child(misc::RecordChild *child, misc::RecordReader *reader)
{
    return reinterpret_cast<const ChildReadVtable *>(child->vtable)->read(child, reader);
}

}  // namespace

/**
 *
 * Reads a streamed block record: a header, the body, the member object, the optional first child, two
 * blocks and a stamp word, and the optional second child.
 *
 * Counts are compared as 32-bit values. A record that fails any check returns zero; a record without a
 * second child returns one, and one with a second child returns what its read gives.
 *
 */
extern "C" uint64_t bb_misc_streamed_block_record_read(misc::StreamedBlockRecord *record,
                                                       misc::RecordReader *reader)
{
    bool accepted = read_bytes(reader, record->header, header_count) == header_count;
    if (accepted) accepted = body_read(record->body, reader) != 0;
    if (!accepted) return 0;
    accepted = member_read(record->member, reader) != 0;
    misc::RecordChild *first = record->first_child;
    if (accepted && first != nullptr) accepted = static_cast<uint8_t>(read_child(first, reader)) != 0;
    if (!accepted) return 0;

    const uint32_t first_block_read = read_bytes(reader, record->first_block, block_count);
    const uint32_t stamp_read = read_bytes(reader, &record->stamp, stamp_count);
    const uint32_t second_block_read = read_bytes(reader, record->second_block, block_count);
    if (second_block_read != block_count || stamp_read != stamp_count || first_block_read != block_count)
        return 0;

    misc::RecordChild *second = record->second_child;
    if (second == nullptr) return 1;
    return read_child(second, reader);
}
