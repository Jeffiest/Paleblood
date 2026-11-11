// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_01890b30 reads.
 *
 */
struct Object01890b30 {
    uint8_t unknown_0x0000[0x8];
    uint64_t value_0x0008; /**< Read by auto_return_field_01890b30; meaning unknown. */
};
static_assert(offsetof(Object01890b30, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01890b30(const Object01890b30 *self)
{
    return self->value_0x0008;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01894620 = 0x110;

extern "C" uint32_t bb_auto_return_constant_01894620()
{
    return value_01894620;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_018997e0 = 0x218;

extern "C" uint32_t bb_auto_return_constant_018997e0()
{
    return value_018997e0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0189e2d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0189e3a0()
{
}
