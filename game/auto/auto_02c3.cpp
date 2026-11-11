// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c31ac0()
{
}

/**
 *
 * The part of the object that auto_return_field_02c32c50 reads.
 *
 */
struct Object02c32c50 {
    uint8_t unknown_0x0000[0xe8];
    uint64_t value_0x00e8; /**< Read by auto_return_field_02c32c50; meaning unknown. */
};
static_assert(offsetof(Object02c32c50, value_0x00e8) == 0xe8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c32c50(const Object02c32c50 *self)
{
    return self->value_0x00e8;
}

/**
 *
 * The part of the object that auto_return_member_address_02c35ce0 reads.
 *
 */
struct Object02c35ce0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_02c35ce0; meaning unknown. */
};
static_assert(offsetof(Object02c35ce0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02c35ce0(Object02c35ce0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_02c36d10 reads.
 *
 */
struct Object02c36d10 {
    uint8_t unknown_0x0000[0x2a0];
    uint32_t value_0x02a0; /**< Read by auto_return_field_02c36d10; meaning unknown. */
};
static_assert(offsetof(Object02c36d10, value_0x02a0) == 0x2a0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02c36d10(const Object02c36d10 *self)
{
    return self->value_0x02a0;
}

/**
 *
 * The part of the object that auto_return_member_address_02c37540 reads.
 *
 */
struct Object02c37540 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_02c37540; meaning unknown. */
};
static_assert(offsetof(Object02c37540, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02c37540(Object02c37540 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_02c3b770 reads.
 *
 */
struct Object02c3b770 {
    uint8_t unknown_0x0000[0x48];
    uint8_t value_0x0048; /**< Read by auto_return_field_02c3b770; meaning unknown. */
};
static_assert(offsetof(Object02c3b770, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02c3b770(const Object02c3b770 *self)
{
    return self->value_0x0048;
}

/**
 *
 * The part of the object that auto_return_field_02c3c6a0 reads.
 *
 */
struct Object02c3c6a0 {
    uint8_t unknown_0x0000[0x11];
    uint8_t value_0x0011; /**< Read by auto_return_field_02c3c6a0; meaning unknown. */
};
static_assert(offsetof(Object02c3c6a0, value_0x0011) == 0x11);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02c3c6a0(const Object02c3c6a0 *self)
{
    return self->value_0x0011;
}
