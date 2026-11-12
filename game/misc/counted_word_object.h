// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: an object that holds one counted word, with the virtual table it was built with and a mask.
#pragma once

#include <cstddef>
#include <cstdint>

#include "runtime/original.h"

namespace misc {

/** The virtual table the counted word objects are built with, in read-only data. */
RT_GLOBAL(0x05736240, counted_word_vtable, const uint8_t);

/**
 *
 * An object holding a counted word: the word lives in the shared keyed counter table while it is stored here.
 *
 */
struct CountedWordObject {
    const void *vtable_0x00;    /**< The virtual table the object was built with. */
    uint32_t mask_0x08;         /**< The mask a setter tests; the constructor sets it to a single high bit. */
    uint32_t word_0x0c;         /**< The counted word. */
};
static_assert(offsetof(CountedWordObject, vtable_0x00) == 0x0 && offsetof(CountedWordObject, mask_0x08) == 0x8);
static_assert(offsetof(CountedWordObject, word_0x0c) == 0xc);

/** The mask a freshly built object holds: only its high bit is set. */
constexpr uint32_t counted_word_default_mask = 0x80000000u;

}  // namespace misc
