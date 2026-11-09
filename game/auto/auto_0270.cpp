// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_02701f60 reads.
 *
 */
struct Object02701f60 {
    uint8_t unknown_0x0000[0x30];
    uint64_t value_0x0030; /**< Read by auto_return_field_02701f60; meaning unknown. */
};
static_assert(offsetof(Object02701f60, value_0x0030) == 0x30);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02701f60(const Object02701f60 *self)
{
    return self->value_0x0030;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02705060 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02705060()
{
    return value_02705060;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_027050e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_027088f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_027091c0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_027091d0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_027091d0()
{
    return value_027091d0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_027091e0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_027091e0()
{
    return value_027091e0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_027091f0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_027092d0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_027092d0()
{
    return value_027092d0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0270c160()
{
}
