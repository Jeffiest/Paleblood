// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_00e7bb10 = 0x1;

extern "C" uint8_t bb_auto_return_constant_00e7bb10()
{
    return value_00e7bb10;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00e7c130()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_00e7cba0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_00e7de90 reads.
 *
 */
struct Object00e7de90 {
    uint8_t unknown_0x0000[0x10];
    uint64_t value_0x0010; /**< Read by auto_return_field_00e7de90; meaning unknown. */
};
static_assert(offsetof(Object00e7de90, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_00e7de90(const Object00e7de90 *self)
{
    return self->value_0x0010;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00e7f150()
{
}
