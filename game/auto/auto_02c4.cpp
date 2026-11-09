// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c40500 = 0x4;

extern "C" uint32_t bb_auto_return_constant_02c40500()
{
    return value_02c40500;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c40ad0 = 0x3;

extern "C" uint32_t bb_auto_return_constant_02c40ad0()
{
    return value_02c40ad0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c41480 = 0x2;

extern "C" uint32_t bb_auto_return_constant_02c41480()
{
    return value_02c41480;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c41c90 = 0x2;

extern "C" uint32_t bb_auto_return_constant_02c41c90()
{
    return value_02c41c90;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c43aa0 = 0xc;

extern "C" uint32_t bb_auto_return_constant_02c43aa0()
{
    return value_02c43aa0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c44560()
{
}

/**
 *
 * The part of the object that auto_return_field_02c44d70 reads.
 *
 */
struct Object02c44d70 {
    uint8_t unknown_0x0000[0x10];
    uint64_t value_0x0010; /**< Read by auto_return_field_02c44d70; meaning unknown. */
};
static_assert(offsetof(Object02c44d70, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c44d70(const Object02c44d70 *self)
{
    return self->value_0x0010;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c44e10()
{
}

/**
 *
 * The part of the object that auto_return_field_02c452c0 reads.
 *
 */
struct Object02c452c0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02c452c0; meaning unknown. */
};
static_assert(offsetof(Object02c452c0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c452c0(const Object02c452c0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c45b60 = 0x1;

extern "C" uint32_t bb_auto_return_constant_02c45b60()
{
    return value_02c45b60;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c45b70 = 0x1;

extern "C" uint32_t bb_auto_return_constant_02c45b70()
{
    return value_02c45b70;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c45bd0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_02c45e10 reads.
 *
 */
struct Object02c45e10 {
    uint8_t unknown_0x0000[0x218];
    uint8_t member_0x0218; /**< Read by auto_return_member_address_02c45e10; meaning unknown. */
};
static_assert(offsetof(Object02c45e10, member_0x0218) == 0x218);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02c45e10(Object02c45e10 *self)
{
    return &self->member_0x0218;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c46280 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02c46280()
{
    return value_02c46280;
}

/**
 *
 * The part of the object that auto_return_field_02c462e0 reads.
 *
 */
struct Object02c462e0 {
    uint8_t unknown_0x0000[0x28];
    uint64_t value_0x0028; /**< Read by auto_return_field_02c462e0; meaning unknown. */
};
static_assert(offsetof(Object02c462e0, value_0x0028) == 0x28);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c462e0(const Object02c462e0 *self)
{
    return self->value_0x0028;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c463a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c4ac70()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c4acd0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c4ace0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c4ad90()
{
}

/**
 *
 * The part of the object that auto_return_field_02c4af50 reads.
 *
 */
struct Object02c4af50 {
    uint8_t unknown_0x0000[0x10];
    uint64_t value_0x0010; /**< Read by auto_return_field_02c4af50; meaning unknown. */
};
static_assert(offsetof(Object02c4af50, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c4af50(const Object02c4af50 *self)
{
    return self->value_0x0010;
}

/**
 *
 * The part of the object that auto_return_field_02c4d300 reads.
 *
 */
struct Object02c4d300 {
    uint8_t unknown_0x0000[0x18];
    uint64_t value_0x0018; /**< Read by auto_return_field_02c4d300; meaning unknown. */
};
static_assert(offsetof(Object02c4d300, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c4d300(const Object02c4d300 *self)
{
    return self->value_0x0018;
}

/**
 *
 * The part of the object that auto_return_field_02c4d360 reads.
 *
 */
struct Object02c4d360 {
    uint8_t unknown_0x0000[0x20];
    uint64_t value_0x0020; /**< Read by auto_return_field_02c4d360; meaning unknown. */
};
static_assert(offsetof(Object02c4d360, value_0x0020) == 0x20);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c4d360(const Object02c4d360 *self)
{
    return self->value_0x0020;
}
