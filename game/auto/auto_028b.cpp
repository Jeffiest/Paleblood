// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028b5250()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_028b7e30 = 0x2;

extern "C" uint32_t bb_auto_return_constant_028b7e30()
{
    return value_028b7e30;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028b7e40()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028b7e50()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028b7e60()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028b7e70()
{
}

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
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028b7ff0()
{
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
 * The part of the object that auto_return_field_028b8200 reads.
 *
 */
struct Object028b8200 {
    uint8_t unknown_0x0000[0x18];
    uint32_t value_0x0018; /**< Read by auto_return_field_028b8200; meaning unknown. */
};
static_assert(offsetof(Object028b8200, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_028b8200(const Object028b8200 *self)
{
    return self->value_0x0018;
}

/**
 *
 * The part of the object that auto_return_field_028b8210 reads.
 *
 */
struct Object028b8210 {
    uint8_t unknown_0x0000[0x1c];
    uint32_t value_0x001c; /**< Read by auto_return_field_028b8210; meaning unknown. */
};
static_assert(offsetof(Object028b8210, value_0x001c) == 0x1c);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_028b8210(const Object028b8210 *self)
{
    return self->value_0x001c;
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
 * The part of the object that auto_return_field_028b8230 reads.
 *
 */
struct Object028b8230 {
    uint8_t unknown_0x0000[0x8];
    uint32_t value_0x0008; /**< Read by auto_return_field_028b8230; meaning unknown. */
};
static_assert(offsetof(Object028b8230, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_028b8230(const Object028b8230 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_028b8240 reads.
 *
 */
struct Object028b8240 {
    uint8_t unknown_0x0000[0xc];
    uint32_t value_0x000c; /**< Read by auto_return_field_028b8240; meaning unknown. */
};
static_assert(offsetof(Object028b8240, value_0x000c) == 0xc);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_028b8240(const Object028b8240 *self)
{
    return self->value_0x000c;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028b83b0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_028b86d0 = 0x1;

extern "C" uint32_t bb_auto_return_constant_028b86d0()
{
    return value_028b86d0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028b86e0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028b86f0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028b8700()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028b8710()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028b8720()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028b8810()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028b8d40()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028b8d50()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028b8dd0()
{
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
