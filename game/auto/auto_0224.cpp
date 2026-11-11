// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02248190()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0224a2e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0224a340()
{
}

/**
 *
 * The part of the object that auto_return_field_0224d530 reads.
 *
 */
struct Object0224d530 {
    uint8_t unknown_0x0000[0x58];
    uint8_t value_0x0058; /**< Read by auto_return_field_0224d530; meaning unknown. */
};
static_assert(offsetof(Object0224d530, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_0224d530(const Object0224d530 *self)
{
    return self->value_0x0058;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0224e1f0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0224e7c0 = 0x130;

extern "C" uint32_t bb_auto_return_constant_0224e7c0()
{
    return value_0224e7c0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0224eae0 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_0224eae0()
{
    return value_0224eae0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0224ee00 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_0224ee00()
{
    return value_0224ee00;
}
