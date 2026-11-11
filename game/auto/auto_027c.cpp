// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_027c2850 = 0x1;

extern "C" uint8_t bb_auto_return_constant_027c2850()
{
    return value_027c2850;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_027c7530()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_027c7580()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_027c7610()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_027c7810()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_027c7b00()
{
}

/**
 *
 * The part of the object that auto_return_field_027c7c00 reads.
 *
 */
struct Object027c7c00 {
    uint8_t unknown_0x0000[0x98];
    uint32_t value_0x0098; /**< Read by auto_return_field_027c7c00; meaning unknown. */
};
static_assert(offsetof(Object027c7c00, value_0x0098) == 0x98);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_027c7c00(const Object027c7c00 *self)
{
    return self->value_0x0098;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_027c8350()
{
}

/**
 *
 * The part of the object that auto_return_field_027c8440 reads.
 *
 */
struct Object027c8440 {
    uint8_t unknown_0x0000[0x320];
    uint32_t value_0x0320; /**< Read by auto_return_field_027c8440; meaning unknown. */
};
static_assert(offsetof(Object027c8440, value_0x0320) == 0x320);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_027c8440(const Object027c8440 *self)
{
    return self->value_0x0320;
}

/**
 *
 * The part of the object that auto_return_field_027c8450 reads.
 *
 */
struct Object027c8450 {
    uint8_t unknown_0x0000[0x360];
    uint32_t value_0x0360; /**< Read by auto_return_field_027c8450; meaning unknown. */
};
static_assert(offsetof(Object027c8450, value_0x0360) == 0x360);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_027c8450(const Object027c8450 *self)
{
    return self->value_0x0360;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_027cba60 = 0x1;

extern "C" uint8_t bb_auto_return_constant_027cba60()
{
    return value_027cba60;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_027cc870()
{
}
