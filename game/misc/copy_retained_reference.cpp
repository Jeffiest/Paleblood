// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstdint>

#include "../engine/ref_object.h"

/**
 *
 * Copies a reference-counted pointer into a slot and takes a reference to the object it points at.
 *
 * The copied pointer is also the result: the original leaves it in RAX, and nothing else in the
 * function writes RAX.
 *
 */
extern "C" uintptr_t bb_misc_copy_retained_reference(engine::RefObject **destination, engine::RefObject **source)
{
    engine::RefObject *object = *source;
    *destination = object;
    if (object != nullptr)
        engine::retain(object);
    return reinterpret_cast<uintptr_t>(object);
}
