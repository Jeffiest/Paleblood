// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_013918c0 reads.
 *
 */
struct Object013918c0 {
    uint8_t unknown_0x0000[0x20];
    uint8_t value_0x0020; /**< Read by auto_return_field_013918c0; meaning unknown. */
};
static_assert(offsetof(Object013918c0, value_0x0020) == 0x20);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_013918c0(const Object013918c0 *self)
{
    return self->value_0x0020;
}
