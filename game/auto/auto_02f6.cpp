// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f60020 = 0x2;

extern "C" uint32_t bb_auto_return_constant_02f60020()
{
    return value_02f60020;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f606c0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_02f60810 reads.
 *
 */
struct Object02f60810 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02f60810; meaning unknown. */
};
static_assert(offsetof(Object02f60810, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f60810(const Object02f60810 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02f60820 reads.
 *
 */
struct Object02f60820 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02f60820; meaning unknown. */
};
static_assert(offsetof(Object02f60820, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f60820(const Object02f60820 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f60870()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f609c0 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02f609c0()
{
    return value_02f609c0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f60a70 = 0x2;

extern "C" uint32_t bb_auto_return_constant_02f60a70()
{
    return value_02f60a70;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f60e90 = 0x2;

extern "C" uint32_t bb_auto_return_constant_02f60e90()
{
    return value_02f60e90;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f61530()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_02f61680 reads.
 *
 */
struct Object02f61680 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02f61680; meaning unknown. */
};
static_assert(offsetof(Object02f61680, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f61680(const Object02f61680 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02f61690 reads.
 *
 */
struct Object02f61690 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02f61690; meaning unknown. */
};
static_assert(offsetof(Object02f61690, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f61690(const Object02f61690 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f616e0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f61830 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02f61830()
{
    return value_02f61830;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f618e0 = 0x2;

extern "C" uint32_t bb_auto_return_constant_02f618e0()
{
    return value_02f618e0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f61d00 = 0x2;

extern "C" uint32_t bb_auto_return_constant_02f61d00()
{
    return value_02f61d00;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f623a0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_02f624f0 reads.
 *
 */
struct Object02f624f0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02f624f0; meaning unknown. */
};
static_assert(offsetof(Object02f624f0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f624f0(const Object02f624f0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02f62500 reads.
 *
 */
struct Object02f62500 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02f62500; meaning unknown. */
};
static_assert(offsetof(Object02f62500, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f62500(const Object02f62500 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f62550()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f626a0 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02f626a0()
{
    return value_02f626a0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f62750 = 0x2;

extern "C" uint32_t bb_auto_return_constant_02f62750()
{
    return value_02f62750;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f62b70 = 0x2;

extern "C" uint32_t bb_auto_return_constant_02f62b70()
{
    return value_02f62b70;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f63210()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_02f63360 reads.
 *
 */
struct Object02f63360 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02f63360; meaning unknown. */
};
static_assert(offsetof(Object02f63360, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f63360(const Object02f63360 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02f63370 reads.
 *
 */
struct Object02f63370 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02f63370; meaning unknown. */
};
static_assert(offsetof(Object02f63370, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f63370(const Object02f63370 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f633c0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f63510 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02f63510()
{
    return value_02f63510;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f635c0 = 0x2;

extern "C" uint32_t bb_auto_return_constant_02f635c0()
{
    return value_02f635c0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f639e0 = 0x2;

extern "C" uint32_t bb_auto_return_constant_02f639e0()
{
    return value_02f639e0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f64080()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_02f641d0 reads.
 *
 */
struct Object02f641d0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02f641d0; meaning unknown. */
};
static_assert(offsetof(Object02f641d0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f641d0(const Object02f641d0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02f641e0 reads.
 *
 */
struct Object02f641e0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02f641e0; meaning unknown. */
};
static_assert(offsetof(Object02f641e0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f641e0(const Object02f641e0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f64230()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f64380 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02f64380()
{
    return value_02f64380;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02f653c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02f658e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02f658f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02f65930()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02f65950 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02f65950()
{
    return value_02f65950;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f65aa0 = 0x2;

extern "C" uint32_t bb_auto_return_constant_02f65aa0()
{
    return value_02f65aa0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f65ec0 = 0x2;

extern "C" uint32_t bb_auto_return_constant_02f65ec0()
{
    return value_02f65ec0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f66560()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_02f666b0 reads.
 *
 */
struct Object02f666b0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02f666b0; meaning unknown. */
};
static_assert(offsetof(Object02f666b0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f666b0(const Object02f666b0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02f666c0 reads.
 *
 */
struct Object02f666c0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02f666c0; meaning unknown. */
};
static_assert(offsetof(Object02f666c0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f666c0(const Object02f666c0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f66710()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f66860 = 0x18;

extern "C" uint32_t bb_auto_return_constant_02f66860()
{
    return value_02f66860;
}

/**
 *
 * The part of the object that auto_return_field_02f67780 reads.
 *
 */
struct Object02f67780 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02f67780; meaning unknown. */
};
static_assert(offsetof(Object02f67780, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f67780(const Object02f67780 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02f67790 reads.
 *
 */
struct Object02f67790 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02f67790; meaning unknown. */
};
static_assert(offsetof(Object02f67790, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f67790(const Object02f67790 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f677e0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f67930 = 0x30;

extern "C" uint32_t bb_auto_return_constant_02f67930()
{
    return value_02f67930;
}

/**
 *
 * The part of the object that auto_return_field_02f67a30 reads.
 *
 */
struct Object02f67a30 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02f67a30; meaning unknown. */
};
static_assert(offsetof(Object02f67a30, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f67a30(const Object02f67a30 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02f67a40 reads.
 *
 */
struct Object02f67a40 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02f67a40; meaning unknown. */
};
static_assert(offsetof(Object02f67a40, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f67a40(const Object02f67a40 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f67a90()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f67be0 = 0x30;

extern "C" uint32_t bb_auto_return_constant_02f67be0()
{
    return value_02f67be0;
}

/**
 *
 * The part of the object that auto_return_field_02f67ce0 reads.
 *
 */
struct Object02f67ce0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02f67ce0; meaning unknown. */
};
static_assert(offsetof(Object02f67ce0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f67ce0(const Object02f67ce0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02f67cf0 reads.
 *
 */
struct Object02f67cf0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02f67cf0; meaning unknown. */
};
static_assert(offsetof(Object02f67cf0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f67cf0(const Object02f67cf0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f67d40()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f67e90 = 0x30;

extern "C" uint32_t bb_auto_return_constant_02f67e90()
{
    return value_02f67e90;
}

/**
 *
 * The part of the object that auto_return_field_02f67f90 reads.
 *
 */
struct Object02f67f90 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02f67f90; meaning unknown. */
};
static_assert(offsetof(Object02f67f90, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f67f90(const Object02f67f90 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02f67fa0 reads.
 *
 */
struct Object02f67fa0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02f67fa0; meaning unknown. */
};
static_assert(offsetof(Object02f67fa0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f67fa0(const Object02f67fa0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f67ff0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f68140 = 0x30;

extern "C" uint32_t bb_auto_return_constant_02f68140()
{
    return value_02f68140;
}

/**
 *
 * The part of the object that auto_return_field_02f68240 reads.
 *
 */
struct Object02f68240 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02f68240; meaning unknown. */
};
static_assert(offsetof(Object02f68240, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f68240(const Object02f68240 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02f68250 reads.
 *
 */
struct Object02f68250 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02f68250; meaning unknown. */
};
static_assert(offsetof(Object02f68250, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f68250(const Object02f68250 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f682a0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f683f0 = 0x30;

extern "C" uint32_t bb_auto_return_constant_02f683f0()
{
    return value_02f683f0;
}

/**
 *
 * The part of the object that auto_return_field_02f684f0 reads.
 *
 */
struct Object02f684f0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02f684f0; meaning unknown. */
};
static_assert(offsetof(Object02f684f0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f684f0(const Object02f684f0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02f68500 reads.
 *
 */
struct Object02f68500 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02f68500; meaning unknown. */
};
static_assert(offsetof(Object02f68500, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f68500(const Object02f68500 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f68550()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f686a0 = 0x30;

extern "C" uint32_t bb_auto_return_constant_02f686a0()
{
    return value_02f686a0;
}

/**
 *
 * The part of the object that auto_return_field_02f687a0 reads.
 *
 */
struct Object02f687a0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02f687a0; meaning unknown. */
};
static_assert(offsetof(Object02f687a0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f687a0(const Object02f687a0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02f687b0 reads.
 *
 */
struct Object02f687b0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02f687b0; meaning unknown. */
};
static_assert(offsetof(Object02f687b0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f687b0(const Object02f687b0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f68800()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f68950 = 0x30;

extern "C" uint32_t bb_auto_return_constant_02f68950()
{
    return value_02f68950;
}

/**
 *
 * The part of the object that auto_return_field_02f68a50 reads.
 *
 */
struct Object02f68a50 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02f68a50; meaning unknown. */
};
static_assert(offsetof(Object02f68a50, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f68a50(const Object02f68a50 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02f68a60 reads.
 *
 */
struct Object02f68a60 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02f68a60; meaning unknown. */
};
static_assert(offsetof(Object02f68a60, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f68a60(const Object02f68a60 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f68ab0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f68c00 = 0x30;

extern "C" uint32_t bb_auto_return_constant_02f68c00()
{
    return value_02f68c00;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02f6e730()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02f6eec0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02f6eed0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f6f260 = 0x2;

extern "C" uint32_t bb_auto_return_constant_02f6f260()
{
    return value_02f6f260;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f6f680 = 0x2;

extern "C" uint32_t bb_auto_return_constant_02f6f680()
{
    return value_02f6f680;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f6fd30()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_02f6fe80 reads.
 *
 */
struct Object02f6fe80 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02f6fe80; meaning unknown. */
};
static_assert(offsetof(Object02f6fe80, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f6fe80(const Object02f6fe80 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02f6fe90 reads.
 *
 */
struct Object02f6fe90 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02f6fe90; meaning unknown. */
};
static_assert(offsetof(Object02f6fe90, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f6fe90(const Object02f6fe90 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f6fee0()
{
    return 0;
}
