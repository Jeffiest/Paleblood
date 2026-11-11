// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02939cf0()
{
}

/**
 *
 * The part of the object that auto_return_field_02939e00 reads.
 *
 */
struct Object02939e00 {
    uint8_t unknown_0x0000[0x8];
    uint32_t value_0x0008; /**< Read by auto_return_field_02939e00; meaning unknown. */
};
static_assert(offsetof(Object02939e00, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02939e00(const Object02939e00 *self)
{
    return self->value_0x0008;
}
