// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b002c0 = 0x12;

extern "C" uint32_t bb_auto_return_constant_02b002c0()
{
    return value_02b002c0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b002d0 = 0x3;

extern "C" uint32_t bb_auto_return_constant_02b002d0()
{
    return value_02b002d0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02b002e0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b005a0 = 0xe3;

extern "C" uint32_t bb_auto_return_constant_02b005a0()
{
    return value_02b005a0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b01a50 = 0xe2;

extern "C" uint32_t bb_auto_return_constant_02b01a50()
{
    return value_02b01a50;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b01b00 = 0xe1;

extern "C" uint32_t bb_auto_return_constant_02b01b00()
{
    return value_02b01b00;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b01ce0 = 0xe0;

extern "C" uint32_t bb_auto_return_constant_02b01ce0()
{
    return value_02b01ce0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b01d90 = 0xd3;

extern "C" uint32_t bb_auto_return_constant_02b01d90()
{
    return value_02b01d90;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b01e40 = 0xd2;

extern "C" uint32_t bb_auto_return_constant_02b01e40()
{
    return value_02b01e40;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b01ef0 = 0xd1;

extern "C" uint32_t bb_auto_return_constant_02b01ef0()
{
    return value_02b01ef0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b01fa0 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_02b01fa0()
{
    return value_02b01fa0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b02050 = 0xcb;

extern "C" uint32_t bb_auto_return_constant_02b02050()
{
    return value_02b02050;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b02970 = 0xc4;

extern "C" uint32_t bb_auto_return_constant_02b02970()
{
    return value_02b02970;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b03380 = 0xc3;

extern "C" uint32_t bb_auto_return_constant_02b03380()
{
    return value_02b03380;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b03d10 = 0xc2;

extern "C" uint32_t bb_auto_return_constant_02b03d10()
{
    return value_02b03d10;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b046a0 = 0xc1;

extern "C" uint32_t bb_auto_return_constant_02b046a0()
{
    return value_02b046a0;
}

/**
 *
 * The part of the object that auto_return_field_02b046b0 reads.
 *
 */
struct Object02b046b0 {
    uint8_t unknown_0x0000[0x20];
    uint32_t value_0x0020; /**< Read by auto_return_field_02b046b0; meaning unknown. */
};
static_assert(offsetof(Object02b046b0, value_0x0020) == 0x20);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02b046b0(const Object02b046b0 *self)
{
    return self->value_0x0020;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b04e70 = 0xbb;

extern "C" uint32_t bb_auto_return_constant_02b04e70()
{
    return value_02b04e70;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b04f90 = 0xba;

extern "C" uint32_t bb_auto_return_constant_02b04f90()
{
    return value_02b04f90;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b050b0 = 0xb5;

extern "C" uint32_t bb_auto_return_constant_02b050b0()
{
    return value_02b050b0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b051d0 = 0xb4;

extern "C" uint32_t bb_auto_return_constant_02b051d0()
{
    return value_02b051d0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b052f0 = 0xb3;

extern "C" uint32_t bb_auto_return_constant_02b052f0()
{
    return value_02b052f0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b05410 = 0xb2;

extern "C" uint32_t bb_auto_return_constant_02b05410()
{
    return value_02b05410;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b05530 = 0xb1;

extern "C" uint32_t bb_auto_return_constant_02b05530()
{
    return value_02b05530;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b05650 = 0xa2;

extern "C" uint32_t bb_auto_return_constant_02b05650()
{
    return value_02b05650;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b05770 = 0xa1;

extern "C" uint32_t bb_auto_return_constant_02b05770()
{
    return value_02b05770;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b05940 = 0xa0;

extern "C" uint32_t bb_auto_return_constant_02b05940()
{
    return value_02b05940;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b05a60 = 0x5b;

extern "C" uint32_t bb_auto_return_constant_02b05a60()
{
    return value_02b05a60;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b05a70 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02b05a70()
{
    return value_02b05a70;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02b05a80()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b05f50 = 0x5a;

extern "C" uint32_t bb_auto_return_constant_02b05f50()
{
    return value_02b05f50;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b05f60 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02b05f60()
{
    return value_02b05f60;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02b05f70()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b06440 = 0x55;

extern "C" uint32_t bb_auto_return_constant_02b06440()
{
    return value_02b06440;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b06450 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02b06450()
{
    return value_02b06450;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02b06460()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b06930 = 0x54;

extern "C" uint32_t bb_auto_return_constant_02b06930()
{
    return value_02b06930;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b06940 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02b06940()
{
    return value_02b06940;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02b06950()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b06e20 = 0x53;

extern "C" uint32_t bb_auto_return_constant_02b06e20()
{
    return value_02b06e20;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b06e30 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02b06e30()
{
    return value_02b06e30;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02b06e40()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b072f0 = 0x52;

extern "C" uint32_t bb_auto_return_constant_02b072f0()
{
    return value_02b072f0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b07300 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02b07300()
{
    return value_02b07300;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02b07310()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b077c0 = 0x51;

extern "C" uint32_t bb_auto_return_constant_02b077c0()
{
    return value_02b077c0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b077d0 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02b077d0()
{
    return value_02b077d0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02b077e0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b07ab0 = 0x50;

extern "C" uint32_t bb_auto_return_constant_02b07ab0()
{
    return value_02b07ab0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b07ac0 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02b07ac0()
{
    return value_02b07ac0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02b07ad0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b07da0 = 0x4b;

extern "C" uint32_t bb_auto_return_constant_02b07da0()
{
    return value_02b07da0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b07db0 = 0x8;

extern "C" uint32_t bb_auto_return_constant_02b07db0()
{
    return value_02b07db0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02b07dc0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b080d0 = 0x4a;

extern "C" uint32_t bb_auto_return_constant_02b080d0()
{
    return value_02b080d0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b080e0 = 0x8;

extern "C" uint32_t bb_auto_return_constant_02b080e0()
{
    return value_02b080e0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02b080f0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b08520 = 0x45;

extern "C" uint32_t bb_auto_return_constant_02b08520()
{
    return value_02b08520;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b08530 = 0x8;

extern "C" uint32_t bb_auto_return_constant_02b08530()
{
    return value_02b08530;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02b08540()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b08970 = 0x44;

extern "C" uint32_t bb_auto_return_constant_02b08970()
{
    return value_02b08970;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b08980 = 0x8;

extern "C" uint32_t bb_auto_return_constant_02b08980()
{
    return value_02b08980;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02b08990()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b08dc0 = 0x43;

extern "C" uint32_t bb_auto_return_constant_02b08dc0()
{
    return value_02b08dc0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b08dd0 = 0x8;

extern "C" uint32_t bb_auto_return_constant_02b08dd0()
{
    return value_02b08dd0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02b08de0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b09210 = 0x42;

extern "C" uint32_t bb_auto_return_constant_02b09210()
{
    return value_02b09210;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b09220 = 0x8;

extern "C" uint32_t bb_auto_return_constant_02b09220()
{
    return value_02b09220;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02b09230()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b09660 = 0x41;

extern "C" uint32_t bb_auto_return_constant_02b09660()
{
    return value_02b09660;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b09670 = 0x8;

extern "C" uint32_t bb_auto_return_constant_02b09670()
{
    return value_02b09670;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02b09680()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b09940 = 0x40;

extern "C" uint32_t bb_auto_return_constant_02b09940()
{
    return value_02b09940;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b09950 = 0x8;

extern "C" uint32_t bb_auto_return_constant_02b09950()
{
    return value_02b09950;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02b09960()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b09c20 = 0x3a;

extern "C" uint32_t bb_auto_return_constant_02b09c20()
{
    return value_02b09c20;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b09c30 = 0x4;

extern "C" uint32_t bb_auto_return_constant_02b09c30()
{
    return value_02b09c30;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02b09c40()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b09f00 = 0x33;

extern "C" uint32_t bb_auto_return_constant_02b09f00()
{
    return value_02b09f00;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b09f10 = 0x4;

extern "C" uint32_t bb_auto_return_constant_02b09f10()
{
    return value_02b09f10;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02b09f20()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b0a320 = 0x32;

extern "C" uint32_t bb_auto_return_constant_02b0a320()
{
    return value_02b0a320;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b0a330 = 0x4;

extern "C" uint32_t bb_auto_return_constant_02b0a330()
{
    return value_02b0a330;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02b0a340()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b0a740 = 0x31;

extern "C" uint32_t bb_auto_return_constant_02b0a740()
{
    return value_02b0a740;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b0a750 = 0x4;

extern "C" uint32_t bb_auto_return_constant_02b0a750()
{
    return value_02b0a750;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02b0a760()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b0aa20 = 0x30;

extern "C" uint32_t bb_auto_return_constant_02b0aa20()
{
    return value_02b0aa20;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b0aa30 = 0x4;

extern "C" uint32_t bb_auto_return_constant_02b0aa30()
{
    return value_02b0aa30;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02b0aa40()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b0ad00 = 0x23;

extern "C" uint32_t bb_auto_return_constant_02b0ad00()
{
    return value_02b0ad00;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b0ad10 = 0x2;

extern "C" uint32_t bb_auto_return_constant_02b0ad10()
{
    return value_02b0ad10;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02b0ad20()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b0afc0 = 0x22;

extern "C" uint32_t bb_auto_return_constant_02b0afc0()
{
    return value_02b0afc0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b0afd0 = 0x2;

extern "C" uint32_t bb_auto_return_constant_02b0afd0()
{
    return value_02b0afd0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02b0afe0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b0b280 = 0x21;

extern "C" uint32_t bb_auto_return_constant_02b0b280()
{
    return value_02b0b280;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b0b290 = 0x2;

extern "C" uint32_t bb_auto_return_constant_02b0b290()
{
    return value_02b0b290;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02b0b2a0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b0b560 = 0x20;

extern "C" uint32_t bb_auto_return_constant_02b0b560()
{
    return value_02b0b560;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b0b570 = 0x2;

extern "C" uint32_t bb_auto_return_constant_02b0b570()
{
    return value_02b0b570;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02b0b580()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b0b840 = 0x11;

extern "C" uint32_t bb_auto_return_constant_02b0b840()
{
    return value_02b0b840;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b0b850 = 0x1;

extern "C" uint32_t bb_auto_return_constant_02b0b850()
{
    return value_02b0b850;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02b0b860()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b0b9e0 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02b0b9e0()
{
    return value_02b0b9e0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b0b9f0 = 0x1;

extern "C" uint32_t bb_auto_return_constant_02b0b9f0()
{
    return value_02b0b9f0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02b0ba00()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b0bb80 = 0x2;

extern "C" uint32_t bb_auto_return_constant_02b0bb80()
{
    return value_02b0bb80;
}

/**
 *
 * The part of the object that auto_return_field_02b0c0e0 reads.
 *
 */
struct Object02b0c0e0 {
    uint8_t unknown_0x0000[0x44];
    uint32_t value_0x0044; /**< Read by auto_return_field_02b0c0e0; meaning unknown. */
};
static_assert(offsetof(Object02b0c0e0, value_0x0044) == 0x44);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02b0c0e0(const Object02b0c0e0 *self)
{
    return self->value_0x0044;
}

/**
 *
 * The part of the object that auto_return_field_02b0c2d0 reads.
 *
 */
struct Object02b0c2d0 {
    uint8_t unknown_0x0000[0x40];
    uint32_t value_0x0040; /**< Read by auto_return_field_02b0c2d0; meaning unknown. */
};
static_assert(offsetof(Object02b0c2d0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02b0c2d0(const Object02b0c2d0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02b0ca40()
{
}

/**
 *
 * The part of the object that auto_return_field_02b0ca50 reads.
 *
 */
struct Object02b0ca50 {
    uint8_t unknown_0x0000[0x8];
    uint32_t value_0x0008; /**< Read by auto_return_field_02b0ca50; meaning unknown. */
};
static_assert(offsetof(Object02b0ca50, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02b0ca50(const Object02b0ca50 *self)
{
    return self->value_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02b0cab0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02b0cac0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02b0cad0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02b0cae0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02b0caf0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02b0cb00()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02b0cb10()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02b0d590()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02b0d900()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02b0d910()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02b0f2f0()
{
}
