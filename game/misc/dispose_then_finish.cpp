// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: disposes a disposable object through its virtual table, then hands the same object to the finish helper.
#include <cstdint>

#include "disposable_object.h"
#include "runtime/original.h"

namespace {

RT_ORIGINAL(0x018bf0e0, fn_018bf0e0, uint64_t(misc::DisposableObject *object));

}  // namespace

/**
 *
 * Disposes the object through its dispose slot, then finishes it through the finish helper and returns the helper's
 * result as it is.
 *
 */
extern "C" uint64_t bb_misc_dispose_then_finish(misc::DisposableObject *object)
{
    object->vtable->dispose_0x38(object);
    return fn_018bf0e0(object);
}
