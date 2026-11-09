// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_float_field_014e1dd0 reads.
 *
 */
struct Object014e1dd0 {
    uint8_t unknown_0x0000[0xc];
    float value_0x000c; /**< Read by auto_return_float_field_014e1dd0; meaning unknown. */
};
static_assert(offsetof(Object014e1dd0, value_0x000c) == 0xc);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_014e1dd0(const Object014e1dd0 *self)
{
    return self->value_0x000c;
}
