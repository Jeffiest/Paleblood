// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

#include "../engine/nearest_point_math.h"
#include "runtime/original.h"

namespace {

using engine::Vec4;
using engine::nearest_point::Best4;
using engine::nearest_point::Index4;

constexpr uint32_t point_capacity = 64;
constexpr int32_t group_size = 4;

/** The point set: a count and the points in groups of four from the 0x70 offset. */
struct NearestPointSet {
    uint8_t unknown_0x00[0x1c];
    int32_t point_count; /**< The number of points. */
    uint8_t unknown_0x20[0x50];
    Vec4 points[point_capacity]; /**< The points, four lanes each. */
};
static_assert(offsetof(NearestPointSet, point_count) == 0x1c && offsetof(NearestPointSet, points) == 0x70);

RT_GLOBAL(0x04b2dd90 + 0x40, index_step, const Index4);
RT_GLOBAL(0x04b2dd90 + 0x50, index_start, const Index4);

}  // namespace

/**
 *
 * Finds the point of a set nearest to a position, four points at a time, and stores its index.
 * The count is returned.
 *
 */
extern "C" int32_t bb_misc_nearest_point_search(const NearestPointSet *set, const Vec4 *position, int32_t *nearest_index)
{
    const Vec4 target = *position;
    Best4 best{engine::nearest_point::squared_distances(&set->points[0], target), index_start.get()};
    const int32_t count = set->point_count;
    if (count >= group_size + 1) {
        Index4 running_index = index_start.get();
        const Index4 step = index_step.get();
        for (int32_t first = group_size; first < count; first += group_size) {
            const Vec4 distance = engine::nearest_point::squared_distances(&set->points[first], target);
            engine::nearest_point::keep_nearer(best, running_index, step, distance);
        }
    }
    *nearest_index = engine::nearest_point::lowest_lane_index(best);
    return count;
}
