// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c31ac0()
{
}

/**
 *
 * The part of the object that auto_return_field_02c32c50 reads.
 *
 */
struct Object02c32c50 {
    uint8_t unknown_0x0000[0xe8];
    uint64_t value_0x00e8; /**< Read by auto_return_field_02c32c50; meaning unknown. */
};
static_assert(offsetof(Object02c32c50, value_0x00e8) == 0xe8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c32c50(const Object02c32c50 *self)
{
    return self->value_0x00e8;
}

/**
 *
 * The part of the object that auto_return_member_address_02c35ce0 reads.
 *
 */
struct Object02c35ce0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_02c35ce0; meaning unknown. */
};
static_assert(offsetof(Object02c35ce0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02c35ce0(Object02c35ce0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c36b10()
{
}

/**
 *
 * The part of the object that auto_return_field_02c36d10 reads.
 *
 */
struct Object02c36d10 {
    uint8_t unknown_0x0000[0x2a0];
    uint32_t value_0x02a0; /**< Read by auto_return_field_02c36d10; meaning unknown. */
};
static_assert(offsetof(Object02c36d10, value_0x02a0) == 0x2a0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02c36d10(const Object02c36d10 *self)
{
    return self->value_0x02a0;
}

/**
 *
 * The part of the object that auto_return_member_address_02c37540 reads.
 *
 */
struct Object02c37540 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_02c37540; meaning unknown. */
};
static_assert(offsetof(Object02c37540, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02c37540(Object02c37540 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_02c37a40 reads.
 *
 */
struct Object02c37a40 {
    uint8_t unknown_0x0000[0x18];
    uint32_t value_0x0018; /**< Read by auto_return_field_02c37a40; meaning unknown. */
};
static_assert(offsetof(Object02c37a40, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02c37a40(const Object02c37a40 *self)
{
    return self->value_0x0018;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c3b600()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c3b660()
{
}

/**
 *
 * The part of the object that auto_return_field_02c3b670 reads.
 *
 */
struct Object02c3b670 {
    uint8_t unknown_0x0000[0x40];
    uint32_t value_0x0040; /**< Read by auto_return_field_02c3b670; meaning unknown. */
};
static_assert(offsetof(Object02c3b670, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02c3b670(const Object02c3b670 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02c3b6f0 reads.
 *
 */
struct Object02c3b6f0 {
    uint8_t unknown_0x0000[0x38];
    uint32_t value_0x0038; /**< Read by auto_return_field_02c3b6f0; meaning unknown. */
};
static_assert(offsetof(Object02c3b6f0, value_0x0038) == 0x38);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02c3b6f0(const Object02c3b6f0 *self)
{
    return self->value_0x0038;
}

/**
 *
 * The part of the object that auto_return_field_02c3b700 reads.
 *
 */
struct Object02c3b700 {
    uint8_t unknown_0x0000[0x3c];
    uint32_t value_0x003c; /**< Read by auto_return_field_02c3b700; meaning unknown. */
};
static_assert(offsetof(Object02c3b700, value_0x003c) == 0x3c);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02c3b700(const Object02c3b700 *self)
{
    return self->value_0x003c;
}

/**
 *
 * The part of the object that auto_return_field_02c3b710 reads.
 *
 */
struct Object02c3b710 {
    uint8_t unknown_0x0000[0x18];
    uint32_t value_0x0018; /**< Read by auto_return_field_02c3b710; meaning unknown. */
};
static_assert(offsetof(Object02c3b710, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02c3b710(const Object02c3b710 *self)
{
    return self->value_0x0018;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c3b730 = 0xd;

extern "C" uint32_t bb_auto_return_constant_02c3b730()
{
    return value_02c3b730;
}

/**
 *
 * The part of the object that auto_return_field_02c3b770 reads.
 *
 */
struct Object02c3b770 {
    uint8_t unknown_0x0000[0x48];
    uint8_t value_0x0048; /**< Read by auto_return_field_02c3b770; meaning unknown. */
};
static_assert(offsetof(Object02c3b770, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02c3b770(const Object02c3b770 *self)
{
    return self->value_0x0048;
}

/**
 *
 * The part of the object that auto_return_field_02c3c6a0 reads.
 *
 */
struct Object02c3c6a0 {
    uint8_t unknown_0x0000[0x11];
    uint8_t value_0x0011; /**< Read by auto_return_field_02c3c6a0; meaning unknown. */
};
static_assert(offsetof(Object02c3c6a0, value_0x0011) == 0x11);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02c3c6a0(const Object02c3c6a0 *self)
{
    return self->value_0x0011;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c3c6b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c3d020()
{
}

/**
 *
 * The part of the object that auto_return_field_02c3d140 reads.
 *
 */
struct Object02c3d140 {
    uint8_t unknown_0x0000[0x4c];
    uint32_t value_0x004c; /**< Read by auto_return_field_02c3d140; meaning unknown. */
};
static_assert(offsetof(Object02c3d140, value_0x004c) == 0x4c);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02c3d140(const Object02c3d140 *self)
{
    return self->value_0x004c;
}

/**
 *
 * The part of the object that auto_return_field_02c3d780 reads.
 *
 */
struct Object02c3d780 {
    uint8_t unknown_0x0000[0x20];
    uint32_t value_0x0020; /**< Read by auto_return_field_02c3d780; meaning unknown. */
};
static_assert(offsetof(Object02c3d780, value_0x0020) == 0x20);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02c3d780(const Object02c3d780 *self)
{
    return self->value_0x0020;
}

/**
 *
 * The part of the object that auto_return_field_02c3d7f0 reads.
 *
 */
struct Object02c3d7f0 {
    uint8_t unknown_0x0000[0x60];
    uint32_t value_0x0060; /**< Read by auto_return_field_02c3d7f0; meaning unknown. */
};
static_assert(offsetof(Object02c3d7f0, value_0x0060) == 0x60);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02c3d7f0(const Object02c3d7f0 *self)
{
    return self->value_0x0060;
}

/**
 *
 * The part of the object that auto_return_field_02c3d810 reads.
 *
 */
struct Object02c3d810 {
    uint8_t unknown_0x0000[0x68];
    uint64_t value_0x0068; /**< Read by auto_return_field_02c3d810; meaning unknown. */
};
static_assert(offsetof(Object02c3d810, value_0x0068) == 0x68);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c3d810(const Object02c3d810 *self)
{
    return self->value_0x0068;
}

/**
 *
 * The part of the object that auto_return_field_02c3d820 reads.
 *
 */
struct Object02c3d820 {
    uint8_t unknown_0x0000[0x70];
    uint64_t value_0x0070; /**< Read by auto_return_field_02c3d820; meaning unknown. */
};
static_assert(offsetof(Object02c3d820, value_0x0070) == 0x70);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c3d820(const Object02c3d820 *self)
{
    return self->value_0x0070;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c3d960()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c3dbb0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c3dd20 = 0x4;

extern "C" uint32_t bb_auto_return_constant_02c3dd20()
{
    return value_02c3dd20;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c3f680 = 0x3;

extern "C" uint32_t bb_auto_return_constant_02c3f680()
{
    return value_02c3f680;
}
