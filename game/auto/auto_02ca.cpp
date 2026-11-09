// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_02ca00f0 reads.
 *
 */
struct Object02ca00f0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02ca00f0; meaning unknown. */
};
static_assert(offsetof(Object02ca00f0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02ca00f0(const Object02ca00f0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02ca0100 reads.
 *
 */
struct Object02ca0100 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02ca0100; meaning unknown. */
};
static_assert(offsetof(Object02ca0100, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02ca0100(const Object02ca0100 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02ca0150()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02ca02a0 = 0x20;

extern "C" uint32_t bb_auto_return_constant_02ca02a0()
{
    return value_02ca02a0;
}

/**
 *
 * The part of the object that auto_return_field_02ca0440 reads.
 *
 */
struct Object02ca0440 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02ca0440; meaning unknown. */
};
static_assert(offsetof(Object02ca0440, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02ca0440(const Object02ca0440 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02ca0450 reads.
 *
 */
struct Object02ca0450 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02ca0450; meaning unknown. */
};
static_assert(offsetof(Object02ca0450, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02ca0450(const Object02ca0450 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02ca04a0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02ca05f0 = 0x30;

extern "C" uint32_t bb_auto_return_constant_02ca05f0()
{
    return value_02ca05f0;
}

/**
 *
 * The part of the object that auto_return_field_02ca0790 reads.
 *
 */
struct Object02ca0790 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02ca0790; meaning unknown. */
};
static_assert(offsetof(Object02ca0790, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02ca0790(const Object02ca0790 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02ca07a0 reads.
 *
 */
struct Object02ca07a0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02ca07a0; meaning unknown. */
};
static_assert(offsetof(Object02ca07a0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02ca07a0(const Object02ca07a0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02ca07f0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02ca0940 = 0x30;

extern "C" uint32_t bb_auto_return_constant_02ca0940()
{
    return value_02ca0940;
}

/**
 *
 * The part of the object that auto_return_field_02ca0a40 reads.
 *
 */
struct Object02ca0a40 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02ca0a40; meaning unknown. */
};
static_assert(offsetof(Object02ca0a40, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02ca0a40(const Object02ca0a40 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02ca0a50 reads.
 *
 */
struct Object02ca0a50 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02ca0a50; meaning unknown. */
};
static_assert(offsetof(Object02ca0a50, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02ca0a50(const Object02ca0a50 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02ca0aa0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02ca0bf0 = 0x30;

extern "C" uint32_t bb_auto_return_constant_02ca0bf0()
{
    return value_02ca0bf0;
}

/**
 *
 * The part of the object that auto_return_field_02ca0cf0 reads.
 *
 */
struct Object02ca0cf0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02ca0cf0; meaning unknown. */
};
static_assert(offsetof(Object02ca0cf0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02ca0cf0(const Object02ca0cf0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02ca0d00 reads.
 *
 */
struct Object02ca0d00 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02ca0d00; meaning unknown. */
};
static_assert(offsetof(Object02ca0d00, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02ca0d00(const Object02ca0d00 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02ca0d50()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02ca0ea0 = 0x20;

extern "C" uint32_t bb_auto_return_constant_02ca0ea0()
{
    return value_02ca0ea0;
}

/**
 *
 * The part of the object that auto_return_field_02ca0fa0 reads.
 *
 */
struct Object02ca0fa0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02ca0fa0; meaning unknown. */
};
static_assert(offsetof(Object02ca0fa0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02ca0fa0(const Object02ca0fa0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02ca0fb0 reads.
 *
 */
struct Object02ca0fb0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02ca0fb0; meaning unknown. */
};
static_assert(offsetof(Object02ca0fb0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02ca0fb0(const Object02ca0fb0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02ca1000()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02ca1150 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02ca1150()
{
    return value_02ca1150;
}

/**
 *
 * The part of the object that auto_return_field_02ca1250 reads.
 *
 */
struct Object02ca1250 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02ca1250; meaning unknown. */
};
static_assert(offsetof(Object02ca1250, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02ca1250(const Object02ca1250 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02ca1260 reads.
 *
 */
struct Object02ca1260 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02ca1260; meaning unknown. */
};
static_assert(offsetof(Object02ca1260, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02ca1260(const Object02ca1260 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02ca12b0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02ca1400 = 0x18;

extern "C" uint32_t bb_auto_return_constant_02ca1400()
{
    return value_02ca1400;
}

/**
 *
 * The part of the object that auto_return_field_02ca1500 reads.
 *
 */
struct Object02ca1500 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02ca1500; meaning unknown. */
};
static_assert(offsetof(Object02ca1500, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02ca1500(const Object02ca1500 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02ca1510 reads.
 *
 */
struct Object02ca1510 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02ca1510; meaning unknown. */
};
static_assert(offsetof(Object02ca1510, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02ca1510(const Object02ca1510 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02ca1560()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02ca16b0 = 0x20;

extern "C" uint32_t bb_auto_return_constant_02ca16b0()
{
    return value_02ca16b0;
}

/**
 *
 * The part of the object that auto_return_field_02ca17b0 reads.
 *
 */
struct Object02ca17b0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02ca17b0; meaning unknown. */
};
static_assert(offsetof(Object02ca17b0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02ca17b0(const Object02ca17b0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02ca17c0 reads.
 *
 */
struct Object02ca17c0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02ca17c0; meaning unknown. */
};
static_assert(offsetof(Object02ca17c0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02ca17c0(const Object02ca17c0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02ca1810()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02ca1960 = 0x20;

extern "C" uint32_t bb_auto_return_constant_02ca1960()
{
    return value_02ca1960;
}

/**
 *
 * The part of the object that auto_return_field_02ca1a60 reads.
 *
 */
struct Object02ca1a60 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02ca1a60; meaning unknown. */
};
static_assert(offsetof(Object02ca1a60, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02ca1a60(const Object02ca1a60 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02ca1a70 reads.
 *
 */
struct Object02ca1a70 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02ca1a70; meaning unknown. */
};
static_assert(offsetof(Object02ca1a70, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02ca1a70(const Object02ca1a70 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02ca1ac0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02ca1c10 = 0x20;

extern "C" uint32_t bb_auto_return_constant_02ca1c10()
{
    return value_02ca1c10;
}

/**
 *
 * The part of the object that auto_return_field_02ca1d10 reads.
 *
 */
struct Object02ca1d10 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02ca1d10; meaning unknown. */
};
static_assert(offsetof(Object02ca1d10, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02ca1d10(const Object02ca1d10 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02ca1d20 reads.
 *
 */
struct Object02ca1d20 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02ca1d20; meaning unknown. */
};
static_assert(offsetof(Object02ca1d20, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02ca1d20(const Object02ca1d20 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02ca1d70()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02ca1ec0 = 0x20;

extern "C" uint32_t bb_auto_return_constant_02ca1ec0()
{
    return value_02ca1ec0;
}

/**
 *
 * The part of the object that auto_return_field_02ca1fc0 reads.
 *
 */
struct Object02ca1fc0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02ca1fc0; meaning unknown. */
};
static_assert(offsetof(Object02ca1fc0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02ca1fc0(const Object02ca1fc0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02ca1fd0 reads.
 *
 */
struct Object02ca1fd0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02ca1fd0; meaning unknown. */
};
static_assert(offsetof(Object02ca1fd0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02ca1fd0(const Object02ca1fd0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02ca2020()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02ca2170 = 0x20;

extern "C" uint32_t bb_auto_return_constant_02ca2170()
{
    return value_02ca2170;
}

/**
 *
 * The part of the object that auto_return_field_02ca2270 reads.
 *
 */
struct Object02ca2270 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02ca2270; meaning unknown. */
};
static_assert(offsetof(Object02ca2270, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02ca2270(const Object02ca2270 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02ca2280 reads.
 *
 */
struct Object02ca2280 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02ca2280; meaning unknown. */
};
static_assert(offsetof(Object02ca2280, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02ca2280(const Object02ca2280 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02ca22d0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02ca2420 = 0x20;

extern "C" uint32_t bb_auto_return_constant_02ca2420()
{
    return value_02ca2420;
}

/**
 *
 * The part of the object that auto_return_field_02ca2520 reads.
 *
 */
struct Object02ca2520 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02ca2520; meaning unknown. */
};
static_assert(offsetof(Object02ca2520, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02ca2520(const Object02ca2520 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02ca2530 reads.
 *
 */
struct Object02ca2530 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02ca2530; meaning unknown. */
};
static_assert(offsetof(Object02ca2530, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02ca2530(const Object02ca2530 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02ca2580()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02ca26d0 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02ca26d0()
{
    return value_02ca26d0;
}

/**
 *
 * The part of the object that auto_return_field_02ca27d0 reads.
 *
 */
struct Object02ca27d0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02ca27d0; meaning unknown. */
};
static_assert(offsetof(Object02ca27d0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02ca27d0(const Object02ca27d0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02ca27e0 reads.
 *
 */
struct Object02ca27e0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02ca27e0; meaning unknown. */
};
static_assert(offsetof(Object02ca27e0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02ca27e0(const Object02ca27e0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02ca2830()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02ca2980 = 0x20;

extern "C" uint32_t bb_auto_return_constant_02ca2980()
{
    return value_02ca2980;
}

/**
 *
 * The part of the object that auto_return_field_02ca2a80 reads.
 *
 */
struct Object02ca2a80 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02ca2a80; meaning unknown. */
};
static_assert(offsetof(Object02ca2a80, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02ca2a80(const Object02ca2a80 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02ca2a90 reads.
 *
 */
struct Object02ca2a90 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02ca2a90; meaning unknown. */
};
static_assert(offsetof(Object02ca2a90, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02ca2a90(const Object02ca2a90 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02ca2ae0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02ca2c30 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02ca2c30()
{
    return value_02ca2c30;
}

/**
 *
 * The part of the object that auto_return_field_02ca2d30 reads.
 *
 */
struct Object02ca2d30 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02ca2d30; meaning unknown. */
};
static_assert(offsetof(Object02ca2d30, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02ca2d30(const Object02ca2d30 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02ca2d40 reads.
 *
 */
struct Object02ca2d40 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02ca2d40; meaning unknown. */
};
static_assert(offsetof(Object02ca2d40, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02ca2d40(const Object02ca2d40 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02ca2d90()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02ca2ee0 = 0x18;

extern "C" uint32_t bb_auto_return_constant_02ca2ee0()
{
    return value_02ca2ee0;
}

/**
 *
 * The part of the object that auto_return_field_02cab810 reads.
 *
 */
struct Object02cab810 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02cab810; meaning unknown. */
};
static_assert(offsetof(Object02cab810, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cab810(const Object02cab810 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02cab820 reads.
 *
 */
struct Object02cab820 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02cab820; meaning unknown. */
};
static_assert(offsetof(Object02cab820, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cab820(const Object02cab820 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02cab870()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02cab9c0 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02cab9c0()
{
    return value_02cab9c0;
}

/**
 *
 * The part of the object that auto_return_field_02cabac0 reads.
 *
 */
struct Object02cabac0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02cabac0; meaning unknown. */
};
static_assert(offsetof(Object02cabac0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cabac0(const Object02cabac0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02cabad0 reads.
 *
 */
struct Object02cabad0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02cabad0; meaning unknown. */
};
static_assert(offsetof(Object02cabad0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cabad0(const Object02cabad0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02cabb20()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02cabc70 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02cabc70()
{
    return value_02cabc70;
}

/**
 *
 * The part of the object that auto_return_field_02cabd70 reads.
 *
 */
struct Object02cabd70 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02cabd70; meaning unknown. */
};
static_assert(offsetof(Object02cabd70, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cabd70(const Object02cabd70 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02cabd80 reads.
 *
 */
struct Object02cabd80 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02cabd80; meaning unknown. */
};
static_assert(offsetof(Object02cabd80, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cabd80(const Object02cabd80 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02cabdd0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02cabf20 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02cabf20()
{
    return value_02cabf20;
}

/**
 *
 * The part of the object that auto_return_field_02cac020 reads.
 *
 */
struct Object02cac020 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02cac020; meaning unknown. */
};
static_assert(offsetof(Object02cac020, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cac020(const Object02cac020 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02cac030 reads.
 *
 */
struct Object02cac030 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02cac030; meaning unknown. */
};
static_assert(offsetof(Object02cac030, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cac030(const Object02cac030 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02cac080()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02cac1d0 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02cac1d0()
{
    return value_02cac1d0;
}

/**
 *
 * The part of the object that auto_return_field_02cac2d0 reads.
 *
 */
struct Object02cac2d0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02cac2d0; meaning unknown. */
};
static_assert(offsetof(Object02cac2d0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cac2d0(const Object02cac2d0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02cac2e0 reads.
 *
 */
struct Object02cac2e0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02cac2e0; meaning unknown. */
};
static_assert(offsetof(Object02cac2e0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cac2e0(const Object02cac2e0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02cac330()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02cac480 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02cac480()
{
    return value_02cac480;
}

/**
 *
 * The part of the object that auto_return_field_02cac580 reads.
 *
 */
struct Object02cac580 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02cac580; meaning unknown. */
};
static_assert(offsetof(Object02cac580, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cac580(const Object02cac580 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02cac590 reads.
 *
 */
struct Object02cac590 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02cac590; meaning unknown. */
};
static_assert(offsetof(Object02cac590, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cac590(const Object02cac590 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02cac5e0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02cac730 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02cac730()
{
    return value_02cac730;
}

/**
 *
 * The part of the object that auto_return_field_02cac830 reads.
 *
 */
struct Object02cac830 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02cac830; meaning unknown. */
};
static_assert(offsetof(Object02cac830, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cac830(const Object02cac830 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02cac840 reads.
 *
 */
struct Object02cac840 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02cac840; meaning unknown. */
};
static_assert(offsetof(Object02cac840, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cac840(const Object02cac840 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02cac890()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02cac9e0 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02cac9e0()
{
    return value_02cac9e0;
}

/**
 *
 * The part of the object that auto_return_field_02cacae0 reads.
 *
 */
struct Object02cacae0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02cacae0; meaning unknown. */
};
static_assert(offsetof(Object02cacae0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cacae0(const Object02cacae0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02cacaf0 reads.
 *
 */
struct Object02cacaf0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02cacaf0; meaning unknown. */
};
static_assert(offsetof(Object02cacaf0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cacaf0(const Object02cacaf0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02cacb40()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02cacc90 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02cacc90()
{
    return value_02cacc90;
}

/**
 *
 * The part of the object that auto_return_field_02cace30 reads.
 *
 */
struct Object02cace30 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02cace30; meaning unknown. */
};
static_assert(offsetof(Object02cace30, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cace30(const Object02cace30 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02cace40 reads.
 *
 */
struct Object02cace40 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02cace40; meaning unknown. */
};
static_assert(offsetof(Object02cace40, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cace40(const Object02cace40 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02cace90()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02cacfe0 = 0x30;

extern "C" uint32_t bb_auto_return_constant_02cacfe0()
{
    return value_02cacfe0;
}

/**
 *
 * The part of the object that auto_return_field_02cad180 reads.
 *
 */
struct Object02cad180 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02cad180; meaning unknown. */
};
static_assert(offsetof(Object02cad180, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cad180(const Object02cad180 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02cad190 reads.
 *
 */
struct Object02cad190 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02cad190; meaning unknown. */
};
static_assert(offsetof(Object02cad190, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cad190(const Object02cad190 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02cad1e0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02cad330 = 0x30;

extern "C" uint32_t bb_auto_return_constant_02cad330()
{
    return value_02cad330;
}

/**
 *
 * The part of the object that auto_return_field_02cad430 reads.
 *
 */
struct Object02cad430 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02cad430; meaning unknown. */
};
static_assert(offsetof(Object02cad430, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cad430(const Object02cad430 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02cad440 reads.
 *
 */
struct Object02cad440 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02cad440; meaning unknown. */
};
static_assert(offsetof(Object02cad440, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cad440(const Object02cad440 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02cad490()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02cad5e0 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02cad5e0()
{
    return value_02cad5e0;
}

/**
 *
 * The part of the object that auto_return_field_02cad6e0 reads.
 *
 */
struct Object02cad6e0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02cad6e0; meaning unknown. */
};
static_assert(offsetof(Object02cad6e0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cad6e0(const Object02cad6e0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02cad6f0 reads.
 *
 */
struct Object02cad6f0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02cad6f0; meaning unknown. */
};
static_assert(offsetof(Object02cad6f0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cad6f0(const Object02cad6f0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02cad740()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02cad890 = 0x18;

extern "C" uint32_t bb_auto_return_constant_02cad890()
{
    return value_02cad890;
}

/**
 *
 * The part of the object that auto_return_field_02cad990 reads.
 *
 */
struct Object02cad990 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02cad990; meaning unknown. */
};
static_assert(offsetof(Object02cad990, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cad990(const Object02cad990 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02cad9a0 reads.
 *
 */
struct Object02cad9a0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02cad9a0; meaning unknown. */
};
static_assert(offsetof(Object02cad9a0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cad9a0(const Object02cad9a0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02cad9f0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02cadb40 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02cadb40()
{
    return value_02cadb40;
}

/**
 *
 * The part of the object that auto_return_field_02cadc40 reads.
 *
 */
struct Object02cadc40 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02cadc40; meaning unknown. */
};
static_assert(offsetof(Object02cadc40, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cadc40(const Object02cadc40 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02cadc50 reads.
 *
 */
struct Object02cadc50 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02cadc50; meaning unknown. */
};
static_assert(offsetof(Object02cadc50, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cadc50(const Object02cadc50 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02cadca0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02caddf0 = 0x20;

extern "C" uint32_t bb_auto_return_constant_02caddf0()
{
    return value_02caddf0;
}

/**
 *
 * The part of the object that auto_return_field_02cadef0 reads.
 *
 */
struct Object02cadef0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02cadef0; meaning unknown. */
};
static_assert(offsetof(Object02cadef0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cadef0(const Object02cadef0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02cadf00 reads.
 *
 */
struct Object02cadf00 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02cadf00; meaning unknown. */
};
static_assert(offsetof(Object02cadf00, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cadf00(const Object02cadf00 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02cadf50()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02cae0a0 = 0x20;

extern "C" uint32_t bb_auto_return_constant_02cae0a0()
{
    return value_02cae0a0;
}

/**
 *
 * The part of the object that auto_return_field_02cae1a0 reads.
 *
 */
struct Object02cae1a0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02cae1a0; meaning unknown. */
};
static_assert(offsetof(Object02cae1a0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cae1a0(const Object02cae1a0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02cae1b0 reads.
 *
 */
struct Object02cae1b0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02cae1b0; meaning unknown. */
};
static_assert(offsetof(Object02cae1b0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cae1b0(const Object02cae1b0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02cae200()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02cae350 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02cae350()
{
    return value_02cae350;
}

/**
 *
 * The part of the object that auto_return_field_02cae450 reads.
 *
 */
struct Object02cae450 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02cae450; meaning unknown. */
};
static_assert(offsetof(Object02cae450, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cae450(const Object02cae450 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02cae460 reads.
 *
 */
struct Object02cae460 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02cae460; meaning unknown. */
};
static_assert(offsetof(Object02cae460, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cae460(const Object02cae460 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02cae4b0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02cae600 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02cae600()
{
    return value_02cae600;
}

/**
 *
 * The part of the object that auto_return_field_02cae700 reads.
 *
 */
struct Object02cae700 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02cae700; meaning unknown. */
};
static_assert(offsetof(Object02cae700, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cae700(const Object02cae700 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02cae710 reads.
 *
 */
struct Object02cae710 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02cae710; meaning unknown. */
};
static_assert(offsetof(Object02cae710, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cae710(const Object02cae710 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02cae760()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02cae8b0 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02cae8b0()
{
    return value_02cae8b0;
}

/**
 *
 * The part of the object that auto_return_field_02cae9b0 reads.
 *
 */
struct Object02cae9b0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02cae9b0; meaning unknown. */
};
static_assert(offsetof(Object02cae9b0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cae9b0(const Object02cae9b0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02cae9c0 reads.
 *
 */
struct Object02cae9c0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02cae9c0; meaning unknown. */
};
static_assert(offsetof(Object02cae9c0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cae9c0(const Object02cae9c0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02caea10()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02caeb60 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02caeb60()
{
    return value_02caeb60;
}

/**
 *
 * The part of the object that auto_return_field_02caec60 reads.
 *
 */
struct Object02caec60 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02caec60; meaning unknown. */
};
static_assert(offsetof(Object02caec60, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02caec60(const Object02caec60 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02caec70 reads.
 *
 */
struct Object02caec70 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02caec70; meaning unknown. */
};
static_assert(offsetof(Object02caec70, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02caec70(const Object02caec70 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02caecc0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02caee10 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02caee10()
{
    return value_02caee10;
}

/**
 *
 * The part of the object that auto_return_field_02caef10 reads.
 *
 */
struct Object02caef10 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02caef10; meaning unknown. */
};
static_assert(offsetof(Object02caef10, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02caef10(const Object02caef10 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02caef20 reads.
 *
 */
struct Object02caef20 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02caef20; meaning unknown. */
};
static_assert(offsetof(Object02caef20, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02caef20(const Object02caef20 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02caef70()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02caf0c0 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02caf0c0()
{
    return value_02caf0c0;
}

/**
 *
 * The part of the object that auto_return_field_02caf1c0 reads.
 *
 */
struct Object02caf1c0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02caf1c0; meaning unknown. */
};
static_assert(offsetof(Object02caf1c0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02caf1c0(const Object02caf1c0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02caf1d0 reads.
 *
 */
struct Object02caf1d0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02caf1d0; meaning unknown. */
};
static_assert(offsetof(Object02caf1d0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02caf1d0(const Object02caf1d0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02caf220()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02caf370 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02caf370()
{
    return value_02caf370;
}

/**
 *
 * The part of the object that auto_return_field_02caf470 reads.
 *
 */
struct Object02caf470 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02caf470; meaning unknown. */
};
static_assert(offsetof(Object02caf470, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02caf470(const Object02caf470 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02caf480 reads.
 *
 */
struct Object02caf480 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02caf480; meaning unknown. */
};
static_assert(offsetof(Object02caf480, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02caf480(const Object02caf480 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02caf4d0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02caf620 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02caf620()
{
    return value_02caf620;
}

/**
 *
 * The part of the object that auto_return_field_02caf720 reads.
 *
 */
struct Object02caf720 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02caf720; meaning unknown. */
};
static_assert(offsetof(Object02caf720, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02caf720(const Object02caf720 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02caf730 reads.
 *
 */
struct Object02caf730 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02caf730; meaning unknown. */
};
static_assert(offsetof(Object02caf730, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02caf730(const Object02caf730 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02caf780()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02caf8d0 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02caf8d0()
{
    return value_02caf8d0;
}

/**
 *
 * The part of the object that auto_return_field_02caf9d0 reads.
 *
 */
struct Object02caf9d0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02caf9d0; meaning unknown. */
};
static_assert(offsetof(Object02caf9d0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02caf9d0(const Object02caf9d0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02caf9e0 reads.
 *
 */
struct Object02caf9e0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02caf9e0; meaning unknown. */
};
static_assert(offsetof(Object02caf9e0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02caf9e0(const Object02caf9e0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02cafa30()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02cafb80 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02cafb80()
{
    return value_02cafb80;
}

/**
 *
 * The part of the object that auto_return_field_02cafc80 reads.
 *
 */
struct Object02cafc80 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02cafc80; meaning unknown. */
};
static_assert(offsetof(Object02cafc80, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cafc80(const Object02cafc80 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02cafc90 reads.
 *
 */
struct Object02cafc90 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02cafc90; meaning unknown. */
};
static_assert(offsetof(Object02cafc90, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cafc90(const Object02cafc90 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02cafce0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02cafe30 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02cafe30()
{
    return value_02cafe30;
}

/**
 *
 * The part of the object that auto_return_field_02caff30 reads.
 *
 */
struct Object02caff30 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02caff30; meaning unknown. */
};
static_assert(offsetof(Object02caff30, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02caff30(const Object02caff30 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02caff40 reads.
 *
 */
struct Object02caff40 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02caff40; meaning unknown. */
};
static_assert(offsetof(Object02caff40, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02caff40(const Object02caff40 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02caff90()
{
    return 0;
}
