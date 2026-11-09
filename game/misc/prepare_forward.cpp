// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: runs the preparation routine on the argument, then forwards the argument to the shared object's method.
#include <cstddef>
#include <cstdint>

#include "runtime/original.h"

namespace misc {

struct SharedObject;

/**
 *
 * Method table of the shared object: the forward method at +0x68.
 *
 */
struct SharedVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*forward)(SharedObject *object, void *target); /**< Method that receives the argument. */
};
static_assert(offsetof(SharedVtable, forward) == 0x68);

/**
 *
 * The shared object, whose first word is its method table.
 *
 */
struct SharedObject {
    const SharedVtable *vtable; /**< Method table of the shared object. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x0040b6b0, prepare_target, void(void *target));
RT_GLOBAL(0x057e7320, shared_object, misc::SharedObject *);

}  // namespace

/**
 *
 * Runs the preparation on the target, then returns the shared object's forward method result for it.
 *
 * The forward method is called with the shared object and the same target.
 *
 */
extern "C" uint64_t bb_misc_prepare_forward(void *target)
{
    prepare_target(target);
    misc::SharedObject *object = shared_object.get();
    return object->vtable->forward(object, target);
}
