// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the pose source, record pool and pose record used by the pose-record update functions.
#pragma once

#include <cstddef>
#include <cstdint>

#include "../engine/vector.h"

namespace misc {

/**
 *
 * The part of a pose source that the pose update reads: a length scale and a direction vector.
 *
 */
struct PoseSource {
    uint8_t unknown_0x0000[0x3c0];
    float length_scale;  /**< Scale handed on with the measured length. */
    uint8_t unknown_0x03c4[0x1ec];
    engine::Vec4 direction;  /**< Direction vector whose x, y, z lanes are measured. */
};
static_assert(offsetof(PoseSource, length_scale) == 0x3c0);
static_assert(offsetof(PoseSource, direction) == 0x5b0);

/**
 *
 * The part of a pose record pool that the pose update writes: its live record count.
 *
 */
struct PoseRecordPool {
    uint8_t unknown_0x00[0x30];
    int32_t record_count;  /**< Number of live records, reset by the update. */
};
static_assert(offsetof(PoseRecordPool, record_count) == 0x30);

/**
 *
 * One pose record: a mode word followed by the fields the record initialiser fills.
 *
 */
struct alignas(16) PoseRecord {
    uint32_t mode;  /**< Zero while the record is built, one when it is handed to the pool. */
    uint8_t unknown_0x04[0x3c];
};
static_assert(sizeof(PoseRecord) == 0x40);

}  // namespace misc
