// SPDX-License-Identifier: GPL-2.0-or-later
// A streamed record: a header read in one piece, a body, a member, and two child objects that its
// owners hold.
#pragma once

#include <cstddef>
#include <cstdint>

#include "runtime/original.h"

namespace misc {

/**
 *
 * The record's vtable: its address is stored in the record's first word when the record is released.
 *
 */
RT_GLOBAL(0x0576f130, streamed_record_vtable, const uint8_t);

/**
 *
 * The vtable of the member at 0x158: its address is stored there when the record is released.
 *
 */
RT_GLOBAL(0x0576f320, streamed_member_vtable, const uint8_t);

constexpr std::size_t streamed_header_bytes = 0x40;
constexpr std::size_t streamed_body_bytes = 0xe8;
constexpr std::size_t streamed_member_bytes = 0x78;
constexpr std::size_t streamed_block_bytes = 0x30;

struct RecordChild;
struct RecordReader;

/**
 *
 * The vtable of the stream a record is read from: its read slot fills a buffer and returns the count.
 *
 */
struct RecordReaderVtable {
    uint8_t unknown_0x0000[0x20];
    int64_t (*read_bytes)(RecordReader *reader, void *destination, uint32_t size); /**< Slot at 0x20. */
};
static_assert(offsetof(RecordReaderVtable, read_bytes) == 0x20);

/**
 *
 * A stream a record is read from: its vtable is its first field.
 *
 */
struct RecordReader {
    const RecordReaderVtable *vtable;
};
static_assert(offsetof(RecordReader, vtable) == 0x00);

/**
 *
 * The vtable of a child: its first slot releases the child, and its read slot reads the child from a
 * stream and returns the result in RAX.
 *
 */
struct RecordChildVtable {
    void (*release)(RecordChild *child);                          /**< Slot at 0x00: releases the child. */
    uint8_t unknown_0x0008[0x8];
    uint64_t (*read)(RecordChild *child, RecordReader *reader);  /**< Slot at 0x10: reads the child. */
};
static_assert(offsetof(RecordChildVtable, release) == 0x00);
static_assert(offsetof(RecordChildVtable, read) == 0x10);

/**
 *
 * A child object: its vtable is its first field.
 *
 */
struct RecordChild {
    const RecordChildVtable *vtable;
};
static_assert(offsetof(RecordChild, vtable) == 0x00);

struct StreamedRecordOwner;

/**
 *
 * The vtable of the owner that holds a child: its remove slot takes the child away.
 *
 */
struct StreamedRecordOwnerVtable {
    uint8_t unknown_0x0000[0x70];
    uint64_t (*remove_child)(StreamedRecordOwner *owner, RecordChild *child); /**< Slot at 0x70. */
};
static_assert(offsetof(StreamedRecordOwnerVtable, remove_child) == 0x70);

/**
 *
 * The owner a child is registered with.
 *
 */
struct StreamedRecordOwner {
    const StreamedRecordOwnerVtable *vtable;
};
static_assert(offsetof(StreamedRecordOwner, vtable) == 0x00);

/**
 *
 * A streamed record: its header, body, member, the two children it may hold and their blocks.
 *
 */
struct StreamedRecord {
    const void *vtable;                          /**< At 0x00: the record's vtable address. */
    uint8_t unknown_0x0008[0x1c];
    uint8_t header[streamed_header_bytes];       /**< At 0x24. */
    uint8_t unknown_0x0064[0xc];
    uint8_t body[streamed_body_bytes];           /**< At 0x70. */
    const void *member_vtable;                   /**< At 0x158: the member's vtable. */
    uint8_t unknown_0x0160[0x8];
    uint8_t member[streamed_member_bytes];       /**< At 0x168. */
    uint32_t tag;                                /**< At 0x1e0. */
    uint8_t unknown_0x01e4[0x14];
    RecordChild *first_child;                    /**< At 0x1f8. */
    uint8_t unknown_0x0200[0x18];
    uint8_t first_block[streamed_block_bytes];   /**< At 0x218. */
    uint32_t stamp;                              /**< At 0x248. */
    uint8_t second_block[streamed_block_bytes];  /**< At 0x24c. */
    uint8_t unknown_0x027c[0x4];
    RecordChild *second_child;                   /**< At 0x280. */
};
static_assert(offsetof(StreamedRecord, header) == 0x24);
static_assert(offsetof(StreamedRecord, body) == 0x70);
static_assert(offsetof(StreamedRecord, member_vtable) == 0x158);
static_assert(offsetof(StreamedRecord, member) == 0x168);
static_assert(offsetof(StreamedRecord, tag) == 0x1e0);
static_assert(offsetof(StreamedRecord, first_child) == 0x1f8);
static_assert(offsetof(StreamedRecord, first_block) == 0x218);
static_assert(offsetof(StreamedRecord, stamp) == 0x248);
static_assert(offsetof(StreamedRecord, second_block) == 0x24c);
static_assert(offsetof(StreamedRecord, second_child) == 0x280);

}  // namespace misc
