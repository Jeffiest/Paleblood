// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02c80040 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02c80040()
{
    return value_02c80040;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c805c0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02c80650 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02c80650()
{
    return value_02c80650;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c80a50()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02c80ae0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02c80ae0()
{
    return value_02c80ae0;
}

/**
 *
 * The part of the object that auto_return_float_field_02c80d90 reads.
 *
 */
struct Object02c80d90 {
    uint8_t unknown_0x0000[0xc];
    float value_0x000c; /**< Read by auto_return_float_field_02c80d90; meaning unknown. */
};
static_assert(offsetof(Object02c80d90, value_0x000c) == 0xc);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_02c80d90(const Object02c80d90 *self)
{
    return self->value_0x000c;
}

/**
 *
 * The part of the object that auto_return_float_field_02c80da0 reads.
 *
 */
struct Object02c80da0 {
    uint8_t unknown_0x0000[0x8];
    float value_0x0008; /**< Read by auto_return_float_field_02c80da0; meaning unknown. */
};
static_assert(offsetof(Object02c80da0, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_02c80da0(const Object02c80da0 *self)
{
    return self->value_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c80ed0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02c80f60 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02c80f60()
{
    return value_02c80f60;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c812d0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_02c81810 reads.
 *
 */
struct Object02c81810 {
    uint8_t unknown_0x0000[0x14];
    uint32_t value_0x0014; /**< Read by auto_return_field_02c81810; meaning unknown. */
};
static_assert(offsetof(Object02c81810, value_0x0014) == 0x14);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02c81810(const Object02c81810 *self)
{
    return self->value_0x0014;
}

/**
 *
 * The part of the object that auto_return_float_field_02c821a0 reads.
 *
 */
struct Object02c821a0 {
    uint8_t unknown_0x0000[0x8];
    float value_0x0008; /**< Read by auto_return_float_field_02c821a0; meaning unknown. */
};
static_assert(offsetof(Object02c821a0, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_02c821a0(const Object02c821a0 *self)
{
    return self->value_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c82890()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c82970()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_02c85dc0 reads.
 *
 */
struct Object02c85dc0 {
    uint8_t unknown_0x0000[0xa];
    int16_t value_0x000a; /**< Read by auto_return_field_02c85dc0; meaning unknown. */
};
static_assert(offsetof(Object02c85dc0, value_0x000a) == 0xa);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" int32_t bb_auto_return_field_02c85dc0(const Object02c85dc0 *self)
{
    return self->value_0x000a;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02c85e30 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02c85e30()
{
    return value_02c85e30;
}

/**
 *
 * The part of the object that auto_return_field_02c86240 reads.
 *
 */
struct Object02c86240 {
    uint8_t unknown_0x0000[0xa];
    int16_t value_0x000a; /**< Read by auto_return_field_02c86240; meaning unknown. */
};
static_assert(offsetof(Object02c86240, value_0x000a) == 0xa);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" int32_t bb_auto_return_field_02c86240(const Object02c86240 *self)
{
    return self->value_0x000a;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02c862b0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02c862b0()
{
    return value_02c862b0;
}

/**
 *
 * The part of the object that auto_return_field_02c866c0 reads.
 *
 */
struct Object02c866c0 {
    uint8_t unknown_0x0000[0xa];
    int16_t value_0x000a; /**< Read by auto_return_field_02c866c0; meaning unknown. */
};
static_assert(offsetof(Object02c866c0, value_0x000a) == 0xa);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" int32_t bb_auto_return_field_02c866c0(const Object02c866c0 *self)
{
    return self->value_0x000a;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02c86730 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02c86730()
{
    return value_02c86730;
}

/**
 *
 * The part of the object that auto_return_field_02c86b40 reads.
 *
 */
struct Object02c86b40 {
    uint8_t unknown_0x0000[0xa];
    int16_t value_0x000a; /**< Read by auto_return_field_02c86b40; meaning unknown. */
};
static_assert(offsetof(Object02c86b40, value_0x000a) == 0xa);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" int32_t bb_auto_return_field_02c86b40(const Object02c86b40 *self)
{
    return self->value_0x000a;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02c86bb0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02c86bb0()
{
    return value_02c86bb0;
}

/**
 *
 * The part of the object that auto_return_field_02c86fc0 reads.
 *
 */
struct Object02c86fc0 {
    uint8_t unknown_0x0000[0xa];
    int16_t value_0x000a; /**< Read by auto_return_field_02c86fc0; meaning unknown. */
};
static_assert(offsetof(Object02c86fc0, value_0x000a) == 0xa);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" int32_t bb_auto_return_field_02c86fc0(const Object02c86fc0 *self)
{
    return self->value_0x000a;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02c87030 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02c87030()
{
    return value_02c87030;
}

/**
 *
 * The part of the object that auto_return_field_02c87440 reads.
 *
 */
struct Object02c87440 {
    uint8_t unknown_0x0000[0xa];
    int16_t value_0x000a; /**< Read by auto_return_field_02c87440; meaning unknown. */
};
static_assert(offsetof(Object02c87440, value_0x000a) == 0xa);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" int32_t bb_auto_return_field_02c87440(const Object02c87440 *self)
{
    return self->value_0x000a;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02c874b0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02c874b0()
{
    return value_02c874b0;
}

/**
 *
 * The part of the object that auto_return_field_02c878c0 reads.
 *
 */
struct Object02c878c0 {
    uint8_t unknown_0x0000[0xa];
    int16_t value_0x000a; /**< Read by auto_return_field_02c878c0; meaning unknown. */
};
static_assert(offsetof(Object02c878c0, value_0x000a) == 0xa);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" int32_t bb_auto_return_field_02c878c0(const Object02c878c0 *self)
{
    return self->value_0x000a;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02c87930 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02c87930()
{
    return value_02c87930;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02c88500 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02c88500()
{
    return value_02c88500;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c88890()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02c88980 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02c88980()
{
    return value_02c88980;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02c889d0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02c889d0()
{
    return value_02c889d0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02c88b50 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02c88b50()
{
    return value_02c88b50;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02c88b60 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02c88b60()
{
    return value_02c88b60;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02c88ba0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02c88ba0()
{
    return value_02c88ba0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02c88d20 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02c88d20()
{
    return value_02c88d20;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02c88d30 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02c88d30()
{
    return value_02c88d30;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02c88d70 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02c88d70()
{
    return value_02c88d70;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02c88ef0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02c88ef0()
{
    return value_02c88ef0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02c88f00 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02c88f00()
{
    return value_02c88f00;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02c88f40 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02c88f40()
{
    return value_02c88f40;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02c89110 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02c89110()
{
    return value_02c89110;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02c89120 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02c89120()
{
    return value_02c89120;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02c89160 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02c89160()
{
    return value_02c89160;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02c89340 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02c89340()
{
    return value_02c89340;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02c89350 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02c89350()
{
    return value_02c89350;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02c89390 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02c89390()
{
    return value_02c89390;
}

/**
 *
 * The part of the object that auto_return_float_field_02c89530 reads.
 *
 */
struct Object02c89530 {
    uint8_t unknown_0x0000[0x8];
    float value_0x0008; /**< Read by auto_return_float_field_02c89530; meaning unknown. */
};
static_assert(offsetof(Object02c89530, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_02c89530(const Object02c89530 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_float_field_02c89550 reads.
 *
 */
struct Object02c89550 {
    uint8_t unknown_0x0000[0x8];
    float value_0x0008; /**< Read by auto_return_float_field_02c89550; meaning unknown. */
};
static_assert(offsetof(Object02c89550, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_02c89550(const Object02c89550 *self)
{
    return self->value_0x0008;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02c89560 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02c89560()
{
    return value_02c89560;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02c89570 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02c89570()
{
    return value_02c89570;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02c895b0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02c895b0()
{
    return value_02c895b0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02c89760 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02c89760()
{
    return value_02c89760;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02c89770 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02c89770()
{
    return value_02c89770;
}
