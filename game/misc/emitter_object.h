// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: an object that a lookup hands out, which emits a value to a sink through its vtable.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

struct EmitterObject;

/**
 *
 * The virtual functions of an emitter: slot 0x20 emits a value to a sink with a mode and flags.
 *
 */
struct EmitterVtable {
    uint8_t unknown_0x0000[0x20];
    uint64_t (*emit)(EmitterObject *self, uint64_t value, void *sink, uint32_t mode, uint32_t flags); /**< Slot at 0x20. */
};
static_assert(offsetof(EmitterVtable, emit) == 0x20);

/**
 *
 * An emitter: its vtable pointer is its first word.
 *
 */
struct EmitterObject {
    const EmitterVtable *vtable; /**< Dispatch table for the emitter's methods. */
};
static_assert(offsetof(EmitterObject, vtable) == 0x00);

}  // namespace misc
