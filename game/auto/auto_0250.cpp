// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02500de0()
{
}

/**
 *
 * The part of the object that auto_return_field_025039c0 reads.
 *
 */
struct Object025039c0 {
    uint8_t unknown_0x0000[0x8];
    uint64_t value_0x0008; /**< Read by auto_return_field_025039c0; meaning unknown. */
};
static_assert(offsetof(Object025039c0, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_025039c0(const Object025039c0 *self)
{
    return self->value_0x0008;
}
