// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: initializes a keyed handle to its class's virtual table, the given target, no id, and the active flag.
#include <cstdint>

#include "keyed_handle.h"
#include "runtime/original.h"

namespace {

using misc::KeyedHandle;
using misc::KeyedHandleVtable;

RT_GLOBAL(0x05798a50, keyed_handle_vtable, KeyedHandleVtable);

/** The bit of the handle's flags that marks it as active. */
constexpr uint8_t flag_active = 0x01;

/** The id of a handle that has none assigned. */
constexpr int64_t no_id = -1;

}  // namespace

/**
 *
 * Sets up a keyed handle for the target: the class's virtual table, no id, and the active flag added to its flags.
 *
 * The flags are only ever added to, so bits already set in them stay set.
 *
 */
extern "C" void bb_misc_init_keyed_handle(KeyedHandle *handle, void *target)
{
    handle->vtable = keyed_handle_vtable.address();
    handle->target = target;
    handle->id = no_id;
    handle->flags_0x18 |= flag_active;
}
