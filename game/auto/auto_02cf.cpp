// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02cf5720()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02cf8e50()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02cf93d0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_02cf9740 reads.
 *
 */
struct Object02cf9740 {
    uint8_t unknown_0x0000[0x20];
    uint8_t member_0x0020; /**< Read by auto_return_member_address_02cf9740; meaning unknown. */
};
static_assert(offsetof(Object02cf9740, member_0x0020) == 0x20);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02cf9740(Object02cf9740 *self)
{
    return &self->member_0x0020;
}

/**
 *
 * The part of the object that auto_return_field_02cf99a0 reads.
 *
 */
struct Object02cf99a0 {
    uint8_t unknown_0x0000[0x170];
    uint64_t value_0x0170; /**< Read by auto_return_field_02cf99a0; meaning unknown. */
};
static_assert(offsetof(Object02cf99a0, value_0x0170) == 0x170);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cf99a0(const Object02cf99a0 *self)
{
    return self->value_0x0170;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02cf9a10 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02cf9a10()
{
    return value_02cf9a10;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02cf9a20()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_02cfa120 reads.
 *
 */
struct Object02cfa120 {
    uint32_t value_0x0000; /**< Read by auto_return_field_02cfa120; meaning unknown. */
};
static_assert(offsetof(Object02cfa120, value_0x0000) == 0x0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02cfa120(const Object02cfa120 *self)
{
    return self->value_0x0000;
}

/**
 *
 * The part of the object that auto_return_field_02cfa130 reads.
 *
 */
struct Object02cfa130 {
    uint8_t unknown_0x0000[0x4];
    uint32_t value_0x0004; /**< Read by auto_return_field_02cfa130; meaning unknown. */
};
static_assert(offsetof(Object02cfa130, value_0x0004) == 0x4);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02cfa130(const Object02cfa130 *self)
{
    return self->value_0x0004;
}

/**
 *
 * The part of the object that auto_return_field_02cfa140 reads.
 *
 */
struct Object02cfa140 {
    uint8_t unknown_0x0000[0x8];
    uint32_t value_0x0008; /**< Read by auto_return_field_02cfa140; meaning unknown. */
};
static_assert(offsetof(Object02cfa140, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02cfa140(const Object02cfa140 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_02cfa150 reads.
 *
 */
struct Object02cfa150 {
    uint8_t unknown_0x0000[0xc];
    uint32_t value_0x000c; /**< Read by auto_return_field_02cfa150; meaning unknown. */
};
static_assert(offsetof(Object02cfa150, value_0x000c) == 0xc);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02cfa150(const Object02cfa150 *self)
{
    return self->value_0x000c;
}

/**
 *
 * The part of the object that auto_return_field_02cfa160 reads.
 *
 */
struct Object02cfa160 {
    uint8_t unknown_0x0000[0x10];
    uint32_t value_0x0010; /**< Read by auto_return_field_02cfa160; meaning unknown. */
};
static_assert(offsetof(Object02cfa160, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02cfa160(const Object02cfa160 *self)
{
    return self->value_0x0010;
}

/**
 *
 * The part of the object that auto_return_field_02cfa170 reads.
 *
 */
struct Object02cfa170 {
    uint8_t unknown_0x0000[0x14];
    uint32_t value_0x0014; /**< Read by auto_return_field_02cfa170; meaning unknown. */
};
static_assert(offsetof(Object02cfa170, value_0x0014) == 0x14);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02cfa170(const Object02cfa170 *self)
{
    return self->value_0x0014;
}

/**
 *
 * The part of the object that auto_return_field_02cfa180 reads.
 *
 */
struct Object02cfa180 {
    uint8_t unknown_0x0000[0x18];
    uint32_t value_0x0018; /**< Read by auto_return_field_02cfa180; meaning unknown. */
};
static_assert(offsetof(Object02cfa180, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02cfa180(const Object02cfa180 *self)
{
    return self->value_0x0018;
}

/**
 *
 * The part of the object that auto_return_field_02cfa190 reads.
 *
 */
struct Object02cfa190 {
    uint8_t unknown_0x0000[0x20];
    uint64_t value_0x0020; /**< Read by auto_return_field_02cfa190; meaning unknown. */
};
static_assert(offsetof(Object02cfa190, value_0x0020) == 0x20);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cfa190(const Object02cfa190 *self)
{
    return self->value_0x0020;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02cfa320()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02cfa580()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_02cfa5a0 reads.
 *
 */
struct Object02cfa5a0 {
    uint8_t unknown_0x0000[0xd0];
    uint64_t value_0x00d0; /**< Read by auto_return_field_02cfa5a0; meaning unknown. */
};
static_assert(offsetof(Object02cfa5a0, value_0x00d0) == 0xd0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cfa5a0(const Object02cfa5a0 *self)
{
    return self->value_0x00d0;
}

/**
 *
 * The part of the object that auto_return_field_02cfa5b0 reads.
 *
 */
struct Object02cfa5b0 {
    uint8_t unknown_0x0000[0xd8];
    uint64_t value_0x00d8; /**< Read by auto_return_field_02cfa5b0; meaning unknown. */
};
static_assert(offsetof(Object02cfa5b0, value_0x00d8) == 0xd8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cfa5b0(const Object02cfa5b0 *self)
{
    return self->value_0x00d8;
}

/**
 *
 * The part of the object that auto_return_field_02cfa5c0 reads.
 *
 */
struct Object02cfa5c0 {
    uint8_t unknown_0x0000[0xe0];
    uint32_t value_0x00e0; /**< Read by auto_return_field_02cfa5c0; meaning unknown. */
};
static_assert(offsetof(Object02cfa5c0, value_0x00e0) == 0xe0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02cfa5c0(const Object02cfa5c0 *self)
{
    return self->value_0x00e0;
}

/**
 *
 * The part of the object that auto_return_field_02cfa5d0 reads.
 *
 */
struct Object02cfa5d0 {
    uint8_t unknown_0x0000[0xe4];
    uint32_t value_0x00e4; /**< Read by auto_return_field_02cfa5d0; meaning unknown. */
};
static_assert(offsetof(Object02cfa5d0, value_0x00e4) == 0xe4);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02cfa5d0(const Object02cfa5d0 *self)
{
    return self->value_0x00e4;
}

/**
 *
 * The part of the object that auto_return_field_02cfa5e0 reads.
 *
 */
struct Object02cfa5e0 {
    uint8_t unknown_0x0000[0xe8];
    uint32_t value_0x00e8; /**< Read by auto_return_field_02cfa5e0; meaning unknown. */
};
static_assert(offsetof(Object02cfa5e0, value_0x00e8) == 0xe8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02cfa5e0(const Object02cfa5e0 *self)
{
    return self->value_0x00e8;
}

/**
 *
 * The part of the object that auto_return_field_02cfa5f0 reads.
 *
 */
struct Object02cfa5f0 {
    uint8_t unknown_0x0000[0xec];
    uint32_t value_0x00ec; /**< Read by auto_return_field_02cfa5f0; meaning unknown. */
};
static_assert(offsetof(Object02cfa5f0, value_0x00ec) == 0xec);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02cfa5f0(const Object02cfa5f0 *self)
{
    return self->value_0x00ec;
}

/**
 *
 * The part of the object that auto_return_field_02cfa600 reads.
 *
 */
struct Object02cfa600 {
    uint8_t unknown_0x0000[0xf0];
    uint32_t value_0x00f0; /**< Read by auto_return_field_02cfa600; meaning unknown. */
};
static_assert(offsetof(Object02cfa600, value_0x00f0) == 0xf0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02cfa600(const Object02cfa600 *self)
{
    return self->value_0x00f0;
}

/**
 *
 * The part of the object that auto_return_field_02cfa610 reads.
 *
 */
struct Object02cfa610 {
    uint8_t unknown_0x0000[0xf4];
    uint32_t value_0x00f4; /**< Read by auto_return_field_02cfa610; meaning unknown. */
};
static_assert(offsetof(Object02cfa610, value_0x00f4) == 0xf4);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02cfa610(const Object02cfa610 *self)
{
    return self->value_0x00f4;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02cfdc20()
{
}

/**
 *
 * The part of the object that auto_return_field_02cfdd50 reads.
 *
 */
struct Object02cfdd50 {
    uint8_t unknown_0x0000[0x2dd];
    uint8_t value_0x02dd; /**< Read by auto_return_field_02cfdd50; meaning unknown. */
};
static_assert(offsetof(Object02cfdd50, value_0x02dd) == 0x2dd);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02cfdd50(const Object02cfdd50 *self)
{
    return self->value_0x02dd;
}

/**
 *
 * The part of the object that auto_return_field_02cffe90 reads.
 *
 */
struct Object02cffe90 {
    uint8_t unknown_0x0000[0x8];
    uint32_t value_0x0008; /**< Read by auto_return_field_02cffe90; meaning unknown. */
};
static_assert(offsetof(Object02cffe90, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02cffe90(const Object02cffe90 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_02cffea0 reads.
 *
 */
struct Object02cffea0 {
    uint8_t unknown_0x0000[0xc];
    uint32_t value_0x000c; /**< Read by auto_return_field_02cffea0; meaning unknown. */
};
static_assert(offsetof(Object02cffea0, value_0x000c) == 0xc);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02cffea0(const Object02cffea0 *self)
{
    return self->value_0x000c;
}

/**
 *
 * The part of the object that auto_return_field_02cffeb0 reads.
 *
 */
struct Object02cffeb0 {
    uint8_t unknown_0x0000[0x10];
    uint32_t value_0x0010; /**< Read by auto_return_field_02cffeb0; meaning unknown. */
};
static_assert(offsetof(Object02cffeb0, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02cffeb0(const Object02cffeb0 *self)
{
    return self->value_0x0010;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02cfff60()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02cfff80()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02cfff90()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02cfffa0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02cfffb0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02cfffc0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02cfffd0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02cffff0()
{
    return 0;
}
