// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the source object and the 0x18-byte snapshot that the snapshot copy routine fills from it.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/** Number of words in a snapshot and in its source. */
constexpr size_t snapshot_word_count = 2;

/**
 *
 * The object a snapshot is copied from: two words at 0x10 and a scale value at 0x90.
 *
 */
struct SnapshotSource {
    uint8_t unknown_0x0000[0x10];
    uint64_t words_0x10[snapshot_word_count]; /**< Copied as they are to the snapshot's words. */
    uint8_t unknown_0x0020[0x70];
    float scale_0x90;        /**< Copied to the snapshot's scale. */
};
static_assert(offsetof(SnapshotSource, words_0x10) == 0x10);
static_assert(offsetof(SnapshotSource, scale_0x90) == 0x90);
static_assert(sizeof(SnapshotSource) == 0x98);

/**
 *
 * A 0x18-byte snapshot: two words, a scale and a word that is always cleared.
 *
 */
struct SnapshotCopy {
    uint64_t words_0x00[snapshot_word_count]; /**< The source's two words. */
    float scale_0x10;       /**< The source's scale. */
    uint32_t zero_0x14;     /**< Always written as zero. */
};
static_assert(offsetof(SnapshotCopy, words_0x00) == 0x00);
static_assert(offsetof(SnapshotCopy, scale_0x10) == 0x10);
static_assert(offsetof(SnapshotCopy, zero_0x14) == 0x14);
static_assert(sizeof(SnapshotCopy) == 0x18);

}  // namespace misc
