// SPDX-License-Identifier: GPL-2.0-or-later
// A record that receives a header block and then a trailing word from a source reader.
#pragma once

#include <cstddef>
#include <cstdint>

/** The byte count of the block read into the record's header field. */
constexpr uint64_t header_pair_block_size = 0x60;

/** The byte count of the word read into the record's trailer field. */
constexpr uint64_t header_pair_word_size = 4;

/** A record with a header block at 0x18 and a trailing word at 0x78. */
struct HeaderPairRecord {
    uint8_t unknown_0x0000[0x18];
    uint8_t header_block[header_pair_block_size]; /**< Filled by the first read. */
    uint32_t trailer_word;                       /**< Filled by the second read. */
};
static_assert(offsetof(HeaderPairRecord, header_block) == 0x18);
static_assert(offsetof(HeaderPairRecord, trailer_word) == 0x78);
