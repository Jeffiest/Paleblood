// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_014403d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_014448a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01444980()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01444f00()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01444f10()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01445070()
{
}

/**
 *
 * The part of the object that auto_return_field_01445650 reads.
 *
 */
struct Object01445650 {
    uint8_t unknown_0x0000[0x18];
    uint64_t value_0x0018; /**< Read by auto_return_field_01445650; meaning unknown. */
};
static_assert(offsetof(Object01445650, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01445650(const Object01445650 *self)
{
    return self->value_0x0018;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01445a50 = 0x10;

extern "C" uint32_t bb_auto_return_constant_01445a50()
{
    return value_01445a50;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01445e00()
{
}

/**
 *
 * The part of the object that auto_return_field_0144ad20 reads.
 *
 */
struct Object0144ad20 {
    uint8_t unknown_0x0000[0x88];
    uint32_t value_0x0088; /**< Read by auto_return_field_0144ad20; meaning unknown. */
};
static_assert(offsetof(Object0144ad20, value_0x0088) == 0x88);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_0144ad20(const Object0144ad20 *self)
{
    return self->value_0x0088;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0144e760()
{
}
