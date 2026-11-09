// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstdint>

#include "dispatch_kind_object.h"
#include "runtime/original.h"

namespace {

/** Kind word that selects the first target. */
constexpr uint32_t first_target_kind = 0x1;
/** Kind word that selects the second target. */
constexpr uint32_t second_target_kind = 0x0;
/** Result for every other kind word: no target handles the call. */
constexpr uint64_t unhandled_result = 0x1;

// The two targets take the object and the four further argument registers, and return their result.
RT_ORIGINAL(0x00be7720, first_target, uint64_t(misc::DispatchKindObject *, uint64_t, uint64_t, uint64_t, uint32_t));
RT_ORIGINAL(0x00be7030, second_target, uint64_t(misc::DispatchKindObject *, uint64_t, uint64_t, uint64_t, uint32_t));

}  // namespace

/**
 *
 * Forwards the call to the first target when the object's kind word is one, to the second when it is
 * zero, and returns one for any other kind. The four further argument registers are passed on as they
 * were received, so each target sees the same arguments as the caller gave.
 *
 */
extern "C" uint64_t bb_misc_dispatch_by_kind(misc::DispatchKindObject *object, uint64_t second_argument,
                                             uint64_t third_argument, uint64_t fourth_argument,
                                             uint32_t fifth_argument)
{
    if (object->kind_0x18 == first_target_kind)
        return first_target(object, second_argument, third_argument, fourth_argument, fifth_argument);
    if (object->kind_0x18 == second_target_kind)
        return second_target(object, second_argument, third_argument, fourth_argument, fifth_argument);
    return unhandled_result;
}
