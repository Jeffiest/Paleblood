// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00a81210()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00a81690()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_00a87640 = 0x100;

extern "C" uint32_t bb_auto_return_constant_00a87640()
{
    return value_00a87640;
}

/**
 *
 * The part of the object that auto_return_field_00a88720 reads.
 *
 */
struct Object00a88720 {
    uint8_t unknown_0x0000[0x90];
    uint32_t value_0x0090; /**< Read by auto_return_field_00a88720; meaning unknown. */
};
static_assert(offsetof(Object00a88720, value_0x0090) == 0x90);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_00a88720(const Object00a88720 *self)
{
    return self->value_0x0090;
}

/**
 *
 * The part of the object that auto_return_field_00a88730 reads.
 *
 */
struct Object00a88730 {
    uint8_t unknown_0x0000[0x70];
    uint32_t value_0x0070; /**< Read by auto_return_field_00a88730; meaning unknown. */
};
static_assert(offsetof(Object00a88730, value_0x0070) == 0x70);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_00a88730(const Object00a88730 *self)
{
    return self->value_0x0070;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00a8a030()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_00a8ad50 = 0x1;

extern "C" uint8_t bb_auto_return_constant_00a8ad50()
{
    return value_00a8ad50;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_00a8ad60 = 0x1;

extern "C" uint8_t bb_auto_return_constant_00a8ad60()
{
    return value_00a8ad60;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_00a8ad70 = 0x1;

extern "C" uint8_t bb_auto_return_constant_00a8ad70()
{
    return value_00a8ad70;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_00a8ad80 = 0x1;

extern "C" uint8_t bb_auto_return_constant_00a8ad80()
{
    return value_00a8ad80;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_00a8ad90 = 0x1;

extern "C" uint8_t bb_auto_return_constant_00a8ad90()
{
    return value_00a8ad90;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_00a8ada0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_00a8ada0()
{
    return value_00a8ada0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_00a8adb0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_00a8adb0()
{
    return value_00a8adb0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_00a8adc0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_00a8adc0()
{
    return value_00a8adc0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00a8afe0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00a8aff0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00a8b2c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00a8baf0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00a8bb20()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_00a8ee00()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00a8fd20()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00a8fd40()
{
}
