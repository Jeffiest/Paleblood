// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_01826810 reads.
 *
 */
struct Object01826810 {
    uint8_t unknown_0x0000[0x78];
    uint64_t value_0x0078; /**< Read by auto_return_field_01826810; meaning unknown. */
};
static_assert(offsetof(Object01826810, value_0x0078) == 0x78);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01826810(const Object01826810 *self)
{
    return self->value_0x0078;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01829350()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_018294e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01829540()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_018295a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01829600()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01829f80 = 0x1e00000;

extern "C" uint32_t bb_auto_return_constant_01829f80()
{
    return value_01829f80;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0182e270 = 0x118;

extern "C" uint32_t bb_auto_return_constant_0182e270()
{
    return value_0182e270;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0182e590 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_0182e590()
{
    return value_0182e590;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0182e8b0 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_0182e8b0()
{
    return value_0182e8b0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0182fc00()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0182fc60()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0182fcc0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0182fd20()
{
}
