// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_004749c0 reads.
 *
 */
struct Object004749c0 {
    uint8_t unknown_0x0000[0xcc];
    uint32_t value_0x00cc; /**< Read by auto_return_field_004749c0; meaning unknown. */
};
static_assert(offsetof(Object004749c0, value_0x00cc) == 0xcc);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_004749c0(const Object004749c0 *self)
{
    return self->value_0x00cc;
}
