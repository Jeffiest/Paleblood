// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_member_address_01097540 reads.
 *
 */
struct Object01097540 {
    uint8_t unknown_0x0000[0x120];
    uint8_t member_0x0120; /**< Read by auto_return_member_address_01097540; meaning unknown. */
};
static_assert(offsetof(Object01097540, member_0x0120) == 0x120);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01097540(Object01097540 *self)
{
    return &self->member_0x0120;
}

/**
 *
 * The part of the object that auto_return_member_address_010976b0 reads.
 *
 */
struct Object010976b0 {
    uint8_t unknown_0x0000[0x2d0];
    uint8_t member_0x02d0; /**< Read by auto_return_member_address_010976b0; meaning unknown. */
};
static_assert(offsetof(Object010976b0, member_0x02d0) == 0x2d0);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_010976b0(Object010976b0 *self)
{
    return &self->member_0x02d0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_01098470 = 0x1;

extern "C" uint8_t bb_auto_return_constant_01098470()
{
    return value_01098470;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0109d890()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_0109df60 reads.
 *
 */
struct Object0109df60 {
    uint8_t unknown_0x0000[0xa8];
    uint64_t value_0x00a8; /**< Read by auto_return_field_0109df60; meaning unknown. */
};
static_assert(offsetof(Object0109df60, value_0x00a8) == 0xa8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0109df60(const Object0109df60 *self)
{
    return self->value_0x00a8;
}

/**
 *
 * The part of the object that auto_return_field_0109e430 reads.
 *
 */
struct Object0109e430 {
    uint8_t unknown_0x0000[0xa8];
    uint64_t value_0x00a8; /**< Read by auto_return_field_0109e430; meaning unknown. */
};
static_assert(offsetof(Object0109e430, value_0x00a8) == 0xa8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0109e430(const Object0109e430 *self)
{
    return self->value_0x00a8;
}

/**
 *
 * The part of the object that auto_return_field_0109e6e0 reads.
 *
 */
struct Object0109e6e0 {
    uint8_t unknown_0x0000[0x98];
    uint64_t value_0x0098; /**< Read by auto_return_field_0109e6e0; meaning unknown. */
};
static_assert(offsetof(Object0109e6e0, value_0x0098) == 0x98);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0109e6e0(const Object0109e6e0 *self)
{
    return self->value_0x0098;
}

/**
 *
 * The part of the object that auto_return_field_0109f7c0 reads.
 *
 */
struct Object0109f7c0 {
    uint8_t unknown_0x0000[0xa2];
    uint8_t value_0x00a2; /**< Read by auto_return_field_0109f7c0; meaning unknown. */
};
static_assert(offsetof(Object0109f7c0, value_0x00a2) == 0xa2);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_0109f7c0(const Object0109f7c0 *self)
{
    return self->value_0x00a2;
}
