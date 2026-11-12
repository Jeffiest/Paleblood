// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>
#include <cstring>

#include "runtime/original.h"
#include "tuning_record.h"

namespace {

/** The header block as stored in the read-only image. */
struct HeaderBytes {
    uint8_t bytes[misc::tuning_header_size];
};

RT_GLOBAL(0x04bc2d30, header_constant, const HeaderBytes);

// The two sub-records are cleared by their own initializers, which take a zero flag word.
RT_ORIGINAL(0x00ce7510, fn_00ce7510, void(void *record, uint32_t flag));
RT_ORIGINAL(0x00cfb470, fn_00cfb470, void(void *record, uint32_t flag));

constexpr float first_scale_value = 1.5f;
constexpr float second_scale_value = 0.4f;
constexpr float third_scale_value = 50.0f;
constexpr float fourth_scale_value = 0.005f;
constexpr int32_t unset_index = -1;
constexpr int32_t first_count_value = 100;
constexpr int32_t buffer_size_value = 1024;
constexpr int32_t small_count_value = 16;
constexpr int32_t sixth_count_value = 64;
constexpr int32_t seventh_count_value = 32;
constexpr uint32_t zero_flag = 0;

}  // namespace

/**
 *
 * Initialises a tuning record: sets its flags, scales, indices and counts, clears its link and its
 * sub-records through their initializers, then copies the header block and sets the last flag.
 *
 * The header block is copied last, as the original does, so no register input is read.
 */
extern "C" void bb_misc_init_tuning_record(misc::TuningRecord *record)
{
    record->first_flag = false;
    record->second_flag = true;
    record->first_scale = first_scale_value;
    record->second_scale = second_scale_value;
    record->third_scale = third_scale_value;
    record->fourth_scale = fourth_scale_value;
    record->first_index = unset_index;
    record->link = 0;
    record->first_count = first_count_value;
    record->second_index = unset_index;
    record->buffer_size = buffer_size_value;
    record->third_count = small_count_value;
    record->fourth_count = small_count_value;
    record->fifth_count = small_count_value;
    record->sixth_count = sixth_count_value;
    record->seventh_count = seventh_count_value;
    record->cleared_word = 0;

    fn_00ce7510(record->first_record, zero_flag);
    fn_00cfb470(record->unknown_0x0130, zero_flag);

    std::memcpy(record->header_bytes, header_constant.get().bytes, sizeof record->header_bytes);
    record->last_flag = true;
}
