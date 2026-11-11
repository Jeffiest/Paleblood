// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02260410()
{
}

/**
 *
 * The part of the object that auto_return_field_02261de0 reads.
 *
 */
struct Object02261de0 {
    uint8_t unknown_0x0000[0x58];
    uint8_t value_0x0058; /**< Read by auto_return_field_02261de0; meaning unknown. */
};
static_assert(offsetof(Object02261de0, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02261de0(const Object02261de0 *self)
{
    return self->value_0x0058;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02262a90()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02262c40()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02263190 = 0x130;

extern "C" uint32_t bb_auto_return_constant_02263190()
{
    return value_02263190;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_022634b0 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_022634b0()
{
    return value_022634b0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_022637d0 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_022637d0()
{
    return value_022637d0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_022667a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02266800()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02268b60()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02268bc0()
{
}
