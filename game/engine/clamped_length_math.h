// SPDX-License-Identifier: GPL-2.0-or-later
// The engine's length of a vector's x, y, z lanes from the CPU's reciprocal-square-root estimate.
#pragma once

#include <immintrin.h>

#include "vector.h"

namespace engine::clamped_length {

constexpr int xyz_dot_to_all_lanes = 0x7f;

/**
 *
 * The length of the x, y, z lanes of a vector in all four lanes: the dot product refined by one Newton
 * step of the reciprocal-square-root estimate, and zero where the dot product is not above zero.
 *
 */
__attribute__((target("sse4.1"))) inline Vec4 length_or_zero(Vec4 vector, Vec4 half, Vec4 three)
{
    const __m128 squared = _mm_dp_ps(vector.v, vector.v, xyz_dot_to_all_lanes);
    const __m128 not_above_zero = _mm_cmple_ps(squared, _mm_setzero_ps());
    const __m128 estimate = _mm_rsqrt_ps(squared);
    const __m128 half_estimate = _mm_mul_ps(estimate, half.v);
    const __m128 estimate_squared = _mm_mul_ps(estimate, estimate);
    const __m128 product = _mm_mul_ps(squared, estimate_squared);
    const __m128 correction = _mm_sub_ps(three.v, product);
    const __m128 refined = _mm_mul_ps(half_estimate, correction);
    return Vec4(_mm_andnot_ps(not_above_zero, _mm_mul_ps(squared, refined)));
}

}  // namespace engine::clamped_length
