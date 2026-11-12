// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstdint>

#include "../engine/clamped_length_math.h"
#include "pose_record_update.h"
#include "runtime/original.h"

namespace {

// The two constant vectors of the length refinement, and the two floats of the default record.
RT_GLOBAL(0x02fd5eb0, half_vector, const engine::Vec4);
RT_GLOBAL(0x02fd5ee0, three_vector, const engine::Vec4);
RT_GLOBAL(0x04bf3c4c, default_first_value, const float);
RT_GLOBAL(0x04bf3c50, default_second_value, const float);

// Fills a record for a record kind from two floats, and adds a record to the pool.
RT_ORIGINAL(0x00f28900, fn_00f28900, void(misc::PoseRecord *record, uint32_t kind, float first, float second));
RT_ORIGINAL(0x00f247b0, fn_00f247b0, uint16_t(misc::PoseRecordPool *pool, misc::PoseRecord *record));

constexpr uint32_t default_kind = 1;
constexpr uint32_t first_measured_kind = 0;
constexpr uint32_t measured_kind_count = 5;
constexpr uint32_t record_built = 0;
constexpr uint32_t record_ready = 1;

}  // namespace

/**
 *
 * Resets the pool's record count, measures the source's direction vector, then adds five records to the pool:
 * each is a default record followed by a measured record of kinds 0 to 4 built from the length and the
 * source's scale.
 *
 * Nothing is returned: the original leaves the stack-guard word in RAX.
 */
extern "C" void bb_misc_update_pose_records(misc::PoseRecordPool *pool, const misc::PoseSource *source)
{
    pool->record_count = 0;
    const engine::Vec4 length = engine::clamped_length::length_or_zero(source->direction, half_vector.get(),
                                                                       three_vector.get());
    const float scale = source->length_scale;
    misc::PoseRecord record;
    record.mode = record_built;
    for (uint32_t kind = first_measured_kind; kind < first_measured_kind + measured_kind_count; ++kind) {
        fn_00f28900(&record, default_kind, default_first_value.get(), default_second_value.get());
        fn_00f28900(&record, kind, length.x(), scale);
        record.mode = record_ready;
        fn_00f247b0(pool, &record);
        record.mode = record_built;
    }
}
