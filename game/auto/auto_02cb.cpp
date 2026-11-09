// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02cb00e0 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02cb00e0()
{
    return value_02cb00e0;
}

/**
 *
 * The part of the object that auto_return_field_02cb01e0 reads.
 *
 */
struct Object02cb01e0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02cb01e0; meaning unknown. */
};
static_assert(offsetof(Object02cb01e0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cb01e0(const Object02cb01e0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02cb01f0 reads.
 *
 */
struct Object02cb01f0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02cb01f0; meaning unknown. */
};
static_assert(offsetof(Object02cb01f0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cb01f0(const Object02cb01f0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02cb0240()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02cb0390 = 0x20;

extern "C" uint32_t bb_auto_return_constant_02cb0390()
{
    return value_02cb0390;
}

/**
 *
 * The part of the object that auto_return_field_02cb0490 reads.
 *
 */
struct Object02cb0490 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02cb0490; meaning unknown. */
};
static_assert(offsetof(Object02cb0490, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cb0490(const Object02cb0490 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02cb04a0 reads.
 *
 */
struct Object02cb04a0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02cb04a0; meaning unknown. */
};
static_assert(offsetof(Object02cb04a0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cb04a0(const Object02cb04a0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02cb04f0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02cb0640 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02cb0640()
{
    return value_02cb0640;
}

/**
 *
 * The part of the object that auto_return_field_02cb0740 reads.
 *
 */
struct Object02cb0740 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02cb0740; meaning unknown. */
};
static_assert(offsetof(Object02cb0740, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cb0740(const Object02cb0740 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02cb0750 reads.
 *
 */
struct Object02cb0750 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02cb0750; meaning unknown. */
};
static_assert(offsetof(Object02cb0750, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cb0750(const Object02cb0750 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02cb07a0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02cb08f0 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02cb08f0()
{
    return value_02cb08f0;
}

/**
 *
 * The part of the object that auto_return_field_02cb09f0 reads.
 *
 */
struct Object02cb09f0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02cb09f0; meaning unknown. */
};
static_assert(offsetof(Object02cb09f0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cb09f0(const Object02cb09f0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02cb0a00 reads.
 *
 */
struct Object02cb0a00 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02cb0a00; meaning unknown. */
};
static_assert(offsetof(Object02cb0a00, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cb0a00(const Object02cb0a00 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02cb0a50()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02cb0ba0 = 0x20;

extern "C" uint32_t bb_auto_return_constant_02cb0ba0()
{
    return value_02cb0ba0;
}

/**
 *
 * The part of the object that auto_return_field_02cb0ca0 reads.
 *
 */
struct Object02cb0ca0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02cb0ca0; meaning unknown. */
};
static_assert(offsetof(Object02cb0ca0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cb0ca0(const Object02cb0ca0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02cb0cb0 reads.
 *
 */
struct Object02cb0cb0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02cb0cb0; meaning unknown. */
};
static_assert(offsetof(Object02cb0cb0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cb0cb0(const Object02cb0cb0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02cb0d00()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02cb0e50 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02cb0e50()
{
    return value_02cb0e50;
}

/**
 *
 * The part of the object that auto_return_field_02cb0f50 reads.
 *
 */
struct Object02cb0f50 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02cb0f50; meaning unknown. */
};
static_assert(offsetof(Object02cb0f50, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cb0f50(const Object02cb0f50 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02cb0f60 reads.
 *
 */
struct Object02cb0f60 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02cb0f60; meaning unknown. */
};
static_assert(offsetof(Object02cb0f60, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cb0f60(const Object02cb0f60 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02cb0fb0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02cb1100 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02cb1100()
{
    return value_02cb1100;
}

/**
 *
 * The part of the object that auto_return_field_02cb1200 reads.
 *
 */
struct Object02cb1200 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02cb1200; meaning unknown. */
};
static_assert(offsetof(Object02cb1200, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cb1200(const Object02cb1200 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02cb1210 reads.
 *
 */
struct Object02cb1210 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02cb1210; meaning unknown. */
};
static_assert(offsetof(Object02cb1210, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cb1210(const Object02cb1210 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02cb1260()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02cb13b0 = 0x20;

extern "C" uint32_t bb_auto_return_constant_02cb13b0()
{
    return value_02cb13b0;
}

/**
 *
 * The part of the object that auto_return_field_02cb14b0 reads.
 *
 */
struct Object02cb14b0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02cb14b0; meaning unknown. */
};
static_assert(offsetof(Object02cb14b0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cb14b0(const Object02cb14b0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02cb14c0 reads.
 *
 */
struct Object02cb14c0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02cb14c0; meaning unknown. */
};
static_assert(offsetof(Object02cb14c0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cb14c0(const Object02cb14c0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02cb1510()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02cb1660 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02cb1660()
{
    return value_02cb1660;
}

/**
 *
 * The part of the object that auto_return_field_02cb1760 reads.
 *
 */
struct Object02cb1760 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02cb1760; meaning unknown. */
};
static_assert(offsetof(Object02cb1760, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cb1760(const Object02cb1760 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02cb1770 reads.
 *
 */
struct Object02cb1770 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02cb1770; meaning unknown. */
};
static_assert(offsetof(Object02cb1770, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cb1770(const Object02cb1770 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02cb17c0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02cb1910 = 0x18;

extern "C" uint32_t bb_auto_return_constant_02cb1910()
{
    return value_02cb1910;
}

/**
 *
 * The part of the object that auto_return_field_02cb1a10 reads.
 *
 */
struct Object02cb1a10 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02cb1a10; meaning unknown. */
};
static_assert(offsetof(Object02cb1a10, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cb1a10(const Object02cb1a10 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02cb1a20 reads.
 *
 */
struct Object02cb1a20 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02cb1a20; meaning unknown. */
};
static_assert(offsetof(Object02cb1a20, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cb1a20(const Object02cb1a20 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02cb1a70()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02cb1bc0 = 0x20;

extern "C" uint32_t bb_auto_return_constant_02cb1bc0()
{
    return value_02cb1bc0;
}

/**
 *
 * The part of the object that auto_return_field_02cb1cc0 reads.
 *
 */
struct Object02cb1cc0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02cb1cc0; meaning unknown. */
};
static_assert(offsetof(Object02cb1cc0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cb1cc0(const Object02cb1cc0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02cb1cd0 reads.
 *
 */
struct Object02cb1cd0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02cb1cd0; meaning unknown. */
};
static_assert(offsetof(Object02cb1cd0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cb1cd0(const Object02cb1cd0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02cb1d20()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02cb1e70 = 0x20;

extern "C" uint32_t bb_auto_return_constant_02cb1e70()
{
    return value_02cb1e70;
}

/**
 *
 * The part of the object that auto_return_field_02cb2010 reads.
 *
 */
struct Object02cb2010 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02cb2010; meaning unknown. */
};
static_assert(offsetof(Object02cb2010, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cb2010(const Object02cb2010 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02cb2020 reads.
 *
 */
struct Object02cb2020 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02cb2020; meaning unknown. */
};
static_assert(offsetof(Object02cb2020, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cb2020(const Object02cb2020 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02cb2070()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02cb21c0 = 0x30;

extern "C" uint32_t bb_auto_return_constant_02cb21c0()
{
    return value_02cb21c0;
}

/**
 *
 * The part of the object that auto_return_field_02cb2360 reads.
 *
 */
struct Object02cb2360 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02cb2360; meaning unknown. */
};
static_assert(offsetof(Object02cb2360, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cb2360(const Object02cb2360 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02cb2370 reads.
 *
 */
struct Object02cb2370 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02cb2370; meaning unknown. */
};
static_assert(offsetof(Object02cb2370, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cb2370(const Object02cb2370 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02cb23c0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02cb2510 = 0x30;

extern "C" uint32_t bb_auto_return_constant_02cb2510()
{
    return value_02cb2510;
}

/**
 *
 * The part of the object that auto_return_field_02cb2610 reads.
 *
 */
struct Object02cb2610 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02cb2610; meaning unknown. */
};
static_assert(offsetof(Object02cb2610, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cb2610(const Object02cb2610 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02cb2620 reads.
 *
 */
struct Object02cb2620 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02cb2620; meaning unknown. */
};
static_assert(offsetof(Object02cb2620, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cb2620(const Object02cb2620 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02cb2670()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02cb27c0 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02cb27c0()
{
    return value_02cb27c0;
}

/**
 *
 * The part of the object that auto_return_field_02cb28c0 reads.
 *
 */
struct Object02cb28c0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02cb28c0; meaning unknown. */
};
static_assert(offsetof(Object02cb28c0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cb28c0(const Object02cb28c0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02cb28d0 reads.
 *
 */
struct Object02cb28d0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02cb28d0; meaning unknown. */
};
static_assert(offsetof(Object02cb28d0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cb28d0(const Object02cb28d0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02cb2920()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02cb2a70 = 0x18;

extern "C" uint32_t bb_auto_return_constant_02cb2a70()
{
    return value_02cb2a70;
}

/**
 *
 * The part of the object that auto_return_field_02cb2b70 reads.
 *
 */
struct Object02cb2b70 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02cb2b70; meaning unknown. */
};
static_assert(offsetof(Object02cb2b70, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cb2b70(const Object02cb2b70 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02cb2b80 reads.
 *
 */
struct Object02cb2b80 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02cb2b80; meaning unknown. */
};
static_assert(offsetof(Object02cb2b80, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cb2b80(const Object02cb2b80 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02cb2bd0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02cb2d20 = 0x18;

extern "C" uint32_t bb_auto_return_constant_02cb2d20()
{
    return value_02cb2d20;
}

/**
 *
 * The part of the object that auto_return_field_02cb2e20 reads.
 *
 */
struct Object02cb2e20 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02cb2e20; meaning unknown. */
};
static_assert(offsetof(Object02cb2e20, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cb2e20(const Object02cb2e20 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02cb2e30 reads.
 *
 */
struct Object02cb2e30 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02cb2e30; meaning unknown. */
};
static_assert(offsetof(Object02cb2e30, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cb2e30(const Object02cb2e30 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02cb2e80()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02cb2fd0 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02cb2fd0()
{
    return value_02cb2fd0;
}

/**
 *
 * The part of the object that auto_return_field_02cb30d0 reads.
 *
 */
struct Object02cb30d0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02cb30d0; meaning unknown. */
};
static_assert(offsetof(Object02cb30d0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cb30d0(const Object02cb30d0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02cb30e0 reads.
 *
 */
struct Object02cb30e0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02cb30e0; meaning unknown. */
};
static_assert(offsetof(Object02cb30e0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cb30e0(const Object02cb30e0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02cb3130()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02cb3280 = 0x20;

extern "C" uint32_t bb_auto_return_constant_02cb3280()
{
    return value_02cb3280;
}

/**
 *
 * The part of the object that auto_return_field_02cb3380 reads.
 *
 */
struct Object02cb3380 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02cb3380; meaning unknown. */
};
static_assert(offsetof(Object02cb3380, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cb3380(const Object02cb3380 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02cb3390 reads.
 *
 */
struct Object02cb3390 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02cb3390; meaning unknown. */
};
static_assert(offsetof(Object02cb3390, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cb3390(const Object02cb3390 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02cb33e0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02cb3530 = 0x20;

extern "C" uint32_t bb_auto_return_constant_02cb3530()
{
    return value_02cb3530;
}

/**
 *
 * The part of the object that auto_return_field_02cb3630 reads.
 *
 */
struct Object02cb3630 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02cb3630; meaning unknown. */
};
static_assert(offsetof(Object02cb3630, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cb3630(const Object02cb3630 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02cb3640 reads.
 *
 */
struct Object02cb3640 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02cb3640; meaning unknown. */
};
static_assert(offsetof(Object02cb3640, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cb3640(const Object02cb3640 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02cb3690()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02cb37e0 = 0x20;

extern "C" uint32_t bb_auto_return_constant_02cb37e0()
{
    return value_02cb37e0;
}

/**
 *
 * The part of the object that auto_return_field_02cb38e0 reads.
 *
 */
struct Object02cb38e0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02cb38e0; meaning unknown. */
};
static_assert(offsetof(Object02cb38e0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cb38e0(const Object02cb38e0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02cb38f0 reads.
 *
 */
struct Object02cb38f0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02cb38f0; meaning unknown. */
};
static_assert(offsetof(Object02cb38f0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cb38f0(const Object02cb38f0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02cb3940()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02cb3a90 = 0x20;

extern "C" uint32_t bb_auto_return_constant_02cb3a90()
{
    return value_02cb3a90;
}

/**
 *
 * The part of the object that auto_return_field_02cb3b90 reads.
 *
 */
struct Object02cb3b90 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02cb3b90; meaning unknown. */
};
static_assert(offsetof(Object02cb3b90, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cb3b90(const Object02cb3b90 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02cb3ba0 reads.
 *
 */
struct Object02cb3ba0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02cb3ba0; meaning unknown. */
};
static_assert(offsetof(Object02cb3ba0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cb3ba0(const Object02cb3ba0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02cb3bf0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02cb3d40 = 0x20;

extern "C" uint32_t bb_auto_return_constant_02cb3d40()
{
    return value_02cb3d40;
}

/**
 *
 * The part of the object that auto_return_field_02cb3e40 reads.
 *
 */
struct Object02cb3e40 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02cb3e40; meaning unknown. */
};
static_assert(offsetof(Object02cb3e40, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cb3e40(const Object02cb3e40 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02cb3e50 reads.
 *
 */
struct Object02cb3e50 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02cb3e50; meaning unknown. */
};
static_assert(offsetof(Object02cb3e50, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cb3e50(const Object02cb3e50 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02cb3ea0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02cb3ff0 = 0x20;

extern "C" uint32_t bb_auto_return_constant_02cb3ff0()
{
    return value_02cb3ff0;
}

/**
 *
 * The part of the object that auto_return_field_02cb40f0 reads.
 *
 */
struct Object02cb40f0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02cb40f0; meaning unknown. */
};
static_assert(offsetof(Object02cb40f0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cb40f0(const Object02cb40f0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02cb4100 reads.
 *
 */
struct Object02cb4100 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02cb4100; meaning unknown. */
};
static_assert(offsetof(Object02cb4100, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cb4100(const Object02cb4100 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02cb4150()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02cb42a0 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02cb42a0()
{
    return value_02cb42a0;
}

/**
 *
 * The part of the object that auto_return_field_02cb43a0 reads.
 *
 */
struct Object02cb43a0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02cb43a0; meaning unknown. */
};
static_assert(offsetof(Object02cb43a0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cb43a0(const Object02cb43a0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02cb43b0 reads.
 *
 */
struct Object02cb43b0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02cb43b0; meaning unknown. */
};
static_assert(offsetof(Object02cb43b0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cb43b0(const Object02cb43b0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02cb4400()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02cb4550 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02cb4550()
{
    return value_02cb4550;
}

/**
 *
 * The part of the object that auto_return_field_02cb4650 reads.
 *
 */
struct Object02cb4650 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02cb4650; meaning unknown. */
};
static_assert(offsetof(Object02cb4650, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cb4650(const Object02cb4650 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02cb4660 reads.
 *
 */
struct Object02cb4660 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02cb4660; meaning unknown. */
};
static_assert(offsetof(Object02cb4660, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cb4660(const Object02cb4660 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02cb46b0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02cb4800 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02cb4800()
{
    return value_02cb4800;
}

/**
 *
 * The part of the object that auto_return_field_02cb4900 reads.
 *
 */
struct Object02cb4900 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02cb4900; meaning unknown. */
};
static_assert(offsetof(Object02cb4900, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cb4900(const Object02cb4900 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02cb4910 reads.
 *
 */
struct Object02cb4910 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02cb4910; meaning unknown. */
};
static_assert(offsetof(Object02cb4910, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cb4910(const Object02cb4910 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02cb4960()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02cb4ab0 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02cb4ab0()
{
    return value_02cb4ab0;
}

/**
 *
 * The part of the object that auto_return_field_02cb4bb0 reads.
 *
 */
struct Object02cb4bb0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02cb4bb0; meaning unknown. */
};
static_assert(offsetof(Object02cb4bb0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cb4bb0(const Object02cb4bb0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02cb4bc0 reads.
 *
 */
struct Object02cb4bc0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02cb4bc0; meaning unknown. */
};
static_assert(offsetof(Object02cb4bc0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cb4bc0(const Object02cb4bc0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02cb4c10()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02cb4d60 = 0x18;

extern "C" uint32_t bb_auto_return_constant_02cb4d60()
{
    return value_02cb4d60;
}

/**
 *
 * The part of the object that auto_return_field_02cb4f00 reads.
 *
 */
struct Object02cb4f00 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02cb4f00; meaning unknown. */
};
static_assert(offsetof(Object02cb4f00, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cb4f00(const Object02cb4f00 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02cb4f10 reads.
 *
 */
struct Object02cb4f10 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02cb4f10; meaning unknown. */
};
static_assert(offsetof(Object02cb4f10, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cb4f10(const Object02cb4f10 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02cb4f60()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02cb50b0 = 0x30;

extern "C" uint32_t bb_auto_return_constant_02cb50b0()
{
    return value_02cb50b0;
}

/**
 *
 * The part of the object that auto_return_field_02cb5250 reads.
 *
 */
struct Object02cb5250 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02cb5250; meaning unknown. */
};
static_assert(offsetof(Object02cb5250, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cb5250(const Object02cb5250 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02cb5260 reads.
 *
 */
struct Object02cb5260 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02cb5260; meaning unknown. */
};
static_assert(offsetof(Object02cb5260, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cb5260(const Object02cb5260 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02cb52b0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02cb5400 = 0x30;

extern "C" uint32_t bb_auto_return_constant_02cb5400()
{
    return value_02cb5400;
}

/**
 *
 * The part of the object that auto_return_field_02cb5500 reads.
 *
 */
struct Object02cb5500 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02cb5500; meaning unknown. */
};
static_assert(offsetof(Object02cb5500, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cb5500(const Object02cb5500 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02cb5510 reads.
 *
 */
struct Object02cb5510 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02cb5510; meaning unknown. */
};
static_assert(offsetof(Object02cb5510, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cb5510(const Object02cb5510 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02cb5560()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02cb56b0 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02cb56b0()
{
    return value_02cb56b0;
}

/**
 *
 * The part of the object that auto_return_field_02cb57b0 reads.
 *
 */
struct Object02cb57b0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02cb57b0; meaning unknown. */
};
static_assert(offsetof(Object02cb57b0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cb57b0(const Object02cb57b0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02cb57c0 reads.
 *
 */
struct Object02cb57c0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02cb57c0; meaning unknown. */
};
static_assert(offsetof(Object02cb57c0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cb57c0(const Object02cb57c0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02cb5810()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02cb5960 = 0x18;

extern "C" uint32_t bb_auto_return_constant_02cb5960()
{
    return value_02cb5960;
}

/**
 *
 * The part of the object that auto_return_field_02cb5a60 reads.
 *
 */
struct Object02cb5a60 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02cb5a60; meaning unknown. */
};
static_assert(offsetof(Object02cb5a60, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cb5a60(const Object02cb5a60 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02cb5a70 reads.
 *
 */
struct Object02cb5a70 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02cb5a70; meaning unknown. */
};
static_assert(offsetof(Object02cb5a70, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cb5a70(const Object02cb5a70 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02cb5ac0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02cb5c10 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02cb5c10()
{
    return value_02cb5c10;
}

/**
 *
 * The part of the object that auto_return_field_02cb5d10 reads.
 *
 */
struct Object02cb5d10 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02cb5d10; meaning unknown. */
};
static_assert(offsetof(Object02cb5d10, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cb5d10(const Object02cb5d10 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02cb5d20 reads.
 *
 */
struct Object02cb5d20 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02cb5d20; meaning unknown. */
};
static_assert(offsetof(Object02cb5d20, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cb5d20(const Object02cb5d20 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02cb5d70()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02cb5ec0 = 0x20;

extern "C" uint32_t bb_auto_return_constant_02cb5ec0()
{
    return value_02cb5ec0;
}

/**
 *
 * The part of the object that auto_return_field_02cb5fc0 reads.
 *
 */
struct Object02cb5fc0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02cb5fc0; meaning unknown. */
};
static_assert(offsetof(Object02cb5fc0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cb5fc0(const Object02cb5fc0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02cb5fd0 reads.
 *
 */
struct Object02cb5fd0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02cb5fd0; meaning unknown. */
};
static_assert(offsetof(Object02cb5fd0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cb5fd0(const Object02cb5fd0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02cb6020()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02cb6170 = 0x20;

extern "C" uint32_t bb_auto_return_constant_02cb6170()
{
    return value_02cb6170;
}

/**
 *
 * The part of the object that auto_return_field_02cb6270 reads.
 *
 */
struct Object02cb6270 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02cb6270; meaning unknown. */
};
static_assert(offsetof(Object02cb6270, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cb6270(const Object02cb6270 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02cb6280 reads.
 *
 */
struct Object02cb6280 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02cb6280; meaning unknown. */
};
static_assert(offsetof(Object02cb6280, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cb6280(const Object02cb6280 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02cb62d0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02cb6420 = 0x20;

extern "C" uint32_t bb_auto_return_constant_02cb6420()
{
    return value_02cb6420;
}

/**
 *
 * The part of the object that auto_return_field_02cb6520 reads.
 *
 */
struct Object02cb6520 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02cb6520; meaning unknown. */
};
static_assert(offsetof(Object02cb6520, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cb6520(const Object02cb6520 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02cb6530 reads.
 *
 */
struct Object02cb6530 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02cb6530; meaning unknown. */
};
static_assert(offsetof(Object02cb6530, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cb6530(const Object02cb6530 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02cb6580()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02cb66d0 = 0x20;

extern "C" uint32_t bb_auto_return_constant_02cb66d0()
{
    return value_02cb66d0;
}

/**
 *
 * The part of the object that auto_return_field_02cb67d0 reads.
 *
 */
struct Object02cb67d0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02cb67d0; meaning unknown. */
};
static_assert(offsetof(Object02cb67d0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cb67d0(const Object02cb67d0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02cb67e0 reads.
 *
 */
struct Object02cb67e0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02cb67e0; meaning unknown. */
};
static_assert(offsetof(Object02cb67e0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cb67e0(const Object02cb67e0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02cb6830()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02cb6980 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02cb6980()
{
    return value_02cb6980;
}

/**
 *
 * The part of the object that auto_return_field_02cb6a80 reads.
 *
 */
struct Object02cb6a80 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02cb6a80; meaning unknown. */
};
static_assert(offsetof(Object02cb6a80, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cb6a80(const Object02cb6a80 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02cb6a90 reads.
 *
 */
struct Object02cb6a90 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02cb6a90; meaning unknown. */
};
static_assert(offsetof(Object02cb6a90, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cb6a90(const Object02cb6a90 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02cb6ae0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02cb6c30 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02cb6c30()
{
    return value_02cb6c30;
}

/**
 *
 * The part of the object that auto_return_field_02cb6d30 reads.
 *
 */
struct Object02cb6d30 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02cb6d30; meaning unknown. */
};
static_assert(offsetof(Object02cb6d30, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cb6d30(const Object02cb6d30 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02cb6d40 reads.
 *
 */
struct Object02cb6d40 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02cb6d40; meaning unknown. */
};
static_assert(offsetof(Object02cb6d40, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cb6d40(const Object02cb6d40 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02cb6d90()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02cb6ee0 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02cb6ee0()
{
    return value_02cb6ee0;
}

/**
 *
 * The part of the object that auto_return_field_02cba230 reads.
 *
 */
struct Object02cba230 {
    uint32_t value_0x0000; /**< Read by auto_return_field_02cba230; meaning unknown. */
};
static_assert(offsetof(Object02cba230, value_0x0000) == 0x0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02cba230(const Object02cba230 *self)
{
    return self->value_0x0000;
}

/**
 *
 * The part of the object that auto_return_member_address_02cba240 reads.
 *
 */
struct Object02cba240 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_02cba240; meaning unknown. */
};
static_assert(offsetof(Object02cba240, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02cba240(Object02cba240 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02cba7e0 = 0x2;

extern "C" uint32_t bb_auto_return_constant_02cba7e0()
{
    return value_02cba7e0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02cbad20 = 0x1;

extern "C" uint32_t bb_auto_return_constant_02cbad20()
{
    return value_02cbad20;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02cbad30()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_02cbb9b0 reads.
 *
 */
struct Object02cbb9b0 {
    uint8_t unknown_0x0000[0x30];
    uint8_t member_0x0030; /**< Read by auto_return_member_address_02cbb9b0; meaning unknown. */
};
static_assert(offsetof(Object02cbb9b0, member_0x0030) == 0x30);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02cbb9b0(Object02cbb9b0 *self)
{
    return &self->member_0x0030;
}

/**
 *
 * The part of the object that auto_return_member_address_02cbcf40 reads.
 *
 */
struct Object02cbcf40 {
    uint8_t unknown_0x0000[0x10];
    uint8_t member_0x0010; /**< Read by auto_return_member_address_02cbcf40; meaning unknown. */
};
static_assert(offsetof(Object02cbcf40, member_0x0010) == 0x10);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02cbcf40(Object02cbcf40 *self)
{
    return &self->member_0x0010;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02cbd3b0 = 0x26;

extern "C" uint32_t bb_auto_return_constant_02cbd3b0()
{
    return value_02cbd3b0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02cbd3c0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02cbd3c0()
{
    return value_02cbd3c0;
}
