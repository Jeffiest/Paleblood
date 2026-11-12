// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: an object that starts with its class vtable, holds a name pointer and a cleared word further in.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * The named object: its vtable pointer first, the name pointer at offset 0x18 and a word at offset 0x90 that is
 * cleared when the object is set up.
 *
 */
struct NamedVtableObject {
    const void *vtable;                 /**< The class vtable, stored as is. */
    uint8_t unknown_0x08[0x10];
    const void *name;                   /**< Name pointer, stored by the name routine. */
    uint8_t unknown_0x20[0x70];
    uint16_t cleared_0x90;              /**< Word cleared when the object is set up. */
};
static_assert(offsetof(NamedVtableObject, name) == 0x18 && offsetof(NamedVtableObject, cleared_0x90) == 0x90);

}  // namespace misc
