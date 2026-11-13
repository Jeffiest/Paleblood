// SPDX-License-Identifier: GPL-2.0-or-later
// The object whose mode name is compared with a fixed text: its source record, a table of offsets and its mode flags.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * The source record the object points at; only a 16-bit flag word at +0x31 is read from it.
 *
 */
struct __attribute__((packed)) ModeNameSource {
    uint8_t unknown_0x00[0x31];
    uint16_t flag_word_0x31;   /**< Bit 2 selects the longer offsets of the table. */
};
static_assert(offsetof(ModeNameSource, flag_word_0x31) == 0x31);

/**
 *
 * The object: the source record and offset table filled by a lookup, the mode flags, and the result byte.
 *
 */
struct ModeNameObject {
    uint8_t unknown_0x00[0x50];
    const ModeNameSource *source_0x50;   /**< Filled by the lookup; may stay null. */
    const uint8_t *offsets_0x58;         /**< The table of offsets, indexed by byte. */
    uint8_t unknown_0x60[0x0c];
    uint8_t mode_flags_0x6c;             /**< Bit 0 and bit 2 pick the table entry, bits 1 and 4 enable the lookup. */
    uint8_t unknown_0x6d[3];
    uint8_t matched_0x70;                /**< Set when the mode name equals the fixed text. */
};
static_assert(offsetof(ModeNameObject, source_0x50) == 0x50 && offsetof(ModeNameObject, offsets_0x58) == 0x58);
static_assert(offsetof(ModeNameObject, mode_flags_0x6c) == 0x6c && offsetof(ModeNameObject, matched_0x70) == 0x70);

}  // namespace misc
