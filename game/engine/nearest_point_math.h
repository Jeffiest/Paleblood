// SPDX-License-Identifier: GPL-2.0-or-later
// The engine's search for the point nearest to a position, four points at a time.
#pragma once

#include <immintrin.h>

#include <cstdint>

#include "vector.h"

namespace engine::nearest_point {

/** Four 32-bit integers in one 16-byte lane group. */
struct alignas(16) Index4 {
    __m128i v;
};

/** The best squared distance and the index of its point, kept per lane. */
struct Best4 {
    Vec4 distance; /**< The smallest squared distance so far in each lane. */
    Index4 index;  /**< The point index that gave it in each lane. */
};

constexpr int dot_xyz_to_lane_0 = 0x71;
constexpr int dot_xyz_to_lane_1 = 0x72;
constexpr int dot_xyz_to_lane_2 = 0x74;
constexpr int dot_xyz_to_lane_3 = 0x78;
constexpr int swap_halves = 0x4e;
constexpr int rotate_lanes_down = 0x39;

/**
 *
 * The squared distance (x, y, z lanes) of four consecutive points to a position, one per lane.
 *
 */
__attribute__((target("sse4.1"))) inline Vec4 squared_distances(const Vec4 *points, Vec4 position)
{
    const __m128 first = _mm_sub_ps(points[0].v, position.v);
    const __m128 second = _mm_sub_ps(points[1].v, position.v);
    const __m128 third = _mm_sub_ps(points[2].v, position.v);
    const __m128 fourth = _mm_sub_ps(points[3].v, position.v);
    const __m128 lane_0 = _mm_dp_ps(first, first, dot_xyz_to_lane_0);
    const __m128 lane_1 = _mm_dp_ps(second, second, dot_xyz_to_lane_1);
    const __m128 lane_2 = _mm_dp_ps(third, third, dot_xyz_to_lane_2);
    const __m128 lane_3 = _mm_dp_ps(fourth, fourth, dot_xyz_to_lane_3);
    return Vec4(_mm_or_ps(_mm_or_ps(lane_0, lane_1), _mm_or_ps(lane_2, lane_3)));
}

/**
 *
 * Adds a step to the running index lanes, then keeps for each lane the best so far unless the new
 * distance is not larger than it.
 *
 */
__attribute__((target("sse4.1"))) inline void keep_nearer(Best4 &best, Index4 &running_index, Index4 step,
                                                          Vec4 distance)
{
    const __m128 best_is_smaller = _mm_cmplt_ps(best.distance.v, distance.v);
    running_index.v = _mm_add_epi32(running_index.v, step.v);
    best.index.v = _mm_blendv_epi8(running_index.v, best.index.v, _mm_castps_si128(best_is_smaller));
    best.distance.v = _mm_blendv_ps(distance.v, best.distance.v, best_is_smaller);
}

/**
 *
 * The index of the smallest distance over the four lanes: the lanes are compared in halves, then
 * in pairs, and each time the first one wins only when strictly smaller.
 *
 */
__attribute__((target("sse4.1"))) inline int32_t lowest_lane_index(Best4 best)
{
    const __m128 swapped_distance =
        _mm_castsi128_ps(_mm_shuffle_epi32(_mm_castps_si128(best.distance.v), swap_halves));
    const __m128i swapped_index = _mm_shuffle_epi32(best.index.v, swap_halves);
    const __m128 first_wins = _mm_cmplt_ps(best.distance.v, swapped_distance);
    const __m128i half_index = _mm_blendv_epi8(swapped_index, best.index.v, _mm_castps_si128(first_wins));
    const __m128 half_distance = _mm_blendv_ps(swapped_distance, best.distance.v, first_wins);
    const __m128 rotated_distance =
        _mm_castsi128_ps(_mm_shuffle_epi32(_mm_castps_si128(half_distance), rotate_lanes_down));
    const __m128i rotated_index = _mm_shuffle_epi32(half_index, rotate_lanes_down);
    const __m128 lane_wins = _mm_cmplt_ps(half_distance, rotated_distance);
    return _mm_cvtsi128_si32(_mm_blendv_epi8(rotated_index, half_index, _mm_castps_si128(lane_wins)));
}

}  // namespace engine::nearest_point
