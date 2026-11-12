// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a tuning record of flags, scales, indices and counts, with two sub-records and a header block.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/** Size of the header block copied from the read-only image at the start of the record. */
constexpr size_t tuning_header_size = 0x10;
/** Size of the first sub-record, which runs up to the last flag. */
constexpr size_t tuning_first_record_size = 0x83;
/** Size of the unnamed block that starts at 0x130. */
constexpr size_t tuning_tail_size = 0x10;
/** Size of the unnamed block between the last flag and 0x130. */
constexpr size_t tuning_gap_size = 0x4c;
/** Size of the unnamed block between the last count and the first sub-record. */
constexpr size_t tuning_pad_size = 0x0e;

/**
 *
 * A tuning record: a header block, the flags, scales, indices and counts its initializer sets, a
 * cleared link word, two sub-records and a trailing flag.
 *
 */
struct TuningRecord {
    uint8_t header_bytes[tuning_header_size];   /**< Copied from the read-only image by the initializer. */
    bool first_flag;                            /**< Set to false. */
    bool second_flag;                           /**< Set to true. */
    float first_scale;                          /**< Set to 1.5. */
    float second_scale;                         /**< Set to 0.4. */
    float third_scale;                          /**< Set to 50. */
    float fourth_scale;                         /**< Set to 0.005. */
    int32_t first_index;                        /**< Set to the unset index. */
    uint64_t link;                              /**< Cleared. */
    int32_t first_count;                        /**< Set to 100. */
    int32_t second_index;                       /**< Set to the unset index. */
    int32_t buffer_size;                        /**< Set to 1024. */
    int32_t third_count;                        /**< Set to 16. */
    int32_t fourth_count;                       /**< Set to 16. */
    int32_t fifth_count;                        /**< Set to 16. */
    int32_t sixth_count;                        /**< Set to 64. */
    int32_t seventh_count;                      /**< Set to 32. */
    uint16_t cleared_word;                      /**< Cleared. */
    uint8_t unknown_0x0052[tuning_pad_size];
    uint8_t first_record[tuning_first_record_size]; /**< Sub-record cleared by its own initializer. */
    bool last_flag;                             /**< Set to true. */
    uint8_t unknown_0x00e4[tuning_gap_size];
    uint8_t unknown_0x0130[tuning_tail_size];   /**< Sub-record that its own initializer clears. */
};
static_assert(offsetof(TuningRecord, header_bytes) == 0x00);
static_assert(offsetof(TuningRecord, first_flag) == 0x10 && offsetof(TuningRecord, second_flag) == 0x11);
static_assert(offsetof(TuningRecord, first_scale) == 0x14 && offsetof(TuningRecord, fourth_scale) == 0x20);
static_assert(offsetof(TuningRecord, first_index) == 0x24 && offsetof(TuningRecord, link) == 0x28);
static_assert(offsetof(TuningRecord, first_count) == 0x30 && offsetof(TuningRecord, seventh_count) == 0x4c);
static_assert(offsetof(TuningRecord, cleared_word) == 0x50);
static_assert(offsetof(TuningRecord, first_record) == 0x60);
static_assert(offsetof(TuningRecord, last_flag) == 0xe3);
static_assert(offsetof(TuningRecord, unknown_0x0130) == 0x130);

}  // namespace misc
