// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_013820a0 reads.
 *
 */
struct Object013820a0 {
    uint8_t unknown_0x0000[0x203];
    uint8_t value_0x0203; /**< Read by auto_return_field_013820a0; meaning unknown. */
};
static_assert(offsetof(Object013820a0, value_0x0203) == 0x203);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_013820a0(const Object013820a0 *self)
{
    return self->value_0x0203;
}
