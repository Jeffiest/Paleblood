// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the record the record copy routine fills from a source record and a key and flag.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * The destination record: a key, a mode byte, a pointer, a count, a link word, an extra word, two identifiers and a flag.
 *
 * The link word sits at an address that is not 8-byte aligned, so it is kept as raw bytes.
 *
 */
struct CopyRecordDestination {
    uint32_t key_0x00;       /**< Set from the caller's key argument. */
    uint8_t mode_0x04;       /**< Copied from the source's mode byte. */
    uint8_t unknown_0x0005[0x03];
    uint64_t pointer_0x08;   /**< Copied from the source's pointer. */
    uint32_t count_0x10;     /**< Copied from the source's count. */
    uint8_t link_0x14[sizeof(uint64_t)];    /**< Copied from the source's link word, unaligned. */
    uint32_t extra_0x1c;     /**< Copied from the source's extra word. */
    uint32_t id_a_0x20;      /**< Copied from the source's first identifier. */
    uint32_t id_b_0x24;      /**< Copied from the source's second identifier. */
    uint8_t flag_0x28;       /**< Set from the caller's flag argument. */
};
static_assert(offsetof(CopyRecordDestination, key_0x00) == 0x00);
static_assert(offsetof(CopyRecordDestination, mode_0x04) == 0x04);
static_assert(offsetof(CopyRecordDestination, pointer_0x08) == 0x08);
static_assert(offsetof(CopyRecordDestination, count_0x10) == 0x10);
static_assert(offsetof(CopyRecordDestination, link_0x14) == 0x14);
static_assert(offsetof(CopyRecordDestination, extra_0x1c) == 0x1c);
static_assert(offsetof(CopyRecordDestination, id_a_0x20) == 0x20);
static_assert(offsetof(CopyRecordDestination, id_b_0x24) == 0x24);
static_assert(offsetof(CopyRecordDestination, flag_0x28) == 0x28);

}  // namespace misc
