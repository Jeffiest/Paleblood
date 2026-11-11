// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_float_field_00fa2d00 reads.
 *
 */
struct Object00fa2d00 {
    uint8_t unknown_0x0000[0xfc];
    float value_0x00fc; /**< Read by auto_return_float_field_00fa2d00; meaning unknown. */
};
static_assert(offsetof(Object00fa2d00, value_0x00fc) == 0xfc);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_00fa2d00(const Object00fa2d00 *self)
{
    return self->value_0x00fc;
}
