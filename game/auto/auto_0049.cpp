// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_004921c0 reads.
 *
 */
struct Object004921c0 {
    uint8_t unknown_0x0000[0x29];
    uint8_t value_0x0029; /**< Read by auto_return_field_004921c0; meaning unknown. */
};
static_assert(offsetof(Object004921c0, value_0x0029) == 0x29);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_004921c0(const Object004921c0 *self)
{
    return self->value_0x0029;
}
