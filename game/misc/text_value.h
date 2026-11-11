// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a value object whose vtable slot at 0x28 gives the text it holds.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

struct TextValue;

/** The value object's vtable: the slot at 0x28 returns its text. */
struct TextValueVtable {
    uint8_t unknown_0x0000[0x28];
    const uint16_t *(*text_0x28)(TextValue *self);
};
static_assert(offsetof(TextValueVtable, text_0x28) == 0x28);

/**
 *
 * A value object, whose first word is its vtable.
 *
 */
struct TextValue {
    const TextValueVtable *vtable;
};

}  // namespace misc
