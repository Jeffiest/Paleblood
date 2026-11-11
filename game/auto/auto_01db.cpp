// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_01db0f40 reads.
 *
 */
struct Object01db0f40 {
    uint8_t unknown_0x0000[0x58];
    uint8_t value_0x0058; /**< Read by auto_return_field_01db0f40; meaning unknown. */
};
static_assert(offsetof(Object01db0f40, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_01db0f40(const Object01db0f40 *self)
{
    return self->value_0x0058;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01db1bf0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01db21c0 = 0x198;

extern "C" uint32_t bb_auto_return_constant_01db21c0()
{
    return value_01db21c0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01db24e0 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_01db24e0()
{
    return value_01db24e0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01db2800 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_01db2800()
{
    return value_01db2800;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01db8850 = 0x130;

extern "C" uint32_t bb_auto_return_constant_01db8850()
{
    return value_01db8850;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01db8b70 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01db8b70()
{
    return value_01db8b70;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01db8e90 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01db8e90()
{
    return value_01db8e90;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01dbd290 = 0x180;

extern "C" uint32_t bb_auto_return_constant_01dbd290()
{
    return value_01dbd290;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01dbd5b0 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01dbd5b0()
{
    return value_01dbd5b0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01dbd8d0 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01dbd8d0()
{
    return value_01dbd8d0;
}
