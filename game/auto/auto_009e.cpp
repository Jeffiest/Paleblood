// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_float_field_009e0af0 reads.
 *
 */
struct Object009e0af0 {
    uint8_t unknown_0x0000[0xb4];
    float value_0x00b4; /**< Read by auto_return_float_field_009e0af0; meaning unknown. */
};
static_assert(offsetof(Object009e0af0, value_0x00b4) == 0xb4);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_009e0af0(const Object009e0af0 *self)
{
    return self->value_0x00b4;
}

/**
 *
 * The part of the object that auto_return_float_field_009e0b00 reads.
 *
 */
struct Object009e0b00 {
    uint8_t unknown_0x0000[0xb8];
    float value_0x00b8; /**< Read by auto_return_float_field_009e0b00; meaning unknown. */
};
static_assert(offsetof(Object009e0b00, value_0x00b8) == 0xb8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_009e0b00(const Object009e0b00 *self)
{
    return self->value_0x00b8;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_009e0bb0 = 0x17;

extern "C" uint32_t bb_auto_return_constant_009e0bb0()
{
    return value_009e0bb0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_009e1b60 = 0x13;

extern "C" uint32_t bb_auto_return_constant_009e1b60()
{
    return value_009e1b60;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009e1b80()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009e1b90()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009e1da0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009e1db0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009e1fe0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009e1ff0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009e2200()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009e2210()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_009e2cc0 = 0x8;

extern "C" uint32_t bb_auto_return_constant_009e2cc0()
{
    return value_009e2cc0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009e2ce0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009e2cf0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009e37c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009e37d0()
{
}

/**
 *
 * The part of the object that auto_return_float_field_009e41f0 reads.
 *
 */
struct Object009e41f0 {
    uint8_t unknown_0x0000[0xd8];
    float value_0x00d8; /**< Read by auto_return_float_field_009e41f0; meaning unknown. */
};
static_assert(offsetof(Object009e41f0, value_0x00d8) == 0xd8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_009e41f0(const Object009e41f0 *self)
{
    return self->value_0x00d8;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_009e42d0 = 0x1;

extern "C" uint32_t bb_auto_return_constant_009e42d0()
{
    return value_009e42d0;
}

/**
 *
 * The part of the object that auto_return_field_009e4790 reads.
 *
 */
struct Object009e4790 {
    uint8_t unknown_0x0000[0x10];
    uint8_t value_0x0010; /**< Read by auto_return_field_009e4790; meaning unknown. */
};
static_assert(offsetof(Object009e4790, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_009e4790(const Object009e4790 *self)
{
    return self->value_0x0010;
}

/**
 *
 * The part of the object that auto_return_float_field_009e4f40 reads.
 *
 */
struct Object009e4f40 {
    uint8_t unknown_0x0000[0xc];
    float value_0x000c; /**< Read by auto_return_float_field_009e4f40; meaning unknown. */
};
static_assert(offsetof(Object009e4f40, value_0x000c) == 0xc);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_009e4f40(const Object009e4f40 *self)
{
    return self->value_0x000c;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009e5430()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009e5440()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009e5460()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009e5470()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009e5490()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009e54a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009e54c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009e54d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009e54f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009e5500()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009e5530()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009e5550()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009e5560()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009e5580()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009e5590()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009e55b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009e55c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009e55e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009e55f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009e5610()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009e5620()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009e5640()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009e5650()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009e5670()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009e5680()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009e56a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009e56b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009e56d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009e56e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009e5710()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009e5730()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009e5740()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009e5760()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009e5770()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009e5790()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009e57a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009e57c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009e57d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009e5800()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009e5820()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009e5830()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009e5850()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009e5860()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009e5880()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009e5890()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009e58b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009e58c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009e58e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009e58f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009e5910()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009e5920()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009e5940()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009e5950()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009e5990()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009e71e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009e7860()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009e7870()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_009e7c10 = 0xf;

extern "C" uint32_t bb_auto_return_constant_009e7c10()
{
    return value_009e7c10;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009e8b50()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009e8b60()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009e8b70()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_009e8bb0 = 0xff;

extern "C" uint32_t bb_auto_return_constant_009e8bb0()
{
    return value_009e8bb0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009e8bc0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009e8bd0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_009e8be0 = 0x1;

extern "C" uint32_t bb_auto_return_constant_009e8be0()
{
    return value_009e8be0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_009e8bf0 = 0x1;

extern "C" uint32_t bb_auto_return_constant_009e8bf0()
{
    return value_009e8bf0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009e8c00()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009e8c10()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009e8c40()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_009e9400 = 0x1;

extern "C" uint8_t bb_auto_return_constant_009e9400()
{
    return value_009e9400;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_009e9410 = 0x18;

extern "C" uint32_t bb_auto_return_constant_009e9410()
{
    return value_009e9410;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_009e98b0 = 0x12;

extern "C" uint32_t bb_auto_return_constant_009e98b0()
{
    return value_009e98b0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_009e9b20 = 0x10;

extern "C" uint32_t bb_auto_return_constant_009e9b20()
{
    return value_009e9b20;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009e9b50()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_009ea6a0 = 0x19;

extern "C" uint32_t bb_auto_return_constant_009ea6a0()
{
    return value_009ea6a0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_009eb180 = 0x9;

extern "C" uint32_t bb_auto_return_constant_009eb180()
{
    return value_009eb180;
}

/**
 *
 * The part of the object that auto_return_float_field_009eb810 reads.
 *
 */
struct Object009eb810 {
    uint8_t unknown_0x0000[0x120];
    float value_0x0120; /**< Read by auto_return_float_field_009eb810; meaning unknown. */
};
static_assert(offsetof(Object009eb810, value_0x0120) == 0x120);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_009eb810(const Object009eb810 *self)
{
    return self->value_0x0120;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_009eb9e0 = 0x2;

extern "C" uint32_t bb_auto_return_constant_009eb9e0()
{
    return value_009eb9e0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_009ec1d0 = 0x3;

extern "C" uint32_t bb_auto_return_constant_009ec1d0()
{
    return value_009ec1d0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_009ec5e0 = 0x14;

extern "C" uint32_t bb_auto_return_constant_009ec5e0()
{
    return value_009ec5e0;
}

/**
 *
 * The part of the object that auto_return_float_field_009ec7d0 reads.
 *
 */
struct Object009ec7d0 {
    uint8_t unknown_0x0000[0xc4];
    float value_0x00c4; /**< Read by auto_return_float_field_009ec7d0; meaning unknown. */
};
static_assert(offsetof(Object009ec7d0, value_0x00c4) == 0xc4);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_009ec7d0(const Object009ec7d0 *self)
{
    return self->value_0x00c4;
}

/**
 *
 * The part of the object that auto_return_float_field_009ec7e0 reads.
 *
 */
struct Object009ec7e0 {
    uint8_t unknown_0x0000[0xc8];
    float value_0x00c8; /**< Read by auto_return_float_field_009ec7e0; meaning unknown. */
};
static_assert(offsetof(Object009ec7e0, value_0x00c8) == 0xc8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_009ec7e0(const Object009ec7e0 *self)
{
    return self->value_0x00c8;
}

/**
 *
 * The part of the object that auto_return_float_field_009ec7f0 reads.
 *
 */
struct Object009ec7f0 {
    uint8_t unknown_0x0000[0xcc];
    float value_0x00cc; /**< Read by auto_return_float_field_009ec7f0; meaning unknown. */
};
static_assert(offsetof(Object009ec7f0, value_0x00cc) == 0xcc);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_009ec7f0(const Object009ec7f0 *self)
{
    return self->value_0x00cc;
}

/**
 *
 * The part of the object that auto_return_float_field_009ec800 reads.
 *
 */
struct Object009ec800 {
    uint8_t unknown_0x0000[0xd0];
    float value_0x00d0; /**< Read by auto_return_float_field_009ec800; meaning unknown. */
};
static_assert(offsetof(Object009ec800, value_0x00d0) == 0xd0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_009ec800(const Object009ec800 *self)
{
    return self->value_0x00d0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_009ecda0 = 0x16;

extern "C" uint32_t bb_auto_return_constant_009ecda0()
{
    return value_009ecda0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_009ed3e0 = 0x15;

extern "C" uint32_t bb_auto_return_constant_009ed3e0()
{
    return value_009ed3e0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_009ed800 = 0xe;

extern "C" uint32_t bb_auto_return_constant_009ed800()
{
    return value_009ed800;
}

/**
 *
 * The part of the object that auto_return_float_field_009ed960 reads.
 *
 */
struct Object009ed960 {
    uint8_t unknown_0x0000[0x68];
    float value_0x0068; /**< Read by auto_return_float_field_009ed960; meaning unknown. */
};
static_assert(offsetof(Object009ed960, value_0x0068) == 0x68);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_009ed960(const Object009ed960 *self)
{
    return self->value_0x0068;
}

/**
 *
 * The part of the object that auto_return_float_field_009ed990 reads.
 *
 */
struct Object009ed990 {
    uint8_t unknown_0x0000[0x54];
    float value_0x0054; /**< Read by auto_return_float_field_009ed990; meaning unknown. */
};
static_assert(offsetof(Object009ed990, value_0x0054) == 0x54);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_009ed990(const Object009ed990 *self)
{
    return self->value_0x0054;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_009eda30()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_float_field_009ee0c0 reads.
 *
 */
struct Object009ee0c0 {
    uint8_t unknown_0x0000[0x198];
    float value_0x0198; /**< Read by auto_return_float_field_009ee0c0; meaning unknown. */
};
static_assert(offsetof(Object009ee0c0, value_0x0198) == 0x198);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_009ee0c0(const Object009ee0c0 *self)
{
    return self->value_0x0198;
}

/**
 *
 * The part of the object that auto_return_field_009ee4e0 reads.
 *
 */
struct Object009ee4e0 {
    uint8_t unknown_0x0000[0x100];
    uint64_t value_0x0100; /**< Read by auto_return_field_009ee4e0; meaning unknown. */
};
static_assert(offsetof(Object009ee4e0, value_0x0100) == 0x100);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_009ee4e0(const Object009ee4e0 *self)
{
    return self->value_0x0100;
}

/**
 *
 * The part of the object that auto_return_field_009ee650 reads.
 *
 */
struct Object009ee650 {
    uint8_t unknown_0x0000[0x110];
    uint64_t value_0x0110; /**< Read by auto_return_field_009ee650; meaning unknown. */
};
static_assert(offsetof(Object009ee650, value_0x0110) == 0x110);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_009ee650(const Object009ee650 *self)
{
    return self->value_0x0110;
}

/**
 *
 * The part of the object that auto_return_field_009ee710 reads.
 *
 */
struct Object009ee710 {
    uint8_t unknown_0x0000[0x108];
    uint64_t value_0x0108; /**< Read by auto_return_field_009ee710; meaning unknown. */
};
static_assert(offsetof(Object009ee710, value_0x0108) == 0x108);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_009ee710(const Object009ee710 *self)
{
    return self->value_0x0108;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_009ee850 = 0x7;

extern "C" uint32_t bb_auto_return_constant_009ee850()
{
    return value_009ee850;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_009eefb0 = 0x6;

extern "C" uint32_t bb_auto_return_constant_009eefb0()
{
    return value_009eefb0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009ef010()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009ef060()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009ef070()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009ef090()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009ef0a0()
{
}
