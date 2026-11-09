// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_00fc6780 = 0x7;

extern "C" uint32_t bb_auto_return_constant_00fc6780()
{
    return value_00fc6780;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_00fc67d0 = 0x6;

extern "C" uint32_t bb_auto_return_constant_00fc67d0()
{
    return value_00fc67d0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00fc6a10()
{
}

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

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_00fc8d90()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_00fc8da0()
{
    return 0;
}
