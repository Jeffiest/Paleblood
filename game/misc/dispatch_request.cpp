// SPDX-License-Identifier: GPL-2.0-or-later
// Passes the two request words to the route's handler through its handle slot when the route has a
// handler; otherwise passes them to 0x0040f580. The result of whichever call is made is returned.
#include "misc.h"

/**
 *
 * Hands the two request words to the route's handler, or to the game when there is no handler, and returns the result.
 *
 */
extern "C" uint64_t bb_misc_dispatch_request(misc::Dispatch *dispatch, uint64_t first, uint64_t second)
{
    misc::Handler *handler = dispatch->route_0x10->handler_0x18;
    if (handler == nullptr) return misc::fn_0040f580(first, second);
    return handler->vtable->handle(handler, first, second);
}
