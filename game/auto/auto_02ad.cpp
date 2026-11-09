// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02ad1b40()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02ad4290 = 0x400000;

extern "C" uint32_t bb_auto_return_constant_02ad4290()
{
    return value_02ad4290;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02ad42d0 = 0x400000;

extern "C" uint32_t bb_auto_return_constant_02ad42d0()
{
    return value_02ad42d0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02ad4300 = 0x20000;

extern "C" uint32_t bb_auto_return_constant_02ad4300()
{
    return value_02ad4300;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02ad6ae0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02ad6b10()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02ad6e20()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_02ad7440 reads.
 *
 */
struct Object02ad7440 {
    uint8_t unknown_0x0000[0x10];
    uint64_t value_0x0010; /**< Read by auto_return_field_02ad7440; meaning unknown. */
};
static_assert(offsetof(Object02ad7440, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02ad7440(const Object02ad7440 *self)
{
    return self->value_0x0010;
}

/**
 *
 * The part of the object that auto_return_field_02ad7450 reads.
 *
 */
struct Object02ad7450 {
    uint8_t unknown_0x0000[0x8];
    uint32_t value_0x0008; /**< Read by auto_return_field_02ad7450; meaning unknown. */
};
static_assert(offsetof(Object02ad7450, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02ad7450(const Object02ad7450 *self)
{
    return self->value_0x0008;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02adaaa0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02adabb0 = 0x14;

extern "C" uint32_t bb_auto_return_constant_02adabb0()
{
    return value_02adabb0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02adaca0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02adacb0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02adacb0()
{
    return value_02adacb0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02adad20 = 0x24;

extern "C" uint32_t bb_auto_return_constant_02adad20()
{
    return value_02adad20;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02adadd0 = 0x1;

extern "C" uint32_t bb_auto_return_constant_02adadd0()
{
    return value_02adadd0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02adade0 = 0x1;

extern "C" uint32_t bb_auto_return_constant_02adade0()
{
    return value_02adade0;
}

/**
 *
 * The part of the object that auto_return_field_02adb050 reads.
 *
 */
struct Object02adb050 {
    uint8_t unknown_0x0000[0x10];
    uint64_t value_0x0010; /**< Read by auto_return_field_02adb050; meaning unknown. */
};
static_assert(offsetof(Object02adb050, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02adb050(const Object02adb050 *self)
{
    return self->value_0x0010;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02adb1a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02adbbd0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02adbc10()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02adbcb0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02adbd90()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02adbda0()
{
}

/**
 *
 * The part of the object that auto_return_field_02ade770 reads.
 *
 */
struct Object02ade770 {
    uint8_t unknown_0x0000[0x8];
    uint32_t value_0x0008; /**< Read by auto_return_field_02ade770; meaning unknown. */
};
static_assert(offsetof(Object02ade770, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02ade770(const Object02ade770 *self)
{
    return self->value_0x0008;
}
