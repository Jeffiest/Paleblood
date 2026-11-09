// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_float_field_00fa2d00 reads.
 *
 */
struct Object00fa2d00 {
    uint8_t unknown_0x0000[0xfc];
    float value_0x00fc; /**< Read by auto_return_float_field_00fa2d00; meaning unknown. */
};
static_assert(offsetof(Object00fa2d00, value_0x00fc) == 0xfc);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_00fa2d00(const Object00fa2d00 *self)
{
    return self->value_0x00fc;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00fa39d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00fa5330()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_00fa5340 = 0x65;

extern "C" uint32_t bb_auto_return_constant_00fa5340()
{
    return value_00fa5340;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00fa84a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00fab5b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00facb50()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00face50()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00fae490()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00fae4a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00fae4b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00fafbc0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00fafbd0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00fafbe0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00fafbf0()
{
}
