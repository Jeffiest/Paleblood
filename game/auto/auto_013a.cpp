// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_013a7610 = 0x2;

extern "C" uint32_t bb_auto_return_constant_013a7610()
{
    return value_013a7610;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_013a7680()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_013a7690()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_013a7ab0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_013a7ac0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_013a7e10()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_013a8070 = 0x3e8;

extern "C" uint32_t bb_auto_return_constant_013a8070()
{
    return value_013a8070;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_013a8210()
{
}

/**
 *
 * The part of the object that auto_return_field_013aa840 reads.
 *
 */
struct Object013aa840 {
    uint8_t unknown_0x0000[0x20];
    uint32_t value_0x0020; /**< Read by auto_return_field_013aa840; meaning unknown. */
};
static_assert(offsetof(Object013aa840, value_0x0020) == 0x20);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_013aa840(const Object013aa840 *self)
{
    return self->value_0x0020;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_013ab520 = 0x41a00000;

extern "C" uint32_t bb_auto_return_constant_013ab520()
{
    return value_013ab520;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_013ab860()
{
}
