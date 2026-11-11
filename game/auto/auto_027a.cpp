// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_027a0050 reads.
 *
 */
struct Object027a0050 {
    uint8_t unknown_0x0000[0xd8];
    uint64_t value_0x00d8; /**< Read by auto_return_field_027a0050; meaning unknown. */
};
static_assert(offsetof(Object027a0050, value_0x00d8) == 0xd8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_027a0050(const Object027a0050 *self)
{
    return self->value_0x00d8;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_027a2150()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_027a23f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_027a24f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_027a2510()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_027a2530()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_027a2570()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_027a2d40()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_027a3270()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_027a3f00()
{
}

/**
 *
 * The part of the object that auto_return_field_027a3fa0 reads.
 *
 */
struct Object027a3fa0 {
    uint8_t unknown_0x0000[0x18];
    uint32_t value_0x0018; /**< Read by auto_return_field_027a3fa0; meaning unknown. */
};
static_assert(offsetof(Object027a3fa0, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_027a3fa0(const Object027a3fa0 *self)
{
    return self->value_0x0018;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_027a3fd0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_027a3fd0()
{
    return value_027a3fd0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_027a40d0 = 0x1;

extern "C" uint32_t bb_auto_return_constant_027a40d0()
{
    return value_027a40d0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_027a4c40()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_027a4d00 = 0x1;

extern "C" uint32_t bb_auto_return_constant_027a4d00()
{
    return value_027a4d00;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_027a4d40 = 0x1;

extern "C" uint8_t bb_auto_return_constant_027a4d40()
{
    return value_027a4d40;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_027a56d0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_027a5b40 = 0x1;

extern "C" uint32_t bb_auto_return_constant_027a5b40()
{
    return value_027a5b40;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_027a5c90()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_027a5ce0 = 0x1;

extern "C" uint32_t bb_auto_return_constant_027a5ce0()
{
    return value_027a5ce0;
}
