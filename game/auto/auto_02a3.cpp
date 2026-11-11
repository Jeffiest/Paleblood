// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_02a30200 reads.
 *
 */
struct Object02a30200 {
    uint8_t unknown_0x0000[0xa8];
    uint64_t value_0x00a8; /**< Read by auto_return_field_02a30200; meaning unknown. */
};
static_assert(offsetof(Object02a30200, value_0x00a8) == 0xa8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02a30200(const Object02a30200 *self)
{
    return self->value_0x00a8;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a33900()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a34270()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02a34320()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_02a3a960 reads.
 *
 */
struct Object02a3a960 {
    uint8_t unknown_0x0000[0x10];
    uint8_t value_0x0010; /**< Read by auto_return_field_02a3a960; meaning unknown. */
};
static_assert(offsetof(Object02a3a960, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02a3a960(const Object02a3a960 *self)
{
    return self->value_0x0010;
}

/**
 *
 * The part of the object that auto_return_field_02a3adf0 reads.
 *
 */
struct Object02a3adf0 {
    uint8_t unknown_0x0000[0x10];
    uint8_t value_0x0010; /**< Read by auto_return_field_02a3adf0; meaning unknown. */
};
static_assert(offsetof(Object02a3adf0, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02a3adf0(const Object02a3adf0 *self)
{
    return self->value_0x0010;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a3b770()
{
}

/**
 *
 * The part of the object that auto_return_member_address_02a3cf00 reads.
 *
 */
struct Object02a3cf00 {
    uint8_t unknown_0x0000[0x490];
    uint8_t member_0x0490; /**< Read by auto_return_member_address_02a3cf00; meaning unknown. */
};
static_assert(offsetof(Object02a3cf00, member_0x0490) == 0x490);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02a3cf00(Object02a3cf00 *self)
{
    return &self->member_0x0490;
}

/**
 *
 * The part of the object that auto_return_member_address_02a3cf10 reads.
 *
 */
struct Object02a3cf10 {
    uint8_t unknown_0x0000[0x490];
    uint8_t member_0x0490; /**< Read by auto_return_member_address_02a3cf10; meaning unknown. */
};
static_assert(offsetof(Object02a3cf10, member_0x0490) == 0x490);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02a3cf10(Object02a3cf10 *self)
{
    return &self->member_0x0490;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a3eba0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02a3f110 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02a3f110()
{
    return value_02a3f110;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02a3f140()
{
    return 0;
}
