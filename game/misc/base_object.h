// SPDX-License-Identifier: GPL-2.0-or-later
// A base object whose constructors store the base class's vtable at its address point.
#pragma once

#include <cstddef>
#include <cstdint>

#include "../engine/engine.h"
#include "runtime/original.h"

namespace misc {

/**
 *
 * The base class's vtable, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x0566fa90, base_vtable, const uint8_t);

/**
 *
 * A base object: its vtable, then 0x20 bytes that the owner uses.
 *
 */
struct BaseObject {
    const void *vtable;
    uint8_t unknown_0x08[0x20];
};
static_assert(sizeof(BaseObject) == 0x28);

/**
 *
 * Stores the base class's vtable address point in the object.
 *
 */
inline void base_init(BaseObject *self)
{
    self->vtable = base_vtable.address() + engine::vtable_address_point;
}

}  // namespace misc
