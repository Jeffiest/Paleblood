// SPDX-License-Identifier: GPL-2.0-or-later
// A streamed record of the variant that reads a member object at +0x158 and has no tag word.
#pragma once

#include <cstddef>
#include <cstdint>

#include "streamed_record.h"

namespace misc {

/** The member object at +0x158 of this variant of a streamed record. */
constexpr std::size_t streamed_block_member_bytes = 0xa0;

/**
 *
 * A streamed record of this variant: a header, a body, a member object, two blocks and a stamp word,
 * with an optional child before and after the blocks.
 *
 */
struct StreamedBlockRecord {
    const void *vtable;                          /**< At 0x00. */
    uint8_t unknown_0x0008[0x1c];
    uint8_t header[streamed_header_bytes];       /**< At 0x24. */
    uint8_t unknown_0x0064[0xc];
    uint8_t body[streamed_body_bytes];           /**< At 0x70. */
    uint8_t member[streamed_block_member_bytes]; /**< At 0x158. */
    RecordChild *first_child;                    /**< At 0x1f8. */
    uint8_t unknown_0x0200[0x18];
    uint8_t first_block[streamed_block_bytes];   /**< At 0x218. */
    uint32_t stamp;                              /**< At 0x248. */
    uint8_t second_block[streamed_block_bytes];  /**< At 0x24c. */
    uint8_t unknown_0x027c[0x4];
    RecordChild *second_child;                   /**< At 0x280. */
};
static_assert(offsetof(StreamedBlockRecord, header) == 0x24);
static_assert(offsetof(StreamedBlockRecord, body) == 0x70);
static_assert(offsetof(StreamedBlockRecord, member) == 0x158);
static_assert(offsetof(StreamedBlockRecord, first_child) == 0x1f8);
static_assert(offsetof(StreamedBlockRecord, first_block) == 0x218);
static_assert(offsetof(StreamedBlockRecord, stamp) == 0x248);
static_assert(offsetof(StreamedBlockRecord, second_block) == 0x24c);
static_assert(offsetof(StreamedBlockRecord, second_child) == 0x280);

}  // namespace misc
