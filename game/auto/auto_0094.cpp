// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_member_address_0094bc20 reads.
 *
 */
struct Object0094bc20 {
    uint8_t unknown_0x0000[0x90];
    uint8_t member_0x0090; /**< Read by auto_return_member_address_0094bc20; meaning unknown. */
};
static_assert(offsetof(Object0094bc20, member_0x0090) == 0x90);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0094bc20(Object0094bc20 *self)
{
    return &self->member_0x0090;
}

/**
 *
 * The part of the object that auto_return_member_address_0094bc30 reads.
 *
 */
struct Object0094bc30 {
    uint8_t unknown_0x0000[0xa0];
    uint8_t member_0x00a0; /**< Read by auto_return_member_address_0094bc30; meaning unknown. */
};
static_assert(offsetof(Object0094bc30, member_0x00a0) == 0xa0);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0094bc30(Object0094bc30 *self)
{
    return &self->member_0x00a0;
}

/**
 *
 * The part of the object that auto_return_field_0094f980 reads.
 *
 */
struct Object0094f980 {
    uint8_t unknown_0x0000[0x90];
    uint8_t value_0x0090; /**< Read by auto_return_field_0094f980; meaning unknown. */
};
static_assert(offsetof(Object0094f980, value_0x0090) == 0x90);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_0094f980(const Object0094f980 *self)
{
    return self->value_0x0090;
}

/**
 *
 * The part of the object that auto_return_field_0094f990 reads.
 *
 */
struct Object0094f990 {
    uint8_t unknown_0x0000[0x50];
    uint8_t value_0x0050; /**< Read by auto_return_field_0094f990; meaning unknown. */
};
static_assert(offsetof(Object0094f990, value_0x0050) == 0x50);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_0094f990(const Object0094f990 *self)
{
    return self->value_0x0050;
}
