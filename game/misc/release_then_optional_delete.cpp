// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: releases an object through the release slot of its vtable, then frees it when the flag byte is set.
#include <cstddef>
#include <cstdint>

#include "runtime/original.h"

namespace {

struct ReleasableObject;

/** A vtable whose release slot sits at 0x28. */
struct ReleasableVtable {
    uint8_t unknown_0x0000[0x28];
    uint64_t (*release)(ReleasableObject *object);  /**< Releases the object and returns the callee's result. */
};
static_assert(offsetof(ReleasableVtable, release) == 0x28);

/** An object whose first word is its vtable. */
struct ReleasableObject {
    const ReleasableVtable *vtable;
};

RT_ORIGINAL(0x02fbe588, free_object, uint64_t(ReleasableObject *object));

}  // namespace

/**
 *
 * Releases the object through its vtable and, when the flag's low byte is set, frees it as well.
 *
 * The result is the release call's result, or the free call's result when the object is freed. Only the
 * low byte of the flag argument is looked at.
 */
extern "C" uint64_t bb_misc_release_then_optional_delete(ReleasableObject *object, bool free_storage)
{
    uint64_t released = object->vtable->release(object);
    if (free_storage) return free_object(object);
    return released;
}
