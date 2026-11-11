// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01795960 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01795960()
{
    return value_01795960;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01795c80 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01795c80()
{
    return value_01795c80;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01795fa0 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01795fa0()
{
    return value_01795fa0;
}

/**
 *
 * The part of the object that auto_return_field_017964f0 reads.
 *
 */
struct Object017964f0 {
    uint8_t unknown_0x0000[0xd4];
    uint8_t value_0x00d4; /**< Read by auto_return_field_017964f0; meaning unknown. */
};
static_assert(offsetof(Object017964f0, value_0x00d4) == 0xd4);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_017964f0(const Object017964f0 *self)
{
    return self->value_0x00d4;
}

/**
 *
 * The part of the object that auto_return_field_01798e80 reads.
 *
 */
struct Object01798e80 {
    uint8_t unknown_0x0000[0x80];
    uint64_t value_0x0080; /**< Read by auto_return_field_01798e80; meaning unknown. */
};
static_assert(offsetof(Object01798e80, value_0x0080) == 0x80);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01798e80(const Object01798e80 *self)
{
    return self->value_0x0080;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0179d420()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0179d4f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0179ea20()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0179eaf0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0179eb50()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_017919d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01792080()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01792530()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01792b30()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01793040()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01793510()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01793910()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01793b60()
{
}
