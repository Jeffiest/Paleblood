// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_008ef8a0 reads.
 *
 */
struct Object008ef8a0 {
    uint8_t unknown_0x0000[0x80];
    uint64_t value_0x0080; /**< Read by auto_return_field_008ef8a0; meaning unknown. */
};
static_assert(offsetof(Object008ef8a0, value_0x0080) == 0x80);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_008ef8a0(const Object008ef8a0 *self)
{
    return self->value_0x0080;
}
