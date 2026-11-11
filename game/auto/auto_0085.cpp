// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_00857fa0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_00857fa0()
{
    return value_00857fa0;
}

/**
 *
 * The part of the object that auto_return_field_0085cff0 reads.
 *
 */
struct Object0085cff0 {
    uint8_t unknown_0x0000[0x10];
    uint8_t value_0x0010; /**< Read by auto_return_field_0085cff0; meaning unknown. */
};
static_assert(offsetof(Object0085cff0, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_0085cff0(const Object0085cff0 *self)
{
    return self->value_0x0010;
}
