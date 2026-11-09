// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_00ab9ec0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_00ab9f70()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_00ab9f80()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_00ab9f90()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_00ab9fa0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00ab9fb0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00ab9fd0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00ab9ff0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00aba010()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00abab10()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00abab20()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_00abc1e0 = 0x4;

extern "C" uint32_t bb_auto_return_constant_00abc1e0()
{
    return value_00abc1e0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_00abc860 = 0x1;

extern "C" uint8_t bb_auto_return_constant_00abc860()
{
    return value_00abc860;
}

/**
 *
 * The part of the object that auto_return_field_00abc870 reads.
 *
 */
struct Object00abc870 {
    uint8_t unknown_0x0000[0x50];
    uint64_t value_0x0050; /**< Read by auto_return_field_00abc870; meaning unknown. */
};
static_assert(offsetof(Object00abc870, value_0x0050) == 0x50);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_00abc870(const Object00abc870 *self)
{
    return self->value_0x0050;
}

/**
 *
 * The part of the object that auto_return_field_00abd170 reads.
 *
 */
struct Object00abd170 {
    uint8_t unknown_0x0000[0x38];
    uint32_t value_0x0038; /**< Read by auto_return_field_00abd170; meaning unknown. */
};
static_assert(offsetof(Object00abd170, value_0x0038) == 0x38);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_00abd170(const Object00abd170 *self)
{
    return self->value_0x0038;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_00abd1a0 = 0x3;

extern "C" uint32_t bb_auto_return_constant_00abd1a0()
{
    return value_00abd1a0;
}
