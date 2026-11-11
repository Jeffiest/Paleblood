// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016a2630()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016a2650()
{
}

/**
 *
 * The part of the object that auto_return_field_016a26a0 reads.
 *
 */
struct Object016a26a0 {
    uint8_t unknown_0x0000[0x20];
    uint8_t value_0x0020; /**< Read by auto_return_field_016a26a0; meaning unknown. */
};
static_assert(offsetof(Object016a26a0, value_0x0020) == 0x20);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_016a26a0(const Object016a26a0 *self)
{
    return self->value_0x0020;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016a2880()
{
}

/**
 *
 * The part of the object that auto_return_float_field_016a28b0 reads.
 *
 */
struct Object016a28b0 {
    uint8_t unknown_0x0000[0x30];
    float value_0x0030; /**< Read by auto_return_float_field_016a28b0; meaning unknown. */
};
static_assert(offsetof(Object016a28b0, value_0x0030) == 0x30);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_016a28b0(const Object016a28b0 *self)
{
    return self->value_0x0030;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_016a2c30 = 0x40;

extern "C" uint32_t bb_auto_return_constant_016a2c30()
{
    return value_016a2c30;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_016a2f50 = 0x30;

extern "C" uint32_t bb_auto_return_constant_016a2f50()
{
    return value_016a2f50;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_016a3270 = 0x18;

extern "C" uint32_t bb_auto_return_constant_016a3270()
{
    return value_016a3270;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_016a3590 = 0x8;

extern "C" uint32_t bb_auto_return_constant_016a3590()
{
    return value_016a3590;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_016a38b0 = 0x8;

extern "C" uint32_t bb_auto_return_constant_016a38b0()
{
    return value_016a38b0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016a4b60()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016a4bc0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016a4c90()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016a4cf0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_016a8f90 reads.
 *
 */
struct Object016a8f90 {
    uint8_t unknown_0x0000[0xc4];
    uint8_t member_0x00c4; /**< Read by auto_return_member_address_016a8f90; meaning unknown. */
};
static_assert(offsetof(Object016a8f90, member_0x00c4) == 0xc4);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_016a8f90(Object016a8f90 *self)
{
    return &self->member_0x00c4;
}

/**
 *
 * The part of the object that auto_return_field_016a8fd0 reads.
 *
 */
struct Object016a8fd0 {
    uint8_t unknown_0x0000[0xcc];
    uint32_t value_0x00cc; /**< Read by auto_return_field_016a8fd0; meaning unknown. */
};
static_assert(offsetof(Object016a8fd0, value_0x00cc) == 0xcc);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_016a8fd0(const Object016a8fd0 *self)
{
    return self->value_0x00cc;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016aa990()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016aa9f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016af8e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016af940()
{
}
