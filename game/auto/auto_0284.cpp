// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_02848970 reads.
 *
 */
struct Object02848970 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02848970; meaning unknown. */
};
static_assert(offsetof(Object02848970, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02848970(const Object02848970 *self)
{
    return self->value_0x0040;
}
