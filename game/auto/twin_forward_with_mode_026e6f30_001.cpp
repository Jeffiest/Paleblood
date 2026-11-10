// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_forward_with_mode, in game/misc/forward_with_mode.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include "../misc/root_state.h"
#include "runtime/original.h"

// auto_forward_with_mode_0263ea10: misc_forward_with_mode with other addresses.
namespace twin_0263ea10 {

// Misc: forwards two 32-bit values, with the resource manager's mode, to its request routine.


namespace {

RT_ORIGINAL(0x02586da0, fn_02586da0, uint64_t(misc::ResourceManager *, int32_t, uint32_t, uint32_t, int64_t));
RT_GLOBAL(0x05940dd8, root_state_instance, misc::RootState *);

/**
 *
 * The last argument of the request routine: all bits set.
 *
 */
constexpr int64_t all_ones_argument = -1;

}  // namespace

/**
 *
 * Passes the two 32-bit arguments on to the resource manager's request routine.
 *
 * The first argument is not used. The manager comes from the root state, and its mode is the second
 * argument of the routine. The routine's result is returned as it is.
 */
extern "C" uint64_t bb_auto_forward_with_mode_0263ea10(void *, uint32_t second, uint32_t third)
{
    misc::ResourceManager *manager = root_state_instance.get()->resources_0x5ad0;
    return fn_02586da0(manager, manager->mode_0x0080, second, third, all_ones_argument);
}

}  // namespace twin_0263ea10
