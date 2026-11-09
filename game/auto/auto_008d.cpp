// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_member_address_008d3f90 reads.
 *
 */
struct Object008d3f90 {
    uint8_t unknown_0x0000[0x18];
    uint8_t member_0x0018; /**< Read by auto_return_member_address_008d3f90; meaning unknown. */
};
static_assert(offsetof(Object008d3f90, member_0x0018) == 0x18);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_008d3f90(Object008d3f90 *self)
{
    return &self->member_0x0018;
}

/**
 *
 * The part of the object that auto_return_member_address_008d3fa0 reads.
 *
 */
struct Object008d3fa0 {
    uint8_t unknown_0x0000[0x20];
    uint8_t member_0x0020; /**< Read by auto_return_member_address_008d3fa0; meaning unknown. */
};
static_assert(offsetof(Object008d3fa0, member_0x0020) == 0x20);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_008d3fa0(Object008d3fa0 *self)
{
    return &self->member_0x0020;
}

/**
 *
 * The part of the object that auto_return_field_008d74d0 reads.
 *
 */
struct Object008d74d0 {
    uint8_t unknown_0x0000[0x10];
    uint64_t value_0x0010; /**< Read by auto_return_field_008d74d0; meaning unknown. */
};
static_assert(offsetof(Object008d74d0, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_008d74d0(const Object008d74d0 *self)
{
    return self->value_0x0010;
}

/**
 *
 * The part of the object that auto_return_field_008dcfe0 reads.
 *
 */
struct Object008dcfe0 {
    uint8_t unknown_0x0000[0x10];
    uint64_t value_0x0010; /**< Read by auto_return_field_008dcfe0; meaning unknown. */
};
static_assert(offsetof(Object008dcfe0, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_008dcfe0(const Object008dcfe0 *self)
{
    return self->value_0x0010;
}
