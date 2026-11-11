// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_02270390 reads.
 *
 */
struct Object02270390 {
    uint8_t unknown_0x0000[0x58];
    uint8_t value_0x0058; /**< Read by auto_return_field_02270390; meaning unknown. */
};
static_assert(offsetof(Object02270390, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02270390(const Object02270390 *self)
{
    return self->value_0x0058;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02271030()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02271600 = 0xe0;

extern "C" uint32_t bb_auto_return_constant_02271600()
{
    return value_02271600;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02271920 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_02271920()
{
    return value_02271920;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02271c40 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_02271c40()
{
    return value_02271c40;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02273740()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_022737a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_022748f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02274950()
{
}

/**
 *
 * The part of the object that auto_return_field_02279fb0 reads.
 *
 */
struct Object02279fb0 {
    uint8_t unknown_0x0000[0x58];
    uint8_t value_0x0058; /**< Read by auto_return_field_02279fb0; meaning unknown. */
};
static_assert(offsetof(Object02279fb0, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02279fb0(const Object02279fb0 *self)
{
    return self->value_0x0058;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0227aa10()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0227aad0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0227ab30()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0227b0b0 = 0xd8;

extern "C" uint32_t bb_auto_return_constant_0227b0b0()
{
    return value_0227b0b0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0227b3d0 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_0227b3d0()
{
    return value_0227b3d0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0227b6f0 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_0227b6f0()
{
    return value_0227b6f0;
}
