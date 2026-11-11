// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_02c098d0 reads.
 *
 */
struct Object02c098d0 {
    uint8_t unknown_0x0000[0x3cc];
    uint8_t value_0x03cc; /**< Read by auto_return_field_02c098d0; meaning unknown. */
};
static_assert(offsetof(Object02c098d0, value_0x03cc) == 0x3cc);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02c098d0(const Object02c098d0 *self)
{
    return self->value_0x03cc;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02c0c390 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02c0c390()
{
    return value_02c0c390;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02c0c410 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02c0c410()
{
    return value_02c0c410;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02c0c430 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02c0c430()
{
    return value_02c0c430;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02c0c490 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02c0c490()
{
    return value_02c0c490;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02c0c4a0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02c0c4a0()
{
    return value_02c0c4a0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02c0c4f0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02c0c4f0()
{
    return value_02c0c4f0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02c0c510 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02c0c510()
{
    return value_02c0c510;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c0c520()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_02c0cdc0 reads.
 *
 */
struct Object02c0cdc0 {
    uint8_t unknown_0x0000[0x28];
    uint8_t value_0x0028; /**< Read by auto_return_field_02c0cdc0; meaning unknown. */
};
static_assert(offsetof(Object02c0cdc0, value_0x0028) == 0x28);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02c0cdc0(const Object02c0cdc0 *self)
{
    return self->value_0x0028;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c0d340()
{
}

/**
 *
 * The part of the object that auto_return_field_02c0e510 reads.
 *
 */
struct Object02c0e510 {
    uint8_t unknown_0x0000[0xec];
    uint8_t value_0x00ec; /**< Read by auto_return_field_02c0e510; meaning unknown. */
};
static_assert(offsetof(Object02c0e510, value_0x00ec) == 0xec);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02c0e510(const Object02c0e510 *self)
{
    return self->value_0x00ec;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02c0e970 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02c0e970()
{
    return value_02c0e970;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02c0f360 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02c0f360()
{
    return value_02c0f360;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02c0f960 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02c0f960()
{
    return value_02c0f960;
}
