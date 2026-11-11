// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_004409f0()
{
}

/**
 *
 * The part of the object that auto_return_field_00446880 reads.
 *
 */
struct Object00446880 {
    uint8_t unknown_0x0000[0x108];
    uint64_t value_0x0108; /**< Read by auto_return_field_00446880; meaning unknown. */
};
static_assert(offsetof(Object00446880, value_0x0108) == 0x108);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_00446880(const Object00446880 *self)
{
    return self->value_0x0108;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0044bf40 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0044bf40()
{
    return value_0044bf40;
}
