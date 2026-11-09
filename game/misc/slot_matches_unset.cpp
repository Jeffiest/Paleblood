// SPDX-License-Identifier: GPL-2.0-or-later
#include "value_slot.h"

#include <bit>
#include <cstdint>
#include <limits>

namespace {

/** Kind value of a slot whose number is a float. */
constexpr int32_t kind_float = 1;

/** Kind value of a slot whose number is an integer. */
constexpr int32_t kind_integer = 2;

/** The number that marks the slot as unset. */
constexpr int32_t unset_number = 0x7fffffff;

/** The value 2^31 as a float, the bound above which a float does not fit an int32. */
constexpr float int32_limit = 2147483648.0f;

/**
 *
 * Truncates a float toward zero to a 32-bit integer; NaN and values out of range give the integer indefinite value.
 *
 */
int32_t truncate_to_int32(float value)
{
    if (!(value >= -int32_limit && value < int32_limit)) return std::numeric_limits<int32_t>::min();
    return static_cast<int32_t>(value);
}

}  // namespace

/**
 *
 * Reports whether the slot holds the unset number, and whether its reference or child accepts it.
 *
 * The number is taken from the float or the integer bits, by the kind. Only when it equals the unset
 * number is the reference's flag checked, and then the child, when the reference does not settle it.
 * The result is 1 when the slot is accepted and 0 otherwise.
 */
extern "C" uint8_t bb_misc_slot_matches_unset(misc::ValueSlot *slot)
{
    int32_t number = 0;
    if (slot->kind_0xd0 == kind_float) {
        number = truncate_to_int32(std::bit_cast<float>(slot->bits_0xc8));
    } else if (slot->kind_0xd0 == kind_integer) {
        number = std::bit_cast<int32_t>(slot->bits_0xc8);
    } else {
        return 0;
    }
    if (number != unset_number) return 0;

    if (slot->ref_0x20 != nullptr && slot->ref_0x20->flag_0x10 != 0) return 1;
    misc::ValueSlotChild *child = slot->child_0x90;
    if (child == nullptr) return 0;
    return child->vtable->check_0x40(child) != 0 ? 1 : 0;
}
