// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_02252650 reads.
 *
 */
struct Object02252650 {
    uint8_t unknown_0x0000[0x58];
    uint8_t value_0x0058; /**< Read by auto_return_field_02252650; meaning unknown. */
};
static_assert(offsetof(Object02252650, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02252650(const Object02252650 *self)
{
    return self->value_0x0058;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02253310()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_022538e0 = 0x100;

extern "C" uint32_t bb_auto_return_constant_022538e0()
{
    return value_022538e0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02253c00 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_02253c00()
{
    return value_02253c00;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02253f20 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_02253f20()
{
    return value_02253f20;
}

/**
 *
 * The part of the object that auto_return_field_02259040 reads.
 *
 */
struct Object02259040 {
    uint8_t unknown_0x0000[0x58];
    uint8_t value_0x0058; /**< Read by auto_return_field_02259040; meaning unknown. */
};
static_assert(offsetof(Object02259040, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02259040(const Object02259040 *self)
{
    return self->value_0x0058;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02259cf0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0225a360 = 0x110;

extern "C" uint32_t bb_auto_return_constant_0225a360()
{
    return value_0225a360;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0225a680 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_0225a680()
{
    return value_0225a680;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0225a9a0 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_0225a9a0()
{
    return value_0225a9a0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0225e610 = 0xe0;

extern "C" uint32_t bb_auto_return_constant_0225e610()
{
    return value_0225e610;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0225e930 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_0225e930()
{
    return value_0225e930;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0225ec50 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_0225ec50()
{
    return value_0225ec50;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0225efa0()
{
}
