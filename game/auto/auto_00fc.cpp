// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_00fc8a00 reads.
 *
 */
struct Object00fc8a00 {
    uint8_t unknown_0x0000[0x56c];
    uint32_t value_0x056c; /**< Read by auto_return_field_00fc8a00; meaning unknown. */
};
static_assert(offsetof(Object00fc8a00, value_0x056c) == 0x56c);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_00fc8a00(const Object00fc8a00 *self)
{
    return self->value_0x056c;
}
