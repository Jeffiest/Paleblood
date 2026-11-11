// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_028b7fe0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_028b7fe0()
{
    return value_028b7fe0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_028b81f0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_028b81f0()
{
    return value_028b81f0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_028b8220 = 0x1;

extern "C" uint8_t bb_auto_return_constant_028b8220()
{
    return value_028b8220;
}

/**
 *
 * The part of the object that auto_return_member_address_028b9e00 reads.
 *
 */
struct Object028b9e00 {
    uint8_t unknown_0x0000[0x2ca38];
    uint8_t member_0x2ca38; /**< Read by auto_return_member_address_028b9e00; meaning unknown. */
};
static_assert(offsetof(Object028b9e00, member_0x2ca38) == 0x2ca38);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_028b9e00(Object028b9e00 *self)
{
    return &self->member_0x2ca38;
}

/**
 *
 * The part of the object that auto_return_member_address_028b9e10 reads.
 *
 */
struct Object028b9e10 {
    uint8_t unknown_0x0000[0x2ccd8];
    uint8_t member_0x2ccd8; /**< Read by auto_return_member_address_028b9e10; meaning unknown. */
};
static_assert(offsetof(Object028b9e10, member_0x2ccd8) == 0x2ccd8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_028b9e10(Object028b9e10 *self)
{
    return &self->member_0x2ccd8;
}

/**
 *
 * The part of the object that auto_return_field_028b9e20 reads.
 *
 */
struct Object028b9e20 {
    uint8_t unknown_0x0000[0x2ccd0];
    uint64_t value_0x2ccd0; /**< Read by auto_return_field_028b9e20; meaning unknown. */
};
static_assert(offsetof(Object028b9e20, value_0x2ccd0) == 0x2ccd0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_028b9e20(const Object028b9e20 *self)
{
    return self->value_0x2ccd0;
}

/**
 *
 * The part of the object that auto_return_member_address_028b9e30 reads.
 *
 */
struct Object028b9e30 {
    uint8_t unknown_0x0000[0x2cb18];
    uint8_t member_0x2cb18; /**< Read by auto_return_member_address_028b9e30; meaning unknown. */
};
static_assert(offsetof(Object028b9e30, member_0x2cb18) == 0x2cb18);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_028b9e30(Object028b9e30 *self)
{
    return &self->member_0x2cb18;
}
