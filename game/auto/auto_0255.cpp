// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02550210 = 0xc0;

extern "C" uint32_t bb_auto_return_constant_02550210()
{
    return value_02550210;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02551360()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02551380 = 0x1;

extern "C" uint32_t bb_auto_return_constant_02551380()
{
    return value_02551380;
}

/**
 *
 * The part of the object that auto_return_field_025514f0 reads.
 *
 */
struct Object025514f0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_025514f0; meaning unknown. */
};
static_assert(offsetof(Object025514f0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_025514f0(const Object025514f0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02551500 reads.
 *
 */
struct Object02551500 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02551500; meaning unknown. */
};
static_assert(offsetof(Object02551500, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02551500(const Object02551500 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02551550()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_025517d0 = 0x38;

extern "C" uint32_t bb_auto_return_constant_025517d0()
{
    return value_025517d0;
}

/**
 *
 * The part of the object that auto_return_field_02552440 reads.
 *
 */
struct Object02552440 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02552440; meaning unknown. */
};
static_assert(offsetof(Object02552440, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02552440(const Object02552440 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02552450 reads.
 *
 */
struct Object02552450 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02552450; meaning unknown. */
};
static_assert(offsetof(Object02552450, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02552450(const Object02552450 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_025524a0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02552720 = 0x30;

extern "C" uint32_t bb_auto_return_constant_02552720()
{
    return value_02552720;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02553880()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_025538a0 = 0x1;

extern "C" uint32_t bb_auto_return_constant_025538a0()
{
    return value_025538a0;
}

/**
 *
 * The part of the object that auto_return_field_02553a10 reads.
 *
 */
struct Object02553a10 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02553a10; meaning unknown. */
};
static_assert(offsetof(Object02553a10, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02553a10(const Object02553a10 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02553a20 reads.
 *
 */
struct Object02553a20 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02553a20; meaning unknown. */
};
static_assert(offsetof(Object02553a20, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02553a20(const Object02553a20 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02553a70()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02553cf0 = 0x48;

extern "C" uint32_t bb_auto_return_constant_02553cf0()
{
    return value_02553cf0;
}

/**
 *
 * The part of the object that auto_return_field_02554ea0 reads.
 *
 */
struct Object02554ea0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02554ea0; meaning unknown. */
};
static_assert(offsetof(Object02554ea0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02554ea0(const Object02554ea0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02554eb0 reads.
 *
 */
struct Object02554eb0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02554eb0; meaning unknown. */
};
static_assert(offsetof(Object02554eb0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02554eb0(const Object02554eb0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02554f00()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02555180 = 0x30;

extern "C" uint32_t bb_auto_return_constant_02555180()
{
    return value_02555180;
}

/**
 *
 * The part of the object that auto_return_field_02555c80 reads.
 *
 */
struct Object02555c80 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02555c80; meaning unknown. */
};
static_assert(offsetof(Object02555c80, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02555c80(const Object02555c80 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02555c90 reads.
 *
 */
struct Object02555c90 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02555c90; meaning unknown. */
};
static_assert(offsetof(Object02555c90, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02555c90(const Object02555c90 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02555ce0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02555f60 = 0xa8;

extern "C" uint32_t bb_auto_return_constant_02555f60()
{
    return value_02555f60;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02556750()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02556780()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02556790()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_025567a0()
{
}

/**
 *
 * The part of the object that auto_return_field_02556c20 reads.
 *
 */
struct Object02556c20 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02556c20; meaning unknown. */
};
static_assert(offsetof(Object02556c20, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02556c20(const Object02556c20 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02556c30 reads.
 *
 */
struct Object02556c30 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02556c30; meaning unknown. */
};
static_assert(offsetof(Object02556c30, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02556c30(const Object02556c30 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02556c80()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02556f00 = 0x8;

extern "C" uint32_t bb_auto_return_constant_02556f00()
{
    return value_02556f00;
}

/**
 *
 * The part of the object that auto_return_field_02556f40 reads.
 *
 */
struct Object02556f40 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02556f40; meaning unknown. */
};
static_assert(offsetof(Object02556f40, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02556f40(const Object02556f40 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02556f50 reads.
 *
 */
struct Object02556f50 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02556f50; meaning unknown. */
};
static_assert(offsetof(Object02556f50, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02556f50(const Object02556f50 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02556fa0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02557220 = 0x8;

extern "C" uint32_t bb_auto_return_constant_02557220()
{
    return value_02557220;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_025585c0 = 0x1;

extern "C" uint32_t bb_auto_return_constant_025585c0()
{
    return value_025585c0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_025585d0 = 0x1;

extern "C" uint32_t bb_auto_return_constant_025585d0()
{
    return value_025585d0;
}

/**
 *
 * The part of the object that auto_return_field_025585e0 reads.
 *
 */
struct Object025585e0 {
    uint8_t unknown_0x0000[0xc];
    uint32_t value_0x000c; /**< Read by auto_return_field_025585e0; meaning unknown. */
};
static_assert(offsetof(Object025585e0, value_0x000c) == 0xc);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_025585e0(const Object025585e0 *self)
{
    return self->value_0x000c;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_025585f0 = 0x1;

extern "C" uint32_t bb_auto_return_constant_025585f0()
{
    return value_025585f0;
}

/**
 *
 * The part of the object that auto_return_field_02558600 reads.
 *
 */
struct Object02558600 {
    uint8_t unknown_0x0000[0x8];
    uint32_t value_0x0008; /**< Read by auto_return_field_02558600; meaning unknown. */
};
static_assert(offsetof(Object02558600, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02558600(const Object02558600 *self)
{
    return self->value_0x0008;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02558720 = 0x1;

extern "C" uint32_t bb_auto_return_constant_02558720()
{
    return value_02558720;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02558730()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_02558740 reads.
 *
 */
struct Object02558740 {
    uint8_t unknown_0x0000[0xc];
    uint32_t value_0x000c; /**< Read by auto_return_field_02558740; meaning unknown. */
};
static_assert(offsetof(Object02558740, value_0x000c) == 0xc);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02558740(const Object02558740 *self)
{
    return self->value_0x000c;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02558750 = 0x1;

extern "C" uint32_t bb_auto_return_constant_02558750()
{
    return value_02558750;
}

/**
 *
 * The part of the object that auto_return_field_02558760 reads.
 *
 */
struct Object02558760 {
    uint8_t unknown_0x0000[0x8];
    uint32_t value_0x0008; /**< Read by auto_return_field_02558760; meaning unknown. */
};
static_assert(offsetof(Object02558760, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02558760(const Object02558760 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_float_field_02558770 reads.
 *
 */
struct Object02558770 {
    uint8_t unknown_0x0000[0x10];
    float value_0x0010; /**< Read by auto_return_float_field_02558770; meaning unknown. */
};
static_assert(offsetof(Object02558770, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_02558770(const Object02558770 *self)
{
    return self->value_0x0010;
}

/**
 *
 * The part of the object that auto_return_float_field_02558780 reads.
 *
 */
struct Object02558780 {
    uint8_t unknown_0x0000[0x14];
    float value_0x0014; /**< Read by auto_return_float_field_02558780; meaning unknown. */
};
static_assert(offsetof(Object02558780, value_0x0014) == 0x14);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_02558780(const Object02558780 *self)
{
    return self->value_0x0014;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_025588b0 = 0x1;

extern "C" uint32_t bb_auto_return_constant_025588b0()
{
    return value_025588b0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_025588c0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_025588e0 = 0x2;

extern "C" uint32_t bb_auto_return_constant_025588e0()
{
    return value_025588e0;
}

/**
 *
 * The part of the object that auto_return_field_025588f0 reads.
 *
 */
struct Object025588f0 {
    uint8_t unknown_0x0000[0x8];
    uint32_t value_0x0008; /**< Read by auto_return_field_025588f0; meaning unknown. */
};
static_assert(offsetof(Object025588f0, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_025588f0(const Object025588f0 *self)
{
    return self->value_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02558a20()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02558a30 = 0x1;

extern "C" uint32_t bb_auto_return_constant_02558a30()
{
    return value_02558a30;
}

/**
 *
 * The part of the object that auto_return_field_02558a40 reads.
 *
 */
struct Object02558a40 {
    uint8_t unknown_0x0000[0xc];
    uint32_t value_0x000c; /**< Read by auto_return_field_02558a40; meaning unknown. */
};
static_assert(offsetof(Object02558a40, value_0x000c) == 0xc);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02558a40(const Object02558a40 *self)
{
    return self->value_0x000c;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02558a50 = 0x1;

extern "C" uint32_t bb_auto_return_constant_02558a50()
{
    return value_02558a50;
}

/**
 *
 * The part of the object that auto_return_field_02558a60 reads.
 *
 */
struct Object02558a60 {
    uint8_t unknown_0x0000[0x8];
    uint32_t value_0x0008; /**< Read by auto_return_field_02558a60; meaning unknown. */
};
static_assert(offsetof(Object02558a60, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02558a60(const Object02558a60 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_float_field_02558a70 reads.
 *
 */
struct Object02558a70 {
    uint8_t unknown_0x0000[0x10];
    float value_0x0010; /**< Read by auto_return_float_field_02558a70; meaning unknown. */
};
static_assert(offsetof(Object02558a70, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_02558a70(const Object02558a70 *self)
{
    return self->value_0x0010;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02558b80()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02558b90()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_02558ba0 reads.
 *
 */
struct Object02558ba0 {
    uint8_t unknown_0x0000[0xc];
    uint32_t value_0x000c; /**< Read by auto_return_field_02558ba0; meaning unknown. */
};
static_assert(offsetof(Object02558ba0, value_0x000c) == 0xc);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02558ba0(const Object02558ba0 *self)
{
    return self->value_0x000c;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02558bb0 = 0x1;

extern "C" uint32_t bb_auto_return_constant_02558bb0()
{
    return value_02558bb0;
}

/**
 *
 * The part of the object that auto_return_field_02558bc0 reads.
 *
 */
struct Object02558bc0 {
    uint8_t unknown_0x0000[0x8];
    uint32_t value_0x0008; /**< Read by auto_return_field_02558bc0; meaning unknown. */
};
static_assert(offsetof(Object02558bc0, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02558bc0(const Object02558bc0 *self)
{
    return self->value_0x0008;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02558c90()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02559380()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_025599c0()
{
}

/**
 *
 * The part of the object that auto_return_field_0255aa90 reads.
 *
 */
struct Object0255aa90 {
    uint8_t unknown_0x0000[0x18];
    uint32_t value_0x0018; /**< Read by auto_return_field_0255aa90; meaning unknown. */
};
static_assert(offsetof(Object0255aa90, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_0255aa90(const Object0255aa90 *self)
{
    return self->value_0x0018;
}

/**
 *
 * The part of the object that auto_return_field_0255acd0 reads.
 *
 */
struct Object0255acd0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0255acd0; meaning unknown. */
};
static_assert(offsetof(Object0255acd0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0255acd0(const Object0255acd0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0255e660()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0255e8d0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0255fd60()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0255fd70()
{
}
