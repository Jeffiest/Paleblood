// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_004c5810 reads.
 *
 */
struct Object004c5810 {
    uint8_t unknown_0x0000[0x8];
    uint64_t value_0x0008; /**< Read by auto_return_field_004c5810; meaning unknown. */
};
static_assert(offsetof(Object004c5810, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_004c5810(const Object004c5810 *self)
{
    return self->value_0x0008;
}
