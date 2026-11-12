// SPDX-License-Identifier: GPL-2.0-or-later
// Bone pose buffers and the 4x3 matrix product that chains a bone onto its parent.
#pragma once

#include <cstddef>
#include <cstdint>

#include "runtime/original.h"

namespace bone_pose {

/** The number of bytes between two bones' records and between two bones' matrices. */
constexpr size_t bone_stride = 0x30;

/** The state value written to a pose buffer by each of the three chaining passes. */
constexpr uint32_t state_chained = 1;
constexpr uint32_t state_chained_with_root = 2;

/** Four lanes of a row. */
struct alignas(16) Row {
    float x;   /**< The first lane. */
    float y;   /**< The second lane. */
    float z;   /**< The third lane. */
    float w;   /**< The fourth lane. */
};
static_assert(sizeof(Row) == 0x10);

/** A 4x3 transform: three rows, the fourth is the constant row. */
struct BoneMatrix {
    Row row0;   /**< The first row. */
    Row row1;   /**< The second row. */
    Row row2;   /**< The third row. */
};
static_assert(sizeof(BoneMatrix) == bone_stride);

/** One bone's record in a hierarchy: only the parent index is read. */
struct BoneRecord {
    uint8_t unknown_0x0000[0x28];
    int16_t parent_index;   /**< The index of the parent bone, negative for a root. */
    uint8_t unknown_0x002a[0x06];
};
static_assert(sizeof(BoneRecord) == bone_stride);
static_assert(offsetof(BoneRecord, parent_index) == 0x28);

/** A skeleton hierarchy: the array of bone records. */
struct BoneHierarchy {
    uint8_t unknown_0x0000[0x10];
    const BoneRecord *bones;   /**< The bone records. */
};
static_assert(offsetof(BoneHierarchy, bones) == 0x10);

/** A pose: how many bones it holds and their matrices. */
struct BonePose {
    uint8_t unknown_0x0000[0x10];
    uint32_t state;           /**< Which chaining pass last wrote the pose. */
    int32_t bone_count;       /**< The number of bones. */
    BoneMatrix *matrices;     /**< One matrix per bone. */
};
static_assert(offsetof(BonePose, state) == 0x10);
static_assert(offsetof(BonePose, bone_count) == 0x14);
static_assert(offsetof(BonePose, matrices) == 0x18);

RT_GLOBAL(0x04b38070, constant_row, const Row);

/** One lane of a product row, in the order the original adds the terms. */
inline float product_lane(float x, float y, float z, float w, float first, float second, float third,
                          float constant)
{
    const float partial = first * x + second * y;
    const float with_third = z * third + partial;
    return w * constant + with_third;
}

/** One row of the product: the factor row weights the other matrix's rows and the constant row. */
inline Row product_row(const Row &factor, const BoneMatrix &other, const Row &constant)
{
    Row result;
    result.x = product_lane(factor.x, factor.y, factor.z, factor.w, other.row0.x, other.row1.x, other.row2.x,
                            constant.x);
    result.y = product_lane(factor.x, factor.y, factor.z, factor.w, other.row0.y, other.row1.y, other.row2.y,
                            constant.y);
    result.z = product_lane(factor.x, factor.y, factor.z, factor.w, other.row0.z, other.row1.z, other.row2.z,
                            constant.z);
    result.w = product_lane(factor.x, factor.y, factor.z, factor.w, other.row0.w, other.row1.w, other.row2.w,
                            constant.w);
    return result;
}

/** The product of two matrices: each row of the first weights the second matrix's rows. */
inline BoneMatrix chain(const BoneMatrix &first, const BoneMatrix &second)
{
    const Row constant = constant_row.get();
    BoneMatrix result;
    result.row0 = product_row(first.row0, second, constant);
    result.row1 = product_row(first.row1, second, constant);
    result.row2 = product_row(first.row2, second, constant);
    return result;
}

}  // namespace bone_pose
