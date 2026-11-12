// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a record holding an indexed array of 32-bit slots at +0x18, followed by its state words.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/** The value that marks a slot as empty. */
constexpr uint32_t empty_slot_value = 0xffffffff;

/** The scale the record starts with. */
constexpr float default_scale = 3.5f;

/**
 *
 * A record whose 32-bit slots start at +0x18: the slot array continues past the first slot, and
 * its element count is not stored in the record, so callers pass the index.
 *
 */
struct IndexedSlotRecord {
    uint8_t unknown_0x00[0x18];
    uint32_t first_slot;      /**< Element 0 of the slot array; the array continues past it. */
    uint32_t second_slot;     /**< Element 1 of the slot array. */
    uint8_t unknown_0x20[0x8];
    uint32_t value_0x28;      /**< State word set to 1 when the record is reset. */
    uint32_t value_0x2c;      /**< State word cleared when the record is reset. */
    uint32_t value_0x30;      /**< State word cleared when the record is reset. */
    uint16_t value_0x34;      /**< State half-word cleared when the record is reset. */
    uint8_t unknown_0x36[0x2];
    float scale_0x38;         /**< Scale set to default_scale when the record is reset. */
    uint32_t value_0x3c;      /**< Low half of a state quad word cleared when the record is reset. */
    uint32_t value_0x40;      /**< High half of the same state quad word. */
    uint32_t value_0x44;      /**< Low half of a second state quad word cleared when the record is reset. */
    uint32_t value_0x48;      /**< High half of the second state quad word. */
    uint16_t value_0x4c;      /**< State half-word cleared when the record is reset. */
};
static_assert(offsetof(IndexedSlotRecord, first_slot) == 0x18);
static_assert(offsetof(IndexedSlotRecord, second_slot) == 0x1c);
static_assert(offsetof(IndexedSlotRecord, value_0x28) == 0x28);
static_assert(offsetof(IndexedSlotRecord, value_0x2c) == 0x2c);
static_assert(offsetof(IndexedSlotRecord, value_0x30) == 0x30);
static_assert(offsetof(IndexedSlotRecord, value_0x34) == 0x34);
static_assert(offsetof(IndexedSlotRecord, scale_0x38) == 0x38);
static_assert(offsetof(IndexedSlotRecord, value_0x3c) == 0x3c);
static_assert(offsetof(IndexedSlotRecord, value_0x44) == 0x44);
static_assert(offsetof(IndexedSlotRecord, value_0x4c) == 0x4c);

}  // namespace misc
