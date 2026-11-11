// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_02e526d0 reads.
 *
 */
struct Object02e526d0 {
    uint8_t unknown_0x0000[0xc0];
    uint32_t value_0x00c0; /**< Read by auto_return_field_02e526d0; meaning unknown. */
};
static_assert(offsetof(Object02e526d0, value_0x00c0) == 0xc0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02e526d0(const Object02e526d0 *self)
{
    return self->value_0x00c0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02e55460 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02e55460()
{
    return value_02e55460;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02e55470 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02e55470()
{
    return value_02e55470;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02e55480 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02e55480()
{
    return value_02e55480;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02e55490 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02e55490()
{
    return value_02e55490;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02e554a0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02e554a0()
{
    return value_02e554a0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02e554b0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02e554b0()
{
    return value_02e554b0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02e554c0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02e554c0()
{
    return value_02e554c0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02e554d0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02e554d0()
{
    return value_02e554d0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02e554e0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02e554e0()
{
    return value_02e554e0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02e554f0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02e554f0()
{
    return value_02e554f0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02e55500 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02e55500()
{
    return value_02e55500;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02e55510 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02e55510()
{
    return value_02e55510;
}

/**
 *
 * The part of the object that auto_return_field_02e55b40 reads.
 *
 */
struct Object02e55b40 {
    uint8_t unknown_0x0000[0x1820];
    uint64_t value_0x1820; /**< Read by auto_return_field_02e55b40; meaning unknown. */
};
static_assert(offsetof(Object02e55b40, value_0x1820) == 0x1820);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02e55b40(const Object02e55b40 *self)
{
    return self->value_0x1820;
}

/**
 *
 * The part of the object that auto_return_field_02e593c0 reads.
 *
 */
struct Object02e593c0 {
    uint8_t unknown_0x0000[0x30];
    uint8_t value_0x0030; /**< Read by auto_return_field_02e593c0; meaning unknown. */
};
static_assert(offsetof(Object02e593c0, value_0x0030) == 0x30);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02e593c0(const Object02e593c0 *self)
{
    return self->value_0x0030;
}
