// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_007133c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00713a40()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00713a50()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00713a60()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_007140c0()
{
}

/**
 *
 * The part of the object that auto_return_field_00716fd0 reads.
 *
 */
struct Object00716fd0 {
    uint8_t unknown_0x0000[0x28];
    uint64_t value_0x0028; /**< Read by auto_return_field_00716fd0; meaning unknown. */
};
static_assert(offsetof(Object00716fd0, value_0x0028) == 0x28);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_00716fd0(const Object00716fd0 *self)
{
    return self->value_0x0028;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00717260()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00717270()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_007196a0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_007196b0 = 0xffffffff;

extern "C" uint32_t bb_auto_return_constant_007196b0()
{
    return value_007196b0;
}

/**
 *
 * The part of the object that auto_return_field_00719800 reads.
 *
 */
struct Object00719800 {
    uint8_t unknown_0x0000[0x18];
    uint64_t value_0x0018; /**< Read by auto_return_field_00719800; meaning unknown. */
};
static_assert(offsetof(Object00719800, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_00719800(const Object00719800 *self)
{
    return self->value_0x0018;
}

/**
 *
 * The part of the object that auto_return_field_00719810 reads.
 *
 */
struct Object00719810 {
    uint8_t unknown_0x0000[0x10];
    uint64_t value_0x0010; /**< Read by auto_return_field_00719810; meaning unknown. */
};
static_assert(offsetof(Object00719810, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_00719810(const Object00719810 *self)
{
    return self->value_0x0010;
}

/**
 *
 * The part of the object that auto_return_field_00719980 reads.
 *
 */
struct Object00719980 {
    uint8_t unknown_0x0000[0x28];
    uint32_t value_0x0028; /**< Read by auto_return_field_00719980; meaning unknown. */
};
static_assert(offsetof(Object00719980, value_0x0028) == 0x28);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_00719980(const Object00719980 *self)
{
    return self->value_0x0028;
}

/**
 *
 * The part of the object that auto_return_member_address_0071a460 reads.
 *
 */
struct Object0071a460 {
    uint8_t unknown_0x0000[0x48];
    uint8_t member_0x0048; /**< Read by auto_return_member_address_0071a460; meaning unknown. */
};
static_assert(offsetof(Object0071a460, member_0x0048) == 0x48);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0071a460(Object0071a460 *self)
{
    return &self->member_0x0048;
}

/**
 *
 * The part of the object that auto_return_field_0071a470 reads.
 *
 */
struct Object0071a470 {
    uint8_t unknown_0x0000[0x40];
    uint32_t value_0x0040; /**< Read by auto_return_field_0071a470; meaning unknown. */
};
static_assert(offsetof(Object0071a470, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_0071a470(const Object0071a470 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0071a490 reads.
 *
 */
struct Object0071a490 {
    uint8_t unknown_0x0000[0x8c];
    uint32_t value_0x008c; /**< Read by auto_return_field_0071a490; meaning unknown. */
};
static_assert(offsetof(Object0071a490, value_0x008c) == 0x8c);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_0071a490(const Object0071a490 *self)
{
    return self->value_0x008c;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0071f070()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0071fa70()
{
    return 0;
}
