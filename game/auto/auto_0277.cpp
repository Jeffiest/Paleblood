// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_027704a0 = 0x1;

extern "C" uint32_t bb_auto_return_constant_027704a0()
{
    return value_027704a0;
}

/**
 *
 * The part of the object that auto_return_field_02770950 reads.
 *
 */
struct Object02770950 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02770950; meaning unknown. */
};
static_assert(offsetof(Object02770950, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02770950(const Object02770950 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02770960 reads.
 *
 */
struct Object02770960 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02770960; meaning unknown. */
};
static_assert(offsetof(Object02770960, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02770960(const Object02770960 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_027709b0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02770c30 = 0x40;

extern "C" uint32_t bb_auto_return_constant_02770c30()
{
    return value_02770c30;
}

/**
 *
 * The part of the object that auto_return_field_02775af0 reads.
 *
 */
struct Object02775af0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02775af0; meaning unknown. */
};
static_assert(offsetof(Object02775af0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02775af0(const Object02775af0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02775b00 reads.
 *
 */
struct Object02775b00 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02775b00; meaning unknown. */
};
static_assert(offsetof(Object02775b00, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02775b00(const Object02775b00 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02775b50()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02775dd0 = 0x70;

extern "C" uint32_t bb_auto_return_constant_02775dd0()
{
    return value_02775dd0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_027762b0()
{
}

/**
 *
 * The part of the object that auto_return_field_02776870 reads.
 *
 */
struct Object02776870 {
    uint8_t unknown_0x0000[0xc];
    uint8_t value_0x000c; /**< Read by auto_return_field_02776870; meaning unknown. */
};
static_assert(offsetof(Object02776870, value_0x000c) == 0xc);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02776870(const Object02776870 *self)
{
    return self->value_0x000c;
}

/**
 *
 * The part of the object that auto_return_field_027768a0 reads.
 *
 */
struct Object027768a0 {
    uint8_t unknown_0x0000[0x18];
    uint32_t value_0x0018; /**< Read by auto_return_field_027768a0; meaning unknown. */
};
static_assert(offsetof(Object027768a0, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_027768a0(const Object027768a0 *self)
{
    return self->value_0x0018;
}

/**
 *
 * The part of the object that auto_return_field_02776950 reads.
 *
 */
struct Object02776950 {
    uint8_t unknown_0x0000[0x10];
    uint8_t value_0x0010; /**< Read by auto_return_field_02776950; meaning unknown. */
};
static_assert(offsetof(Object02776950, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02776950(const Object02776950 *self)
{
    return self->value_0x0010;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02776970()
{
}

/**
 *
 * The part of the object that auto_return_field_02776990 reads.
 *
 */
struct Object02776990 {
    uint8_t unknown_0x0000[0x20];
    uint32_t value_0x0020; /**< Read by auto_return_field_02776990; meaning unknown. */
};
static_assert(offsetof(Object02776990, value_0x0020) == 0x20);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02776990(const Object02776990 *self)
{
    return self->value_0x0020;
}

/**
 *
 * The part of the object that auto_return_member_address_02776a60 reads.
 *
 */
struct Object02776a60 {
    uint8_t unknown_0x0000[0x40];
    uint8_t member_0x0040; /**< Read by auto_return_member_address_02776a60; meaning unknown. */
};
static_assert(offsetof(Object02776a60, member_0x0040) == 0x40);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02776a60(Object02776a60 *self)
{
    return &self->member_0x0040;
}

/**
 *
 * The part of the object that auto_return_member_address_02776a70 reads.
 *
 */
struct Object02776a70 {
    uint8_t unknown_0x0000[0x60];
    uint8_t member_0x0060; /**< Read by auto_return_member_address_02776a70; meaning unknown. */
};
static_assert(offsetof(Object02776a70, member_0x0060) == 0x60);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02776a70(Object02776a70 *self)
{
    return &self->member_0x0060;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02776b10()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02776b30()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02776bb0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02777dd0()
{
}

/**
 *
 * The part of the object that auto_return_field_02778c30 reads.
 *
 */
struct Object02778c30 {
    uint8_t unknown_0x0000[0x4];
    uint32_t value_0x0004; /**< Read by auto_return_field_02778c30; meaning unknown. */
};
static_assert(offsetof(Object02778c30, value_0x0004) == 0x4);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02778c30(const Object02778c30 *self)
{
    return self->value_0x0004;
}

/**
 *
 * The part of the object that auto_return_field_02778c40 reads.
 *
 */
struct Object02778c40 {
    uint8_t unknown_0x0000[0xc];
    uint16_t value_0x000c; /**< Read by auto_return_field_02778c40; meaning unknown. */
};
static_assert(offsetof(Object02778c40, value_0x000c) == 0xc);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02778c40(const Object02778c40 *self)
{
    return self->value_0x000c;
}

/**
 *
 * The part of the object that auto_return_field_02778c50 reads.
 *
 */
struct Object02778c50 {
    uint8_t unknown_0x0000[0xe];
    uint16_t value_0x000e; /**< Read by auto_return_field_02778c50; meaning unknown. */
};
static_assert(offsetof(Object02778c50, value_0x000e) == 0xe);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02778c50(const Object02778c50 *self)
{
    return self->value_0x000e;
}

/**
 *
 * The part of the object that auto_return_field_02778c60 reads.
 *
 */
struct Object02778c60 {
    uint8_t unknown_0x0000[0x28];
    uint64_t value_0x0028; /**< Read by auto_return_field_02778c60; meaning unknown. */
};
static_assert(offsetof(Object02778c60, value_0x0028) == 0x28);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02778c60(const Object02778c60 *self)
{
    return self->value_0x0028;
}

/**
 *
 * The part of the object that auto_return_field_02779080 reads.
 *
 */
struct Object02779080 {
    uint8_t unknown_0x0000[0x8];
    uint64_t value_0x0008; /**< Read by auto_return_field_02779080; meaning unknown. */
};
static_assert(offsetof(Object02779080, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02779080(const Object02779080 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_02779090 reads.
 *
 */
struct Object02779090 {
    uint8_t unknown_0x0000[0x38];
    uint32_t value_0x0038; /**< Read by auto_return_field_02779090; meaning unknown. */
};
static_assert(offsetof(Object02779090, value_0x0038) == 0x38);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02779090(const Object02779090 *self)
{
    return self->value_0x0038;
}

/**
 *
 * The part of the object that auto_return_field_027790a0 reads.
 *
 */
struct Object027790a0 {
    uint8_t unknown_0x0000[0x3c];
    uint32_t value_0x003c; /**< Read by auto_return_field_027790a0; meaning unknown. */
};
static_assert(offsetof(Object027790a0, value_0x003c) == 0x3c);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_027790a0(const Object027790a0 *self)
{
    return self->value_0x003c;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0277aa00()
{
}

/**
 *
 * The part of the object that auto_return_field_0277aa80 reads.
 *
 */
struct Object0277aa80 {
    uint8_t unknown_0x0000[0x4];
    uint32_t value_0x0004; /**< Read by auto_return_field_0277aa80; meaning unknown. */
};
static_assert(offsetof(Object0277aa80, value_0x0004) == 0x4);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_0277aa80(const Object0277aa80 *self)
{
    return self->value_0x0004;
}

/**
 *
 * The part of the object that auto_return_field_0277aaa0 reads.
 *
 */
struct Object0277aaa0 {
    uint8_t unknown_0x0000[0x8];
    uint32_t value_0x0008; /**< Read by auto_return_field_0277aaa0; meaning unknown. */
};
static_assert(offsetof(Object0277aaa0, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_0277aaa0(const Object0277aaa0 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_0277aab0 reads.
 *
 */
struct Object0277aab0 {
    uint8_t unknown_0x0000[0xc];
    uint32_t value_0x000c; /**< Read by auto_return_field_0277aab0; meaning unknown. */
};
static_assert(offsetof(Object0277aab0, value_0x000c) == 0xc);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_0277aab0(const Object0277aab0 *self)
{
    return self->value_0x000c;
}

/**
 *
 * The part of the object that auto_return_field_0277aac0 reads.
 *
 */
struct Object0277aac0 {
    uint8_t unknown_0x0000[0x10];
    uint32_t value_0x0010; /**< Read by auto_return_field_0277aac0; meaning unknown. */
};
static_assert(offsetof(Object0277aac0, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_0277aac0(const Object0277aac0 *self)
{
    return self->value_0x0010;
}

/**
 *
 * The part of the object that auto_return_field_0277aad0 reads.
 *
 */
struct Object0277aad0 {
    uint8_t unknown_0x0000[0x14];
    uint32_t value_0x0014; /**< Read by auto_return_field_0277aad0; meaning unknown. */
};
static_assert(offsetof(Object0277aad0, value_0x0014) == 0x14);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_0277aad0(const Object0277aad0 *self)
{
    return self->value_0x0014;
}

/**
 *
 * The part of the object that auto_return_field_0277ac50 reads.
 *
 */
struct Object0277ac50 {
    uint64_t value_0x0000; /**< Read by auto_return_field_0277ac50; meaning unknown. */
};
static_assert(offsetof(Object0277ac50, value_0x0000) == 0x0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0277ac50(const Object0277ac50 *self)
{
    return self->value_0x0000;
}

/**
 *
 * The part of the object that auto_return_field_0277bbf0 reads.
 *
 */
struct Object0277bbf0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0277bbf0; meaning unknown. */
};
static_assert(offsetof(Object0277bbf0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0277bbf0(const Object0277bbf0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * The part of the object that auto_return_field_0277bc00 reads.
 *
 */
struct Object0277bc00 {
    uint8_t unknown_0x0000[0x40];
    uint32_t value_0x0040; /**< Read by auto_return_field_0277bc00; meaning unknown. */
};
static_assert(offsetof(Object0277bc00, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_0277bc00(const Object0277bc00 *self)
{
    return self->value_0x0040;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0277c7c0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0277d4f0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0277d4f0()
{
    return value_0277d4f0;
}
