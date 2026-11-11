// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the 0x58-byte source record that the record copy routine reads its fields from.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * The source record: a mode byte, two identifiers, a pointer, a count, a link word and an extra word.
 *
 * The link word sits at an address that is not 8-byte aligned, so it is kept as raw bytes.
 *
 */
struct CopyRecordSource {
    uint8_t unknown_0x0000[0x08];
    uint8_t mode_0x08;       /**< Copied to the destination's mode byte. */
    uint8_t unknown_0x0009[0x2f];
    uint32_t id_a_0x38;      /**< Copied to the destination's first identifier. */
    uint32_t id_b_0x3c;      /**< Copied to the destination's second identifier. */
    uint64_t pointer_0x40;   /**< Copied to the destination's pointer. */
    uint32_t count_0x48;     /**< Copied to the destination's count. */
    uint8_t link_0x4c[sizeof(uint64_t)];    /**< Copied as one unaligned word to the destination's link. */
    uint32_t extra_0x54;     /**< Copied to the destination's extra word. */
};
static_assert(offsetof(CopyRecordSource, mode_0x08) == 0x08);
static_assert(offsetof(CopyRecordSource, id_a_0x38) == 0x38);
static_assert(offsetof(CopyRecordSource, id_b_0x3c) == 0x3c);
static_assert(offsetof(CopyRecordSource, pointer_0x40) == 0x40);
static_assert(offsetof(CopyRecordSource, count_0x48) == 0x48);
static_assert(offsetof(CopyRecordSource, link_0x4c) == 0x4c);
static_assert(offsetof(CopyRecordSource, extra_0x54) == 0x54);

}  // namespace misc
