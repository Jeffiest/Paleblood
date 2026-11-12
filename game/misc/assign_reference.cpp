// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstdint>

#include "../engine/ref_object.h"

/**
 *
 * Makes a reference slot hold the object a source slot holds: the slot's old object is released
 * unless it is the same object, and the new one is retained.
 *
 * Returns the slot's address, which the original leaves in RAX.
 *
 */
extern "C" uintptr_t bb_misc_assign_reference(engine::RefObject **slot, engine::RefObject **source)
{
    engine::RefObject *old_object = *slot;
    engine::RefObject *new_object = *source;
    if (old_object != new_object) {
        if (old_object != nullptr) {
            engine::release(old_object);
            *slot = nullptr;
            new_object = *source;
        }
        *slot = new_object;
        if (new_object != nullptr)
            engine::retain(new_object);
    }
    return reinterpret_cast<uintptr_t>(slot);
}
