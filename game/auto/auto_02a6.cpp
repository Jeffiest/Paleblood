// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_02a6d840 reads.
 *
 */
struct Object02a6d840 {
    uint8_t unknown_0x0000[0xc0];
    uint64_t value_0x00c0; /**< Read by auto_return_field_02a6d840; meaning unknown. */
};
static_assert(offsetof(Object02a6d840, value_0x00c0) == 0xc0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02a6d840(const Object02a6d840 *self)
{
    return self->value_0x00c0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02a6ffd0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02a6ffd0()
{
    return value_02a6ffd0;
}
