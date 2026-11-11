// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_00fb7f40 reads.
 *
 */
struct Object00fb7f40 {
    uint8_t unknown_0x0000[0x20];
    uint64_t value_0x0020; /**< Read by auto_return_field_00fb7f40; meaning unknown. */
};
static_assert(offsetof(Object00fb7f40, value_0x0020) == 0x20);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_00fb7f40(const Object00fb7f40 *self)
{
    return self->value_0x0020;
}
