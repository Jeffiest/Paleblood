// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_021201a0 reads.
 *
 */
struct Object021201a0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_021201a0; meaning unknown. */
};
static_assert(offsetof(Object021201a0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_021201a0(const Object021201a0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_021201b0 reads.
 *
 */
struct Object021201b0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_021201b0; meaning unknown. */
};
static_assert(offsetof(Object021201b0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_021201b0(const Object021201b0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02120200()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_021202a0 = 0x20;

extern "C" uint32_t bb_auto_return_constant_021202a0()
{
    return value_021202a0;
}

/**
 *
 * The part of the object that auto_return_field_02120410 reads.
 *
 */
struct Object02120410 {
    uint8_t unknown_0x0000[0x70];
    uint64_t value_0x0070; /**< Read by auto_return_field_02120410; meaning unknown. */
};
static_assert(offsetof(Object02120410, value_0x0070) == 0x70);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02120410(const Object02120410 *self)
{
    return self->value_0x0070;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02120580()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02120590 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02120590()
{
    return value_02120590;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_021205a0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_021205a0()
{
    return value_021205a0;
}

/**
 *
 * The part of the object that auto_return_field_02120860 reads.
 *
 */
struct Object02120860 {
    uint64_t value_0x0000; /**< Read by auto_return_field_02120860; meaning unknown. */
};
static_assert(offsetof(Object02120860, value_0x0000) == 0x0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02120860(const Object02120860 *self)
{
    return self->value_0x0000;
}

/**
 *
 * The part of the object that auto_return_field_02120920 reads.
 *
 */
struct Object02120920 {
    uint8_t unknown_0x0000[0x28];
    uint64_t value_0x0028; /**< Read by auto_return_field_02120920; meaning unknown. */
};
static_assert(offsetof(Object02120920, value_0x0028) == 0x28);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02120920(const Object02120920 *self)
{
    return self->value_0x0028;
}

/**
 *
 * The part of the object that auto_return_field_02120940 reads.
 *
 */
struct Object02120940 {
    uint8_t unknown_0x0000[0x30];
    uint64_t value_0x0030; /**< Read by auto_return_field_02120940; meaning unknown. */
};
static_assert(offsetof(Object02120940, value_0x0030) == 0x30);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02120940(const Object02120940 *self)
{
    return self->value_0x0030;
}

/**
 *
 * The part of the object that auto_return_field_02120960 reads.
 *
 */
struct Object02120960 {
    uint8_t unknown_0x0000[0x38];
    uint64_t value_0x0038; /**< Read by auto_return_field_02120960; meaning unknown. */
};
static_assert(offsetof(Object02120960, value_0x0038) == 0x38);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02120960(const Object02120960 *self)
{
    return self->value_0x0038;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02120980()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02120990()
{
}

/**
 *
 * The part of the object that auto_return_member_address_02121850 reads.
 *
 */
struct Object02121850 {
    uint8_t unknown_0x0000[0xa0];
    uint8_t member_0x00a0; /**< Read by auto_return_member_address_02121850; meaning unknown. */
};
static_assert(offsetof(Object02121850, member_0x00a0) == 0xa0);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02121850(Object02121850 *self)
{
    return &self->member_0x00a0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02121b60 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02121b60()
{
    return value_02121b60;
}

/**
 *
 * The part of the object that auto_return_member_address_02121d90 reads.
 *
 */
struct Object02121d90 {
    uint8_t unknown_0x0000[0x224];
    uint8_t member_0x0224; /**< Read by auto_return_member_address_02121d90; meaning unknown. */
};
static_assert(offsetof(Object02121d90, member_0x0224) == 0x224);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02121d90(Object02121d90 *self)
{
    return &self->member_0x0224;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02122240()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_021224a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02122cf0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02122d50()
{
}

/**
 *
 * The part of the object that auto_return_member_address_02124e50 reads.
 *
 */
struct Object02124e50 {
    uint8_t unknown_0x0000[0xc0];
    uint8_t member_0x00c0; /**< Read by auto_return_member_address_02124e50; meaning unknown. */
};
static_assert(offsetof(Object02124e50, member_0x00c0) == 0xc0);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02124e50(Object02124e50 *self)
{
    return &self->member_0x00c0;
}

/**
 *
 * The part of the object that auto_return_member_address_02124e60 reads.
 *
 */
struct Object02124e60 {
    uint8_t unknown_0x0000[0xd0];
    uint8_t member_0x00d0; /**< Read by auto_return_member_address_02124e60; meaning unknown. */
};
static_assert(offsetof(Object02124e60, member_0x00d0) == 0xd0);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02124e60(Object02124e60 *self)
{
    return &self->member_0x00d0;
}

/**
 *
 * The part of the object that auto_return_member_address_02124e80 reads.
 *
 */
struct Object02124e80 {
    uint8_t unknown_0x0000[0x750];
    uint8_t member_0x0750; /**< Read by auto_return_member_address_02124e80; meaning unknown. */
};
static_assert(offsetof(Object02124e80, member_0x0750) == 0x750);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02124e80(Object02124e80 *self)
{
    return &self->member_0x0750;
}

/**
 *
 * The part of the object that auto_return_field_02126870 reads.
 *
 */
struct Object02126870 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02126870; meaning unknown. */
};
static_assert(offsetof(Object02126870, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02126870(const Object02126870 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02126880 reads.
 *
 */
struct Object02126880 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02126880; meaning unknown. */
};
static_assert(offsetof(Object02126880, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02126880(const Object02126880 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_021268d0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02126b50 = 0x890;

extern "C" uint32_t bb_auto_return_constant_02126b50()
{
    return value_02126b50;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02127a20()
{
}

/**
 *
 * The part of the object that auto_return_field_02127a70 reads.
 *
 */
struct Object02127a70 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02127a70; meaning unknown. */
};
static_assert(offsetof(Object02127a70, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02127a70(const Object02127a70 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02127a80 reads.
 *
 */
struct Object02127a80 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02127a80; meaning unknown. */
};
static_assert(offsetof(Object02127a80, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02127a80(const Object02127a80 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02127ad0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02127d50 = 0x28;

extern "C" uint32_t bb_auto_return_constant_02127d50()
{
    return value_02127d50;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0212ae80()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0212b260()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0212b2c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0212b560()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0212b8a0()
{
}

/**
 *
 * The part of the object that auto_return_field_0212ba50 reads.
 *
 */
struct Object0212ba50 {
    uint8_t unknown_0x0000[0x8];
    uint64_t value_0x0008; /**< Read by auto_return_field_0212ba50; meaning unknown. */
};
static_assert(offsetof(Object0212ba50, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0212ba50(const Object0212ba50 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_0212ba60 reads.
 *
 */
struct Object0212ba60 {
    uint8_t unknown_0x0000[0x10];
    uint64_t value_0x0010; /**< Read by auto_return_field_0212ba60; meaning unknown. */
};
static_assert(offsetof(Object0212ba60, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0212ba60(const Object0212ba60 *self)
{
    return self->value_0x0010;
}

/**
 *
 * The part of the object that auto_return_field_0212ba70 reads.
 *
 */
struct Object0212ba70 {
    uint8_t unknown_0x0000[0x18];
    uint8_t value_0x0018; /**< Read by auto_return_field_0212ba70; meaning unknown. */
};
static_assert(offsetof(Object0212ba70, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_0212ba70(const Object0212ba70 *self)
{
    return self->value_0x0018;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0212c230()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0212c620()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0212c990()
{
}
