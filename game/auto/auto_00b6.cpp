// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_00b623b0 = 0x1;

extern "C" uint32_t bb_auto_return_constant_00b623b0()
{
    return value_00b623b0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_00b623c0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_00b623c0()
{
    return value_00b623c0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00b68050()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_00b680a0 = 0x1;

extern "C" uint32_t bb_auto_return_constant_00b680a0()
{
    return value_00b680a0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00b680c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00b697c0()
{
}

/**
 *
 * The part of the object that auto_return_field_00b6a020 reads.
 *
 */
struct Object00b6a020 {
    uint8_t unknown_0x0000[0x81];
    uint8_t value_0x0081; /**< Read by auto_return_field_00b6a020; meaning unknown. */
};
static_assert(offsetof(Object00b6a020, value_0x0081) == 0x81);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_00b6a020(const Object00b6a020 *self)
{
    return self->value_0x0081;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_00b6afa0 = 0x1;

extern "C" uint32_t bb_auto_return_constant_00b6afa0()
{
    return value_00b6afa0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00b6bc00()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_00b6bca0 = 0x1;

extern "C" uint32_t bb_auto_return_constant_00b6bca0()
{
    return value_00b6bca0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00b6c330()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_00b6c7d0 = 0x1;

extern "C" uint32_t bb_auto_return_constant_00b6c7d0()
{
    return value_00b6c7d0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_00b6cac0 = 0x1;

extern "C" uint32_t bb_auto_return_constant_00b6cac0()
{
    return value_00b6cac0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00b6d530()
{
}
