// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a record of four growable slots, a budget, a tolerance and a run of trailing words.
#pragma once

#include <cstddef>
#include <cstdint>

#include "reserved_slot.h"

namespace misc {

/** Number of trailing words cleared at the end of a slot record. */
constexpr size_t slot_record_tail_words = 8;
/** Number of growable slots in a slot record. */
constexpr size_t slot_record_slot_count = 4;

/**
 *
 * A record of four growable slots, a budget, a tolerance and the words cleared at its end.
 *
 */
struct SlotRecord {
    ReservedSlot slots[slot_record_slot_count];                  /**< Four growable slots, initially without blocks. */
    int32_t budget;                         /**< Set to the initial budget. */
    uint32_t cleared_word_a;                /**< Cleared. */
    uint32_t cleared_word_b;                /**< Cleared. */
    uint8_t unknown_0x004c[0x04];
    float tolerance;                        /**< Set to one. */
    bool enabled;                           /**< Set to true. */
    uint8_t unknown_0x0055[0x03];
    uint64_t tail_words[slot_record_tail_words]; /**< Cleared. */
};
static_assert(offsetof(SlotRecord, slots) == 0x00);
static_assert(offsetof(SlotRecord, budget) == 0x40);
static_assert(offsetof(SlotRecord, tolerance) == 0x50);
static_assert(offsetof(SlotRecord, enabled) == 0x54);
static_assert(offsetof(SlotRecord, tail_words) == 0x58);
static_assert(sizeof(SlotRecord) == 0x98);

}  // namespace misc
