// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_011ac2a0 reads.
 *
 */
struct Object011ac2a0 {
    uint8_t unknown_0x0000[0xc0];
    uint32_t value_0x00c0; /**< Read by auto_return_field_011ac2a0; meaning unknown. */
};
static_assert(offsetof(Object011ac2a0, value_0x00c0) == 0xc0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_011ac2a0(const Object011ac2a0 *self)
{
    return self->value_0x00c0;
}
