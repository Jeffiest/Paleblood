// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_00e115a0 reads.
 *
 */
struct Object00e115a0 {
    uint8_t unknown_0x0000[0x8];
    uint64_t value_0x0008; /**< Read by auto_return_field_00e115a0; meaning unknown. */
};
static_assert(offsetof(Object00e115a0, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_00e115a0(const Object00e115a0 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_00e115b0 reads.
 *
 */
struct Object00e115b0 {
    uint8_t unknown_0x0000[0x18];
    uint64_t value_0x0018; /**< Read by auto_return_field_00e115b0; meaning unknown. */
};
static_assert(offsetof(Object00e115b0, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_00e115b0(const Object00e115b0 *self)
{
    return self->value_0x0018;
}

/**
 *
 * The part of the object that auto_return_member_address_00e115c0 reads.
 *
 */
struct Object00e115c0 {
    uint8_t unknown_0x0000[0x60];
    uint8_t member_0x0060; /**< Read by auto_return_member_address_00e115c0; meaning unknown. */
};
static_assert(offsetof(Object00e115c0, member_0x0060) == 0x60);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_00e115c0(Object00e115c0 *self)
{
    return &self->member_0x0060;
}

/**
 *
 * The part of the object that auto_return_field_00e132c0 reads.
 *
 */
struct Object00e132c0 {
    uint8_t unknown_0x0000[0x80];
    uint64_t value_0x0080; /**< Read by auto_return_field_00e132c0; meaning unknown. */
};
static_assert(offsetof(Object00e132c0, value_0x0080) == 0x80);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_00e132c0(const Object00e132c0 *self)
{
    return self->value_0x0080;
}

/**
 *
 * The part of the object that auto_return_field_00e132d0 reads.
 *
 */
struct Object00e132d0 {
    uint8_t unknown_0x0000[0x58];
    uint32_t value_0x0058; /**< Read by auto_return_field_00e132d0; meaning unknown. */
};
static_assert(offsetof(Object00e132d0, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_00e132d0(const Object00e132d0 *self)
{
    return self->value_0x0058;
}

/**
 *
 * The part of the object that auto_return_member_address_00e132e0 reads.
 *
 */
struct Object00e132e0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_00e132e0; meaning unknown. */
};
static_assert(offsetof(Object00e132e0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_00e132e0(Object00e132e0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00e13320()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00e18410()
{
}

/**
 *
 * The part of the object that auto_return_field_00e18420 reads.
 *
 */
struct Object00e18420 {
    uint8_t unknown_0x0000[0x2d];
    int8_t value_0x002d; /**< Read by auto_return_field_00e18420; meaning unknown. */
};
static_assert(offsetof(Object00e18420, value_0x002d) == 0x2d);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" int32_t bb_auto_return_field_00e18420(const Object00e18420 *self)
{
    return self->value_0x002d;
}

/**
 *
 * The part of the object that auto_return_field_00e19f20 reads.
 *
 */
struct Object00e19f20 {
    uint8_t unknown_0x0000[0x7dc8];
    uint64_t value_0x7dc8; /**< Read by auto_return_field_00e19f20; meaning unknown. */
};
static_assert(offsetof(Object00e19f20, value_0x7dc8) == 0x7dc8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_00e19f20(const Object00e19f20 *self)
{
    return self->value_0x7dc8;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00e1a7c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00e1a7f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00e1a800()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00e1a810()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00e1a820()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00e1b0f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00e1d220()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00e1d230()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00e1d450()
{
}
