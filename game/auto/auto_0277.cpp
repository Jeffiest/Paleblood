// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_027704a0 = 0x1;

extern "C" uint32_t bb_auto_return_constant_027704a0()
{
    return value_027704a0;
}

/**
 *
 * The part of the object that auto_return_field_02776870 reads.
 *
 */
struct Object02776870 {
    uint8_t unknown_0x0000[0xc];
    uint8_t value_0x000c; /**< Read by auto_return_field_02776870; meaning unknown. */
};
static_assert(offsetof(Object02776870, value_0x000c) == 0xc);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02776870(const Object02776870 *self)
{
    return self->value_0x000c;
}

/**
 *
 * The part of the object that auto_return_field_02776950 reads.
 *
 */
struct Object02776950 {
    uint8_t unknown_0x0000[0x10];
    uint8_t value_0x0010; /**< Read by auto_return_field_02776950; meaning unknown. */
};
static_assert(offsetof(Object02776950, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02776950(const Object02776950 *self)
{
    return self->value_0x0010;
}

/**
 *
 * The part of the object that auto_return_member_address_02776a70 reads.
 *
 */
struct Object02776a70 {
    uint8_t unknown_0x0000[0x60];
    uint8_t member_0x0060; /**< Read by auto_return_member_address_02776a70; meaning unknown. */
};
static_assert(offsetof(Object02776a70, member_0x0060) == 0x60);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02776a70(Object02776a70 *self)
{
    return &self->member_0x0060;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02776b10()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02776b30()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02777dd0()
{
}

/**
 *
 * The part of the object that auto_return_field_02778c60 reads.
 *
 */
struct Object02778c60 {
    uint8_t unknown_0x0000[0x28];
    uint64_t value_0x0028; /**< Read by auto_return_field_02778c60; meaning unknown. */
};
static_assert(offsetof(Object02778c60, value_0x0028) == 0x28);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02778c60(const Object02778c60 *self)
{
    return self->value_0x0028;
}

/**
 *
 * The part of the object that auto_return_field_0277aad0 reads.
 *
 */
struct Object0277aad0 {
    uint8_t unknown_0x0000[0x14];
    uint32_t value_0x0014; /**< Read by auto_return_field_0277aad0; meaning unknown. */
};
static_assert(offsetof(Object0277aad0, value_0x0014) == 0x14);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_0277aad0(const Object0277aad0 *self)
{
    return self->value_0x0014;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0277d4f0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0277d4f0()
{
    return value_0277d4f0;
}
