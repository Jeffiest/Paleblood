// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_00be0ca0 reads.
 *
 */
struct Object00be0ca0 {
    uint8_t unknown_0x0000[0x10];
    uint64_t value_0x0010; /**< Read by auto_return_field_00be0ca0; meaning unknown. */
};
static_assert(offsetof(Object00be0ca0, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_00be0ca0(const Object00be0ca0 *self)
{
    return self->value_0x0010;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_00be0e70 = 0x1;

extern "C" uint8_t bb_auto_return_constant_00be0e70()
{
    return value_00be0e70;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00be1740()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00be1750()
{
}

/**
 *
 * The part of the object that auto_return_field_00be2dd0 reads.
 *
 */
struct Object00be2dd0 {
    uint8_t unknown_0x0000[0x68];
    uint32_t value_0x0068; /**< Read by auto_return_field_00be2dd0; meaning unknown. */
};
static_assert(offsetof(Object00be2dd0, value_0x0068) == 0x68);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_00be2dd0(const Object00be2dd0 *self)
{
    return self->value_0x0068;
}

/**
 *
 * The part of the object that auto_return_member_address_00be2e90 reads.
 *
 */
struct Object00be2e90 {
    uint8_t unknown_0x0000[0x70];
    uint8_t member_0x0070; /**< Read by auto_return_member_address_00be2e90; meaning unknown. */
};
static_assert(offsetof(Object00be2e90, member_0x0070) == 0x70);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_00be2e90(Object00be2e90 *self)
{
    return &self->member_0x0070;
}

/**
 *
 * The part of the object that auto_return_field_00be2ea0 reads.
 *
 */
struct Object00be2ea0 {
    uint8_t unknown_0x0000[0x78];
    uint32_t value_0x0078; /**< Read by auto_return_field_00be2ea0; meaning unknown. */
};
static_assert(offsetof(Object00be2ea0, value_0x0078) == 0x78);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_00be2ea0(const Object00be2ea0 *self)
{
    return self->value_0x0078;
}

/**
 *
 * The part of the object that auto_return_field_00be3100 reads.
 *
 */
struct Object00be3100 {
    uint8_t unknown_0x0000[0x88];
    uint32_t value_0x0088; /**< Read by auto_return_field_00be3100; meaning unknown. */
};
static_assert(offsetof(Object00be3100, value_0x0088) == 0x88);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_00be3100(const Object00be3100 *self)
{
    return self->value_0x0088;
}

/**
 *
 * The part of the object that auto_return_member_address_00be3360 reads.
 *
 */
struct Object00be3360 {
    uint8_t unknown_0x0000[0x90];
    uint8_t member_0x0090; /**< Read by auto_return_member_address_00be3360; meaning unknown. */
};
static_assert(offsetof(Object00be3360, member_0x0090) == 0x90);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_00be3360(Object00be3360 *self)
{
    return &self->member_0x0090;
}

/**
 *
 * The part of the object that auto_return_field_00be3370 reads.
 *
 */
struct Object00be3370 {
    uint8_t unknown_0x0000[0x98];
    uint32_t value_0x0098; /**< Read by auto_return_field_00be3370; meaning unknown. */
};
static_assert(offsetof(Object00be3370, value_0x0098) == 0x98);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_00be3370(const Object00be3370 *self)
{
    return self->value_0x0098;
}

/**
 *
 * The part of the object that auto_return_field_00be35d0 reads.
 *
 */
struct Object00be35d0 {
    uint8_t unknown_0x0000[0xb0];
    uint8_t value_0x00b0; /**< Read by auto_return_field_00be35d0; meaning unknown. */
};
static_assert(offsetof(Object00be35d0, value_0x00b0) == 0xb0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_00be35d0(const Object00be35d0 *self)
{
    return self->value_0x00b0;
}

/**
 *
 * The part of the object that auto_return_field_00be35e0 reads.
 *
 */
struct Object00be35e0 {
    uint8_t unknown_0x0000[0xa8];
    uint32_t value_0x00a8; /**< Read by auto_return_field_00be35e0; meaning unknown. */
};
static_assert(offsetof(Object00be35e0, value_0x00a8) == 0xa8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_00be35e0(const Object00be35e0 *self)
{
    return self->value_0x00a8;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_00be4500 = 0x2;

extern "C" uint32_t bb_auto_return_constant_00be4500()
{
    return value_00be4500;
}

/**
 *
 * The part of the object that auto_return_field_00be9890 reads.
 *
 */
struct Object00be9890 {
    uint8_t unknown_0x0000[0x18];
    uint64_t value_0x0018; /**< Read by auto_return_field_00be9890; meaning unknown. */
};
static_assert(offsetof(Object00be9890, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_00be9890(const Object00be9890 *self)
{
    return self->value_0x0018;
}

/**
 *
 * The part of the object that auto_return_field_00be98a0 reads.
 *
 */
struct Object00be98a0 {
    uint8_t unknown_0x0000[0x8];
    uint64_t value_0x0008; /**< Read by auto_return_field_00be98a0; meaning unknown. */
};
static_assert(offsetof(Object00be98a0, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_00be98a0(const Object00be98a0 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_00be9910 reads.
 *
 */
struct Object00be9910 {
    uint8_t unknown_0x0000[0x28];
    uint32_t value_0x0028; /**< Read by auto_return_field_00be9910; meaning unknown. */
};
static_assert(offsetof(Object00be9910, value_0x0028) == 0x28);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_00be9910(const Object00be9910 *self)
{
    return self->value_0x0028;
}

/**
 *
 * The part of the object that auto_return_field_00be9920 reads.
 *
 */
struct Object00be9920 {
    uint8_t unknown_0x0000[0x18];
    uint32_t value_0x0018; /**< Read by auto_return_field_00be9920; meaning unknown. */
};
static_assert(offsetof(Object00be9920, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_00be9920(const Object00be9920 *self)
{
    return self->value_0x0018;
}

/**
 *
 * The part of the object that auto_return_field_00be9eb0 reads.
 *
 */
struct Object00be9eb0 {
    uint8_t unknown_0x0000[0x68];
    uint32_t value_0x0068; /**< Read by auto_return_field_00be9eb0; meaning unknown. */
};
static_assert(offsetof(Object00be9eb0, value_0x0068) == 0x68);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_00be9eb0(const Object00be9eb0 *self)
{
    return self->value_0x0068;
}

/**
 *
 * The part of the object that auto_return_field_00be9ec0 reads.
 *
 */
struct Object00be9ec0 {
    uint8_t unknown_0x0000[0x58];
    uint32_t value_0x0058; /**< Read by auto_return_field_00be9ec0; meaning unknown. */
};
static_assert(offsetof(Object00be9ec0, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_00be9ec0(const Object00be9ec0 *self)
{
    return self->value_0x0058;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_00beaf60()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_00beaf70()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_00beaf80 = 0x1;

extern "C" uint8_t bb_auto_return_constant_00beaf80()
{
    return value_00beaf80;
}

/**
 *
 * The part of the object that auto_return_field_00beb500 reads.
 *
 */
struct Object00beb500 {
    uint8_t unknown_0x0000[0x10];
    uint64_t value_0x0010; /**< Read by auto_return_field_00beb500; meaning unknown. */
};
static_assert(offsetof(Object00beb500, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_00beb500(const Object00beb500 *self)
{
    return self->value_0x0010;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_00beb6d0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_00beb6d0()
{
    return value_00beb6d0;
}
