// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_020c06c0 reads.
 *
 */
struct Object020c06c0 {
    uint8_t unknown_0x0000[0x10];
    uint64_t value_0x0010; /**< Read by auto_return_field_020c06c0; meaning unknown. */
};
static_assert(offsetof(Object020c06c0, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_020c06c0(const Object020c06c0 *self)
{
    return self->value_0x0010;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_020c08f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_020c0a40()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_020c0e00()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_020c0e60()
{
}

/**
 *
 * The part of the object that auto_return_field_020c0ef0 reads.
 *
 */
struct Object020c0ef0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_020c0ef0; meaning unknown. */
};
static_assert(offsetof(Object020c0ef0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_020c0ef0(const Object020c0ef0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_020c0f00 reads.
 *
 */
struct Object020c0f00 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_020c0f00; meaning unknown. */
};
static_assert(offsetof(Object020c0f00, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_020c0f00(const Object020c0f00 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_020c0f50()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_020c11d0 = 0xc0;

extern "C" uint32_t bb_auto_return_constant_020c11d0()
{
    return value_020c11d0;
}

/**
 *
 * The part of the object that auto_return_field_020c1e00 reads.
 *
 */
struct Object020c1e00 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_020c1e00; meaning unknown. */
};
static_assert(offsetof(Object020c1e00, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_020c1e00(const Object020c1e00 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_020c1e10 reads.
 *
 */
struct Object020c1e10 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_020c1e10; meaning unknown. */
};
static_assert(offsetof(Object020c1e10, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_020c1e10(const Object020c1e10 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_020c1e60()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_020c20e0 = 0x40;

extern "C" uint32_t bb_auto_return_constant_020c20e0()
{
    return value_020c20e0;
}

/**
 *
 * The part of the object that auto_return_field_020c30d0 reads.
 *
 */
struct Object020c30d0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_020c30d0; meaning unknown. */
};
static_assert(offsetof(Object020c30d0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_020c30d0(const Object020c30d0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_020c30e0 reads.
 *
 */
struct Object020c30e0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_020c30e0; meaning unknown. */
};
static_assert(offsetof(Object020c30e0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_020c30e0(const Object020c30e0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_020c3130()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_020c33b0 = 0x40;

extern "C" uint32_t bb_auto_return_constant_020c33b0()
{
    return value_020c33b0;
}

/**
 *
 * The part of the object that auto_return_field_020c4410 reads.
 *
 */
struct Object020c4410 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_020c4410; meaning unknown. */
};
static_assert(offsetof(Object020c4410, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_020c4410(const Object020c4410 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_020c4420 reads.
 *
 */
struct Object020c4420 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_020c4420; meaning unknown. */
};
static_assert(offsetof(Object020c4420, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_020c4420(const Object020c4420 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_020c4470()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_020c46f0 = 0x30;

extern "C" uint32_t bb_auto_return_constant_020c46f0()
{
    return value_020c46f0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_020c56f0()
{
}

/**
 *
 * The part of the object that auto_return_field_020c5c30 reads.
 *
 */
struct Object020c5c30 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_020c5c30; meaning unknown. */
};
static_assert(offsetof(Object020c5c30, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_020c5c30(const Object020c5c30 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_020c5c40 reads.
 *
 */
struct Object020c5c40 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_020c5c40; meaning unknown. */
};
static_assert(offsetof(Object020c5c40, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_020c5c40(const Object020c5c40 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_020c5c90()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_020c5f10 = 0x40;

extern "C" uint32_t bb_auto_return_constant_020c5f10()
{
    return value_020c5f10;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_020ca550()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_020ca7d0()
{
}

/**
 *
 * The part of the object that auto_return_field_020cc5a0 reads.
 *
 */
struct Object020cc5a0 {
    uint8_t unknown_0x0000[0x58];
    uint8_t value_0x0058; /**< Read by auto_return_field_020cc5a0; meaning unknown. */
};
static_assert(offsetof(Object020cc5a0, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_020cc5a0(const Object020cc5a0 *self)
{
    return self->value_0x0058;
}

/**
 *
 * The part of the object that auto_return_field_020cd160 reads.
 *
 */
struct Object020cd160 {
    uint8_t unknown_0x0000[0x50];
    uint32_t value_0x0050; /**< Read by auto_return_field_020cd160; meaning unknown. */
};
static_assert(offsetof(Object020cd160, value_0x0050) == 0x50);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_020cd160(const Object020cd160 *self)
{
    return self->value_0x0050;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_020cd230()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_020cd240()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_020cd2f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_020cd350()
{
}

/**
 *
 * The part of the object that auto_return_field_020cd5f0 reads.
 *
 */
struct Object020cd5f0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_020cd5f0; meaning unknown. */
};
static_assert(offsetof(Object020cd5f0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_020cd5f0(const Object020cd5f0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_020cd600 reads.
 *
 */
struct Object020cd600 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_020cd600; meaning unknown. */
};
static_assert(offsetof(Object020cd600, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_020cd600(const Object020cd600 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_020cd650()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_020cd8d0 = 0x158;

extern "C" uint32_t bb_auto_return_constant_020cd8d0()
{
    return value_020cd8d0;
}

/**
 *
 * The part of the object that auto_return_field_020cd910 reads.
 *
 */
struct Object020cd910 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_020cd910; meaning unknown. */
};
static_assert(offsetof(Object020cd910, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_020cd910(const Object020cd910 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_020cd920 reads.
 *
 */
struct Object020cd920 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_020cd920; meaning unknown. */
};
static_assert(offsetof(Object020cd920, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_020cd920(const Object020cd920 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_020cd970()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_020cdbf0 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_020cdbf0()
{
    return value_020cdbf0;
}

/**
 *
 * The part of the object that auto_return_field_020cdc30 reads.
 *
 */
struct Object020cdc30 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_020cdc30; meaning unknown. */
};
static_assert(offsetof(Object020cdc30, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_020cdc30(const Object020cdc30 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_020cdc40 reads.
 *
 */
struct Object020cdc40 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_020cdc40; meaning unknown. */
};
static_assert(offsetof(Object020cdc40, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_020cdc40(const Object020cdc40 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_020cdc90()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_020cdf10 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_020cdf10()
{
    return value_020cdf10;
}

/**
 *
 * The part of the object that auto_return_field_020cdf50 reads.
 *
 */
struct Object020cdf50 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_020cdf50; meaning unknown. */
};
static_assert(offsetof(Object020cdf50, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_020cdf50(const Object020cdf50 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_020cdf60 reads.
 *
 */
struct Object020cdf60 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_020cdf60; meaning unknown. */
};
static_assert(offsetof(Object020cdf60, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_020cdf60(const Object020cdf60 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_020cdfb0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_020ce230 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_020ce230()
{
    return value_020ce230;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_020ce790()
{
}

/**
 *
 * The part of the object that auto_return_field_020ce7c0 reads.
 *
 */
struct Object020ce7c0 {
    uint32_t value_0x0000; /**< Read by auto_return_field_020ce7c0; meaning unknown. */
};
static_assert(offsetof(Object020ce7c0, value_0x0000) == 0x0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_020ce7c0(const Object020ce7c0 *self)
{
    return self->value_0x0000;
}

/**
 *
 * The part of the object that auto_return_field_020ce7d0 reads.
 *
 */
struct Object020ce7d0 {
    uint8_t unknown_0x0000[0x4];
    uint32_t value_0x0004; /**< Read by auto_return_field_020ce7d0; meaning unknown. */
};
static_assert(offsetof(Object020ce7d0, value_0x0004) == 0x4);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_020ce7d0(const Object020ce7d0 *self)
{
    return self->value_0x0004;
}

/**
 *
 * The part of the object that auto_return_field_020ce7e0 reads.
 *
 */
struct Object020ce7e0 {
    uint8_t unknown_0x0000[0x8];
    uint32_t value_0x0008; /**< Read by auto_return_field_020ce7e0; meaning unknown. */
};
static_assert(offsetof(Object020ce7e0, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_020ce7e0(const Object020ce7e0 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_020ce7f0 reads.
 *
 */
struct Object020ce7f0 {
    uint8_t unknown_0x0000[0xc];
    uint32_t value_0x000c; /**< Read by auto_return_field_020ce7f0; meaning unknown. */
};
static_assert(offsetof(Object020ce7f0, value_0x000c) == 0xc);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_020ce7f0(const Object020ce7f0 *self)
{
    return self->value_0x000c;
}

/**
 *
 * The part of the object that auto_return_field_020ce800 reads.
 *
 */
struct Object020ce800 {
    uint8_t unknown_0x0000[0x10];
    uint32_t value_0x0010; /**< Read by auto_return_field_020ce800; meaning unknown. */
};
static_assert(offsetof(Object020ce800, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_020ce800(const Object020ce800 *self)
{
    return self->value_0x0010;
}

/**
 *
 * The part of the object that auto_return_field_020ce810 reads.
 *
 */
struct Object020ce810 {
    uint8_t unknown_0x0000[0x14];
    uint32_t value_0x0014; /**< Read by auto_return_field_020ce810; meaning unknown. */
};
static_assert(offsetof(Object020ce810, value_0x0014) == 0x14);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_020ce810(const Object020ce810 *self)
{
    return self->value_0x0014;
}

/**
 *
 * The part of the object that auto_return_field_020ce820 reads.
 *
 */
struct Object020ce820 {
    uint8_t unknown_0x0000[0x18];
    uint32_t value_0x0018; /**< Read by auto_return_field_020ce820; meaning unknown. */
};
static_assert(offsetof(Object020ce820, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_020ce820(const Object020ce820 *self)
{
    return self->value_0x0018;
}

/**
 *
 * The part of the object that auto_return_field_020ce830 reads.
 *
 */
struct Object020ce830 {
    uint8_t unknown_0x0000[0x1c];
    uint32_t value_0x001c; /**< Read by auto_return_field_020ce830; meaning unknown. */
};
static_assert(offsetof(Object020ce830, value_0x001c) == 0x1c);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_020ce830(const Object020ce830 *self)
{
    return self->value_0x001c;
}

/**
 *
 * The part of the object that auto_return_field_020cf020 reads.
 *
 */
struct Object020cf020 {
    uint8_t unknown_0x0000[0x1c];
    uint32_t value_0x001c; /**< Read by auto_return_field_020cf020; meaning unknown. */
};
static_assert(offsetof(Object020cf020, value_0x001c) == 0x1c);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_020cf020(const Object020cf020 *self)
{
    return self->value_0x001c;
}
