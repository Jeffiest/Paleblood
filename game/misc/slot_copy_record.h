// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the source and target records of the slot copy, which moves two words, a qword and a byte.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * The record a slot copy reads: two words, a qword and a byte.
 *
 */
struct SlotCopySource {
    uint64_t low_0x00;   /**< First half of the 16-byte block that is copied. */
    uint64_t high_0x08;  /**< Second half of the 16-byte block that is copied. */
    uint64_t qword_0x10; /**< Copied to the target's qword. */
    uint8_t byte_0x18;   /**< Copied to the target's byte. */
};
static_assert(offsetof(SlotCopySource, low_0x00) == 0x00);
static_assert(offsetof(SlotCopySource, high_0x08) == 0x08);
static_assert(offsetof(SlotCopySource, qword_0x10) == 0x10);
static_assert(offsetof(SlotCopySource, byte_0x18) == 0x18);

/**
 *
 * The record a slot copy writes: a 16-byte block at 0x20, a qword at 0x30 and a byte at 0x38.
 *
 */
struct SlotCopyTarget {
    uint8_t unknown_0x0000[0x20];
    uint64_t low_0x20;   /**< Receives the source's first half. */
    uint64_t high_0x28;  /**< Receives the source's second half. */
    uint64_t qword_0x30; /**< Receives the source's qword. */
    uint8_t byte_0x38;   /**< Receives the source's byte. */
};
static_assert(offsetof(SlotCopyTarget, low_0x20) == 0x20);
static_assert(offsetof(SlotCopyTarget, high_0x28) == 0x28);
static_assert(offsetof(SlotCopyTarget, qword_0x30) == 0x30);
static_assert(offsetof(SlotCopyTarget, byte_0x38) == 0x38);

}  // namespace misc
