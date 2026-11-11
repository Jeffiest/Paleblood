// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_018b2310()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_018badb0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_018badb0()
{
    return value_018badb0;
}

/**
 *
 * The part of the object that auto_return_field_018bcef0 reads.
 *
 */
struct Object018bcef0 {
    uint8_t unknown_0x0000[0x58];
    uint8_t value_0x0058; /**< Read by auto_return_field_018bcef0; meaning unknown. */
};
static_assert(offsetof(Object018bcef0, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_018bcef0(const Object018bcef0 *self)
{
    return self->value_0x0058;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_018bdac0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_018bdb80()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_018bdc50()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_018bdea0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_018bdfd0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_018be0e0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_018be620 = 0xf8;

extern "C" uint32_t bb_auto_return_constant_018be620()
{
    return value_018be620;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_018be940 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_018be940()
{
    return value_018be940;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_018bec60 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_018bec60()
{
    return value_018bec60;
}
