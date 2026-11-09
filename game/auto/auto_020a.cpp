// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_020a1510()
{
}

/**
 *
 * The part of the object that auto_return_field_020a2200 reads.
 *
 */
struct Object020a2200 {
    uint8_t unknown_0x0000[0x20];
    uint64_t value_0x0020; /**< Read by auto_return_field_020a2200; meaning unknown. */
};
static_assert(offsetof(Object020a2200, value_0x0020) == 0x20);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_020a2200(const Object020a2200 *self)
{
    return self->value_0x0020;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_020a2720()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_020a2730 reads.
 *
 */
struct Object020a2730 {
    uint8_t unknown_0x0000[0x18];
    uint64_t value_0x0018; /**< Read by auto_return_field_020a2730; meaning unknown. */
};
static_assert(offsetof(Object020a2730, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_020a2730(const Object020a2730 *self)
{
    return self->value_0x0018;
}

/**
 *
 * The part of the object that auto_return_field_020a2740 reads.
 *
 */
struct Object020a2740 {
    uint8_t unknown_0x0000[0x18];
    uint64_t value_0x0018; /**< Read by auto_return_field_020a2740; meaning unknown. */
};
static_assert(offsetof(Object020a2740, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_020a2740(const Object020a2740 *self)
{
    return self->value_0x0018;
}

/**
 *
 * The part of the object that auto_return_field_020a2750 reads.
 *
 */
struct Object020a2750 {
    uint8_t unknown_0x0000[0x18];
    uint64_t value_0x0018; /**< Read by auto_return_field_020a2750; meaning unknown. */
};
static_assert(offsetof(Object020a2750, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_020a2750(const Object020a2750 *self)
{
    return self->value_0x0018;
}

/**
 *
 * The part of the object that auto_return_field_020a2930 reads.
 *
 */
struct Object020a2930 {
    uint8_t unknown_0x0000[0x20];
    uint64_t value_0x0020; /**< Read by auto_return_field_020a2930; meaning unknown. */
};
static_assert(offsetof(Object020a2930, value_0x0020) == 0x20);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_020a2930(const Object020a2930 *self)
{
    return self->value_0x0020;
}

/**
 *
 * The part of the object that auto_return_member_address_020a3500 reads.
 *
 */
struct Object020a3500 {
    uint8_t unknown_0x0000[0x30];
    uint8_t member_0x0030; /**< Read by auto_return_member_address_020a3500; meaning unknown. */
};
static_assert(offsetof(Object020a3500, member_0x0030) == 0x30);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_020a3500(Object020a3500 *self)
{
    return &self->member_0x0030;
}

/**
 *
 * The part of the object that auto_return_member_address_020a3510 reads.
 *
 */
struct Object020a3510 {
    uint8_t unknown_0x0000[0x50];
    uint8_t member_0x0050; /**< Read by auto_return_member_address_020a3510; meaning unknown. */
};
static_assert(offsetof(Object020a3510, member_0x0050) == 0x50);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_020a3510(Object020a3510 *self)
{
    return &self->member_0x0050;
}

/**
 *
 * The part of the object that auto_return_member_address_020a3520 reads.
 *
 */
struct Object020a3520 {
    uint8_t unknown_0x0000[0x70];
    uint8_t member_0x0070; /**< Read by auto_return_member_address_020a3520; meaning unknown. */
};
static_assert(offsetof(Object020a3520, member_0x0070) == 0x70);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_020a3520(Object020a3520 *self)
{
    return &self->member_0x0070;
}

/**
 *
 * The part of the object that auto_return_member_address_020a3530 reads.
 *
 */
struct Object020a3530 {
    uint8_t unknown_0x0000[0x90];
    uint8_t member_0x0090; /**< Read by auto_return_member_address_020a3530; meaning unknown. */
};
static_assert(offsetof(Object020a3530, member_0x0090) == 0x90);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_020a3530(Object020a3530 *self)
{
    return &self->member_0x0090;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_020a46a0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_020a4a00 reads.
 *
 */
struct Object020a4a00 {
    uint8_t unknown_0x0000[0x120];
    uint8_t member_0x0120; /**< Read by auto_return_member_address_020a4a00; meaning unknown. */
};
static_assert(offsetof(Object020a4a00, member_0x0120) == 0x120);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_020a4a00(Object020a4a00 *self)
{
    return &self->member_0x0120;
}

/**
 *
 * The part of the object that auto_return_field_020a4a10 reads.
 *
 */
struct Object020a4a10 {
    uint8_t unknown_0x0000[0x10];
    uint64_t value_0x0010; /**< Read by auto_return_field_020a4a10; meaning unknown. */
};
static_assert(offsetof(Object020a4a10, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_020a4a10(const Object020a4a10 *self)
{
    return self->value_0x0010;
}

/**
 *
 * The part of the object that auto_return_field_020a9180 reads.
 *
 */
struct Object020a9180 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_020a9180; meaning unknown. */
};
static_assert(offsetof(Object020a9180, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_020a9180(const Object020a9180 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_020a9190 reads.
 *
 */
struct Object020a9190 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_020a9190; meaning unknown. */
};
static_assert(offsetof(Object020a9190, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_020a9190(const Object020a9190 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_020a91e0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_020a9280 = 0x148;

extern "C" uint32_t bb_auto_return_constant_020a9280()
{
    return value_020a9280;
}

/**
 *
 * The part of the object that auto_return_field_020a92c0 reads.
 *
 */
struct Object020a92c0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_020a92c0; meaning unknown. */
};
static_assert(offsetof(Object020a92c0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_020a92c0(const Object020a92c0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_020a92d0 reads.
 *
 */
struct Object020a92d0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_020a92d0; meaning unknown. */
};
static_assert(offsetof(Object020a92d0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_020a92d0(const Object020a92d0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_020a9320()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_020a95a0 = 0xd8;

extern "C" uint32_t bb_auto_return_constant_020a95a0()
{
    return value_020a95a0;
}
