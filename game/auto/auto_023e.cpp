// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_023e15f0 reads.
 *
 */
struct Object023e15f0 {
    uint8_t unknown_0x0000[0x58];
    uint8_t value_0x0058; /**< Read by auto_return_field_023e15f0; meaning unknown. */
};
static_assert(offsetof(Object023e15f0, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_023e15f0(const Object023e15f0 *self)
{
    return self->value_0x0058;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_023e22a0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_023e2870 = 0xf0;

extern "C" uint32_t bb_auto_return_constant_023e2870()
{
    return value_023e2870;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_023e2b90 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_023e2b90()
{
    return value_023e2b90;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_023e2eb0 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_023e2eb0()
{
    return value_023e2eb0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_023e74e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_023e7540()
{
}
