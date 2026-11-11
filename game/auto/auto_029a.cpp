// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_029ab980()
{
}

/**
 *
 * The part of the object that auto_return_field_029ab9f0 reads.
 *
 */
struct Object029ab9f0 {
    uint8_t unknown_0x0000[0x98];
    uint32_t value_0x0098; /**< Read by auto_return_field_029ab9f0; meaning unknown. */
};
static_assert(offsetof(Object029ab9f0, value_0x0098) == 0x98);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_029ab9f0(const Object029ab9f0 *self)
{
    return self->value_0x0098;
}
