// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a sample record with an index, a budget, a scale, a tolerance and cleared link words.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/** Size of each of the two blocks of a sample record. */
constexpr size_t sample_block_size = 0x10;

/**
 *
 * A sample record whose initializer sets its index, budget, scale, enabled flag and tolerance, and
 * clears its link words and two blocks.
 *
 */
struct SampleRecord {
    int32_t index_value;                 /**< Set to the unset index. */
    uint8_t unknown_0x0004[0x0c];
    uint8_t leading_block[sample_block_size];         /**< Cleared by the initializer. */
    int32_t budget;                      /**< Set to the initial budget. */
    uint32_t link_a_low;                 /**< Cleared. */
    uint32_t link_a_high;                /**< Cleared. */
    uint32_t link_b_low;                 /**< Cleared. */
    uint32_t link_b_high;                /**< Cleared. */
    uint8_t unknown_0x0034[0x04];
    uint64_t link_c;                     /**< Cleared. */
    uint64_t link_d;                     /**< Cleared. */
    float scale_value;                   /**< Set to minus one. */
    bool enabled;                        /**< Set to true. */
    uint8_t unknown_0x004d[0x03];
    float tolerance;                     /**< Set to the initial tolerance. */
    uint8_t unknown_0x0054[0x0c];
    uint8_t trailing_block[sample_block_size];        /**< Cleared by the initializer. */
};
static_assert(offsetof(SampleRecord, index_value) == 0x00);
static_assert(offsetof(SampleRecord, leading_block) == 0x10);
static_assert(offsetof(SampleRecord, budget) == 0x20);
static_assert(offsetof(SampleRecord, link_a_low) == 0x24);
static_assert(offsetof(SampleRecord, link_b_low) == 0x2c);
static_assert(offsetof(SampleRecord, link_c) == 0x38);
static_assert(offsetof(SampleRecord, link_d) == 0x40);
static_assert(offsetof(SampleRecord, scale_value) == 0x48);
static_assert(offsetof(SampleRecord, enabled) == 0x4c);
static_assert(offsetof(SampleRecord, tolerance) == 0x50);
static_assert(offsetof(SampleRecord, trailing_block) == 0x60);
static_assert(sizeof(SampleRecord) == 0x70);

}  // namespace misc
