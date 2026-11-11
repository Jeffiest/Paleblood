// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02444960()
{
}

/**
 *
 * The part of the object that auto_return_field_024471b0 reads.
 *
 */
struct Object024471b0 {
    uint8_t unknown_0x0000[0xc8];
    uint8_t value_0x00c8; /**< Read by auto_return_field_024471b0; meaning unknown. */
};
static_assert(offsetof(Object024471b0, value_0x00c8) == 0xc8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_024471b0(const Object024471b0 *self)
{
    return self->value_0x00c8;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_024473c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02447420()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02449db0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0244a860()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0244cd50()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0244f290()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0244f2f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0244f350()
{
}
