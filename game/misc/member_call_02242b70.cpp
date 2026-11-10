// SPDX-License-Identifier: GPL-2.0-or-later
#include "member_thunk.h"

/**
 *
 * Calls the member-function thunk's target on the adjusted object and returns the target's result.
 *
 * The second and third arguments reach the target unchanged, as the original's tail jump leaves them.
 */
extern "C" uint64_t bb_misc_member_call_02242b70(const misc::MemberThunk *thunk, uint64_t second,
                                               uint64_t third)
{
    return misc::member_call(thunk, second, third);
}
