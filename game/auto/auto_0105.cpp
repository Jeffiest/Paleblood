// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_0105c880 reads.
 *
 */
struct Object0105c880 {
    uint8_t unknown_0x0000[0x134];
    uint32_t value_0x0134; /**< Read by auto_return_field_0105c880; meaning unknown. */
};
static_assert(offsetof(Object0105c880, value_0x0134) == 0x134);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_0105c880(const Object0105c880 *self)
{
    return self->value_0x0134;
}
