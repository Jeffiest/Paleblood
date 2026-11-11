// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_float_field_009d54e0 reads.
 *
 */
struct Object009d54e0 {
    uint8_t unknown_0x0000[0x1c];
    float value_0x001c; /**< Read by auto_return_float_field_009d54e0; meaning unknown. */
};
static_assert(offsetof(Object009d54e0, value_0x001c) == 0x1c);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_009d54e0(const Object009d54e0 *self)
{
    return self->value_0x001c;
}
