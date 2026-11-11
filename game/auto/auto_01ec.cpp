// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_01ec0db0 reads.
 *
 */
struct Object01ec0db0 {
    uint8_t unknown_0x0000[0x58];
    uint8_t value_0x0058; /**< Read by auto_return_field_01ec0db0; meaning unknown. */
};
static_assert(offsetof(Object01ec0db0, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_01ec0db0(const Object01ec0db0 *self)
{
    return self->value_0x0058;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01ec1ab0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01ec1b70()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01ec1bd0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01ec1c30()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01ec1c90()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01ec1cf0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01ec1d50()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01ec1db0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01ec23c0 = 0x6a8;

extern "C" uint32_t bb_auto_return_constant_01ec23c0()
{
    return value_01ec23c0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01ec26e0 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_01ec26e0()
{
    return value_01ec26e0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01ec2a00 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_01ec2a00()
{
    return value_01ec2a00;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01ec4520()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01ec4580()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01ec6e30()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01ecde90()
{
}
