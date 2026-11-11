// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_02514fd0 reads.
 *
 */
struct Object02514fd0 {
    uint8_t unknown_0x0000[0xb0];
    uint64_t value_0x00b0; /**< Read by auto_return_field_02514fd0; meaning unknown. */
};
static_assert(offsetof(Object02514fd0, value_0x00b0) == 0xb0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02514fd0(const Object02514fd0 *self)
{
    return self->value_0x00b0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_025176a0 = 0x1;

extern "C" uint32_t bb_auto_return_constant_025176a0()
{
    return value_025176a0;
}
