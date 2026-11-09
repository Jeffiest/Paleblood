// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: returns the scaled table's entry for the class of the size times a multiplier, or zero past the limit.
#include "size_class_holder.h"

namespace {

/**
 *
 * The lower bounds of the scaled classes after the first: a product below a bound stays in the class
 * before it, so a product of at least the last bound falls in the last class.
 *
 */
constexpr uint32_t scaled_class_bounds[] = {3, 5, 0x11, 0x41, 0x81, 0x101, 0x201};

/** The largest product that still reads an entry; a larger product returns zero. */
constexpr uint32_t scaled_class_limit = 0x400;

}  // namespace

/**
 *
 * Returns the entry of the scaled table for the class the product of the size and the multiplier falls
 * in, computed in 32 bits, or zero when the product is above the limit.
 *
 */
extern "C" uint64_t bb_misc_scaled_size_class_entry(misc::SizeClassHolder *holder, uint32_t size, uint32_t multiplier)
{
    const uint32_t product = size * multiplier;
    if (product > scaled_class_limit) {
        return 0;
    }

    uint64_t scaled_class = 0;
    for (const uint32_t bound : scaled_class_bounds) {
        if (product < bound) {
            break;
        }
        ++scaled_class;
    }
    return holder->table_0x388[scaled_class];
}
