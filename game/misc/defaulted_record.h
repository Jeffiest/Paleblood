// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a record of indices, counts, a scale and cleared words, with its virtual table first.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * A record with its virtual table first, then the indices, counts and scale its initializer sets.
 *
 */
struct DefaultedRecord {
    const void *vtable;               /**< Virtual table of the record. */
    uint8_t unknown_0x0008[0x10];
    int32_t index_0x18;               /**< The first index, set to the unset value. */
    int32_t index_0x1c;               /**< The second index, set to the unset value. */
    int32_t count_0x20;               /**< The first count. */
    int32_t count_0x24;               /**< The second count. */
    int32_t value_0x28;               /**< A value set to one. */
    int32_t value_0x2c;               /**< A value cleared. */
    int32_t value_0x30;               /**< A value cleared. */
    uint16_t flags_0x34;              /**< Flags, cleared. */
    uint8_t unknown_0x0036[0x2];
    float scale_0x38;                 /**< The default scale. */
    uint8_t unknown_0x003c[0x8];      /**< Eight bytes, cleared by the initializer. */
    uint8_t unknown_0x0044[0x8];      /**< Eight bytes, cleared by the initializer. */
    uint16_t word_0x4c;               /**< A word, cleared. */
};
static_assert(offsetof(DefaultedRecord, vtable) == 0x0);
static_assert(offsetof(DefaultedRecord, index_0x18) == 0x18 && offsetof(DefaultedRecord, index_0x1c) == 0x1c);
static_assert(offsetof(DefaultedRecord, count_0x20) == 0x20 && offsetof(DefaultedRecord, value_0x30) == 0x30);
static_assert(offsetof(DefaultedRecord, flags_0x34) == 0x34 && offsetof(DefaultedRecord, scale_0x38) == 0x38);
static_assert(offsetof(DefaultedRecord, unknown_0x003c) == 0x3c && offsetof(DefaultedRecord, word_0x4c) == 0x4c);

}  // namespace misc
