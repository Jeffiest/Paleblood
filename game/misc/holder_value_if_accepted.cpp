// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: returns the holder's value when a check accepts it, reading it under the holder's second lock.
#include <cstdint>

#include "node_build_holder.h"
#include "runtime/original.h"

namespace {

using misc::NodeBuildHolder;

RT_ORIGINAL(0x02fbe598, lock_holder_value, void(void *lock));
RT_ORIGINAL(0x02fbe5a8, unlock_holder_value, uint64_t(void *lock));
RT_ORIGINAL(0x0042e620, value_is_accepted, uint8_t(uint64_t value));

/** The result when the value is empty or the check does not accept it. */
constexpr uint64_t rejected_value = 0;

}  // namespace

/**
 *
 * Returns the holder's value when it is set and the check accepts it, and zero otherwise. The read and the
 * check run under the holder's second lock, which is released by the final call whose result is ignored.
 *
 */
extern "C" uint64_t bb_misc_holder_value_if_accepted(NodeBuildHolder *holder)
{
    lock_holder_value(holder->second_lock);
    uint64_t result = rejected_value;
    if (holder->value != 0 && value_is_accepted(holder->value) != 0) {
        result = holder->value;
    }
    unlock_holder_value(holder->second_lock);
    return result;
}
