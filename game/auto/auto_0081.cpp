// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_00817160()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00818850()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00819290()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_008198c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00819b90()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00819ba0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00819bc0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00819d30()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00819e00()
{
}

/**
 *
 * The part of the object that auto_return_field_0081ca00 reads.
 *
 */
struct Object0081ca00 {
    uint8_t unknown_0x0000[0xb50];
    uint64_t value_0x0b50; /**< Read by auto_return_field_0081ca00; meaning unknown. */
};
static_assert(offsetof(Object0081ca00, value_0x0b50) == 0xb50);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0081ca00(const Object0081ca00 *self)
{
    return self->value_0x0b50;
}

/**
 *
 * The part of the object that auto_return_field_0081ca10 reads.
 *
 */
struct Object0081ca10 {
    uint8_t unknown_0x0000[0xb48];
    uint64_t value_0x0b48; /**< Read by auto_return_field_0081ca10; meaning unknown. */
};
static_assert(offsetof(Object0081ca10, value_0x0b48) == 0xb48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0081ca10(const Object0081ca10 *self)
{
    return self->value_0x0b48;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0081ce40 = 0x6;

extern "C" uint32_t bb_auto_return_constant_0081ce40()
{
    return value_0081ce40;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0081ceb0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0081e8f0()
{
}

/**
 *
 * The part of the object that auto_return_field_0081ea00 reads.
 *
 */
struct Object0081ea00 {
    uint64_t value_0x0000; /**< Read by auto_return_field_0081ea00; meaning unknown. */
};
static_assert(offsetof(Object0081ea00, value_0x0000) == 0x0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0081ea00(const Object0081ea00 *self)
{
    return self->value_0x0000;
}

/**
 *
 * The part of the object that auto_return_field_0081ea40 reads.
 *
 */
struct Object0081ea40 {
    uint8_t unknown_0x0000[0x8];
    uint64_t value_0x0008; /**< Read by auto_return_field_0081ea40; meaning unknown. */
};
static_assert(offsetof(Object0081ea40, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0081ea40(const Object0081ea40 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_0081ea50 reads.
 *
 */
struct Object0081ea50 {
    uint8_t unknown_0x0000[0x8];
    uint64_t value_0x0008; /**< Read by auto_return_field_0081ea50; meaning unknown. */
};
static_assert(offsetof(Object0081ea50, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0081ea50(const Object0081ea50 *self)
{
    return self->value_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0081eae0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0081eaf0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_0081eb00 reads.
 *
 */
struct Object0081eb00 {
    uint8_t unknown_0x0000[0x14];
    uint32_t value_0x0014; /**< Read by auto_return_field_0081eb00; meaning unknown. */
};
static_assert(offsetof(Object0081eb00, value_0x0014) == 0x14);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_0081eb00(const Object0081eb00 *self)
{
    return self->value_0x0014;
}

/**
 *
 * The part of the object that auto_return_field_0081ed40 reads.
 *
 */
struct Object0081ed40 {
    uint8_t unknown_0x0000[0x20];
    uint32_t value_0x0020; /**< Read by auto_return_field_0081ed40; meaning unknown. */
};
static_assert(offsetof(Object0081ed40, value_0x0020) == 0x20);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_0081ed40(const Object0081ed40 *self)
{
    return self->value_0x0020;
}

/**
 *
 * The part of the object that auto_return_field_0081ee50 reads.
 *
 */
struct Object0081ee50 {
    uint8_t unknown_0x0000[0x30];
    uint32_t value_0x0030; /**< Read by auto_return_field_0081ee50; meaning unknown. */
};
static_assert(offsetof(Object0081ee50, value_0x0030) == 0x30);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_0081ee50(const Object0081ee50 *self)
{
    return self->value_0x0030;
}

/**
 *
 * The part of the object that auto_return_field_0081f1e0 reads.
 *
 */
struct Object0081f1e0 {
    uint8_t unknown_0x0000[0x10];
    uint32_t value_0x0010; /**< Read by auto_return_field_0081f1e0; meaning unknown. */
};
static_assert(offsetof(Object0081f1e0, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_0081f1e0(const Object0081f1e0 *self)
{
    return self->value_0x0010;
}

/**
 *
 * The part of the object that auto_return_field_0081f530 reads.
 *
 */
struct Object0081f530 {
    uint8_t unknown_0x0000[0x4c];
    uint32_t value_0x004c; /**< Read by auto_return_field_0081f530; meaning unknown. */
};
static_assert(offsetof(Object0081f530, value_0x004c) == 0x4c);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_0081f530(const Object0081f530 *self)
{
    return self->value_0x004c;
}

/**
 *
 * The part of the object that auto_return_member_address_0081fb70 reads.
 *
 */
struct Object0081fb70 {
    uint8_t unknown_0x0000[0x48];
    uint8_t member_0x0048; /**< Read by auto_return_member_address_0081fb70; meaning unknown. */
};
static_assert(offsetof(Object0081fb70, member_0x0048) == 0x48);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0081fb70(Object0081fb70 *self)
{
    return &self->member_0x0048;
}

/**
 *
 * The part of the object that auto_return_member_address_0081fb80 reads.
 *
 */
struct Object0081fb80 {
    uint8_t unknown_0x0000[0x48];
    uint8_t member_0x0048; /**< Read by auto_return_member_address_0081fb80; meaning unknown. */
};
static_assert(offsetof(Object0081fb80, member_0x0048) == 0x48);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0081fb80(Object0081fb80 *self)
{
    return &self->member_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0081fe90()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0081fea0 = 0x1;

extern "C" uint32_t bb_auto_return_constant_0081fea0()
{
    return value_0081fea0;
}
