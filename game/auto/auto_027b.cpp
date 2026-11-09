// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_027b08c0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_027b08d0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_027b0910()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_027b0920()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_027b0930()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_027b27d0 = 0x6;

extern "C" uint32_t bb_auto_return_constant_027b27d0()
{
    return value_027b27d0;
}

/**
 *
 * The part of the object that auto_return_field_027b27e0 reads.
 *
 */
struct Object027b27e0 {
    uint8_t unknown_0x0000[0x40];
    uint32_t value_0x0040; /**< Read by auto_return_field_027b27e0; meaning unknown. */
};
static_assert(offsetof(Object027b27e0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_027b27e0(const Object027b27e0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_027b2800 = 0x1;

extern "C" uint32_t bb_auto_return_constant_027b2800()
{
    return value_027b2800;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_027b2820()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_027b2830()
{
    return 0;
}

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
constexpr uint32_t value_027b2be0 = 0x38;

extern "C" uint32_t bb_auto_return_constant_027b2be0()
{
    return value_027b2be0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_027b3360()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_027b3370()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_027b3420 = 0x50;

extern "C" uint32_t bb_auto_return_constant_027b3420()
{
    return value_027b3420;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_027b3ba0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_027b3bb0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_027b3c60 = 0x38;

extern "C" uint32_t bb_auto_return_constant_027b3c60()
{
    return value_027b3c60;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_027b43e0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_027b43f0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_027b44a0 = 0x38;

extern "C" uint32_t bb_auto_return_constant_027b44a0()
{
    return value_027b44a0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_027b4c20()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_027b4c30()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_027b4ce0 = 0x48;

extern "C" uint32_t bb_auto_return_constant_027b4ce0()
{
    return value_027b4ce0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_027b5460()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_027b5470()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_027b5520 = 0x40;

extern "C" uint32_t bb_auto_return_constant_027b5520()
{
    return value_027b5520;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_027b5ca0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_027b5cb0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_027b5d60 = 0x40;

extern "C" uint32_t bb_auto_return_constant_027b5d60()
{
    return value_027b5d60;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_027b64e0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_027b64f0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_027b65a0 = 0x38;

extern "C" uint32_t bb_auto_return_constant_027b65a0()
{
    return value_027b65a0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_027b6d20()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_027b6d30()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_027b6de0 = 0x48;

extern "C" uint32_t bb_auto_return_constant_027b6de0()
{
    return value_027b6de0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_027b7560()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_027b7570()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_027b75e0 = 0x2;

extern "C" uint32_t bb_auto_return_constant_027b75e0()
{
    return value_027b75e0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_027b75f0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_027b7600 = 0x10;

extern "C" uint32_t bb_auto_return_constant_027b7600()
{
    return value_027b7600;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_027b7610()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_027b7620()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_027b7630()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_027b77e0 = 0x4;

extern "C" uint32_t bb_auto_return_constant_027b77e0()
{
    return value_027b77e0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_027b77f0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_027b7800()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_027b7870 = 0x5;

extern "C" uint32_t bb_auto_return_constant_027b7870()
{
    return value_027b7870;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_027b7880()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_027b7890 = 0x30;

extern "C" uint32_t bb_auto_return_constant_027b7890()
{
    return value_027b7890;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_027b7a00 = 0x6;

extern "C" uint32_t bb_auto_return_constant_027b7a00()
{
    return value_027b7a00;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_027b7a10 = 0x1;

extern "C" uint32_t bb_auto_return_constant_027b7a10()
{
    return value_027b7a10;
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
constexpr uint32_t value_027b7bc0 = 0x7;

extern "C" uint32_t bb_auto_return_constant_027b7bc0()
{
    return value_027b7bc0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_027b7bd0 = 0x1;

extern "C" uint32_t bb_auto_return_constant_027b7bd0()
{
    return value_027b7bd0;
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
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_027b7c10()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_027b7d80 = 0x8;

extern "C" uint32_t bb_auto_return_constant_027b7d80()
{
    return value_027b7d80;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_027b7d90 = 0x1;

extern "C" uint32_t bb_auto_return_constant_027b7d90()
{
    return value_027b7d90;
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
constexpr uint32_t value_027b7f40 = 0x9;

extern "C" uint32_t bb_auto_return_constant_027b7f40()
{
    return value_027b7f40;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_027b7f50 = 0x1;

extern "C" uint32_t bb_auto_return_constant_027b7f50()
{
    return value_027b7f50;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_027b8100 = 0x11;

extern "C" uint32_t bb_auto_return_constant_027b8100()
{
    return value_027b8100;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_027b8110 = 0x1;

extern "C" uint32_t bb_auto_return_constant_027b8110()
{
    return value_027b8110;
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
constexpr uint32_t value_027b82e0 = 0x13;

extern "C" uint32_t bb_auto_return_constant_027b82e0()
{
    return value_027b82e0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_027b82f0 = 0x1;

extern "C" uint32_t bb_auto_return_constant_027b82f0()
{
    return value_027b82f0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_027b8470 = 0x18;

extern "C" uint32_t bb_auto_return_constant_027b8470()
{
    return value_027b8470;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_027b8480 = 0x1;

extern "C" uint32_t bb_auto_return_constant_027b8480()
{
    return value_027b8480;
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
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_027b8600 = 0x19;

extern "C" uint32_t bb_auto_return_constant_027b8600()
{
    return value_027b8600;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_027b8610 = 0x1;

extern "C" uint32_t bb_auto_return_constant_027b8610()
{
    return value_027b8610;
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
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_027b8690()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_027b88f0 = 0x3;

extern "C" uint32_t bb_auto_return_constant_027b88f0()
{
    return value_027b88f0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_027b8900 = 0x1;

extern "C" uint32_t bb_auto_return_constant_027b8900()
{
    return value_027b8900;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_027b8910 = 0x18;

extern "C" uint32_t bb_auto_return_constant_027b8910()
{
    return value_027b8910;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_027b8a30 = 0xa;

extern "C" uint32_t bb_auto_return_constant_027b8a30()
{
    return value_027b8a30;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_027b8a40 = 0x1;

extern "C" uint32_t bb_auto_return_constant_027b8a40()
{
    return value_027b8a40;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_027b8a50 = 0x28;

extern "C" uint32_t bb_auto_return_constant_027b8a50()
{
    return value_027b8a50;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_027b8ac0 = 0xb;

extern "C" uint32_t bb_auto_return_constant_027b8ac0()
{
    return value_027b8ac0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_027b8ad0 = 0x1;

extern "C" uint32_t bb_auto_return_constant_027b8ad0()
{
    return value_027b8ad0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_027b8ae0 = 0x20;

extern "C" uint32_t bb_auto_return_constant_027b8ae0()
{
    return value_027b8ae0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_027b8b50 = 0xc;

extern "C" uint32_t bb_auto_return_constant_027b8b50()
{
    return value_027b8b50;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_027b8b60 = 0x31;

extern "C" uint32_t bb_auto_return_constant_027b8b60()
{
    return value_027b8b60;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_027b8b70 = 0x28;

extern "C" uint32_t bb_auto_return_constant_027b8b70()
{
    return value_027b8b70;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_027b8be0 = 0xd;

extern "C" uint32_t bb_auto_return_constant_027b8be0()
{
    return value_027b8be0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_027b8bf0 = 0x31;

extern "C" uint32_t bb_auto_return_constant_027b8bf0()
{
    return value_027b8bf0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_027b8c00 = 0x20;

extern "C" uint32_t bb_auto_return_constant_027b8c00()
{
    return value_027b8c00;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_027b8c70 = 0xe;

extern "C" uint32_t bb_auto_return_constant_027b8c70()
{
    return value_027b8c70;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_027b8c80 = 0x31;

extern "C" uint32_t bb_auto_return_constant_027b8c80()
{
    return value_027b8c80;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_027b8c90 = 0x30;

extern "C" uint32_t bb_auto_return_constant_027b8c90()
{
    return value_027b8c90;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_027b8d00 = 0xf;

extern "C" uint32_t bb_auto_return_constant_027b8d00()
{
    return value_027b8d00;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_027b8d10 = 0x31;

extern "C" uint32_t bb_auto_return_constant_027b8d10()
{
    return value_027b8d10;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_027b8d20 = 0x28;

extern "C" uint32_t bb_auto_return_constant_027b8d20()
{
    return value_027b8d20;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_027b8de0 = 0x10;

extern "C" uint32_t bb_auto_return_constant_027b8de0()
{
    return value_027b8de0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_027b8df0 = 0x31;

extern "C" uint32_t bb_auto_return_constant_027b8df0()
{
    return value_027b8df0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_027b8e00 = 0x48;

extern "C" uint32_t bb_auto_return_constant_027b8e00()
{
    return value_027b8e00;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_027b8e90 = 0x12;

extern "C" uint32_t bb_auto_return_constant_027b8e90()
{
    return value_027b8e90;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_027b8ea0 = 0x1;

extern "C" uint32_t bb_auto_return_constant_027b8ea0()
{
    return value_027b8ea0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_027b8eb0 = 0x28;

extern "C" uint32_t bb_auto_return_constant_027b8eb0()
{
    return value_027b8eb0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_027b8f20 = 0x14;

extern "C" uint32_t bb_auto_return_constant_027b8f20()
{
    return value_027b8f20;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_027b8f30 = 0x1;

extern "C" uint32_t bb_auto_return_constant_027b8f30()
{
    return value_027b8f30;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_027b8f40 = 0xb0;

extern "C" uint32_t bb_auto_return_constant_027b8f40()
{
    return value_027b8f40;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_027b9000 = 0x15;

extern "C" uint32_t bb_auto_return_constant_027b9000()
{
    return value_027b9000;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_027b9010 = 0x11;

extern "C" uint32_t bb_auto_return_constant_027b9010()
{
    return value_027b9010;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_027b9020 = 0x48;

extern "C" uint32_t bb_auto_return_constant_027b9020()
{
    return value_027b9020;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_027b90a0 = 0x16;

extern "C" uint32_t bb_auto_return_constant_027b90a0()
{
    return value_027b90a0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_027b90b0 = 0x1;

extern "C" uint32_t bb_auto_return_constant_027b90b0()
{
    return value_027b90b0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_027b90c0 = 0x20;

extern "C" uint32_t bb_auto_return_constant_027b90c0()
{
    return value_027b90c0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_027b9130 = 0x17;

extern "C" uint32_t bb_auto_return_constant_027b9130()
{
    return value_027b9130;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_027b9140 = 0x11;

extern "C" uint32_t bb_auto_return_constant_027b9140()
{
    return value_027b9140;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_027b9150 = 0x30;

extern "C" uint32_t bb_auto_return_constant_027b9150()
{
    return value_027b9150;
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
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_027b9d40 = 0x3;

extern "C" uint32_t bb_auto_return_constant_027b9d40()
{
    return value_027b9d40;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_027b9d50 = 0x1;

extern "C" uint32_t bb_auto_return_constant_027b9d50()
{
    return value_027b9d50;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_027b9d70 = 0x1;

extern "C" uint32_t bb_auto_return_constant_027b9d70()
{
    return value_027b9d70;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_027b9d90()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_027b9f70()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_027b9f80()
{
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
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_027b9fb0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_027ba0c0 reads.
 *
 */
struct Object027ba0c0 {
    uint8_t unknown_0x0000[0x10];
    uint8_t member_0x0010; /**< Read by auto_return_member_address_027ba0c0; meaning unknown. */
};
static_assert(offsetof(Object027ba0c0, member_0x0010) == 0x10);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_027ba0c0(Object027ba0c0 *self)
{
    return &self->member_0x0010;
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
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_027ba140()
{
    return 0;
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
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_027ba1d0()
{
    return 0;
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
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_027ba210()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_027ba220 reads.
 *
 */
struct Object027ba220 {
    uint8_t unknown_0x0000[0x60];
    uint32_t value_0x0060; /**< Read by auto_return_field_027ba220; meaning unknown. */
};
static_assert(offsetof(Object027ba220, value_0x0060) == 0x60);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_027ba220(const Object027ba220 *self)
{
    return self->value_0x0060;
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
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_027ba250()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_027ba260()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_027ba270()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_027ba280()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_027bb640()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_027bb650()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_027bb660()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_027bb670()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_027bb680()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_027bb780()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_027bb9a0 = 0x4;

extern "C" uint32_t bb_auto_return_constant_027bb9a0()
{
    return value_027bb9a0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_027bb9b0()
{
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
 * The part of the object that auto_return_member_address_027bb9e0 reads.
 *
 */
struct Object027bb9e0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_027bb9e0; meaning unknown. */
};
static_assert(offsetof(Object027bb9e0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_027bb9e0(Object027bb9e0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * The part of the object that auto_return_member_address_027bb9f0 reads.
 *
 */
struct Object027bb9f0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_027bb9f0; meaning unknown. */
};
static_assert(offsetof(Object027bb9f0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_027bb9f0(Object027bb9f0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_027bba30()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_027bba60()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_027bba70()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_027bba80()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_027bba90()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_027bbaa0()
{
    return 0;
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
extern "C" void bb_auto_empty_027bbb50()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_027bbb60()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_027bbb70()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_027bbb80()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_027bbb90()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_027bbc90()
{
    return 0;
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
 * The part of the object that auto_return_field_027bc240 reads.
 *
 */
struct Object027bc240 {
    uint8_t unknown_0x0000[0x78];
    uint32_t value_0x0078; /**< Read by auto_return_field_027bc240; meaning unknown. */
};
static_assert(offsetof(Object027bc240, value_0x0078) == 0x78);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_027bc240(const Object027bc240 *self)
{
    return self->value_0x0078;
}

/**
 *
 * The part of the object that auto_return_field_027bc260 reads.
 *
 */
struct Object027bc260 {
    uint8_t unknown_0x0000[0x78];
    uint32_t value_0x0078; /**< Read by auto_return_field_027bc260; meaning unknown. */
};
static_assert(offsetof(Object027bc260, value_0x0078) == 0x78);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_027bc260(const Object027bc260 *self)
{
    return self->value_0x0078;
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
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_027bef80()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_027bf0a0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_027bf0b0()
{
    return 0;
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
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_027bf0d0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_027bf110()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_027bf120()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_027bf130 = 0x1;

extern "C" uint32_t bb_auto_return_constant_027bf130()
{
    return value_027bf130;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_027bf150()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_027bf160()
{
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
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_027bf1a0()
{
    return 0;
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

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_027bf200 = 0x2;

extern "C" uint32_t bb_auto_return_constant_027bf200()
{
    return value_027bf200;
}

/**
 *
 * The part of the object that auto_return_field_027bf210 reads.
 *
 */
struct Object027bf210 {
    uint8_t unknown_0x0000[0x28];
    uint32_t value_0x0028; /**< Read by auto_return_field_027bf210; meaning unknown. */
};
static_assert(offsetof(Object027bf210, value_0x0028) == 0x28);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_027bf210(const Object027bf210 *self)
{
    return self->value_0x0028;
}

/**
 *
 * The part of the object that auto_return_field_027bf230 reads.
 *
 */
struct Object027bf230 {
    uint8_t unknown_0x0000[0x31];
    uint8_t value_0x0031; /**< Read by auto_return_field_027bf230; meaning unknown. */
};
static_assert(offsetof(Object027bf230, value_0x0031) == 0x31);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_027bf230(const Object027bf230 *self)
{
    return self->value_0x0031;
}

/**
 *
 * The part of the object that auto_return_field_027bf250 reads.
 *
 */
struct Object027bf250 {
    uint8_t unknown_0x0000[0x2c];
    uint32_t value_0x002c; /**< Read by auto_return_field_027bf250; meaning unknown. */
};
static_assert(offsetof(Object027bf250, value_0x002c) == 0x2c);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_027bf250(const Object027bf250 *self)
{
    return self->value_0x002c;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_027bf360 = 0x4;

extern "C" uint32_t bb_auto_return_constant_027bf360()
{
    return value_027bf360;
}

/**
 *
 * The part of the object that auto_return_field_027bf370 reads.
 *
 */
struct Object027bf370 {
    uint8_t unknown_0x0000[0x28];
    uint32_t value_0x0028; /**< Read by auto_return_field_027bf370; meaning unknown. */
};
static_assert(offsetof(Object027bf370, value_0x0028) == 0x28);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_027bf370(const Object027bf370 *self)
{
    return self->value_0x0028;
}

/**
 *
 * The part of the object that auto_return_field_027bf3c0 reads.
 *
 */
struct Object027bf3c0 {
    uint8_t unknown_0x0000[0x34];
    uint32_t value_0x0034; /**< Read by auto_return_field_027bf3c0; meaning unknown. */
};
static_assert(offsetof(Object027bf3c0, value_0x0034) == 0x34);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_027bf3c0(const Object027bf3c0 *self)
{
    return self->value_0x0034;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_027bf560 = 0x5;

extern "C" uint32_t bb_auto_return_constant_027bf560()
{
    return value_027bf560;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_027bf5f0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_027bf600()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_027bf6c0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_027bfa40 reads.
 *
 */
struct Object027bfa40 {
    uint8_t unknown_0x0000[0xc];
    uint8_t member_0x000c; /**< Read by auto_return_member_address_027bfa40; meaning unknown. */
};
static_assert(offsetof(Object027bfa40, member_0x000c) == 0xc);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_027bfa40(Object027bfa40 *self)
{
    return &self->member_0x000c;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_027bfa50()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_027bfc30()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_027bfc40()
{
}
