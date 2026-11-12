// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: releases the pending handle of a holder through the release context, when both are set.
#include <cstdint>

#include "pending_release_holder.h"
#include "runtime/original.h"

namespace {

RT_ORIGINAL(0x01389320, fn_01389320, void(void *context, uint64_t handle));

/** The release context, a pointer kept in the executable's data. */
RT_GLOBAL(0x058b2e30, release_context, void *);

}  // namespace

/**
 *
 * Releases the holder's pending handle through the release context, when the context is set and a handle is pending:
 * the handle goes to the release routine and is then cleared. Nothing is returned.
 *
 */
extern "C" void bb_misc_release_pending_field_013ba170(misc::PendingReleaseHolder *holder)
{
    void *context = release_context.get();
    if (context != nullptr && holder->pending_handle != 0) {
        fn_01389320(context, holder->pending_handle);
        holder->pending_handle = 0;
    }
}
