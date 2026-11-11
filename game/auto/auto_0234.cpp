// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02343b40 = 0x110;

extern "C" uint32_t bb_auto_return_constant_02343b40()
{
    return value_02343b40;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02343e60 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_02343e60()
{
    return value_02343e60;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02344180 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_02344180()
{
    return value_02344180;
}

/**
 *
 * The part of the object that auto_return_field_02348080 reads.
 *
 */
struct Object02348080 {
    uint8_t unknown_0x0000[0x58];
    uint8_t value_0x0058; /**< Read by auto_return_field_02348080; meaning unknown. */
};
static_assert(offsetof(Object02348080, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02348080(const Object02348080 *self)
{
    return self->value_0x0058;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02348d20()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_023492f0 = 0x2a8;

extern "C" uint32_t bb_auto_return_constant_023492f0()
{
    return value_023492f0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02349610 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_02349610()
{
    return value_02349610;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02349930 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_02349930()
{
    return value_02349930;
}

/**
 *
 * The part of the object that auto_return_field_0234dd60 reads.
 *
 */
struct Object0234dd60 {
    uint8_t unknown_0x0000[0x58];
    uint8_t value_0x0058; /**< Read by auto_return_field_0234dd60; meaning unknown. */
};
static_assert(offsetof(Object0234dd60, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_0234dd60(const Object0234dd60 *self)
{
    return self->value_0x0058;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0234ea00()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0234efd0 = 0x258;

extern "C" uint32_t bb_auto_return_constant_0234efd0()
{
    return value_0234efd0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0234f2f0 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_0234f2f0()
{
    return value_0234f2f0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0234f610 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_0234f610()
{
    return value_0234f610;
}
