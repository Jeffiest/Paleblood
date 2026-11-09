// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the holder of five size-class tables, and the size class a request size falls in.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/** Number of size classes, and so of entries in each table. */
constexpr uint64_t size_class_count = 5;

/** Number of scaled classes, and so of entries in the scaled table. */
constexpr uint64_t scaled_class_count = 8;

/** Largest request size in the first size class. */
constexpr uint32_t size_class_first_bound = 2;

/** Largest request size in the second size class. */
constexpr uint32_t size_class_second_bound = 4;

/** Largest request size in the third size class. */
constexpr uint32_t size_class_third_bound = 16;

/** Largest request size in the fourth size class; larger sizes fall in the fifth. */
constexpr uint32_t size_class_fourth_bound = 64;

/** Index of the first size class. */
constexpr uint64_t size_class_up_to_first = 0;

/** Index of the second size class. */
constexpr uint64_t size_class_up_to_second = 1;

/** Index of the third size class. */
constexpr uint64_t size_class_up_to_third = 2;

/** Index of the fourth size class. */
constexpr uint64_t size_class_up_to_fourth = 3;

/** Index of the fifth size class, which takes every size above the fourth bound. */
constexpr uint64_t size_class_beyond_fourth = 4;

/**
 *
 * Returns the index of the size class a request size falls in, from the first class up to the fifth.
 *
 */
inline uint64_t size_class_for(uint32_t size)
{
    uint64_t size_class = size_class_up_to_first;
    if (size > size_class_first_bound) {
        size_class = size_class_up_to_second;
        if (size > size_class_second_bound) {
            size_class = size_class_up_to_third;
            if (size > size_class_third_bound) {
                size_class = size > size_class_fourth_bound ? size_class_beyond_fourth : size_class_up_to_fourth;
            }
        }
    }
    return size_class;
}

/**
 *
 * The holder: five tables of one entry per size class at +0x310, +0x338, +0x360, +0x3c8 and +0x3f0,
 *
 * and an eight-entry scaled table at +0x388.
 *
 */
struct SizeClassHolder {
    uint8_t unknown_0x0000[0x310];
    uint64_t table_0x310[size_class_count]; /**< First table, one entry per size class. */
    uint64_t table_0x338[size_class_count]; /**< Second table, one entry per size class. */
    uint64_t table_0x360[size_class_count]; /**< Third table, one entry per size class. */
    uint64_t table_0x388[scaled_class_count];               /**< Scaled table, one entry per scaled class. */
    uint64_t table_0x3c8[size_class_count]; /**< Fourth table, one entry per size class. */
    uint64_t table_0x3f0[size_class_count]; /**< Fifth table, one entry per size class. */
};
static_assert(offsetof(SizeClassHolder, table_0x310) == 0x310);
static_assert(offsetof(SizeClassHolder, table_0x338) == 0x338);
static_assert(offsetof(SizeClassHolder, table_0x360) == 0x360);
static_assert(offsetof(SizeClassHolder, table_0x388) == 0x388);
static_assert(offsetof(SizeClassHolder, table_0x3c8) == 0x3c8);
static_assert(offsetof(SizeClassHolder, table_0x3f0) == 0x3f0);

}  // namespace misc
