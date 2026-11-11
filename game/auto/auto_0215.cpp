// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02150b00()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02150b60()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_021522b0 = 0x7;

extern "C" uint32_t bb_auto_return_constant_021522b0()
{
    return value_021522b0;
}

/**
 *
 * The part of the object that auto_return_float_field_02152790 reads.
 *
 */
struct Object02152790 {
    uint8_t unknown_0x0000[0x18];
    float value_0x0018; /**< Read by auto_return_float_field_02152790; meaning unknown. */
};
static_assert(offsetof(Object02152790, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_02152790(const Object02152790 *self)
{
    return self->value_0x0018;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02153370()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02154030()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02155230()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02155300()
{
}
