// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_023d0020 reads.
 *
 */
struct Object023d0020 {
    uint8_t unknown_0x0000[0x58];
    uint8_t value_0x0058; /**< Read by auto_return_field_023d0020; meaning unknown. */
};
static_assert(offsetof(Object023d0020, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_023d0020(const Object023d0020 *self)
{
    return self->value_0x0058;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_023d0ce0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_023d1350 = 0x5f8;

extern "C" uint32_t bb_auto_return_constant_023d1350()
{
    return value_023d1350;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_023d1670 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_023d1670()
{
    return value_023d1670;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_023d1990 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_023d1990()
{
    return value_023d1990;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_023d85e0 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_023d85e0()
{
    return value_023d85e0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_023d8900 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_023d8900()
{
    return value_023d8900;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_023d8c20 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_023d8c20()
{
    return value_023d8c20;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_023ddfe0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_023de040()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_023de580()
{
}
