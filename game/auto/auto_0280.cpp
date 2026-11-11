// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02800790()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_028008c0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_028008c0()
{
    return value_028008c0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02800900 = 0x17;

extern "C" uint32_t bb_auto_return_constant_02800900()
{
    return value_02800900;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02800a30 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02800a30()
{
    return value_02800a30;
}

/**
 *
 * The part of the object that auto_return_member_address_02800ee0 reads.
 *
 */
struct Object02800ee0 {
    uint8_t unknown_0x0000[0x30];
    uint8_t member_0x0030; /**< Read by auto_return_member_address_02800ee0; meaning unknown. */
};
static_assert(offsetof(Object02800ee0, member_0x0030) == 0x30);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02800ee0(Object02800ee0 *self)
{
    return &self->member_0x0030;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02800f70 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02800f70()
{
    return value_02800f70;
}

/**
 *
 * The part of the object that auto_return_field_02800ff0 reads.
 *
 */
struct Object02800ff0 {
    uint8_t unknown_0x0000[0x1d0];
    uint32_t value_0x01d0; /**< Read by auto_return_field_02800ff0; meaning unknown. */
};
static_assert(offsetof(Object02800ff0, value_0x01d0) == 0x1d0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02800ff0(const Object02800ff0 *self)
{
    return self->value_0x01d0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02801130 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02801130()
{
    return value_02801130;
}

/**
 *
 * The part of the object that auto_return_field_02801160 reads.
 *
 */
struct Object02801160 {
    uint8_t unknown_0x0000[0x1a0];
    uint32_t value_0x01a0; /**< Read by auto_return_field_02801160; meaning unknown. */
};
static_assert(offsetof(Object02801160, value_0x01a0) == 0x1a0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02801160(const Object02801160 *self)
{
    return self->value_0x01a0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02801400 = 0xb;

extern "C" uint32_t bb_auto_return_constant_02801400()
{
    return value_02801400;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02801a60()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02801b40 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02801b40()
{
    return value_02801b40;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02801c00 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02801c00()
{
    return value_02801c00;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02801f90 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02801f90()
{
    return value_02801f90;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02802050 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02802050()
{
    return value_02802050;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02802260 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02802260()
{
    return value_02802260;
}

/**
 *
 * The part of the object that auto_return_field_02802270 reads.
 *
 */
struct Object02802270 {
    uint8_t unknown_0x0000[0xa8];
    uint32_t value_0x00a8; /**< Read by auto_return_field_02802270; meaning unknown. */
};
static_assert(offsetof(Object02802270, value_0x00a8) == 0xa8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02802270(const Object02802270 *self)
{
    return self->value_0x00a8;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02802450()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02802590 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02802590()
{
    return value_02802590;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_028025e0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_028025e0()
{
    return value_028025e0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_028025f0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_028025f0()
{
    return value_028025f0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02802a30 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02802a30()
{
    return value_02802a30;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02802a80 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02802a80()
{
    return value_02802a80;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02802a90 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02802a90()
{
    return value_02802a90;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02802bc0 = 0xd;

extern "C" uint32_t bb_auto_return_constant_02802bc0()
{
    return value_02802bc0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02802d90 = 0x12;

extern "C" uint32_t bb_auto_return_constant_02802d90()
{
    return value_02802d90;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02802ed0 = 0x11;

extern "C" uint32_t bb_auto_return_constant_02802ed0()
{
    return value_02802ed0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02803010 = 0x14;

extern "C" uint32_t bb_auto_return_constant_02803010()
{
    return value_02803010;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02803290 = 0x1a;

extern "C" uint32_t bb_auto_return_constant_02803290()
{
    return value_02803290;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02803790 = 0x9;

extern "C" uint32_t bb_auto_return_constant_02803790()
{
    return value_02803790;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02803840 = 0xa;

extern "C" uint32_t bb_auto_return_constant_02803840()
{
    return value_02803840;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02803950()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02804020 = 0x2a;

extern "C" uint32_t bb_auto_return_constant_02804020()
{
    return value_02804020;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02804270 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02804270()
{
    return value_02804270;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028046d0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_02805720 reads.
 *
 */
struct Object02805720 {
    uint8_t unknown_0x0000[0x78];
    uint8_t value_0x0078; /**< Read by auto_return_field_02805720; meaning unknown. */
};
static_assert(offsetof(Object02805720, value_0x0078) == 0x78);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02805720(const Object02805720 *self)
{
    return self->value_0x0078;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02805770()
{
}

/**
 *
 * The part of the object that auto_return_field_02805790 reads.
 *
 */
struct Object02805790 {
    uint8_t unknown_0x0000[0x11];
    uint8_t value_0x0011; /**< Read by auto_return_field_02805790; meaning unknown. */
};
static_assert(offsetof(Object02805790, value_0x0011) == 0x11);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02805790(const Object02805790 *self)
{
    return self->value_0x0011;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_028059c0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_028059c0()
{
    return value_028059c0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02805a70 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02805a70()
{
    return value_02805a70;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02805da0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02805da0()
{
    return value_02805da0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02805e50 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02805e50()
{
    return value_02805e50;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02806230 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02806230()
{
    return value_02806230;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02806350 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02806350()
{
    return value_02806350;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_028066d0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_028066d0()
{
    return value_028066d0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_028067e0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_028067e0()
{
    return value_028067e0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02806ba0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02806ba0()
{
    return value_02806ba0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02806cf0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02806cf0()
{
    return value_02806cf0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02807070 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02807070()
{
    return value_02807070;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02807160 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02807160()
{
    return value_02807160;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_028074d0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_028074d0()
{
    return value_028074d0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_028075e0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_028075e0()
{
    return value_028075e0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_028079d0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_028079d0()
{
    return value_028079d0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02807ac0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02807ac0()
{
    return value_02807ac0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02807e80 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02807e80()
{
    return value_02807e80;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02807f70 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02807f70()
{
    return value_02807f70;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02808240 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02808240()
{
    return value_02808240;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_028082f0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_028082f0()
{
    return value_028082f0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02808610 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02808610()
{
    return value_02808610;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02808730 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02808730()
{
    return value_02808730;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02808a80 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02808a80()
{
    return value_02808a80;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02808b70 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02808b70()
{
    return value_02808b70;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02808e60 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02808e60()
{
    return value_02808e60;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02808f10 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02808f10()
{
    return value_02808f10;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_028091b0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_028091b0()
{
    return value_028091b0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02809260 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02809260()
{
    return value_02809260;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02809540 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02809540()
{
    return value_02809540;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02809630 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02809630()
{
    return value_02809630;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_028099b0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_028099b0()
{
    return value_028099b0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02809a60 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02809a60()
{
    return value_02809a60;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02809ce0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02809ce0()
{
    return value_02809ce0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02809d90 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02809d90()
{
    return value_02809d90;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0280a070 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0280a070()
{
    return value_0280a070;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0280a160 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0280a160()
{
    return value_0280a160;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0280a440 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0280a440()
{
    return value_0280a440;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0280a500 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0280a500()
{
    return value_0280a500;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0280a780 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0280a780()
{
    return value_0280a780;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0280a830 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0280a830()
{
    return value_0280a830;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0280ab40 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0280ab40()
{
    return value_0280ab40;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0280abf0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0280abf0()
{
    return value_0280abf0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0280afc0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0280afc0()
{
    return value_0280afc0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0280b070 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0280b070()
{
    return value_0280b070;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0280b380 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0280b380()
{
    return value_0280b380;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0280b430 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0280b430()
{
    return value_0280b430;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0280b720 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0280b720()
{
    return value_0280b720;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0280b7b0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0280b7b0()
{
    return value_0280b7b0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0280bc70 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0280bc70()
{
    return value_0280bc70;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0280bda0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0280bda0()
{
    return value_0280bda0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0280c1d0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0280c1d0()
{
    return value_0280c1d0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0280c280 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0280c280()
{
    return value_0280c280;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0280c500 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0280c500()
{
    return value_0280c500;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0280c5b0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0280c5b0()
{
    return value_0280c5b0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0280c8c0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0280c8c0()
{
    return value_0280c8c0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0280c970 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0280c970()
{
    return value_0280c970;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0280cd10 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0280cd10()
{
    return value_0280cd10;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0280ce80 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0280ce80()
{
    return value_0280ce80;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0280d280 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0280d280()
{
    return value_0280d280;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0280d330 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0280d330()
{
    return value_0280d330;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0280d610 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0280d610()
{
    return value_0280d610;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0280d700 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0280d700()
{
    return value_0280d700;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0280db90 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0280db90()
{
    return value_0280db90;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0280dc80 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0280dc80()
{
    return value_0280dc80;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0280dfd0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0280dfd0()
{
    return value_0280dfd0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0280e0e0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0280e0e0()
{
    return value_0280e0e0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0280e460 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0280e460()
{
    return value_0280e460;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0280e510 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0280e510()
{
    return value_0280e510;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0280e870 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0280e870()
{
    return value_0280e870;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0280e920 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0280e920()
{
    return value_0280e920;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0280e9b0()
{
}
