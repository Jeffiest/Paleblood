// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_00fb6e00 reads.
 *
 */
struct Object00fb6e00 {
    uint8_t unknown_0x0000[0x8];
    uint32_t value_0x0008; /**< Read by auto_return_field_00fb6e00; meaning unknown. */
};
static_assert(offsetof(Object00fb6e00, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_00fb6e00(const Object00fb6e00 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_member_address_00fb6e40 reads.
 *
 */
struct Object00fb6e40 {
    uint8_t unknown_0x0000[0x10];
    uint8_t member_0x0010; /**< Read by auto_return_member_address_00fb6e40; meaning unknown. */
};
static_assert(offsetof(Object00fb6e40, member_0x0010) == 0x10);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_00fb6e40(Object00fb6e40 *self)
{
    return &self->member_0x0010;
}

/**
 *
 * The part of the object that auto_return_member_address_00fb6e50 reads.
 *
 */
struct Object00fb6e50 {
    uint8_t unknown_0x0000[0x10];
    uint8_t member_0x0010; /**< Read by auto_return_member_address_00fb6e50; meaning unknown. */
};
static_assert(offsetof(Object00fb6e50, member_0x0010) == 0x10);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_00fb6e50(Object00fb6e50 *self)
{
    return &self->member_0x0010;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00fb6ef0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00fb6f00()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00fb6f70()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00fb6f80()
{
}

/**
 *
 * The part of the object that auto_return_field_00fb7f30 reads.
 *
 */
struct Object00fb7f30 {
    uint8_t unknown_0x0000[0x28];
    uint64_t value_0x0028; /**< Read by auto_return_field_00fb7f30; meaning unknown. */
};
static_assert(offsetof(Object00fb7f30, value_0x0028) == 0x28);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_00fb7f30(const Object00fb7f30 *self)
{
    return self->value_0x0028;
}

/**
 *
 * The part of the object that auto_return_field_00fb7f40 reads.
 *
 */
struct Object00fb7f40 {
    uint8_t unknown_0x0000[0x20];
    uint64_t value_0x0020; /**< Read by auto_return_field_00fb7f40; meaning unknown. */
};
static_assert(offsetof(Object00fb7f40, value_0x0020) == 0x20);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_00fb7f40(const Object00fb7f40 *self)
{
    return self->value_0x0020;
}
