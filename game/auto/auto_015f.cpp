// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_015f62e0 = 0xc000;

extern "C" uint32_t bb_auto_return_constant_015f62e0()
{
    return value_015f62e0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_015f62f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_015f6300()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_015faaf0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_015fbca0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_015fbcb0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_015fbf50()
{
}

/**
 *
 * The part of the object that auto_return_field_015fbf60 reads.
 *
 */
struct Object015fbf60 {
    uint8_t unknown_0x0000[0x8];
    uint32_t value_0x0008; /**< Read by auto_return_field_015fbf60; meaning unknown. */
};
static_assert(offsetof(Object015fbf60, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_015fbf60(const Object015fbf60 *self)
{
    return self->value_0x0008;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_015fdc50()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_015fdc60()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_015fdc70()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_015fdc80()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_015fdc90()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_015fdca0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_015fdcb0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_015fdcc0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_015fdcd0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_015fdce0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_015fdcf0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_015fdd00()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_015fdd10()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_015fdd20()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_015fdd30()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_015fdd40()
{
}
