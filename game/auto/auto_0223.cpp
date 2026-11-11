// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02233170()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_022331d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02233230()
{
}

/**
 *
 * The part of the object that auto_return_field_02234ca0 reads.
 *
 */
struct Object02234ca0 {
    uint8_t unknown_0x0000[0x58];
    uint8_t value_0x0058; /**< Read by auto_return_field_02234ca0; meaning unknown. */
};
static_assert(offsetof(Object02234ca0, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02234ca0(const Object02234ca0 *self)
{
    return self->value_0x0058;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02235950()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02235e10 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_02235e10()
{
    return value_02235e10;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02238100()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02238b20()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0223a050 = 0x88;

extern "C" uint32_t bb_auto_return_constant_0223a050()
{
    return value_0223a050;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0223b360()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0223b3c0()
{
}
