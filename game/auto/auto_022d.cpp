// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_022d2d10()
{
}

/**
 *
 * The part of the object that auto_return_field_022d4580 reads.
 *
 */
struct Object022d4580 {
    uint8_t unknown_0x0000[0x58];
    uint8_t value_0x0058; /**< Read by auto_return_field_022d4580; meaning unknown. */
};
static_assert(offsetof(Object022d4580, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_022d4580(const Object022d4580 *self)
{
    return self->value_0x0058;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_022d5230()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_022d52f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_022d5350()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_022d58c0 = 0xe0;

extern "C" uint32_t bb_auto_return_constant_022d58c0()
{
    return value_022d58c0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_022d5be0 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_022d5be0()
{
    return value_022d5be0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_022d5f00 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_022d5f00()
{
    return value_022d5f00;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_022d7220()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_022db6d0 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_022db6d0()
{
    return value_022db6d0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_022db9f0 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_022db9f0()
{
    return value_022db9f0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_022dbd10 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_022dbd10()
{
    return value_022dbd10;
}

/**
 *
 * The part of the object that auto_return_field_022dea10 reads.
 *
 */
struct Object022dea10 {
    uint8_t unknown_0x0000[0x530];
    uint32_t value_0x0530; /**< Read by auto_return_field_022dea10; meaning unknown. */
};
static_assert(offsetof(Object022dea10, value_0x0530) == 0x530);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_022dea10(const Object022dea10 *self)
{
    return self->value_0x0530;
}

/**
 *
 * The part of the object that auto_return_field_022dea30 reads.
 *
 */
struct Object022dea30 {
    uint8_t unknown_0x0000[0x534];
    uint8_t value_0x0534; /**< Read by auto_return_field_022dea30; meaning unknown. */
};
static_assert(offsetof(Object022dea30, value_0x0534) == 0x534);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_022dea30(const Object022dea30 *self)
{
    return self->value_0x0534;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_022dfab0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_022dfb10()
{
}
