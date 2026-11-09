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
