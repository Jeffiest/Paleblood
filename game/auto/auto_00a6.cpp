// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_00a67460 = 0x2;

extern "C" uint32_t bb_auto_return_constant_00a67460()
{
    return value_00a67460;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00a67920()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00a67940()
{
}

/**
 *
 * The part of the object that auto_return_field_00a6d570 reads.
 *
 */
struct Object00a6d570 {
    uint8_t unknown_0x0000[0x10];
    uint32_t value_0x0010; /**< Read by auto_return_field_00a6d570; meaning unknown. */
};
static_assert(offsetof(Object00a6d570, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_00a6d570(const Object00a6d570 *self)
{
    return self->value_0x0010;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_00a6d640 = 0x1;

extern "C" uint8_t bb_auto_return_constant_00a6d640()
{
    return value_00a6d640;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00a6d6d0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_00a6d6e0 = 0x1;

extern "C" uint32_t bb_auto_return_constant_00a6d6e0()
{
    return value_00a6d6e0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_00a6d6f0()
{
    return 0;
}
