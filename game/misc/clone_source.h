// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the source record that the clone routines copy their words from.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * A clone source: four words the clone routines copy into the new record, at +0x08, +0x10, +0x20 and +0x28.
 *
 */
struct CloneSource {
    uint8_t unknown_0x0000[0x8];   /**< Not copied by the clone routines. */
    uint64_t word_0x08;            /**< Copied to the clone's word at +0x08. */
    uint64_t word_0x10;            /**< Copied to the clone's word at +0x10. */
    uint8_t unknown_0x0018[0x8];   /**< Not copied by the clone routines. */
    uint64_t word_0x20;            /**< Copied to the clone's word at +0x20. */
    uint64_t word_0x28;            /**< Copied to the clone's word at +0x28. */
};
static_assert(offsetof(CloneSource, word_0x08) == 0x08);
static_assert(offsetof(CloneSource, word_0x10) == 0x10);
static_assert(offsetof(CloneSource, word_0x20) == 0x20);
static_assert(offsetof(CloneSource, word_0x28) == 0x28);

}  // namespace misc
