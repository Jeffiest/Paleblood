// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028a1260()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_028a1270 reads.
 *
 */
struct Object028a1270 {
    uint8_t unknown_0x0000[0xc8];
    uint64_t value_0x00c8; /**< Read by auto_return_field_028a1270; meaning unknown. */
};
static_assert(offsetof(Object028a1270, value_0x00c8) == 0xc8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_028a1270(const Object028a1270 *self)
{
    return self->value_0x00c8;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028a12c0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028a12d0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028a12e0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028a12f0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028a1300()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028a1360()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_028a1380 reads.
 *
 */
struct Object028a1380 {
    uint8_t unknown_0x0000[0x38];
    uint8_t member_0x0038; /**< Read by auto_return_member_address_028a1380; meaning unknown. */
};
static_assert(offsetof(Object028a1380, member_0x0038) == 0x38);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_028a1380(Object028a1380 *self)
{
    return &self->member_0x0038;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028a1390()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028a13a0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028a13b0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028a13c0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028a1450()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028a1460()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_028a1470 = 0x1;

extern "C" uint8_t bb_auto_return_constant_028a1470()
{
    return value_028a1470;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028a1480()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028a14a0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028a14b0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028a14c0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028a14d0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028a1500()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028a1510()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028a1520()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_028a1530 = 0x1;

extern "C" uint8_t bb_auto_return_constant_028a1530()
{
    return value_028a1530;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028a1550()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028a1560()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028a1570()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_028a1580 reads.
 *
 */
struct Object028a1580 {
    uint8_t unknown_0x0000[0x48];
    uint8_t member_0x0048; /**< Read by auto_return_member_address_028a1580; meaning unknown. */
};
static_assert(offsetof(Object028a1580, member_0x0048) == 0x48);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_028a1580(Object028a1580 *self)
{
    return &self->member_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028a15a0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028a1640()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028a1650()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028a1660()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028a1670()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028a16e0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028a16f0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_028a1700 = 0x1;

extern "C" uint8_t bb_auto_return_constant_028a1700()
{
    return value_028a1700;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028a1710()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028a1720()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028a1730()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028a1740()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028a1750()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028a1770()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028a1780()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028a1790()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_028a17a0 reads.
 *
 */
struct Object028a17a0 {
    uint8_t unknown_0x0000[0x10];
    uint8_t member_0x0010; /**< Read by auto_return_member_address_028a17a0; meaning unknown. */
};
static_assert(offsetof(Object028a17a0, member_0x0010) == 0x10);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_028a17a0(Object028a17a0 *self)
{
    return &self->member_0x0010;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028a17c0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028a1870()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028a1880()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028a1890()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028a18a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028a18c0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028a18d0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_028a18e0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_028a18e0()
{
    return value_028a18e0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028a18f0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028a1960()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028a1970()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028a1980()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028a19b0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028a1a60()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028a1a70()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028a1a80()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028a1a90()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028a1ab0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028a1ac0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_028a1ad0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_028a1ad0()
{
    return value_028a1ad0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028a1ae0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_028a1b50 reads.
 *
 */
struct Object028a1b50 {
    uint8_t unknown_0x0000[0x50];
    uint8_t member_0x0050; /**< Read by auto_return_member_address_028a1b50; meaning unknown. */
};
static_assert(offsetof(Object028a1b50, member_0x0050) == 0x50);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_028a1b50(Object028a1b50 *self)
{
    return &self->member_0x0050;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028a1b60()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028a1b70()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_028a1b80 reads.
 *
 */
struct Object028a1b80 {
    uint8_t unknown_0x0000[0x48];
    uint8_t member_0x0048; /**< Read by auto_return_member_address_028a1b80; meaning unknown. */
};
static_assert(offsetof(Object028a1b80, member_0x0048) == 0x48);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_028a1b80(Object028a1b80 *self)
{
    return &self->member_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028a1ba0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028a1bc0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028a1be0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028a1bf0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_028a1c00 = 0x1;

extern "C" uint8_t bb_auto_return_constant_028a1c00()
{
    return value_028a1c00;
}

/**
 *
 * The part of the object that auto_return_member_address_028a1c40 reads.
 *
 */
struct Object028a1c40 {
    uint8_t unknown_0x0000[0x18];
    uint8_t member_0x0018; /**< Read by auto_return_member_address_028a1c40; meaning unknown. */
};
static_assert(offsetof(Object028a1c40, member_0x0018) == 0x18);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_028a1c40(Object028a1c40 *self)
{
    return &self->member_0x0018;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028a1c50()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028a1c60()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_028a1c70 reads.
 *
 */
struct Object028a1c70 {
    uint8_t unknown_0x0000[0x10];
    uint8_t member_0x0010; /**< Read by auto_return_member_address_028a1c70; meaning unknown. */
};
static_assert(offsetof(Object028a1c70, member_0x0010) == 0x10);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_028a1c70(Object028a1c70 *self)
{
    return &self->member_0x0010;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028a1c90()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028a1ca0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028a1cc0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028a1cd0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_028a1ce0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_028a1ce0()
{
    return value_028a1ce0;
}

/**
 *
 * The part of the object that auto_return_member_address_028a1d00 reads.
 *
 */
struct Object028a1d00 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_028a1d00; meaning unknown. */
};
static_assert(offsetof(Object028a1d00, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_028a1d00(Object028a1d00 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028a1d10()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028a1d20()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028a1d50()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028a1d60()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028a1d80()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028a1d90()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_028a1da0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_028a1da0()
{
    return value_028a1da0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028a1df0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028a1e00()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028a1e30()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028a1e40()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028a1e60()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028a1e70()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_028a1e80 = 0x1;

extern "C" uint8_t bb_auto_return_constant_028a1e80()
{
    return value_028a1e80;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_028a1eb0 = 0xffffffff;

extern "C" uint32_t bb_auto_return_constant_028a1eb0()
{
    return value_028a1eb0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028a1ec0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028a1ed0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_028a1f00 = 0x1;

extern "C" uint8_t bb_auto_return_constant_028a1f00()
{
    return value_028a1f00;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028a1f10()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028a2020()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_028a2030 reads.
 *
 */
struct Object028a2030 {
    uint8_t unknown_0x0000[0x48];
    uint8_t member_0x0048; /**< Read by auto_return_member_address_028a2030; meaning unknown. */
};
static_assert(offsetof(Object028a2030, member_0x0048) == 0x48);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_028a2030(Object028a2030 *self)
{
    return &self->member_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028a2040()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028a2050()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028a2070()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_028a2120 = 0x1;

extern "C" uint8_t bb_auto_return_constant_028a2120()
{
    return value_028a2120;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_028a2140 = 0x1;

extern "C" uint8_t bb_auto_return_constant_028a2140()
{
    return value_028a2140;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028a2150()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028a2160()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028a21d0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028a21e0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_028a21f0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_028a21f0()
{
    return value_028a21f0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_028a2200 = 0x1;

extern "C" uint8_t bb_auto_return_constant_028a2200()
{
    return value_028a2200;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028a2300()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_028a2310 reads.
 *
 */
struct Object028a2310 {
    uint8_t unknown_0x0000[0x10];
    uint8_t member_0x0010; /**< Read by auto_return_member_address_028a2310; meaning unknown. */
};
static_assert(offsetof(Object028a2310, member_0x0010) == 0x10);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_028a2310(Object028a2310 *self)
{
    return &self->member_0x0010;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028a2320()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028a2330()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028a2350()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_028a2400 = 0x1;

extern "C" uint8_t bb_auto_return_constant_028a2400()
{
    return value_028a2400;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_028a2410 = 0x1;

extern "C" uint8_t bb_auto_return_constant_028a2410()
{
    return value_028a2410;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028a2420()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028a2430()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028a2450()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028a2460()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_028a2470 = 0x1;

extern "C" uint8_t bb_auto_return_constant_028a2470()
{
    return value_028a2470;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_028a2480 = 0x1;

extern "C" uint8_t bb_auto_return_constant_028a2480()
{
    return value_028a2480;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028a25d0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028a25f0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028a2600()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028a2620()
{
    return 0;
}
