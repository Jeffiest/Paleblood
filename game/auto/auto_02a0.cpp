// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02a024f0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02a024f0()
{
    return value_02a024f0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02a06370()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_02a09290 reads.
 *
 */
struct Object02a09290 {
    uint8_t unknown_0x0000[0x88];
    uint32_t value_0x0088; /**< Read by auto_return_field_02a09290; meaning unknown. */
};
static_assert(offsetof(Object02a09290, value_0x0088) == 0x88);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02a09290(const Object02a09290 *self)
{
    return self->value_0x0088;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a0c990()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a0ca10()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a0dae0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a0db00()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a0f080()
{
}
