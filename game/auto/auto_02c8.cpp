// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c80030 = 0x9;

extern "C" uint32_t bb_auto_return_constant_02c80030()
{
    return value_02c80030;
}

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
extern "C" uint64_t bb_auto_return_zero_02c80420()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c80430()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c80440()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c805b0()
{
    return 0;
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
constexpr uint32_t value_02c80640 = 0x25;

extern "C" uint32_t bb_auto_return_constant_02c80640()
{
    return value_02c80640;
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
extern "C" uint64_t bb_auto_return_zero_02c808c0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c808d0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c808e0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c80a40()
{
    return 0;
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
constexpr uint32_t value_02c80ad0 = 0x6;

extern "C" uint32_t bb_auto_return_constant_02c80ad0()
{
    return value_02c80ad0;
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
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c80d40()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c80d50()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c80d60()
{
    return 0;
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
extern "C" uint64_t bb_auto_return_zero_02c80ec0()
{
    return 0;
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
constexpr uint32_t value_02c80f50 = 0x3;

extern "C" uint32_t bb_auto_return_constant_02c80f50()
{
    return value_02c80f50;
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
extern "C" uint64_t bb_auto_return_zero_02c81160()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c81170()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c81180()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_02c811b0 reads.
 *
 */
struct Object02c811b0 {
    uint8_t unknown_0x0000[0xc];
    uint32_t value_0x000c; /**< Read by auto_return_field_02c811b0; meaning unknown. */
};
static_assert(offsetof(Object02c811b0, value_0x000c) == 0xc);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02c811b0(const Object02c811b0 *self)
{
    return self->value_0x000c;
}

/**
 *
 * The part of the object that auto_return_field_02c811c0 reads.
 *
 */
struct Object02c811c0 {
    uint8_t unknown_0x0000[0x8];
    uint32_t value_0x0008; /**< Read by auto_return_field_02c811c0; meaning unknown. */
};
static_assert(offsetof(Object02c811c0, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02c811c0(const Object02c811c0 *self)
{
    return self->value_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c812c0()
{
    return 0;
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
 * The part of the object that auto_return_field_02c81a40 reads.
 *
 */
struct Object02c81a40 {
    uint8_t unknown_0x0000[0x8];
    uint32_t value_0x0008; /**< Read by auto_return_field_02c81a40; meaning unknown. */
};
static_assert(offsetof(Object02c81a40, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02c81a40(const Object02c81a40 *self)
{
    return self->value_0x0008;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c81c30()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c81c40 = 0x20;

extern "C" uint32_t bb_auto_return_constant_02c81c40()
{
    return value_02c81c40;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c81c50 = 0x8;

extern "C" uint32_t bb_auto_return_constant_02c81c50()
{
    return value_02c81c50;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c81f60()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c81f70 = 0x20;

extern "C" uint32_t bb_auto_return_constant_02c81f70()
{
    return value_02c81f70;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c81f80 = 0x8;

extern "C" uint32_t bb_auto_return_constant_02c81f80()
{
    return value_02c81f80;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c82070()
{
}

/**
 *
 * The part of the object that auto_return_field_02c82190 reads.
 *
 */
struct Object02c82190 {
    uint8_t unknown_0x0000[0x4];
    uint32_t value_0x0004; /**< Read by auto_return_field_02c82190; meaning unknown. */
};
static_assert(offsetof(Object02c82190, value_0x0004) == 0x4);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02c82190(const Object02c82190 *self)
{
    return self->value_0x0004;
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
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c824e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c824f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c82500()
{
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
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c82960()
{
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
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c85c40()
{
}

/**
 *
 * The part of the object that auto_return_field_02c85db0 reads.
 *
 */
struct Object02c85db0 {
    uint8_t unknown_0x0000[0x8];
    uint16_t value_0x0008; /**< Read by auto_return_field_02c85db0; meaning unknown. */
};
static_assert(offsetof(Object02c85db0, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02c85db0(const Object02c85db0 *self)
{
    return self->value_0x0008;
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
 * The part of the object that auto_return_field_02c85f10 reads.
 *
 */
struct Object02c85f10 {
    uint8_t unknown_0x0000[0x8];
    uint16_t value_0x0008; /**< Read by auto_return_field_02c85f10; meaning unknown. */
};
static_assert(offsetof(Object02c85f10, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02c85f10(const Object02c85f10 *self)
{
    return self->value_0x0008;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c860c0()
{
}

/**
 *
 * The part of the object that auto_return_field_02c86230 reads.
 *
 */
struct Object02c86230 {
    uint8_t unknown_0x0000[0x8];
    uint16_t value_0x0008; /**< Read by auto_return_field_02c86230; meaning unknown. */
};
static_assert(offsetof(Object02c86230, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02c86230(const Object02c86230 *self)
{
    return self->value_0x0008;
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
 * The part of the object that auto_return_field_02c86390 reads.
 *
 */
struct Object02c86390 {
    uint8_t unknown_0x0000[0x8];
    uint16_t value_0x0008; /**< Read by auto_return_field_02c86390; meaning unknown. */
};
static_assert(offsetof(Object02c86390, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02c86390(const Object02c86390 *self)
{
    return self->value_0x0008;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c86540()
{
}

/**
 *
 * The part of the object that auto_return_field_02c866b0 reads.
 *
 */
struct Object02c866b0 {
    uint8_t unknown_0x0000[0x8];
    uint16_t value_0x0008; /**< Read by auto_return_field_02c866b0; meaning unknown. */
};
static_assert(offsetof(Object02c866b0, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02c866b0(const Object02c866b0 *self)
{
    return self->value_0x0008;
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
 * The part of the object that auto_return_field_02c86810 reads.
 *
 */
struct Object02c86810 {
    uint8_t unknown_0x0000[0x8];
    uint16_t value_0x0008; /**< Read by auto_return_field_02c86810; meaning unknown. */
};
static_assert(offsetof(Object02c86810, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02c86810(const Object02c86810 *self)
{
    return self->value_0x0008;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c869c0()
{
}

/**
 *
 * The part of the object that auto_return_field_02c86b30 reads.
 *
 */
struct Object02c86b30 {
    uint8_t unknown_0x0000[0x8];
    uint16_t value_0x0008; /**< Read by auto_return_field_02c86b30; meaning unknown. */
};
static_assert(offsetof(Object02c86b30, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02c86b30(const Object02c86b30 *self)
{
    return self->value_0x0008;
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
 * The part of the object that auto_return_field_02c86c90 reads.
 *
 */
struct Object02c86c90 {
    uint8_t unknown_0x0000[0x8];
    uint16_t value_0x0008; /**< Read by auto_return_field_02c86c90; meaning unknown. */
};
static_assert(offsetof(Object02c86c90, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02c86c90(const Object02c86c90 *self)
{
    return self->value_0x0008;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c86e40()
{
}

/**
 *
 * The part of the object that auto_return_field_02c86fb0 reads.
 *
 */
struct Object02c86fb0 {
    uint8_t unknown_0x0000[0x8];
    uint16_t value_0x0008; /**< Read by auto_return_field_02c86fb0; meaning unknown. */
};
static_assert(offsetof(Object02c86fb0, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02c86fb0(const Object02c86fb0 *self)
{
    return self->value_0x0008;
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
 * The part of the object that auto_return_field_02c87110 reads.
 *
 */
struct Object02c87110 {
    uint8_t unknown_0x0000[0x8];
    uint16_t value_0x0008; /**< Read by auto_return_field_02c87110; meaning unknown. */
};
static_assert(offsetof(Object02c87110, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02c87110(const Object02c87110 *self)
{
    return self->value_0x0008;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c872c0()
{
}

/**
 *
 * The part of the object that auto_return_field_02c87430 reads.
 *
 */
struct Object02c87430 {
    uint8_t unknown_0x0000[0x8];
    uint16_t value_0x0008; /**< Read by auto_return_field_02c87430; meaning unknown. */
};
static_assert(offsetof(Object02c87430, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02c87430(const Object02c87430 *self)
{
    return self->value_0x0008;
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
 * The part of the object that auto_return_field_02c87590 reads.
 *
 */
struct Object02c87590 {
    uint8_t unknown_0x0000[0x8];
    uint16_t value_0x0008; /**< Read by auto_return_field_02c87590; meaning unknown. */
};
static_assert(offsetof(Object02c87590, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02c87590(const Object02c87590 *self)
{
    return self->value_0x0008;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c87740()
{
}

/**
 *
 * The part of the object that auto_return_field_02c878b0 reads.
 *
 */
struct Object02c878b0 {
    uint8_t unknown_0x0000[0x8];
    uint16_t value_0x0008; /**< Read by auto_return_field_02c878b0; meaning unknown. */
};
static_assert(offsetof(Object02c878b0, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02c878b0(const Object02c878b0 *self)
{
    return self->value_0x0008;
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
 * The part of the object that auto_return_field_02c87a10 reads.
 *
 */
struct Object02c87a10 {
    uint8_t unknown_0x0000[0x8];
    uint16_t value_0x0008; /**< Read by auto_return_field_02c87a10; meaning unknown. */
};
static_assert(offsetof(Object02c87a10, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02c87a10(const Object02c87a10 *self)
{
    return self->value_0x0008;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c884f0 = 0x27;

extern "C" uint32_t bb_auto_return_constant_02c884f0()
{
    return value_02c884f0;
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
extern "C" uint64_t bb_auto_return_zero_02c88560()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c88570()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c88580 = 0x1;

extern "C" uint32_t bb_auto_return_constant_02c88580()
{
    return value_02c88580;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c885c0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c885d0 = 0x4;

extern "C" uint32_t bb_auto_return_constant_02c885d0()
{
    return value_02c885d0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c88610()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c88620 = 0x7;

extern "C" uint32_t bb_auto_return_constant_02c88620()
{
    return value_02c88620;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c88660()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c88670 = 0x24;

extern "C" uint32_t bb_auto_return_constant_02c88670()
{
    return value_02c88670;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c886b0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c886c0 = 0x19;

extern "C" uint32_t bb_auto_return_constant_02c886c0()
{
    return value_02c886c0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c88700()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c88710 = 0x1e;

extern "C" uint32_t bb_auto_return_constant_02c88710()
{
    return value_02c88710;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c88750()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c88760 = 0x1a;

extern "C" uint32_t bb_auto_return_constant_02c88760()
{
    return value_02c88760;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c887a0()
{
    return 0;
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
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c88990()
{
    return 0;
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
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c88b00()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c88b10()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_02c88b20 reads.
 *
 */
struct Object02c88b20 {
    uint8_t unknown_0x0000[0x8];
    uint32_t value_0x0008; /**< Read by auto_return_field_02c88b20; meaning unknown. */
};
static_assert(offsetof(Object02c88b20, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02c88b20(const Object02c88b20 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_02c88b40 reads.
 *
 */
struct Object02c88b40 {
    uint8_t unknown_0x0000[0x8];
    uint32_t value_0x0008; /**< Read by auto_return_field_02c88b40; meaning unknown. */
};
static_assert(offsetof(Object02c88b40, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02c88b40(const Object02c88b40 *self)
{
    return self->value_0x0008;
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
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c88cd0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c88ce0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_02c88cf0 reads.
 *
 */
struct Object02c88cf0 {
    uint8_t unknown_0x0000[0x8];
    uint32_t value_0x0008; /**< Read by auto_return_field_02c88cf0; meaning unknown. */
};
static_assert(offsetof(Object02c88cf0, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02c88cf0(const Object02c88cf0 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_02c88d10 reads.
 *
 */
struct Object02c88d10 {
    uint8_t unknown_0x0000[0x8];
    uint32_t value_0x0008; /**< Read by auto_return_field_02c88d10; meaning unknown. */
};
static_assert(offsetof(Object02c88d10, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02c88d10(const Object02c88d10 *self)
{
    return self->value_0x0008;
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
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c88ea0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c88eb0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_02c88ec0 reads.
 *
 */
struct Object02c88ec0 {
    uint8_t unknown_0x0000[0x8];
    uint32_t value_0x0008; /**< Read by auto_return_field_02c88ec0; meaning unknown. */
};
static_assert(offsetof(Object02c88ec0, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02c88ec0(const Object02c88ec0 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_02c88ee0 reads.
 *
 */
struct Object02c88ee0 {
    uint8_t unknown_0x0000[0x8];
    uint32_t value_0x0008; /**< Read by auto_return_field_02c88ee0; meaning unknown. */
};
static_assert(offsetof(Object02c88ee0, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02c88ee0(const Object02c88ee0 *self)
{
    return self->value_0x0008;
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
 * The part of the object that auto_return_field_02c89730 reads.
 *
 */
struct Object02c89730 {
    uint8_t unknown_0x0000[0x8];
    uint32_t value_0x0008; /**< Read by auto_return_field_02c89730; meaning unknown. */
};
static_assert(offsetof(Object02c89730, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02c89730(const Object02c89730 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_02c89750 reads.
 *
 */
struct Object02c89750 {
    uint8_t unknown_0x0000[0x8];
    uint32_t value_0x0008; /**< Read by auto_return_field_02c89750; meaning unknown. */
};
static_assert(offsetof(Object02c89750, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02c89750(const Object02c89750 *self)
{
    return self->value_0x0008;
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

/**
 *
 * The part of the object that auto_return_field_02c89910 reads.
 *
 */
struct Object02c89910 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02c89910; meaning unknown. */
};
static_assert(offsetof(Object02c89910, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c89910(const Object02c89910 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02c89920 reads.
 *
 */
struct Object02c89920 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02c89920; meaning unknown. */
};
static_assert(offsetof(Object02c89920, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c89920(const Object02c89920 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c89970()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c89ac0 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02c89ac0()
{
    return value_02c89ac0;
}

/**
 *
 * The part of the object that auto_return_field_02c89c60 reads.
 *
 */
struct Object02c89c60 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02c89c60; meaning unknown. */
};
static_assert(offsetof(Object02c89c60, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c89c60(const Object02c89c60 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02c89c70 reads.
 *
 */
struct Object02c89c70 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02c89c70; meaning unknown. */
};
static_assert(offsetof(Object02c89c70, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c89c70(const Object02c89c70 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c89cc0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c89e10 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02c89e10()
{
    return value_02c89e10;
}

/**
 *
 * The part of the object that auto_return_field_02c89fb0 reads.
 *
 */
struct Object02c89fb0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02c89fb0; meaning unknown. */
};
static_assert(offsetof(Object02c89fb0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c89fb0(const Object02c89fb0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02c89fc0 reads.
 *
 */
struct Object02c89fc0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02c89fc0; meaning unknown. */
};
static_assert(offsetof(Object02c89fc0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c89fc0(const Object02c89fc0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c8a010()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c8a160 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02c8a160()
{
    return value_02c8a160;
}

/**
 *
 * The part of the object that auto_return_field_02c8a300 reads.
 *
 */
struct Object02c8a300 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02c8a300; meaning unknown. */
};
static_assert(offsetof(Object02c8a300, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c8a300(const Object02c8a300 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02c8a310 reads.
 *
 */
struct Object02c8a310 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02c8a310; meaning unknown. */
};
static_assert(offsetof(Object02c8a310, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c8a310(const Object02c8a310 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c8a360()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c8a4b0 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02c8a4b0()
{
    return value_02c8a4b0;
}

/**
 *
 * The part of the object that auto_return_field_02c8a650 reads.
 *
 */
struct Object02c8a650 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02c8a650; meaning unknown. */
};
static_assert(offsetof(Object02c8a650, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c8a650(const Object02c8a650 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02c8a660 reads.
 *
 */
struct Object02c8a660 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02c8a660; meaning unknown. */
};
static_assert(offsetof(Object02c8a660, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c8a660(const Object02c8a660 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c8a6b0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c8a800 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02c8a800()
{
    return value_02c8a800;
}

/**
 *
 * The part of the object that auto_return_field_02c8a9a0 reads.
 *
 */
struct Object02c8a9a0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02c8a9a0; meaning unknown. */
};
static_assert(offsetof(Object02c8a9a0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c8a9a0(const Object02c8a9a0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02c8a9b0 reads.
 *
 */
struct Object02c8a9b0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02c8a9b0; meaning unknown. */
};
static_assert(offsetof(Object02c8a9b0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c8a9b0(const Object02c8a9b0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c8aa00()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c8ab50 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02c8ab50()
{
    return value_02c8ab50;
}

/**
 *
 * The part of the object that auto_return_field_02c8acf0 reads.
 *
 */
struct Object02c8acf0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02c8acf0; meaning unknown. */
};
static_assert(offsetof(Object02c8acf0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c8acf0(const Object02c8acf0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02c8ad00 reads.
 *
 */
struct Object02c8ad00 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02c8ad00; meaning unknown. */
};
static_assert(offsetof(Object02c8ad00, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c8ad00(const Object02c8ad00 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c8ad50()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c8aea0 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02c8aea0()
{
    return value_02c8aea0;
}

/**
 *
 * The part of the object that auto_return_field_02c8b040 reads.
 *
 */
struct Object02c8b040 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02c8b040; meaning unknown. */
};
static_assert(offsetof(Object02c8b040, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c8b040(const Object02c8b040 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02c8b050 reads.
 *
 */
struct Object02c8b050 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02c8b050; meaning unknown. */
};
static_assert(offsetof(Object02c8b050, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c8b050(const Object02c8b050 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c8b0a0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c8b1f0 = 0x8;

extern "C" uint32_t bb_auto_return_constant_02c8b1f0()
{
    return value_02c8b1f0;
}

/**
 *
 * The part of the object that auto_return_field_02c8b390 reads.
 *
 */
struct Object02c8b390 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02c8b390; meaning unknown. */
};
static_assert(offsetof(Object02c8b390, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c8b390(const Object02c8b390 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02c8b3a0 reads.
 *
 */
struct Object02c8b3a0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02c8b3a0; meaning unknown. */
};
static_assert(offsetof(Object02c8b3a0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c8b3a0(const Object02c8b3a0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c8b3f0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c8b540 = 0x30;

extern "C" uint32_t bb_auto_return_constant_02c8b540()
{
    return value_02c8b540;
}

/**
 *
 * The part of the object that auto_return_field_02c8b6e0 reads.
 *
 */
struct Object02c8b6e0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02c8b6e0; meaning unknown. */
};
static_assert(offsetof(Object02c8b6e0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c8b6e0(const Object02c8b6e0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02c8b6f0 reads.
 *
 */
struct Object02c8b6f0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02c8b6f0; meaning unknown. */
};
static_assert(offsetof(Object02c8b6f0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c8b6f0(const Object02c8b6f0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c8b740()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c8b890 = 0x8;

extern "C" uint32_t bb_auto_return_constant_02c8b890()
{
    return value_02c8b890;
}

/**
 *
 * The part of the object that auto_return_field_02c8ba30 reads.
 *
 */
struct Object02c8ba30 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02c8ba30; meaning unknown. */
};
static_assert(offsetof(Object02c8ba30, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c8ba30(const Object02c8ba30 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02c8ba40 reads.
 *
 */
struct Object02c8ba40 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02c8ba40; meaning unknown. */
};
static_assert(offsetof(Object02c8ba40, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c8ba40(const Object02c8ba40 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c8ba90()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c8bbe0 = 0x8;

extern "C" uint32_t bb_auto_return_constant_02c8bbe0()
{
    return value_02c8bbe0;
}

/**
 *
 * The part of the object that auto_return_field_02c8bd80 reads.
 *
 */
struct Object02c8bd80 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02c8bd80; meaning unknown. */
};
static_assert(offsetof(Object02c8bd80, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c8bd80(const Object02c8bd80 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02c8bd90 reads.
 *
 */
struct Object02c8bd90 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02c8bd90; meaning unknown. */
};
static_assert(offsetof(Object02c8bd90, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c8bd90(const Object02c8bd90 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c8bde0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c8bf30 = 0x8;

extern "C" uint32_t bb_auto_return_constant_02c8bf30()
{
    return value_02c8bf30;
}

/**
 *
 * The part of the object that auto_return_field_02c8c0d0 reads.
 *
 */
struct Object02c8c0d0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02c8c0d0; meaning unknown. */
};
static_assert(offsetof(Object02c8c0d0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c8c0d0(const Object02c8c0d0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02c8c0e0 reads.
 *
 */
struct Object02c8c0e0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02c8c0e0; meaning unknown. */
};
static_assert(offsetof(Object02c8c0e0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c8c0e0(const Object02c8c0e0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c8c130()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c8c280 = 0x8;

extern "C" uint32_t bb_auto_return_constant_02c8c280()
{
    return value_02c8c280;
}

/**
 *
 * The part of the object that auto_return_field_02c8c420 reads.
 *
 */
struct Object02c8c420 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02c8c420; meaning unknown. */
};
static_assert(offsetof(Object02c8c420, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c8c420(const Object02c8c420 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02c8c430 reads.
 *
 */
struct Object02c8c430 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02c8c430; meaning unknown. */
};
static_assert(offsetof(Object02c8c430, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c8c430(const Object02c8c430 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c8c480()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c8c5d0 = 0x8;

extern "C" uint32_t bb_auto_return_constant_02c8c5d0()
{
    return value_02c8c5d0;
}

/**
 *
 * The part of the object that auto_return_field_02c8c770 reads.
 *
 */
struct Object02c8c770 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02c8c770; meaning unknown. */
};
static_assert(offsetof(Object02c8c770, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c8c770(const Object02c8c770 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02c8c780 reads.
 *
 */
struct Object02c8c780 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02c8c780; meaning unknown. */
};
static_assert(offsetof(Object02c8c780, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c8c780(const Object02c8c780 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c8c7d0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c8c920 = 0x8;

extern "C" uint32_t bb_auto_return_constant_02c8c920()
{
    return value_02c8c920;
}

/**
 *
 * The part of the object that auto_return_field_02c8cac0 reads.
 *
 */
struct Object02c8cac0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02c8cac0; meaning unknown. */
};
static_assert(offsetof(Object02c8cac0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c8cac0(const Object02c8cac0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02c8cad0 reads.
 *
 */
struct Object02c8cad0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02c8cad0; meaning unknown. */
};
static_assert(offsetof(Object02c8cad0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c8cad0(const Object02c8cad0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c8cb20()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c8cc70 = 0x8;

extern "C" uint32_t bb_auto_return_constant_02c8cc70()
{
    return value_02c8cc70;
}

/**
 *
 * The part of the object that auto_return_field_02c8ce10 reads.
 *
 */
struct Object02c8ce10 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02c8ce10; meaning unknown. */
};
static_assert(offsetof(Object02c8ce10, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c8ce10(const Object02c8ce10 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02c8ce20 reads.
 *
 */
struct Object02c8ce20 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02c8ce20; meaning unknown. */
};
static_assert(offsetof(Object02c8ce20, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c8ce20(const Object02c8ce20 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c8ce70()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c8cfc0 = 0x8;

extern "C" uint32_t bb_auto_return_constant_02c8cfc0()
{
    return value_02c8cfc0;
}

/**
 *
 * The part of the object that auto_return_field_02c8d160 reads.
 *
 */
struct Object02c8d160 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02c8d160; meaning unknown. */
};
static_assert(offsetof(Object02c8d160, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c8d160(const Object02c8d160 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02c8d170 reads.
 *
 */
struct Object02c8d170 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02c8d170; meaning unknown. */
};
static_assert(offsetof(Object02c8d170, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c8d170(const Object02c8d170 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c8d1c0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c8d310 = 0x8;

extern "C" uint32_t bb_auto_return_constant_02c8d310()
{
    return value_02c8d310;
}

/**
 *
 * The part of the object that auto_return_field_02c8d4b0 reads.
 *
 */
struct Object02c8d4b0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02c8d4b0; meaning unknown. */
};
static_assert(offsetof(Object02c8d4b0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c8d4b0(const Object02c8d4b0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02c8d4c0 reads.
 *
 */
struct Object02c8d4c0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02c8d4c0; meaning unknown. */
};
static_assert(offsetof(Object02c8d4c0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c8d4c0(const Object02c8d4c0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c8d510()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c8d660 = 0x8;

extern "C" uint32_t bb_auto_return_constant_02c8d660()
{
    return value_02c8d660;
}

/**
 *
 * The part of the object that auto_return_field_02c8d800 reads.
 *
 */
struct Object02c8d800 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02c8d800; meaning unknown. */
};
static_assert(offsetof(Object02c8d800, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c8d800(const Object02c8d800 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02c8d810 reads.
 *
 */
struct Object02c8d810 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02c8d810; meaning unknown. */
};
static_assert(offsetof(Object02c8d810, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c8d810(const Object02c8d810 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c8d860()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c8d9b0 = 0x8;

extern "C" uint32_t bb_auto_return_constant_02c8d9b0()
{
    return value_02c8d9b0;
}

/**
 *
 * The part of the object that auto_return_field_02c8db50 reads.
 *
 */
struct Object02c8db50 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02c8db50; meaning unknown. */
};
static_assert(offsetof(Object02c8db50, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c8db50(const Object02c8db50 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02c8db60 reads.
 *
 */
struct Object02c8db60 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02c8db60; meaning unknown. */
};
static_assert(offsetof(Object02c8db60, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c8db60(const Object02c8db60 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c8dbb0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c8dd00 = 0x8;

extern "C" uint32_t bb_auto_return_constant_02c8dd00()
{
    return value_02c8dd00;
}

/**
 *
 * The part of the object that auto_return_field_02c8dea0 reads.
 *
 */
struct Object02c8dea0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02c8dea0; meaning unknown. */
};
static_assert(offsetof(Object02c8dea0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c8dea0(const Object02c8dea0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02c8deb0 reads.
 *
 */
struct Object02c8deb0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02c8deb0; meaning unknown. */
};
static_assert(offsetof(Object02c8deb0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c8deb0(const Object02c8deb0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c8df00()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c8e050 = 0x8;

extern "C" uint32_t bb_auto_return_constant_02c8e050()
{
    return value_02c8e050;
}

/**
 *
 * The part of the object that auto_return_field_02c8e1f0 reads.
 *
 */
struct Object02c8e1f0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02c8e1f0; meaning unknown. */
};
static_assert(offsetof(Object02c8e1f0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c8e1f0(const Object02c8e1f0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02c8e200 reads.
 *
 */
struct Object02c8e200 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02c8e200; meaning unknown. */
};
static_assert(offsetof(Object02c8e200, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c8e200(const Object02c8e200 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c8e250()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c8e3a0 = 0x8;

extern "C" uint32_t bb_auto_return_constant_02c8e3a0()
{
    return value_02c8e3a0;
}

/**
 *
 * The part of the object that auto_return_field_02c8e540 reads.
 *
 */
struct Object02c8e540 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02c8e540; meaning unknown. */
};
static_assert(offsetof(Object02c8e540, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c8e540(const Object02c8e540 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02c8e550 reads.
 *
 */
struct Object02c8e550 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02c8e550; meaning unknown. */
};
static_assert(offsetof(Object02c8e550, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c8e550(const Object02c8e550 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c8e5a0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c8e6f0 = 0x8;

extern "C" uint32_t bb_auto_return_constant_02c8e6f0()
{
    return value_02c8e6f0;
}

/**
 *
 * The part of the object that auto_return_field_02c8e890 reads.
 *
 */
struct Object02c8e890 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02c8e890; meaning unknown. */
};
static_assert(offsetof(Object02c8e890, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c8e890(const Object02c8e890 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02c8e8a0 reads.
 *
 */
struct Object02c8e8a0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02c8e8a0; meaning unknown. */
};
static_assert(offsetof(Object02c8e8a0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c8e8a0(const Object02c8e8a0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c8e8f0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c8ea40 = 0x8;

extern "C" uint32_t bb_auto_return_constant_02c8ea40()
{
    return value_02c8ea40;
}

/**
 *
 * The part of the object that auto_return_field_02c8ebe0 reads.
 *
 */
struct Object02c8ebe0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02c8ebe0; meaning unknown. */
};
static_assert(offsetof(Object02c8ebe0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c8ebe0(const Object02c8ebe0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02c8ebf0 reads.
 *
 */
struct Object02c8ebf0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02c8ebf0; meaning unknown. */
};
static_assert(offsetof(Object02c8ebf0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c8ebf0(const Object02c8ebf0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c8ec40()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c8ed90 = 0x8;

extern "C" uint32_t bb_auto_return_constant_02c8ed90()
{
    return value_02c8ed90;
}

/**
 *
 * The part of the object that auto_return_field_02c8ef30 reads.
 *
 */
struct Object02c8ef30 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02c8ef30; meaning unknown. */
};
static_assert(offsetof(Object02c8ef30, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c8ef30(const Object02c8ef30 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02c8ef40 reads.
 *
 */
struct Object02c8ef40 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02c8ef40; meaning unknown. */
};
static_assert(offsetof(Object02c8ef40, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c8ef40(const Object02c8ef40 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c8ef90()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c8f0e0 = 0x8;

extern "C" uint32_t bb_auto_return_constant_02c8f0e0()
{
    return value_02c8f0e0;
}

/**
 *
 * The part of the object that auto_return_field_02c8f280 reads.
 *
 */
struct Object02c8f280 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02c8f280; meaning unknown. */
};
static_assert(offsetof(Object02c8f280, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c8f280(const Object02c8f280 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02c8f290 reads.
 *
 */
struct Object02c8f290 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02c8f290; meaning unknown. */
};
static_assert(offsetof(Object02c8f290, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c8f290(const Object02c8f290 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c8f2e0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c8f430 = 0x8;

extern "C" uint32_t bb_auto_return_constant_02c8f430()
{
    return value_02c8f430;
}

/**
 *
 * The part of the object that auto_return_field_02c8f5d0 reads.
 *
 */
struct Object02c8f5d0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02c8f5d0; meaning unknown. */
};
static_assert(offsetof(Object02c8f5d0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c8f5d0(const Object02c8f5d0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02c8f5e0 reads.
 *
 */
struct Object02c8f5e0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02c8f5e0; meaning unknown. */
};
static_assert(offsetof(Object02c8f5e0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c8f5e0(const Object02c8f5e0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c8f630()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c8f780 = 0x8;

extern "C" uint32_t bb_auto_return_constant_02c8f780()
{
    return value_02c8f780;
}

/**
 *
 * The part of the object that auto_return_field_02c8f920 reads.
 *
 */
struct Object02c8f920 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02c8f920; meaning unknown. */
};
static_assert(offsetof(Object02c8f920, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c8f920(const Object02c8f920 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02c8f930 reads.
 *
 */
struct Object02c8f930 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02c8f930; meaning unknown. */
};
static_assert(offsetof(Object02c8f930, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c8f930(const Object02c8f930 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c8f980()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c8fad0 = 0x8;

extern "C" uint32_t bb_auto_return_constant_02c8fad0()
{
    return value_02c8fad0;
}

/**
 *
 * The part of the object that auto_return_field_02c8fc70 reads.
 *
 */
struct Object02c8fc70 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02c8fc70; meaning unknown. */
};
static_assert(offsetof(Object02c8fc70, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c8fc70(const Object02c8fc70 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02c8fc80 reads.
 *
 */
struct Object02c8fc80 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02c8fc80; meaning unknown. */
};
static_assert(offsetof(Object02c8fc80, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c8fc80(const Object02c8fc80 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c8fcd0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c8fe20 = 0x8;

extern "C" uint32_t bb_auto_return_constant_02c8fe20()
{
    return value_02c8fe20;
}

/**
 *
 * The part of the object that auto_return_field_02c8ffc0 reads.
 *
 */
struct Object02c8ffc0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02c8ffc0; meaning unknown. */
};
static_assert(offsetof(Object02c8ffc0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c8ffc0(const Object02c8ffc0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02c8ffd0 reads.
 *
 */
struct Object02c8ffd0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02c8ffd0; meaning unknown. */
};
static_assert(offsetof(Object02c8ffd0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c8ffd0(const Object02c8ffd0 *self)
{
    return self->value_0x0048;
}
