// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_027b2840 reads.
 *
 */
struct Object027b2840 {
    uint8_t unknown_0x0000[0xc0];
    uint64_t value_0x00c0; /**< Read by auto_return_field_027b2840; meaning unknown. */
};
static_assert(offsetof(Object027b2840, value_0x00c0) == 0xc0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_027b2840(const Object027b2840 *self)
{
    return self->value_0x00c0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_027b7a20 = 0x1;

extern "C" uint8_t bb_auto_return_constant_027b7a20()
{
    return value_027b7a20;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_027b7c00 = 0x1;

extern "C" uint8_t bb_auto_return_constant_027b7c00()
{
    return value_027b7c00;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_027b7da0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_027b7da0()
{
    return value_027b7da0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_027b8120 = 0x1;

extern "C" uint8_t bb_auto_return_constant_027b8120()
{
    return value_027b8120;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_027b8490 = 0x1;

extern "C" uint8_t bb_auto_return_constant_027b8490()
{
    return value_027b8490;
}

/**
 *
 * The part of the object that auto_return_field_027b8620 reads.
 *
 */
struct Object027b8620 {
    uint8_t unknown_0x0000[0x40];
    uint8_t value_0x0040; /**< Read by auto_return_field_027b8620; meaning unknown. */
};
static_assert(offsetof(Object027b8620, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_027b8620(const Object027b8620 *self)
{
    return self->value_0x0040;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_027b97d0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_027b97d0()
{
    return value_027b97d0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_027b9f90()
{
}

/**
 *
 * The part of the object that auto_return_field_027ba0d0 reads.
 *
 */
struct Object027ba0d0 {
    uint8_t unknown_0x0000[0x230];
    uint64_t value_0x0230; /**< Read by auto_return_field_027ba0d0; meaning unknown. */
};
static_assert(offsetof(Object027ba0d0, value_0x0230) == 0x230);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_027ba0d0(const Object027ba0d0 *self)
{
    return self->value_0x0230;
}

/**
 *
 * The part of the object that auto_return_field_027ba0e0 reads.
 *
 */
struct Object027ba0e0 {
    uint8_t unknown_0x0000[0x288];
    uint64_t value_0x0288; /**< Read by auto_return_field_027ba0e0; meaning unknown. */
};
static_assert(offsetof(Object027ba0e0, value_0x0288) == 0x288);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_027ba0e0(const Object027ba0e0 *self)
{
    return self->value_0x0288;
}

/**
 *
 * The part of the object that auto_return_field_027ba0f0 reads.
 *
 */
struct Object027ba0f0 {
    uint8_t unknown_0x0000[0x280];
    uint64_t value_0x0280; /**< Read by auto_return_field_027ba0f0; meaning unknown. */
};
static_assert(offsetof(Object027ba0f0, value_0x0280) == 0x280);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_027ba0f0(const Object027ba0f0 *self)
{
    return self->value_0x0280;
}

/**
 *
 * The part of the object that auto_return_member_address_027ba100 reads.
 *
 */
struct Object027ba100 {
    uint8_t unknown_0x0000[0x2a8];
    uint8_t member_0x02a8; /**< Read by auto_return_member_address_027ba100; meaning unknown. */
};
static_assert(offsetof(Object027ba100, member_0x02a8) == 0x2a8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_027ba100(Object027ba100 *self)
{
    return &self->member_0x02a8;
}

/**
 *
 * The part of the object that auto_return_member_address_027ba110 reads.
 *
 */
struct Object027ba110 {
    uint8_t unknown_0x0000[0x2a8];
    uint8_t member_0x02a8; /**< Read by auto_return_member_address_027ba110; meaning unknown. */
};
static_assert(offsetof(Object027ba110, member_0x02a8) == 0x2a8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_027ba110(Object027ba110 *self)
{
    return &self->member_0x02a8;
}

/**
 *
 * The part of the object that auto_return_member_address_027ba120 reads.
 *
 */
struct Object027ba120 {
    uint8_t unknown_0x0000[0xff0];
    uint8_t member_0x0ff0; /**< Read by auto_return_member_address_027ba120; meaning unknown. */
};
static_assert(offsetof(Object027ba120, member_0x0ff0) == 0xff0);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_027ba120(Object027ba120 *self)
{
    return &self->member_0x0ff0;
}

/**
 *
 * The part of the object that auto_return_member_address_027ba130 reads.
 *
 */
struct Object027ba130 {
    uint8_t unknown_0x0000[0xfe8];
    uint8_t member_0x0fe8; /**< Read by auto_return_member_address_027ba130; meaning unknown. */
};
static_assert(offsetof(Object027ba130, member_0x0fe8) == 0xfe8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_027ba130(Object027ba130 *self)
{
    return &self->member_0x0fe8;
}

/**
 *
 * The part of the object that auto_return_member_address_027ba150 reads.
 *
 */
struct Object027ba150 {
    uint8_t unknown_0x0000[0x238];
    uint8_t member_0x0238; /**< Read by auto_return_member_address_027ba150; meaning unknown. */
};
static_assert(offsetof(Object027ba150, member_0x0238) == 0x238);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_027ba150(Object027ba150 *self)
{
    return &self->member_0x0238;
}

/**
 *
 * The part of the object that auto_return_field_027ba160 reads.
 *
 */
struct Object027ba160 {
    uint8_t unknown_0x0000[0x268];
    uint64_t value_0x0268; /**< Read by auto_return_field_027ba160; meaning unknown. */
};
static_assert(offsetof(Object027ba160, value_0x0268) == 0x268);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_027ba160(const Object027ba160 *self)
{
    return self->value_0x0268;
}

/**
 *
 * The part of the object that auto_return_field_027ba170 reads.
 *
 */
struct Object027ba170 {
    uint8_t unknown_0x0000[0x260];
    uint64_t value_0x0260; /**< Read by auto_return_field_027ba170; meaning unknown. */
};
static_assert(offsetof(Object027ba170, value_0x0260) == 0x260);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_027ba170(const Object027ba170 *self)
{
    return self->value_0x0260;
}

/**
 *
 * The part of the object that auto_return_member_address_027ba180 reads.
 *
 */
struct Object027ba180 {
    uint8_t unknown_0x0000[0x2c0];
    uint8_t member_0x02c0; /**< Read by auto_return_member_address_027ba180; meaning unknown. */
};
static_assert(offsetof(Object027ba180, member_0x02c0) == 0x2c0);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_027ba180(Object027ba180 *self)
{
    return &self->member_0x02c0;
}

/**
 *
 * The part of the object that auto_return_member_address_027ba190 reads.
 *
 */
struct Object027ba190 {
    uint8_t unknown_0x0000[0xd68];
    uint8_t member_0x0d68; /**< Read by auto_return_member_address_027ba190; meaning unknown. */
};
static_assert(offsetof(Object027ba190, member_0x0d68) == 0xd68);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_027ba190(Object027ba190 *self)
{
    return &self->member_0x0d68;
}

/**
 *
 * The part of the object that auto_return_member_address_027ba1a0 reads.
 *
 */
struct Object027ba1a0 {
    uint8_t unknown_0x0000[0xf40];
    uint8_t member_0x0f40; /**< Read by auto_return_member_address_027ba1a0; meaning unknown. */
};
static_assert(offsetof(Object027ba1a0, member_0x0f40) == 0xf40);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_027ba1a0(Object027ba1a0 *self)
{
    return &self->member_0x0f40;
}

/**
 *
 * The part of the object that auto_return_field_027ba1b0 reads.
 *
 */
struct Object027ba1b0 {
    uint8_t unknown_0x0000[0x270];
    uint64_t value_0x0270; /**< Read by auto_return_field_027ba1b0; meaning unknown. */
};
static_assert(offsetof(Object027ba1b0, value_0x0270) == 0x270);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_027ba1b0(const Object027ba1b0 *self)
{
    return self->value_0x0270;
}

/**
 *
 * The part of the object that auto_return_field_027ba1c0 reads.
 *
 */
struct Object027ba1c0 {
    uint8_t unknown_0x0000[0x278];
    uint64_t value_0x0278; /**< Read by auto_return_field_027ba1c0; meaning unknown. */
};
static_assert(offsetof(Object027ba1c0, value_0x0278) == 0x278);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_027ba1c0(const Object027ba1c0 *self)
{
    return self->value_0x0278;
}

/**
 *
 * The part of the object that auto_return_member_address_027ba1f0 reads.
 *
 */
struct Object027ba1f0 {
    uint8_t unknown_0x0000[0x1168];
    uint8_t member_0x1168; /**< Read by auto_return_member_address_027ba1f0; meaning unknown. */
};
static_assert(offsetof(Object027ba1f0, member_0x1168) == 0x1168);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_027ba1f0(Object027ba1f0 *self)
{
    return &self->member_0x1168;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_027ba200 = 0x1;

extern "C" uint8_t bb_auto_return_constant_027ba200()
{
    return value_027ba200;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_027ba240 = 0x1;

extern "C" uint8_t bb_auto_return_constant_027ba240()
{
    return value_027ba240;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_027bb9c0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_027bb9c0()
{
    return value_027bb9c0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_027bb9d0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_027bb9d0()
{
    return value_027bb9d0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_027bbb10 = 0x1;

extern "C" uint8_t bb_auto_return_constant_027bbb10()
{
    return value_027bbb10;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_027bc160()
{
}

/**
 *
 * The part of the object that auto_return_field_027bc270 reads.
 *
 */
struct Object027bc270 {
    uint8_t unknown_0x0000[0xa0];
    uint32_t value_0x00a0; /**< Read by auto_return_field_027bc270; meaning unknown. */
};
static_assert(offsetof(Object027bc270, value_0x00a0) == 0xa0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_027bc270(const Object027bc270 *self)
{
    return self->value_0x00a0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_027bef60()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_027bf0c0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_027bf0c0()
{
    return value_027bf0c0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_027bf170 = 0x1;

extern "C" uint8_t bb_auto_return_constant_027bf170()
{
    return value_027bf170;
}

/**
 *
 * The part of the object that auto_return_field_027bf1b0 reads.
 *
 */
struct Object027bf1b0 {
    uint8_t unknown_0x0000[0x10];
    uint64_t value_0x0010; /**< Read by auto_return_field_027bf1b0; meaning unknown. */
};
static_assert(offsetof(Object027bf1b0, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_027bf1b0(const Object027bf1b0 *self)
{
    return self->value_0x0010;
}
