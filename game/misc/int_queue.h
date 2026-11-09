// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: an integer queue and the source that supplies its integers.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

struct IntSource;

/**
 *
 * The virtual table of IntSource; the read slot is at 0x18.
 *
 */
struct IntSourceVtable {
    uint8_t unknown_0x0000[0x18];
    int32_t (*read_0x18)(IntSource *source);
};
static_assert(offsetof(IntSourceVtable, read_0x18) == 0x18);

/**
 *
 * An object that produces one 32-bit integer when it is read.
 *
 */
struct IntSource {
    const IntSourceVtable *vtable; /**< Virtual table pointer. */
};

/**
 *
 * An integer queue: a hint for its cell allocations, and the list the cells are pushed onto.
 *
 */
struct IntQueue {
    uint8_t unknown_0x00[0x10];
    void *hint_0x10;              /**< Passed to the cell allocation as its third argument. */
    uint8_t unknown_0x18[0x20];
    uint8_t unknown_0x38[0x10];   /**< The list that the cell pointer is pushed onto. */
};
static_assert(offsetof(IntQueue, hint_0x10) == 0x10);
static_assert(offsetof(IntQueue, unknown_0x38) == 0x38);

}  // namespace misc
