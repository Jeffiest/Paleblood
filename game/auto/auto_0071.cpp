// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_0071a490 reads.
 *
 */
struct Object0071a490 {
    uint8_t unknown_0x0000[0x8c];
    uint32_t value_0x008c; /**< Read by auto_return_field_0071a490; meaning unknown. */
};
static_assert(offsetof(Object0071a490, value_0x008c) == 0x8c);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_0071a490(const Object0071a490 *self)
{
    return self->value_0x008c;
}
