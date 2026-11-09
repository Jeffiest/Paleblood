// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00cf8ee0()
{
}

/**
 *
 * The part of the object that auto_return_float_field_00cf9260 reads.
 *
 */
struct Object00cf9260 {
    uint8_t unknown_0x0000[0x4c];
    float value_0x004c; /**< Read by auto_return_float_field_00cf9260; meaning unknown. */
};
static_assert(offsetof(Object00cf9260, value_0x004c) == 0x4c);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_00cf9260(const Object00cf9260 *self)
{
    return self->value_0x004c;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00cfc310()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00cfc320()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00cfc770()
{
}
