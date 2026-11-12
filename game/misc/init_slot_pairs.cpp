// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: sets up an object's slot pairs with seven calls to the slot setter, the last one's result returned.
#include <cstdint>

#include "runtime/original.h"

namespace {

RT_ORIGINAL(0x01391960, fn_01391960,
            uint64_t(void *object, uint32_t first, uint32_t second, uint32_t third, uint32_t fourth, uint32_t fifth,
                     uint32_t sixth, uint32_t seventh, uint32_t eighth, uint32_t ninth));

/** Value that marks a slot as unset. */
constexpr uint32_t unset_value = 0xffffffff;
/** Group index of the second slot setup. */
constexpr uint32_t group_two = 2;
/** Group index of the slot setups that follow. */
constexpr uint32_t group_three = 3;
constexpr uint32_t value_25 = 0x25;
constexpr uint32_t value_26 = 0x26;
constexpr uint32_t value_28 = 0x28;
constexpr uint32_t value_29 = 0x29;
constexpr uint32_t value_2a = 0x2a;
constexpr uint32_t value_2b = 0x2b;
constexpr uint32_t value_2c = 0x2c;
constexpr uint32_t value_2d = 0x2d;
constexpr uint32_t value_2e = 0x2e;
constexpr uint32_t value_2f = 0x2f;

}  // namespace

/**
 *
 * Sets up the object's slot pairs with seven calls to the slot setter in order. The result is what the last call
 * returns, which the caller reads from the return register.
 *
 */
extern "C" uint64_t bb_misc_init_slot_pairs_013b51a0(void *object)
{
    fn_01391960(object, 0, 0, 0, unset_value, 0, unset_value, 0, unset_value, 0);
    fn_01391960(object, 1, 1, 0, unset_value, 0, unset_value, 0, unset_value, 0);
    fn_01391960(object, group_two, value_25, 0, value_26, 0, unset_value, 0, unset_value, 0);
    fn_01391960(object, group_three, value_28, 0, value_2d, 0, value_2e, 0, value_2f, 0);
    fn_01391960(object, group_three, value_2c, 0, value_29, 0, value_2e, 0, value_2f, 0);
    fn_01391960(object, group_three, value_2c, 0, value_2d, 0, value_2a, 0, value_2f, 0);
    return fn_01391960(object, group_three, value_2c, 0, value_2d, 0, value_2e, 0, value_2b, 0);
}
