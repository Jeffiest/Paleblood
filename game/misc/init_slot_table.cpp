// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: sets up the slot table of an object with fixed slot values, then marks the slots and returns the last mark.
#include <cstdint>

#include "runtime/original.h"

namespace {

RT_ORIGINAL(0x0138e690, fn_0138e690, void(void *object, uint32_t slot, uint32_t value, uint32_t flags));
RT_ORIGINAL(0x0138dbf0, fn_0138dbf0, uint64_t(void *object, uint32_t slot, uint32_t mark));

/** The slots set with the first value. */
constexpr uint32_t slot_first_value = 0xf;
/** The first slot of the second group of slots. */
constexpr uint32_t slot_group_start = 0x25;
constexpr uint32_t slot_26 = 0x26;
constexpr uint32_t slot_27 = 0x27;
constexpr uint32_t slot_28 = 0x28;
constexpr uint32_t slot_29 = 0x29;
constexpr uint32_t slot_2a = 0x2a;
constexpr uint32_t slot_2b = 0x2b;
constexpr uint32_t slot_2c = 0x2c;
constexpr uint32_t slot_2d = 0x2d;
constexpr uint32_t slot_2e = 0x2e;
constexpr uint32_t slot_2f = 0x2f;
/** The value set in the slot 0x26. */
constexpr uint32_t value_26 = 0x3ef;
/** The value set in the slot 0x27. */
constexpr uint32_t value_27 = 0x3f0;
constexpr uint32_t value_b = 0xb;
constexpr uint32_t value_c = 0xc;
constexpr uint32_t value_d = 0xd;
constexpr uint32_t value_e = 0xe;
/** The mark set on every slot of the table. */
constexpr uint32_t slot_mark = 0x1;

}  // namespace

/**
 *
 * Sets the values of the slots of the table in order, marks the slots of the second group and the first slot, then
 * returns what the last mark call returns.
 *
 */
extern "C" uint64_t bb_misc_init_slot_table_013b4e20(void *object)
{
    fn_0138e690(object, 0, slot_first_value, 0);
    fn_0138e690(object, 1, slot_first_value, 0);
    fn_0138e690(object, slot_group_start, slot_first_value, 0);
    fn_0138e690(object, slot_26, value_26, 0);
    fn_0138e690(object, slot_27, value_27, 0);
    fn_0138dbf0(object, slot_group_start, slot_mark);
    fn_0138e690(object, slot_2c, value_b, 0);
    fn_0138e690(object, slot_2d, value_d, 0);
    fn_0138e690(object, slot_2e, value_c, 0);
    fn_0138e690(object, slot_2f, value_e, 0);
    fn_0138e690(object, slot_28, value_b, 0);
    fn_0138e690(object, slot_29, value_d, 0);
    fn_0138e690(object, slot_2a, value_c, 0);
    fn_0138e690(object, slot_2b, value_e, 0);
    fn_0138dbf0(object, slot_28, slot_mark);
    fn_0138dbf0(object, slot_29, slot_mark);
    fn_0138dbf0(object, slot_2a, slot_mark);
    fn_0138dbf0(object, slot_2b, slot_mark);
    fn_0138dbf0(object, 0, slot_mark);
    return fn_0138dbf0(object, 1, slot_mark);
}
