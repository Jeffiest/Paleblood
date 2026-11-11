// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_014181c0 reads.
 *
 */
struct Object014181c0 {
    uint8_t unknown_0x0000[0x28];
    uint8_t value_0x0028; /**< Read by auto_return_field_014181c0; meaning unknown. */
};
static_assert(offsetof(Object014181c0, value_0x0028) == 0x28);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_014181c0(const Object014181c0 *self)
{
    return self->value_0x0028;
}
