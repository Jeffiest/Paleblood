// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_021111e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02113c00()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02113c10()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02113c20()
{
}

/**
 *
 * The part of the object that auto_return_field_02114020 reads.
 *
 */
struct Object02114020 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02114020; meaning unknown. */
};
static_assert(offsetof(Object02114020, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02114020(const Object02114020 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02114030 reads.
 *
 */
struct Object02114030 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02114030; meaning unknown. */
};
static_assert(offsetof(Object02114030, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02114030(const Object02114030 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02114080()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02114120 = 0x50;

extern "C" uint32_t bb_auto_return_constant_02114120()
{
    return value_02114120;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_021145a0()
{
}

/**
 *
 * The part of the object that auto_return_field_02115d20 reads.
 *
 */
struct Object02115d20 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02115d20; meaning unknown. */
};
static_assert(offsetof(Object02115d20, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02115d20(const Object02115d20 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02115d30 reads.
 *
 */
struct Object02115d30 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02115d30; meaning unknown. */
};
static_assert(offsetof(Object02115d30, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02115d30(const Object02115d30 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02115d80()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02116000 = 0x60;

extern "C" uint32_t bb_auto_return_constant_02116000()
{
    return value_02116000;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02116660()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02116670()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02116680()
{
}

/**
 *
 * The part of the object that auto_return_field_02117100 reads.
 *
 */
struct Object02117100 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02117100; meaning unknown. */
};
static_assert(offsetof(Object02117100, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02117100(const Object02117100 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02117110 reads.
 *
 */
struct Object02117110 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02117110; meaning unknown. */
};
static_assert(offsetof(Object02117110, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02117110(const Object02117110 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02117160()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02117200 = 0x60;

extern "C" uint32_t bb_auto_return_constant_02117200()
{
    return value_02117200;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02118e20()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02118e30()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02119740()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02119750()
{
}

/**
 *
 * The part of the object that auto_return_member_address_02119760 reads.
 *
 */
struct Object02119760 {
    uint8_t unknown_0x0000[0x40];
    uint8_t member_0x0040; /**< Read by auto_return_member_address_02119760; meaning unknown. */
};
static_assert(offsetof(Object02119760, member_0x0040) == 0x40);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02119760(Object02119760 *self)
{
    return &self->member_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_021197b0 reads.
 *
 */
struct Object021197b0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_021197b0; meaning unknown. */
};
static_assert(offsetof(Object021197b0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_021197b0(const Object021197b0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_021197c0 reads.
 *
 */
struct Object021197c0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_021197c0; meaning unknown. */
};
static_assert(offsetof(Object021197c0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_021197c0(const Object021197c0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02119810()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_021198b0 = 0x80;

extern "C" uint32_t bb_auto_return_constant_021198b0()
{
    return value_021198b0;
}

/**
 *
 * The part of the object that auto_return_field_02119e60 reads.
 *
 */
struct Object02119e60 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02119e60; meaning unknown. */
};
static_assert(offsetof(Object02119e60, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02119e60(const Object02119e60 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02119e70 reads.
 *
 */
struct Object02119e70 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02119e70; meaning unknown. */
};
static_assert(offsetof(Object02119e70, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02119e70(const Object02119e70 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02119ec0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02119f60 = 0x18;

extern "C" uint32_t bb_auto_return_constant_02119f60()
{
    return value_02119f60;
}

/**
 *
 * The part of the object that auto_return_member_address_0211b520 reads.
 *
 */
struct Object0211b520 {
    uint8_t unknown_0x0000[0xc0];
    uint8_t member_0x00c0; /**< Read by auto_return_member_address_0211b520; meaning unknown. */
};
static_assert(offsetof(Object0211b520, member_0x00c0) == 0xc0);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0211b520(Object0211b520 *self)
{
    return &self->member_0x00c0;
}

/**
 *
 * The part of the object that auto_return_member_address_0211b530 reads.
 *
 */
struct Object0211b530 {
    uint8_t unknown_0x0000[0xd0];
    uint8_t member_0x00d0; /**< Read by auto_return_member_address_0211b530; meaning unknown. */
};
static_assert(offsetof(Object0211b530, member_0x00d0) == 0xd0);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0211b530(Object0211b530 *self)
{
    return &self->member_0x00d0;
}

/**
 *
 * The part of the object that auto_return_member_address_0211b550 reads.
 *
 */
struct Object0211b550 {
    uint8_t unknown_0x0000[0x730];
    uint8_t member_0x0730; /**< Read by auto_return_member_address_0211b550; meaning unknown. */
};
static_assert(offsetof(Object0211b550, member_0x0730) == 0x730);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0211b550(Object0211b550 *self)
{
    return &self->member_0x0730;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0211e2f0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_0211e370 reads.
 *
 */
struct Object0211e370 {
    uint8_t unknown_0x0000[0xa0];
    uint8_t member_0x00a0; /**< Read by auto_return_member_address_0211e370; meaning unknown. */
};
static_assert(offsetof(Object0211e370, member_0x00a0) == 0xa0);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0211e370(Object0211e370 *self)
{
    return &self->member_0x00a0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0211e380()
{
}

/**
 *
 * The part of the object that auto_return_field_0211e3c0 reads.
 *
 */
struct Object0211e3c0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0211e3c0; meaning unknown. */
};
static_assert(offsetof(Object0211e3c0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0211e3c0(const Object0211e3c0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0211e3d0 reads.
 *
 */
struct Object0211e3d0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0211e3d0; meaning unknown. */
};
static_assert(offsetof(Object0211e3d0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0211e3d0(const Object0211e3d0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0211e420()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0211e6a0 = 0x960;

extern "C" uint32_t bb_auto_return_constant_0211e6a0()
{
    return value_0211e6a0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0211ee00()
{
}

/**
 *
 * The part of the object that auto_return_field_0211ee50 reads.
 *
 */
struct Object0211ee50 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0211ee50; meaning unknown. */
};
static_assert(offsetof(Object0211ee50, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0211ee50(const Object0211ee50 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0211ee60 reads.
 *
 */
struct Object0211ee60 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0211ee60; meaning unknown. */
};
static_assert(offsetof(Object0211ee60, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0211ee60(const Object0211ee60 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0211eeb0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0211f130 = 0x30;

extern "C" uint32_t bb_auto_return_constant_0211f130()
{
    return value_0211f130;
}

/**
 *
 * The part of the object that auto_return_field_0211fab0 reads.
 *
 */
struct Object0211fab0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0211fab0; meaning unknown. */
};
static_assert(offsetof(Object0211fab0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0211fab0(const Object0211fab0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0211fac0 reads.
 *
 */
struct Object0211fac0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0211fac0; meaning unknown. */
};
static_assert(offsetof(Object0211fac0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0211fac0(const Object0211fac0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0211fb10()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0211fbb0 = 0xb0;

extern "C" uint32_t bb_auto_return_constant_0211fbb0()
{
    return value_0211fbb0;
}
