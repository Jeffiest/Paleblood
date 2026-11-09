// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01bded80()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01bdee50()
{
}

/**
 *
 * The part of the object that auto_return_float_field_01bdf570 reads.
 *
 */
struct Object01bdf570 {
    uint8_t unknown_0x0000[0x28];
    float value_0x0028; /**< Read by auto_return_float_field_01bdf570; meaning unknown. */
};
static_assert(offsetof(Object01bdf570, value_0x0028) == 0x28);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_01bdf570(const Object01bdf570 *self)
{
    return self->value_0x0028;
}
