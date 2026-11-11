// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_023521e0 reads.
 *
 */
struct Object023521e0 {
    uint8_t unknown_0x0000[0x58];
    uint8_t value_0x0058; /**< Read by auto_return_field_023521e0; meaning unknown. */
};
static_assert(offsetof(Object023521e0, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_023521e0(const Object023521e0 *self)
{
    return self->value_0x0058;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02352e80()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02353450 = 0x158;

extern "C" uint32_t bb_auto_return_constant_02353450()
{
    return value_02353450;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02353770 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_02353770()
{
    return value_02353770;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02353a90 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_02353a90()
{
    return value_02353a90;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02357000 = 0xd8;

extern "C" uint32_t bb_auto_return_constant_02357000()
{
    return value_02357000;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02357320 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_02357320()
{
    return value_02357320;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02357640 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_02357640()
{
    return value_02357640;
}

/**
 *
 * The part of the object that auto_return_field_023592d0 reads.
 *
 */
struct Object023592d0 {
    uint8_t unknown_0x0000[0x50];
    uint8_t value_0x0050; /**< Read by auto_return_field_023592d0; meaning unknown. */
};
static_assert(offsetof(Object023592d0, value_0x0050) == 0x50);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_023592d0(const Object023592d0 *self)
{
    return self->value_0x0050;
}

/**
 *
 * The part of the object that auto_return_field_023592e0 reads.
 *
 */
struct Object023592e0 {
    uint8_t unknown_0x0000[0x70];
    uint32_t value_0x0070; /**< Read by auto_return_field_023592e0; meaning unknown. */
};
static_assert(offsetof(Object023592e0, value_0x0070) == 0x70);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_023592e0(const Object023592e0 *self)
{
    return self->value_0x0070;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02359af0 = 0x90;

extern "C" uint32_t bb_auto_return_constant_02359af0()
{
    return value_02359af0;
}
