// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_01e61930 reads.
 *
 */
struct Object01e61930 {
    uint8_t unknown_0x0000[0x65];
    uint8_t value_0x0065; /**< Read by auto_return_field_01e61930; meaning unknown. */
};
static_assert(offsetof(Object01e61930, value_0x0065) == 0x65);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_01e61930(const Object01e61930 *self)
{
    return self->value_0x0065;
}

/**
 *
 * The part of the object that auto_return_field_01e61940 reads.
 *
 */
struct Object01e61940 {
    uint8_t unknown_0x0000[0x66];
    uint8_t value_0x0066; /**< Read by auto_return_field_01e61940; meaning unknown. */
};
static_assert(offsetof(Object01e61940, value_0x0066) == 0x66);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_01e61940(const Object01e61940 *self)
{
    return self->value_0x0066;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01e662b0 = 0x28;

extern "C" uint32_t bb_auto_return_constant_01e662b0()
{
    return value_01e662b0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01e66b60 = 0x20;

extern "C" uint32_t bb_auto_return_constant_01e66b60()
{
    return value_01e66b60;
}

/**
 *
 * The part of the object that auto_return_field_01e6a210 reads.
 *
 */
struct Object01e6a210 {
    uint8_t unknown_0x0000[0x58];
    uint8_t value_0x0058; /**< Read by auto_return_field_01e6a210; meaning unknown. */
};
static_assert(offsetof(Object01e6a210, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_01e6a210(const Object01e6a210 *self)
{
    return self->value_0x0058;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e6aed0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01e6b4b0 = 0x130;

extern "C" uint32_t bb_auto_return_constant_01e6b4b0()
{
    return value_01e6b4b0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01e6b7d0 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_01e6b7d0()
{
    return value_01e6b7d0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01e6baf0 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_01e6baf0()
{
    return value_01e6baf0;
}

/**
 *
 * The part of the object that auto_return_field_01e6cdf0 reads.
 *
 */
struct Object01e6cdf0 {
    uint8_t unknown_0x0000[0x95];
    uint8_t value_0x0095; /**< Read by auto_return_field_01e6cdf0; meaning unknown. */
};
static_assert(offsetof(Object01e6cdf0, value_0x0095) == 0x95);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_01e6cdf0(const Object01e6cdf0 *self)
{
    return self->value_0x0095;
}

/**
 *
 * The part of the object that auto_return_field_01e6f650 reads.
 *
 */
struct Object01e6f650 {
    uint8_t unknown_0x0000[0x58];
    uint8_t value_0x0058; /**< Read by auto_return_field_01e6f650; meaning unknown. */
};
static_assert(offsetof(Object01e6f650, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_01e6f650(const Object01e6f650 *self)
{
    return self->value_0x0058;
}

/**
 *
 * The part of the object that auto_return_member_address_01e6f7f0 reads.
 *
 */
struct Object01e6f7f0 {
    uint8_t unknown_0x0000[0xb0];
    uint8_t member_0x00b0; /**< Read by auto_return_member_address_01e6f7f0; meaning unknown. */
};
static_assert(offsetof(Object01e6f7f0, member_0x00b0) == 0xb0);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01e6f7f0(Object01e6f7f0 *self)
{
    return &self->member_0x00b0;
}

/**
 *
 * The part of the object that auto_return_member_address_01e6f800 reads.
 *
 */
struct Object01e6f800 {
    uint8_t unknown_0x0000[0x88];
    uint8_t member_0x0088; /**< Read by auto_return_member_address_01e6f800; meaning unknown. */
};
static_assert(offsetof(Object01e6f800, member_0x0088) == 0x88);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01e6f800(Object01e6f800 *self)
{
    return &self->member_0x0088;
}

/**
 *
 * The part of the object that auto_return_field_01e6f810 reads.
 *
 */
struct Object01e6f810 {
    uint8_t unknown_0x0000[0x1f0];
    uint8_t value_0x01f0; /**< Read by auto_return_field_01e6f810; meaning unknown. */
};
static_assert(offsetof(Object01e6f810, value_0x01f0) == 0x1f0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_01e6f810(const Object01e6f810 *self)
{
    return self->value_0x01f0;
}
