// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

#include "../engine/centroid_math.h"
#include "../engine/vector_operations.h"
#include "runtime/original.h"

namespace {

using engine::Vec4;

constexpr uint32_t max_clusters = 16;
constexpr uint32_t count_capacity = 18;
constexpr uint32_t pad_to_count = 0x1c;
constexpr uint32_t pad_to_total = 0x04;
constexpr uint32_t pad_to_transform_scale = 0x20;

/** The sums of one cluster: the coordinates added up as 64-bit integers, and the number of points. */
struct ClusterSums {
    int64_t sum_x;       /**< The sum of the x coordinates. */
    int64_t sum_y;       /**< The sum of the y coordinates. */
    int64_t sum_z;       /**< The sum of the z coordinates. */
    int64_t point_count; /**< The number of points added. */
};
static_assert(sizeof(ClusterSums) == 0x20);

/** One row of sums: the cluster sums of one worker. */
struct ClusterSumsRow {
    ClusterSums clusters[max_clusters];
};
static_assert(sizeof(ClusterSumsRow) == 0x200);

/** The cluster set: the cluster count, the points per cluster and the cluster centers. */
struct ClusterSet {
    uint8_t unknown_0x00[pad_to_count];
    int32_t cluster_count; /**< The number of clusters. */
    uint8_t unknown_0x20[pad_to_total];
    int32_t total_points;           /**< The points over all clusters. */
    int32_t points[count_capacity]; /**< The points in each cluster. */
    Vec4 centers[max_clusters];     /**< The center of each cluster. */
};
static_assert(offsetof(ClusterSet, cluster_count) == 0x1c && offsetof(ClusterSet, total_points) == 0x24);
static_assert(offsetof(ClusterSet, points) == 0x28 && offsetof(ClusterSet, centers) == 0x70);

/** The transform applied to a center: an offset to subtract and a scale to multiply with. */
struct CenterTransform {
    Vec4 offset; /**< Subtracted after scaling. */
    uint8_t unknown_0x10[pad_to_transform_scale];
    Vec4 scale; /**< Multiplied in first. */
};
static_assert(offsetof(CenterTransform, scale) == 0x30);

constexpr int32_t no_slot = -1;
constexpr int32_t total_shift = 3;
constexpr int32_t half_shift = 1;
constexpr int32_t split_threshold = 15;
constexpr int32_t smallest_start = 0x7fffffff;
constexpr int32_t least_wanted = 1;

RT_GLOBAL(0x02fd5ed0, reciprocal_two, const Vec4);
RT_GLOBAL(0x02fd5330, split_base, const Vec4);
RT_GLOBAL(0x02fd5480, split_scale, const Vec4);
RT_GLOBAL(0x02fd5340, empty_center, const Vec4);

RT_ORIGINAL(0x02fbe688, fn_memset, void *(void *destination, int32_t value, uint64_t size));

}  // namespace

/**
 *
 * Adds the per-worker cluster sums into per-cluster totals, turns each total into a center, then
 * rebalances: when more clusters hold points than wanted the smallest is folded into the largest,
 * and when fewer do the largest is split in two. Empty clusters get the empty center.
 *
 */
extern "C" void bb_misc_rebalance_cluster_centers(ClusterSet *set, const ClusterSumsRow *rows, int32_t row_count,
                                                  const CenterTransform *transform)
{
    ClusterSums totals[max_clusters];
    const int32_t cluster_count = set->cluster_count;
    if (cluster_count > 0) {
        const uint64_t bytes = cluster_count > 1 ? static_cast<uint64_t>(static_cast<uint32_t>(cluster_count - 1)) *
                                                           sizeof(ClusterSums) +
                                                       sizeof(ClusterSums)
                                                 : sizeof(ClusterSums);
        fn_memset(totals, 0, bytes);
    }
    for (int32_t row = 0; row < row_count; row++) {
        for (int32_t cluster = 0; cluster < cluster_count; cluster++) {
            totals[cluster].sum_x += rows[row].clusters[cluster].sum_x;
            totals[cluster].sum_y += rows[row].clusters[cluster].sum_y;
            totals[cluster].sum_z += rows[row].clusters[cluster].sum_z;
            totals[cluster].point_count += rows[row].clusters[cluster].point_count;
        }
    }
    set->total_points = 0;
    for (int32_t cluster = 0; cluster < set->cluster_count; cluster++) {
        const int64_t wide_count = totals[cluster].point_count;
        const int32_t points = static_cast<int32_t>(wide_count);
        set->points[cluster] = points;
        if (points == 0) {
            set->centers[cluster] = Vec4::zero();
        } else {
            set->total_points += points;
            set->centers[cluster] = engine::centroid::scaled_centroid(
                totals[cluster].sum_x, totals[cluster].sum_y, totals[cluster].sum_z, wide_count,
                reciprocal_two.get(), transform->scale, transform->offset);
        }
    }

    int32_t smallest_points = smallest_start;
    int32_t largest_points = 0;
    int32_t filled_clusters = 0;
    int32_t total = 0;
    int32_t empty_slot = no_slot;
    int32_t largest_slot = no_slot;
    int32_t smallest_slot = no_slot;
    for (int32_t cluster = set->cluster_count - 1; cluster >= 0; cluster--) {
        const int32_t points = set->points[cluster];
        if (points <= 0) {
            empty_slot = cluster;
            continue;
        }
        total += points;
        filled_clusters++;
        if (points > largest_points) largest_slot = cluster;
        if (points >= largest_points) largest_points = points;
        if (points <= smallest_points) {
            smallest_slot = cluster;
            smallest_points = points;
        }
    }
    int32_t wanted = total >> total_shift;
    if (set->cluster_count < wanted) wanted = set->cluster_count;
    if (wanted < least_wanted) wanted = least_wanted;
    if (filled_clusters > wanted) {
        const int32_t moved = set->points[smallest_slot];
        set->points[smallest_slot] = 0;
        set->points[largest_slot] += moved;
    } else if (filled_clusters < wanted && largest_points >= split_threshold) {
        set->centers[empty_slot] = split_base.get() * split_scale.get() + set->centers[largest_slot];
        const int32_t half = largest_points >> half_shift;
        set->points[largest_slot] = half;
        set->points[empty_slot] = half;
    }
    for (int32_t cluster = 0; cluster < set->cluster_count; cluster++) {
        if (set->points[cluster] == 0) set->centers[cluster] = empty_center.get();
    }
}
