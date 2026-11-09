// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009b28e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009b3300()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009b33d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009b3e50()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009b4380()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009b4390()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009b43a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009b43b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009b43c0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_009b4df0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_009b4e40 reads.
 *
 */
struct Object009b4e40 {
    uint8_t unknown_0x0000[0x8];
    uint64_t value_0x0008; /**< Read by auto_return_field_009b4e40; meaning unknown. */
};
static_assert(offsetof(Object009b4e40, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_009b4e40(const Object009b4e40 *self)
{
    return self->value_0x0008;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009b57d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009b58a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009b58b0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_009b5a80 = 0xffffffff;

extern "C" uint32_t bb_auto_return_constant_009b5a80()
{
    return value_009b5a80;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009b60c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009b6690()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009b6ae0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009b6af0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009b6b10()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009b6b20()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009b7690()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009b76a0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_009b7d60 = 0x2;

extern "C" uint32_t bb_auto_return_constant_009b7d60()
{
    return value_009b7d60;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009b9e90()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_009ba230()
{
    return 0;
}
