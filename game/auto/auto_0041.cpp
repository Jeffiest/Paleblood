// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_00410100 reads.
 *
 */
struct Object00410100 {
    uint8_t unknown_0x0000[0x10];
    uint64_t value_0x0010; /**< Read by auto_return_field_00410100; meaning unknown. */
};
static_assert(offsetof(Object00410100, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_00410100(const Object00410100 *self)
{
    return self->value_0x0010;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00410290()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_004102a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0041cac0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0041d010 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0041d010()
{
    return value_0041d010;
}
