// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstdint>
#include <cstring>

#include "sample_record.h"

namespace {

constexpr int32_t unset_index = -1;
constexpr int32_t initial_budget = 100000;
constexpr float unset_scale = -1.0f;
constexpr float initial_tolerance = 0.01f;

}  // namespace

/**
 *
 * Initialises a sample record: sets its index, budget, scale, enabled flag and tolerance, then clears
 * its link words and its two blocks.
 *
 * The record's address is the only input, and nothing is returned.
 */
extern "C" void bb_misc_init_sample_record(misc::SampleRecord *record)
{
    record->index_value = unset_index;
    record->budget = initial_budget;
    record->link_a_low = 0;
    record->link_a_high = 0;
    record->link_b_low = 0;
    record->link_b_high = 0;
    record->link_c = 0;
    record->link_d = 0;
    record->scale_value = unset_scale;
    record->enabled = true;
    record->tolerance = initial_tolerance;
    std::memset(record->leading_block, 0, sizeof record->leading_block);
    std::memset(record->trailing_block, 0, sizeof record->trailing_block);
}
