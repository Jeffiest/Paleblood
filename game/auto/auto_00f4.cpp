// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00f41100()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00f41740()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00f42110()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00f43250()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00f43e70()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00f43f10()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00f43f60()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00f44260()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00f44270()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00f46780()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00f467e0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_00f46a50()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_00f46a60()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_00f46a70()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_00f46a80()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_00f46a90()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00f48580()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00f485a0()
{
}

/**
 *
 * The part of the object that auto_return_field_00f4b680 reads.
 *
 */
struct Object00f4b680 {
    uint8_t unknown_0x0000[0x28];
    uint16_t value_0x0028; /**< Read by auto_return_field_00f4b680; meaning unknown. */
};
static_assert(offsetof(Object00f4b680, value_0x0028) == 0x28);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_00f4b680(const Object00f4b680 *self)
{
    return self->value_0x0028;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_00f4eaf0 = 0xc0;

extern "C" uint32_t bb_auto_return_constant_00f4eaf0()
{
    return value_00f4eaf0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00f4f9c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00f4f9d0()
{
}
