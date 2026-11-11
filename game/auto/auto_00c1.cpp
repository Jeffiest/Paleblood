// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_00c1cb40 reads.
 *
 */
struct Object00c1cb40 {
    uint8_t unknown_0x0000[0x88];
    uint64_t value_0x0088; /**< Read by auto_return_field_00c1cb40; meaning unknown. */
};
static_assert(offsetof(Object00c1cb40, value_0x0088) == 0x88);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_00c1cb40(const Object00c1cb40 *self)
{
    return self->value_0x0088;
}
