// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_0144ad20 reads.
 *
 */
struct Object0144ad20 {
    uint8_t unknown_0x0000[0x88];
    uint32_t value_0x0088; /**< Read by auto_return_field_0144ad20; meaning unknown. */
};
static_assert(offsetof(Object0144ad20, value_0x0088) == 0x88);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_0144ad20(const Object0144ad20 *self)
{
    return self->value_0x0088;
}
