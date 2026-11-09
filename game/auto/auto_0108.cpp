// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_010803e0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01080980 reads.
 *
 */
struct Object01080980 {
    uint8_t unknown_0x0000[0x140];
    uint32_t value_0x0140; /**< Read by auto_return_field_01080980; meaning unknown. */
};
static_assert(offsetof(Object01080980, value_0x0140) == 0x140);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01080980(const Object01080980 *self)
{
    return self->value_0x0140;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01082c90()
{
}

/**
 *
 * The part of the object that auto_return_field_010838d0 reads.
 *
 */
struct Object010838d0 {
    uint32_t value_0x0000; /**< Read by auto_return_field_010838d0; meaning unknown. */
};
static_assert(offsetof(Object010838d0, value_0x0000) == 0x0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_010838d0(const Object010838d0 *self)
{
    return self->value_0x0000;
}

/**
 *
 * The part of the object that auto_return_field_010838e0 reads.
 *
 */
struct Object010838e0 {
    uint8_t unknown_0x0000[0x4];
    uint32_t value_0x0004; /**< Read by auto_return_field_010838e0; meaning unknown. */
};
static_assert(offsetof(Object010838e0, value_0x0004) == 0x4);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_010838e0(const Object010838e0 *self)
{
    return self->value_0x0004;
}

/**
 *
 * The part of the object that auto_return_field_010838f0 reads.
 *
 */
struct Object010838f0 {
    uint8_t unknown_0x0000[0x8];
    uint16_t value_0x0008; /**< Read by auto_return_field_010838f0; meaning unknown. */
};
static_assert(offsetof(Object010838f0, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_010838f0(const Object010838f0 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_01083910 reads.
 *
 */
struct Object01083910 {
    uint8_t unknown_0x0000[0xc];
    uint32_t value_0x000c; /**< Read by auto_return_field_01083910; meaning unknown. */
};
static_assert(offsetof(Object01083910, value_0x000c) == 0xc);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01083910(const Object01083910 *self)
{
    return self->value_0x000c;
}

/**
 *
 * The part of the object that auto_return_field_01083920 reads.
 *
 */
struct Object01083920 {
    uint8_t unknown_0x0000[0x10];
    uint32_t value_0x0010; /**< Read by auto_return_field_01083920; meaning unknown. */
};
static_assert(offsetof(Object01083920, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01083920(const Object01083920 *self)
{
    return self->value_0x0010;
}

/**
 *
 * The part of the object that auto_return_field_01083930 reads.
 *
 */
struct Object01083930 {
    uint8_t unknown_0x0000[0x14];
    uint32_t value_0x0014; /**< Read by auto_return_field_01083930; meaning unknown. */
};
static_assert(offsetof(Object01083930, value_0x0014) == 0x14);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01083930(const Object01083930 *self)
{
    return self->value_0x0014;
}

/**
 *
 * The part of the object that auto_return_field_01083940 reads.
 *
 */
struct Object01083940 {
    uint8_t unknown_0x0000[0x18];
    uint32_t value_0x0018; /**< Read by auto_return_field_01083940; meaning unknown. */
};
static_assert(offsetof(Object01083940, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01083940(const Object01083940 *self)
{
    return self->value_0x0018;
}

/**
 *
 * The part of the object that auto_return_field_01083950 reads.
 *
 */
struct Object01083950 {
    uint8_t unknown_0x0000[0x1c];
    uint32_t value_0x001c; /**< Read by auto_return_field_01083950; meaning unknown. */
};
static_assert(offsetof(Object01083950, value_0x001c) == 0x1c);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01083950(const Object01083950 *self)
{
    return self->value_0x001c;
}

/**
 *
 * The part of the object that auto_return_member_address_01083960 reads.
 *
 */
struct Object01083960 {
    uint8_t unknown_0x0000[0x20];
    uint8_t member_0x0020; /**< Read by auto_return_member_address_01083960; meaning unknown. */
};
static_assert(offsetof(Object01083960, member_0x0020) == 0x20);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01083960(Object01083960 *self)
{
    return &self->member_0x0020;
}

/**
 *
 * The part of the object that auto_return_member_address_01083970 reads.
 *
 */
struct Object01083970 {
    uint8_t unknown_0x0000[0x30];
    uint8_t member_0x0030; /**< Read by auto_return_member_address_01083970; meaning unknown. */
};
static_assert(offsetof(Object01083970, member_0x0030) == 0x30);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01083970(Object01083970 *self)
{
    return &self->member_0x0030;
}

/**
 *
 * The part of the object that auto_return_field_01083e90 reads.
 *
 */
struct Object01083e90 {
    uint32_t value_0x0000; /**< Read by auto_return_field_01083e90; meaning unknown. */
};
static_assert(offsetof(Object01083e90, value_0x0000) == 0x0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01083e90(const Object01083e90 *self)
{
    return self->value_0x0000;
}

/**
 *
 * The part of the object that auto_return_field_01083ea0 reads.
 *
 */
struct Object01083ea0 {
    uint8_t unknown_0x0000[0x4];
    uint32_t value_0x0004; /**< Read by auto_return_field_01083ea0; meaning unknown. */
};
static_assert(offsetof(Object01083ea0, value_0x0004) == 0x4);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01083ea0(const Object01083ea0 *self)
{
    return self->value_0x0004;
}

/**
 *
 * The part of the object that auto_return_field_010845f0 reads.
 *
 */
struct Object010845f0 {
    uint8_t unknown_0x0000[0x10];
    uint32_t value_0x0010; /**< Read by auto_return_field_010845f0; meaning unknown. */
};
static_assert(offsetof(Object010845f0, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_010845f0(const Object010845f0 *self)
{
    return self->value_0x0010;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01086c40()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01086c50()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01086c60()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01086c70()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01086cc0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01086cd0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01086ce0 = 0x7d0;

extern "C" uint32_t bb_auto_return_constant_01086ce0()
{
    return value_01086ce0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01086d10()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01086d60 = 0x32;

extern "C" uint32_t bb_auto_return_constant_01086d60()
{
    return value_01086d60;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01086db0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01086dc0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01086fd0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01087000()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01087010()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_010871b0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_010871c0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01088110 reads.
 *
 */
struct Object01088110 {
    uint64_t value_0x0000; /**< Read by auto_return_field_01088110; meaning unknown. */
};
static_assert(offsetof(Object01088110, value_0x0000) == 0x0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01088110(const Object01088110 *self)
{
    return self->value_0x0000;
}

/**
 *
 * The part of the object that auto_return_member_address_01088120 reads.
 *
 */
struct Object01088120 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01088120; meaning unknown. */
};
static_assert(offsetof(Object01088120, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01088120(Object01088120 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * The part of the object that auto_return_member_address_01088130 reads.
 *
 */
struct Object01088130 {
    uint8_t unknown_0x0000[0x40];
    uint8_t member_0x0040; /**< Read by auto_return_member_address_01088130; meaning unknown. */
};
static_assert(offsetof(Object01088130, member_0x0040) == 0x40);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01088130(Object01088130 *self)
{
    return &self->member_0x0040;
}

/**
 *
 * The part of the object that auto_return_member_address_01088140 reads.
 *
 */
struct Object01088140 {
    uint8_t unknown_0x0000[0x78];
    uint8_t member_0x0078; /**< Read by auto_return_member_address_01088140; meaning unknown. */
};
static_assert(offsetof(Object01088140, member_0x0078) == 0x78);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01088140(Object01088140 *self)
{
    return &self->member_0x0078;
}

/**
 *
 * The part of the object that auto_return_member_address_01088150 reads.
 *
 */
struct Object01088150 {
    uint8_t unknown_0x0000[0xb0];
    uint8_t member_0x00b0; /**< Read by auto_return_member_address_01088150; meaning unknown. */
};
static_assert(offsetof(Object01088150, member_0x00b0) == 0xb0);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01088150(Object01088150 *self)
{
    return &self->member_0x00b0;
}

/**
 *
 * The part of the object that auto_return_member_address_01088160 reads.
 *
 */
struct Object01088160 {
    uint8_t unknown_0x0000[0x130];
    uint8_t member_0x0130; /**< Read by auto_return_member_address_01088160; meaning unknown. */
};
static_assert(offsetof(Object01088160, member_0x0130) == 0x130);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01088160(Object01088160 *self)
{
    return &self->member_0x0130;
}

/**
 *
 * The part of the object that auto_return_field_01088170 reads.
 *
 */
struct Object01088170 {
    uint8_t unknown_0x0000[0x168];
    uint16_t value_0x0168; /**< Read by auto_return_field_01088170; meaning unknown. */
};
static_assert(offsetof(Object01088170, value_0x0168) == 0x168);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01088170(const Object01088170 *self)
{
    return self->value_0x0168;
}

/**
 *
 * The part of the object that auto_return_field_01088180 reads.
 *
 */
struct Object01088180 {
    uint8_t unknown_0x0000[0x16a];
    uint16_t value_0x016a; /**< Read by auto_return_field_01088180; meaning unknown. */
};
static_assert(offsetof(Object01088180, value_0x016a) == 0x16a);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01088180(const Object01088180 *self)
{
    return self->value_0x016a;
}

/**
 *
 * The part of the object that auto_return_float_field_01088190 reads.
 *
 */
struct Object01088190 {
    uint8_t unknown_0x0000[0x16c];
    float value_0x016c; /**< Read by auto_return_float_field_01088190; meaning unknown. */
};
static_assert(offsetof(Object01088190, value_0x016c) == 0x16c);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_01088190(const Object01088190 *self)
{
    return self->value_0x016c;
}

/**
 *
 * The part of the object that auto_return_float_field_010881a0 reads.
 *
 */
struct Object010881a0 {
    uint8_t unknown_0x0000[0x170];
    float value_0x0170; /**< Read by auto_return_float_field_010881a0; meaning unknown. */
};
static_assert(offsetof(Object010881a0, value_0x0170) == 0x170);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_010881a0(const Object010881a0 *self)
{
    return self->value_0x0170;
}

/**
 *
 * The part of the object that auto_return_float_field_010881b0 reads.
 *
 */
struct Object010881b0 {
    uint8_t unknown_0x0000[0x174];
    float value_0x0174; /**< Read by auto_return_float_field_010881b0; meaning unknown. */
};
static_assert(offsetof(Object010881b0, value_0x0174) == 0x174);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_010881b0(const Object010881b0 *self)
{
    return self->value_0x0174;
}

/**
 *
 * The part of the object that auto_return_float_field_010881c0 reads.
 *
 */
struct Object010881c0 {
    uint8_t unknown_0x0000[0x178];
    float value_0x0178; /**< Read by auto_return_float_field_010881c0; meaning unknown. */
};
static_assert(offsetof(Object010881c0, value_0x0178) == 0x178);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_010881c0(const Object010881c0 *self)
{
    return self->value_0x0178;
}

/**
 *
 * The part of the object that auto_return_float_field_010881d0 reads.
 *
 */
struct Object010881d0 {
    uint8_t unknown_0x0000[0x17c];
    float value_0x017c; /**< Read by auto_return_float_field_010881d0; meaning unknown. */
};
static_assert(offsetof(Object010881d0, value_0x017c) == 0x17c);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_010881d0(const Object010881d0 *self)
{
    return self->value_0x017c;
}

/**
 *
 * The part of the object that auto_return_float_field_010881e0 reads.
 *
 */
struct Object010881e0 {
    uint8_t unknown_0x0000[0x180];
    float value_0x0180; /**< Read by auto_return_float_field_010881e0; meaning unknown. */
};
static_assert(offsetof(Object010881e0, value_0x0180) == 0x180);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_010881e0(const Object010881e0 *self)
{
    return self->value_0x0180;
}

/**
 *
 * The part of the object that auto_return_float_field_010881f0 reads.
 *
 */
struct Object010881f0 {
    uint8_t unknown_0x0000[0x184];
    float value_0x0184; /**< Read by auto_return_float_field_010881f0; meaning unknown. */
};
static_assert(offsetof(Object010881f0, value_0x0184) == 0x184);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_010881f0(const Object010881f0 *self)
{
    return self->value_0x0184;
}

/**
 *
 * The part of the object that auto_return_float_field_01088200 reads.
 *
 */
struct Object01088200 {
    uint8_t unknown_0x0000[0x188];
    float value_0x0188; /**< Read by auto_return_float_field_01088200; meaning unknown. */
};
static_assert(offsetof(Object01088200, value_0x0188) == 0x188);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_01088200(const Object01088200 *self)
{
    return self->value_0x0188;
}

/**
 *
 * The part of the object that auto_return_field_01088210 reads.
 *
 */
struct Object01088210 {
    uint8_t unknown_0x0000[0x18c];
    uint32_t value_0x018c; /**< Read by auto_return_field_01088210; meaning unknown. */
};
static_assert(offsetof(Object01088210, value_0x018c) == 0x18c);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01088210(const Object01088210 *self)
{
    return self->value_0x018c;
}

/**
 *
 * The part of the object that auto_return_field_01088220 reads.
 *
 */
struct Object01088220 {
    uint8_t unknown_0x0000[0x190];
    uint8_t value_0x0190; /**< Read by auto_return_field_01088220; meaning unknown. */
};
static_assert(offsetof(Object01088220, value_0x0190) == 0x190);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_01088220(const Object01088220 *self)
{
    return self->value_0x0190;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01088350 = 0x3a98;

extern "C" uint32_t bb_auto_return_constant_01088350()
{
    return value_01088350;
}

/**
 *
 * The part of the object that auto_return_field_01088360 reads.
 *
 */
struct Object01088360 {
    uint8_t unknown_0x0000[0x192];
    uint8_t value_0x0192; /**< Read by auto_return_field_01088360; meaning unknown. */
};
static_assert(offsetof(Object01088360, value_0x0192) == 0x192);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_01088360(const Object01088360 *self)
{
    return self->value_0x0192;
}

/**
 *
 * The part of the object that auto_return_field_01088370 reads.
 *
 */
struct Object01088370 {
    uint8_t unknown_0x0000[0x1b8];
    uint8_t value_0x01b8; /**< Read by auto_return_field_01088370; meaning unknown. */
};
static_assert(offsetof(Object01088370, value_0x01b8) == 0x1b8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_01088370(const Object01088370 *self)
{
    return self->value_0x01b8;
}

/**
 *
 * The part of the object that auto_return_field_01088380 reads.
 *
 */
struct Object01088380 {
    uint8_t unknown_0x0000[0x1b9];
    uint8_t value_0x01b9; /**< Read by auto_return_field_01088380; meaning unknown. */
};
static_assert(offsetof(Object01088380, value_0x01b9) == 0x1b9);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_01088380(const Object01088380 *self)
{
    return self->value_0x01b9;
}

/**
 *
 * The part of the object that auto_return_field_01088390 reads.
 *
 */
struct Object01088390 {
    uint8_t unknown_0x0000[0x1ba];
    uint8_t value_0x01ba; /**< Read by auto_return_field_01088390; meaning unknown. */
};
static_assert(offsetof(Object01088390, value_0x01ba) == 0x1ba);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_01088390(const Object01088390 *self)
{
    return self->value_0x01ba;
}

/**
 *
 * The part of the object that auto_return_field_010883a0 reads.
 *
 */
struct Object010883a0 {
    uint8_t unknown_0x0000[0x1bb];
    uint8_t value_0x01bb; /**< Read by auto_return_field_010883a0; meaning unknown. */
};
static_assert(offsetof(Object010883a0, value_0x01bb) == 0x1bb);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_010883a0(const Object010883a0 *self)
{
    return self->value_0x01bb;
}

/**
 *
 * The part of the object that auto_return_field_010883b0 reads.
 *
 */
struct Object010883b0 {
    uint8_t unknown_0x0000[0x1bc];
    uint32_t value_0x01bc; /**< Read by auto_return_field_010883b0; meaning unknown. */
};
static_assert(offsetof(Object010883b0, value_0x01bc) == 0x1bc);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_010883b0(const Object010883b0 *self)
{
    return self->value_0x01bc;
}

/**
 *
 * The part of the object that auto_return_float_field_010884c0 reads.
 *
 */
struct Object010884c0 {
    uint8_t unknown_0x0000[0x194];
    float value_0x0194; /**< Read by auto_return_float_field_010884c0; meaning unknown. */
};
static_assert(offsetof(Object010884c0, value_0x0194) == 0x194);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_010884c0(const Object010884c0 *self)
{
    return self->value_0x0194;
}

/**
 *
 * The part of the object that auto_return_float_field_010884d0 reads.
 *
 */
struct Object010884d0 {
    uint8_t unknown_0x0000[0x198];
    float value_0x0198; /**< Read by auto_return_float_field_010884d0; meaning unknown. */
};
static_assert(offsetof(Object010884d0, value_0x0198) == 0x198);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_010884d0(const Object010884d0 *self)
{
    return self->value_0x0198;
}

/**
 *
 * The part of the object that auto_return_float_field_010884e0 reads.
 *
 */
struct Object010884e0 {
    uint8_t unknown_0x0000[0x19c];
    float value_0x019c; /**< Read by auto_return_float_field_010884e0; meaning unknown. */
};
static_assert(offsetof(Object010884e0, value_0x019c) == 0x19c);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_010884e0(const Object010884e0 *self)
{
    return self->value_0x019c;
}

/**
 *
 * The part of the object that auto_return_float_field_010884f0 reads.
 *
 */
struct Object010884f0 {
    uint8_t unknown_0x0000[0x1a0];
    float value_0x01a0; /**< Read by auto_return_float_field_010884f0; meaning unknown. */
};
static_assert(offsetof(Object010884f0, value_0x01a0) == 0x1a0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_010884f0(const Object010884f0 *self)
{
    return self->value_0x01a0;
}

/**
 *
 * The part of the object that auto_return_field_01088500 reads.
 *
 */
struct Object01088500 {
    uint8_t unknown_0x0000[0x1a4];
    uint32_t value_0x01a4; /**< Read by auto_return_field_01088500; meaning unknown. */
};
static_assert(offsetof(Object01088500, value_0x01a4) == 0x1a4);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01088500(const Object01088500 *self)
{
    return self->value_0x01a4;
}

/**
 *
 * The part of the object that auto_return_field_01088510 reads.
 *
 */
struct Object01088510 {
    uint8_t unknown_0x0000[0x1a8];
    uint32_t value_0x01a8; /**< Read by auto_return_field_01088510; meaning unknown. */
};
static_assert(offsetof(Object01088510, value_0x01a8) == 0x1a8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01088510(const Object01088510 *self)
{
    return self->value_0x01a8;
}

/**
 *
 * The part of the object that auto_return_field_01088520 reads.
 *
 */
struct Object01088520 {
    uint8_t unknown_0x0000[0x1ac];
    uint32_t value_0x01ac; /**< Read by auto_return_field_01088520; meaning unknown. */
};
static_assert(offsetof(Object01088520, value_0x01ac) == 0x1ac);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01088520(const Object01088520 *self)
{
    return self->value_0x01ac;
}

/**
 *
 * The part of the object that auto_return_field_01088530 reads.
 *
 */
struct Object01088530 {
    uint8_t unknown_0x0000[0x1b0];
    uint32_t value_0x01b0; /**< Read by auto_return_field_01088530; meaning unknown. */
};
static_assert(offsetof(Object01088530, value_0x01b0) == 0x1b0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01088530(const Object01088530 *self)
{
    return self->value_0x01b0;
}

/**
 *
 * The part of the object that auto_return_field_01088540 reads.
 *
 */
struct Object01088540 {
    uint8_t unknown_0x0000[0x1b4];
    uint32_t value_0x01b4; /**< Read by auto_return_field_01088540; meaning unknown. */
};
static_assert(offsetof(Object01088540, value_0x01b4) == 0x1b4);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01088540(const Object01088540 *self)
{
    return self->value_0x01b4;
}

/**
 *
 * The part of the object that auto_return_field_010885b0 reads.
 *
 */
struct Object010885b0 {
    uint8_t unknown_0x0000[0x1c0];
    uint64_t value_0x01c0; /**< Read by auto_return_field_010885b0; meaning unknown. */
};
static_assert(offsetof(Object010885b0, value_0x01c0) == 0x1c0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_010885b0(const Object010885b0 *self)
{
    return self->value_0x01c0;
}

/**
 *
 * The part of the object that auto_return_field_010885c0 reads.
 *
 */
struct Object010885c0 {
    uint8_t unknown_0x0000[0x1c8];
    uint64_t value_0x01c8; /**< Read by auto_return_field_010885c0; meaning unknown. */
};
static_assert(offsetof(Object010885c0, value_0x01c8) == 0x1c8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_010885c0(const Object010885c0 *self)
{
    return self->value_0x01c8;
}

/**
 *
 * The part of the object that auto_return_field_010885d0 reads.
 *
 */
struct Object010885d0 {
    uint8_t unknown_0x0000[0x1d0];
    uint64_t value_0x01d0; /**< Read by auto_return_field_010885d0; meaning unknown. */
};
static_assert(offsetof(Object010885d0, value_0x01d0) == 0x1d0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_010885d0(const Object010885d0 *self)
{
    return self->value_0x01d0;
}

/**
 *
 * The part of the object that auto_return_field_010885e0 reads.
 *
 */
struct Object010885e0 {
    uint8_t unknown_0x0000[0x1e0];
    uint64_t value_0x01e0; /**< Read by auto_return_field_010885e0; meaning unknown. */
};
static_assert(offsetof(Object010885e0, value_0x01e0) == 0x1e0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_010885e0(const Object010885e0 *self)
{
    return self->value_0x01e0;
}

/**
 *
 * The part of the object that auto_return_field_010885f0 reads.
 *
 */
struct Object010885f0 {
    uint8_t unknown_0x0000[0x1e8];
    uint8_t value_0x01e8; /**< Read by auto_return_field_010885f0; meaning unknown. */
};
static_assert(offsetof(Object010885f0, value_0x01e8) == 0x1e8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_010885f0(const Object010885f0 *self)
{
    return self->value_0x01e8;
}

/**
 *
 * The part of the object that auto_return_field_01088600 reads.
 *
 */
struct Object01088600 {
    uint8_t unknown_0x0000[0x1e9];
    uint8_t value_0x01e9; /**< Read by auto_return_field_01088600; meaning unknown. */
};
static_assert(offsetof(Object01088600, value_0x01e9) == 0x1e9);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_01088600(const Object01088600 *self)
{
    return self->value_0x01e9;
}

/**
 *
 * The part of the object that auto_return_field_0108b110 reads.
 *
 */
struct Object0108b110 {
    uint32_t value_0x0000; /**< Read by auto_return_field_0108b110; meaning unknown. */
};
static_assert(offsetof(Object0108b110, value_0x0000) == 0x0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_0108b110(const Object0108b110 *self)
{
    return self->value_0x0000;
}

/**
 *
 * The part of the object that auto_return_field_0108b120 reads.
 *
 */
struct Object0108b120 {
    uint8_t unknown_0x0000[0x4];
    uint8_t value_0x0004; /**< Read by auto_return_field_0108b120; meaning unknown. */
};
static_assert(offsetof(Object0108b120, value_0x0004) == 0x4);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_0108b120(const Object0108b120 *self)
{
    return self->value_0x0004;
}

/**
 *
 * The part of the object that auto_return_field_0108b130 reads.
 *
 */
struct Object0108b130 {
    uint8_t unknown_0x0000[0x8];
    uint32_t value_0x0008; /**< Read by auto_return_field_0108b130; meaning unknown. */
};
static_assert(offsetof(Object0108b130, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_0108b130(const Object0108b130 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_0108b140 reads.
 *
 */
struct Object0108b140 {
    uint8_t unknown_0x0000[0x10];
    uint64_t value_0x0010; /**< Read by auto_return_field_0108b140; meaning unknown. */
};
static_assert(offsetof(Object0108b140, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0108b140(const Object0108b140 *self)
{
    return self->value_0x0010;
}

/**
 *
 * The part of the object that auto_return_field_0108b150 reads.
 *
 */
struct Object0108b150 {
    uint8_t unknown_0x0000[0x18];
    uint32_t value_0x0018; /**< Read by auto_return_field_0108b150; meaning unknown. */
};
static_assert(offsetof(Object0108b150, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_0108b150(const Object0108b150 *self)
{
    return self->value_0x0018;
}

/**
 *
 * The part of the object that auto_return_member_address_0108b160 reads.
 *
 */
struct Object0108b160 {
    uint8_t unknown_0x0000[0x20];
    uint8_t member_0x0020; /**< Read by auto_return_member_address_0108b160; meaning unknown. */
};
static_assert(offsetof(Object0108b160, member_0x0020) == 0x20);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0108b160(Object0108b160 *self)
{
    return &self->member_0x0020;
}

/**
 *
 * The part of the object that auto_return_member_address_0108b170 reads.
 *
 */
struct Object0108b170 {
    uint8_t unknown_0x0000[0x68];
    uint8_t member_0x0068; /**< Read by auto_return_member_address_0108b170; meaning unknown. */
};
static_assert(offsetof(Object0108b170, member_0x0068) == 0x68);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0108b170(Object0108b170 *self)
{
    return &self->member_0x0068;
}

/**
 *
 * The part of the object that auto_return_member_address_0108b180 reads.
 *
 */
struct Object0108b180 {
    uint8_t unknown_0x0000[0x90];
    uint8_t member_0x0090; /**< Read by auto_return_member_address_0108b180; meaning unknown. */
};
static_assert(offsetof(Object0108b180, member_0x0090) == 0x90);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0108b180(Object0108b180 *self)
{
    return &self->member_0x0090;
}

/**
 *
 * The part of the object that auto_return_member_address_0108b190 reads.
 *
 */
struct Object0108b190 {
    uint8_t unknown_0x0000[0xb8];
    uint8_t member_0x00b8; /**< Read by auto_return_member_address_0108b190; meaning unknown. */
};
static_assert(offsetof(Object0108b190, member_0x00b8) == 0xb8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0108b190(Object0108b190 *self)
{
    return &self->member_0x00b8;
}

/**
 *
 * The part of the object that auto_return_member_address_0108b1a0 reads.
 *
 */
struct Object0108b1a0 {
    uint8_t unknown_0x0000[0xe0];
    uint8_t member_0x00e0; /**< Read by auto_return_member_address_0108b1a0; meaning unknown. */
};
static_assert(offsetof(Object0108b1a0, member_0x00e0) == 0xe0);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0108b1a0(Object0108b1a0 *self)
{
    return &self->member_0x00e0;
}

/**
 *
 * The part of the object that auto_return_member_address_0108b1b0 reads.
 *
 */
struct Object0108b1b0 {
    uint8_t unknown_0x0000[0x110];
    uint8_t member_0x0110; /**< Read by auto_return_member_address_0108b1b0; meaning unknown. */
};
static_assert(offsetof(Object0108b1b0, member_0x0110) == 0x110);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0108b1b0(Object0108b1b0 *self)
{
    return &self->member_0x0110;
}

/**
 *
 * The part of the object that auto_return_member_address_0108b2c0 reads.
 *
 */
struct Object0108b2c0 {
    uint8_t unknown_0x0000[0x138];
    uint8_t member_0x0138; /**< Read by auto_return_member_address_0108b2c0; meaning unknown. */
};
static_assert(offsetof(Object0108b2c0, member_0x0138) == 0x138);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0108b2c0(Object0108b2c0 *self)
{
    return &self->member_0x0138;
}

/**
 *
 * The part of the object that auto_return_member_address_0108b2d0 reads.
 *
 */
struct Object0108b2d0 {
    uint8_t unknown_0x0000[0x40];
    uint8_t member_0x0040; /**< Read by auto_return_member_address_0108b2d0; meaning unknown. */
};
static_assert(offsetof(Object0108b2d0, member_0x0040) == 0x40);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0108b2d0(Object0108b2d0 *self)
{
    return &self->member_0x0040;
}

/**
 *
 * The part of the object that auto_return_member_address_0108b2e0 reads.
 *
 */
struct Object0108b2e0 {
    uint8_t unknown_0x0000[0x158];
    uint8_t member_0x0158; /**< Read by auto_return_member_address_0108b2e0; meaning unknown. */
};
static_assert(offsetof(Object0108b2e0, member_0x0158) == 0x158);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0108b2e0(Object0108b2e0 *self)
{
    return &self->member_0x0158;
}

/**
 *
 * The part of the object that auto_return_field_0108b2f0 reads.
 *
 */
struct Object0108b2f0 {
    uint8_t unknown_0x0000[0x190];
    uint64_t value_0x0190; /**< Read by auto_return_field_0108b2f0; meaning unknown. */
};
static_assert(offsetof(Object0108b2f0, value_0x0190) == 0x190);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0108b2f0(const Object0108b2f0 *self)
{
    return self->value_0x0190;
}

/**
 *
 * The part of the object that auto_return_field_0108cfb0 reads.
 *
 */
struct Object0108cfb0 {
    uint8_t unknown_0x0000[0x28];
    uint64_t value_0x0028; /**< Read by auto_return_field_0108cfb0; meaning unknown. */
};
static_assert(offsetof(Object0108cfb0, value_0x0028) == 0x28);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0108cfb0(const Object0108cfb0 *self)
{
    return self->value_0x0028;
}

/**
 *
 * The part of the object that auto_return_field_0108cfc0 reads.
 *
 */
struct Object0108cfc0 {
    uint8_t unknown_0x0000[0x30];
    uint64_t value_0x0030; /**< Read by auto_return_field_0108cfc0; meaning unknown. */
};
static_assert(offsetof(Object0108cfc0, value_0x0030) == 0x30);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0108cfc0(const Object0108cfc0 *self)
{
    return self->value_0x0030;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0108ddc0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0108ddc0()
{
    return value_0108ddc0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0108ddd0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0108ddd0()
{
    return value_0108ddd0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0108e4f0()
{
}

/**
 *
 * The part of the object that auto_return_field_0108e500 reads.
 *
 */
struct Object0108e500 {
    uint8_t unknown_0x0000[0x8];
    uint32_t value_0x0008; /**< Read by auto_return_field_0108e500; meaning unknown. */
};
static_assert(offsetof(Object0108e500, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_0108e500(const Object0108e500 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_0108e510 reads.
 *
 */
struct Object0108e510 {
    uint8_t unknown_0x0000[0xc];
    uint32_t value_0x000c; /**< Read by auto_return_field_0108e510; meaning unknown. */
};
static_assert(offsetof(Object0108e510, value_0x000c) == 0xc);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_0108e510(const Object0108e510 *self)
{
    return self->value_0x000c;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0108f750()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0108f830()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0108f840()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0108fb20()
{
}
