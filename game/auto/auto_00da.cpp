// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00da49a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00da49b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00da88b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00da88c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00da8df0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00da8e00()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_00daa190 = 0x1;

extern "C" uint32_t bb_auto_return_constant_00daa190()
{
    return value_00daa190;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_00daa920 = 0x1;

extern "C" uint8_t bb_auto_return_constant_00daa920()
{
    return value_00daa920;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_00daad20 = 0x1;

extern "C" uint8_t bb_auto_return_constant_00daad20()
{
    return value_00daad20;
}

/**
 *
 * The part of the object that auto_return_field_00daaf20 reads.
 *
 */
struct Object00daaf20 {
    uint8_t unknown_0x0000[0x88];
    uint64_t value_0x0088; /**< Read by auto_return_field_00daaf20; meaning unknown. */
};
static_assert(offsetof(Object00daaf20, value_0x0088) == 0x88);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_00daaf20(const Object00daaf20 *self)
{
    return self->value_0x0088;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00dacd90()
{
}
