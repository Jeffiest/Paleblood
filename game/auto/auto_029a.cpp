// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_029a10c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_029a10d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_029a10e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_029a10f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_029a75a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_029a8250()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_029a9120()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_029a9170()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_029a9780()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_029a9a70 = 0x1;

extern "C" uint32_t bb_auto_return_constant_029a9a70()
{
    return value_029a9a70;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_029aa7b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_029aa800()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_029aa850()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_029ab6d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_029ab980()
{
}

/**
 *
 * The part of the object that auto_return_field_029ab9f0 reads.
 *
 */
struct Object029ab9f0 {
    uint8_t unknown_0x0000[0x98];
    uint32_t value_0x0098; /**< Read by auto_return_field_029ab9f0; meaning unknown. */
};
static_assert(offsetof(Object029ab9f0, value_0x0098) == 0x98);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_029ab9f0(const Object029ab9f0 *self)
{
    return self->value_0x0098;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_029ac600()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_029ac740()
{
}
