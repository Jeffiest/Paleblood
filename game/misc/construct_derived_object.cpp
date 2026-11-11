// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

#include "../engine/engine.h"
#include "runtime/original.h"

namespace {

// The derived type's vtable, whose address point the object stores.
RT_GLOBAL(0x05670010, derived_vtable, const uint8_t);

// The base constructor, which runs on the same object before the derived one stores its vtable.
RT_ORIGINAL(0x00cb46a0, fn_00cb46a0, void(void *object));

}  // namespace

/**
 *
 * Constructs the derived object: it runs the base constructor on the object, then stores the derived
 * vtable address point in its first word.
 *
 * The address point is also returned in RAX, which the original leaves holding it.
 */
extern "C" uint64_t bb_misc_construct_derived_object(void *object)
{
    fn_00cb46a0(object);
    const uintptr_t vtable = reinterpret_cast<uintptr_t>(derived_vtable.address()) + engine::vtable_address_point;
    *static_cast<uintptr_t *>(object) = vtable;
    return vtable;
}
