// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00f30db0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00f31700()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00f32790()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00f337d0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_00f374d0 = 0x70;

extern "C" uint32_t bb_auto_return_constant_00f374d0()
{
    return value_00f374d0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00f387f0()
{
}

/**
 *
 * The part of the object that auto_return_float_field_00f3c1a0 reads.
 *
 */
struct Object00f3c1a0 {
    uint8_t unknown_0x0000[0x20];
    float value_0x0020; /**< Read by auto_return_float_field_00f3c1a0; meaning unknown. */
};
static_assert(offsetof(Object00f3c1a0, value_0x0020) == 0x20);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_00f3c1a0(const Object00f3c1a0 *self)
{
    return self->value_0x0020;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_00f3c1c0 = 0xc;

extern "C" uint32_t bb_auto_return_constant_00f3c1c0()
{
    return value_00f3c1c0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00f3c630()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00f3c650()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00f3cc30()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00f3cc40()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00f3cf90()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_00f3d440 = 0x60;

extern "C" uint32_t bb_auto_return_constant_00f3d440()
{
    return value_00f3d440;
}

/**
 *
 * The part of the object that auto_return_member_address_00f3fe70 reads.
 *
 */
struct Object00f3fe70 {
    uint8_t unknown_0x0000[0x60];
    uint8_t member_0x0060; /**< Read by auto_return_member_address_00f3fe70; meaning unknown. */
};
static_assert(offsetof(Object00f3fe70, member_0x0060) == 0x60);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_00f3fe70(Object00f3fe70 *self)
{
    return &self->member_0x0060;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00f3ffe0()
{
}
