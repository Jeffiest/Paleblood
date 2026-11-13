// SPDX-License-Identifier: GPL-2.0-or-later
// The engine's centroid of a summed point set: sums as 64-bit integers, divided by the count with
// the processor's reciprocal estimate refined by one Newton step.
#pragma once

#include <immintrin.h>

#include <cstdint>

#include "vector.h"

namespace engine::centroid {

constexpr int broadcast_last_lane = 0xff;

/**
 *
 * The vector (x, y, z, count) from the integer sums, each lane multiplied by the refined reciprocal of
 * the count lane, then scaled and offset lane by lane.
 *
 */
inline Vec4 scaled_centroid(int64_t sum_x, int64_t sum_y, int64_t sum_z, int64_t count, Vec4 two, Vec4 scale,
                            Vec4 offset)
{
    const __m128 sums = _mm_set_ps(static_cast<float>(count), static_cast<float>(sum_z), static_cast<float>(sum_y),
                                   static_cast<float>(sum_x));
    const __m128 counts = _mm_shuffle_ps(sums, sums, broadcast_last_lane);
    const __m128 estimate = _mm_rcp_ps(counts);
    const __m128 product = _mm_mul_ps(estimate, counts);
    const __m128 correction = _mm_mul_ps(estimate, _mm_sub_ps(two.v, product));
    const __m128 average = _mm_mul_ps(sums, correction);
    return Vec4(_mm_sub_ps(_mm_mul_ps(average, scale.v), offset.v));
}

}  // namespace engine::centroid
