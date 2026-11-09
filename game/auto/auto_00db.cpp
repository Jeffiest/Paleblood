// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_00db1b00 = 0x1;

extern "C" uint8_t bb_auto_return_constant_00db1b00()
{
    return value_00db1b00;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_00db6d40 = 0x1;

extern "C" uint32_t bb_auto_return_constant_00db6d40()
{
    return value_00db6d40;
}

/**
 *
 * The part of the object that auto_return_field_00db8da0 reads.
 *
 */
struct Object00db8da0 {
    uint8_t unknown_0x0000[0x18];
    uint64_t value_0x0018; /**< Read by auto_return_field_00db8da0; meaning unknown. */
};
static_assert(offsetof(Object00db8da0, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_00db8da0(const Object00db8da0 *self)
{
    return self->value_0x0018;
}
