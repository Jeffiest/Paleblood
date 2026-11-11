// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_00bf1a30 reads.
 *
 */
struct Object00bf1a30 {
    uint8_t unknown_0x0000[0x140];
    uint32_t value_0x0140; /**< Read by auto_return_field_00bf1a30; meaning unknown. */
};
static_assert(offsetof(Object00bf1a30, value_0x0140) == 0x140);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_00bf1a30(const Object00bf1a30 *self)
{
    return self->value_0x0140;
}
