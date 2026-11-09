// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00d84400()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00d84410()
{
}

/**
 *
 * The part of the object that auto_return_float_field_00d84430 reads.
 *
 */
struct Object00d84430 {
    uint8_t unknown_0x0000[0x140];
    float value_0x0140; /**< Read by auto_return_float_field_00d84430; meaning unknown. */
};
static_assert(offsetof(Object00d84430, value_0x0140) == 0x140);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_00d84430(const Object00d84430 *self)
{
    return self->value_0x0140;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00d85280()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00d854a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00d857b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00d857c0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_00d86dc0 = 0x1;

extern "C" uint32_t bb_auto_return_constant_00d86dc0()
{
    return value_00d86dc0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_00d87100 = 0x1;

extern "C" uint8_t bb_auto_return_constant_00d87100()
{
    return value_00d87100;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00d876e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00d876f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00d87d50()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00d87d60()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00d8a320()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00d8a330()
{
}
