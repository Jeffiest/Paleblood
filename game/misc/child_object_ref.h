// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a reference that holds a child virtual object at +0x08, which its forwarding routines call through.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

struct VirtualObject;

/**
 *
 * A reference whose first word is not read by the forwarding routines, and whose child object is at +0x08.
 *
 */
struct ChildObjectRef {
    uint8_t unknown_0x0000[0x8];
    VirtualObject *child_0x08; /**< The child object the routine forwards to its vtable. */
};
static_assert(offsetof(ChildObjectRef, child_0x08) == 0x8);

}  // namespace misc
