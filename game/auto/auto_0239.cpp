// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_02390000 reads.
 *
 */
struct Object02390000 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02390000; meaning unknown. */
};
static_assert(offsetof(Object02390000, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02390000(const Object02390000 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02390010 reads.
 *
 */
struct Object02390010 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02390010; meaning unknown. */
};
static_assert(offsetof(Object02390010, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02390010(const Object02390010 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02390060()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_023902e0 = 0x70;

extern "C" uint32_t bb_auto_return_constant_023902e0()
{
    return value_023902e0;
}

/**
 *
 * The part of the object that auto_return_field_02392e80 reads.
 *
 */
struct Object02392e80 {
    uint8_t unknown_0x0000[0x58];
    uint32_t value_0x0058; /**< Read by auto_return_field_02392e80; meaning unknown. */
};
static_assert(offsetof(Object02392e80, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02392e80(const Object02392e80 *self)
{
    return self->value_0x0058;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02392f50()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02392f60()
{
}

/**
 *
 * The part of the object that auto_return_field_023931d0 reads.
 *
 */
struct Object023931d0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_023931d0; meaning unknown. */
};
static_assert(offsetof(Object023931d0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023931d0(const Object023931d0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_023931e0 reads.
 *
 */
struct Object023931e0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_023931e0; meaning unknown. */
};
static_assert(offsetof(Object023931e0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023931e0(const Object023931e0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02393230()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_023934b0 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_023934b0()
{
    return value_023934b0;
}

/**
 *
 * The part of the object that auto_return_field_023934f0 reads.
 *
 */
struct Object023934f0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_023934f0; meaning unknown. */
};
static_assert(offsetof(Object023934f0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023934f0(const Object023934f0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02393500 reads.
 *
 */
struct Object02393500 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02393500; meaning unknown. */
};
static_assert(offsetof(Object02393500, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02393500(const Object02393500 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02393550()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_023937d0 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_023937d0()
{
    return value_023937d0;
}

/**
 *
 * The part of the object that auto_return_field_02393810 reads.
 *
 */
struct Object02393810 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02393810; meaning unknown. */
};
static_assert(offsetof(Object02393810, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02393810(const Object02393810 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02393820 reads.
 *
 */
struct Object02393820 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02393820; meaning unknown. */
};
static_assert(offsetof(Object02393820, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02393820(const Object02393820 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02393870()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02393af0 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_02393af0()
{
    return value_02393af0;
}

/**
 *
 * The part of the object that auto_return_field_02393b30 reads.
 *
 */
struct Object02393b30 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02393b30; meaning unknown. */
};
static_assert(offsetof(Object02393b30, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02393b30(const Object02393b30 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02393b40 reads.
 *
 */
struct Object02393b40 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02393b40; meaning unknown. */
};
static_assert(offsetof(Object02393b40, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02393b40(const Object02393b40 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02393b90()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02393e10 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_02393e10()
{
    return value_02393e10;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_023960f0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02396110 = 0x1;

extern "C" uint32_t bb_auto_return_constant_02396110()
{
    return value_02396110;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02396720()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02396740 = 0x1;

extern "C" uint32_t bb_auto_return_constant_02396740()
{
    return value_02396740;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02396df0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02396e10 = 0x2;

extern "C" uint32_t bb_auto_return_constant_02396e10()
{
    return value_02396e10;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02397350()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02397370()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_023974c0 reads.
 *
 */
struct Object023974c0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_023974c0; meaning unknown. */
};
static_assert(offsetof(Object023974c0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023974c0(const Object023974c0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_023974d0 reads.
 *
 */
struct Object023974d0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_023974d0; meaning unknown. */
};
static_assert(offsetof(Object023974d0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023974d0(const Object023974d0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02397520()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_023977a0 = 0x8;

extern "C" uint32_t bb_auto_return_constant_023977a0()
{
    return value_023977a0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02398ad0()
{
}

/**
 *
 * The part of the object that auto_return_field_0239a3a0 reads.
 *
 */
struct Object0239a3a0 {
    uint8_t unknown_0x0000[0x58];
    uint32_t value_0x0058; /**< Read by auto_return_field_0239a3a0; meaning unknown. */
};
static_assert(offsetof(Object0239a3a0, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_0239a3a0(const Object0239a3a0 *self)
{
    return self->value_0x0058;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0239a470()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0239a480()
{
}

/**
 *
 * The part of the object that auto_return_field_0239a720 reads.
 *
 */
struct Object0239a720 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0239a720; meaning unknown. */
};
static_assert(offsetof(Object0239a720, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0239a720(const Object0239a720 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0239a730 reads.
 *
 */
struct Object0239a730 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0239a730; meaning unknown. */
};
static_assert(offsetof(Object0239a730, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0239a730(const Object0239a730 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0239a780()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0239aa00 = 0xe8;

extern "C" uint32_t bb_auto_return_constant_0239aa00()
{
    return value_0239aa00;
}

/**
 *
 * The part of the object that auto_return_field_0239aa40 reads.
 *
 */
struct Object0239aa40 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0239aa40; meaning unknown. */
};
static_assert(offsetof(Object0239aa40, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0239aa40(const Object0239aa40 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0239aa50 reads.
 *
 */
struct Object0239aa50 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0239aa50; meaning unknown. */
};
static_assert(offsetof(Object0239aa50, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0239aa50(const Object0239aa50 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0239aaa0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0239ad20 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_0239ad20()
{
    return value_0239ad20;
}

/**
 *
 * The part of the object that auto_return_field_0239ad60 reads.
 *
 */
struct Object0239ad60 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0239ad60; meaning unknown. */
};
static_assert(offsetof(Object0239ad60, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0239ad60(const Object0239ad60 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0239ad70 reads.
 *
 */
struct Object0239ad70 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0239ad70; meaning unknown. */
};
static_assert(offsetof(Object0239ad70, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0239ad70(const Object0239ad70 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0239adc0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0239b040 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_0239b040()
{
    return value_0239b040;
}

/**
 *
 * The part of the object that auto_return_field_0239b080 reads.
 *
 */
struct Object0239b080 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0239b080; meaning unknown. */
};
static_assert(offsetof(Object0239b080, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0239b080(const Object0239b080 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0239b090 reads.
 *
 */
struct Object0239b090 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0239b090; meaning unknown. */
};
static_assert(offsetof(Object0239b090, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0239b090(const Object0239b090 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0239b0e0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0239b360 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_0239b360()
{
    return value_0239b360;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0239d420()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0239d430()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0239d480()
{
}

/**
 *
 * The part of the object that auto_return_field_0239f4c0 reads.
 *
 */
struct Object0239f4c0 {
    uint8_t unknown_0x0000[0x58];
    uint32_t value_0x0058; /**< Read by auto_return_field_0239f4c0; meaning unknown. */
};
static_assert(offsetof(Object0239f4c0, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_0239f4c0(const Object0239f4c0 *self)
{
    return self->value_0x0058;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0239f590()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0239f5a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0239f5b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0239f610()
{
}

/**
 *
 * The part of the object that auto_return_field_0239f8d0 reads.
 *
 */
struct Object0239f8d0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0239f8d0; meaning unknown. */
};
static_assert(offsetof(Object0239f8d0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0239f8d0(const Object0239f8d0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0239f8e0 reads.
 *
 */
struct Object0239f8e0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0239f8e0; meaning unknown. */
};
static_assert(offsetof(Object0239f8e0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0239f8e0(const Object0239f8e0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0239f930()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0239fbb0 = 0x180;

extern "C" uint32_t bb_auto_return_constant_0239fbb0()
{
    return value_0239fbb0;
}

/**
 *
 * The part of the object that auto_return_field_0239fbf0 reads.
 *
 */
struct Object0239fbf0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0239fbf0; meaning unknown. */
};
static_assert(offsetof(Object0239fbf0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0239fbf0(const Object0239fbf0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0239fc00 reads.
 *
 */
struct Object0239fc00 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0239fc00; meaning unknown. */
};
static_assert(offsetof(Object0239fc00, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0239fc00(const Object0239fc00 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0239fc50()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0239fed0 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_0239fed0()
{
    return value_0239fed0;
}

/**
 *
 * The part of the object that auto_return_field_0239ff10 reads.
 *
 */
struct Object0239ff10 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0239ff10; meaning unknown. */
};
static_assert(offsetof(Object0239ff10, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0239ff10(const Object0239ff10 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0239ff20 reads.
 *
 */
struct Object0239ff20 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0239ff20; meaning unknown. */
};
static_assert(offsetof(Object0239ff20, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0239ff20(const Object0239ff20 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0239ff70()
{
    return 0;
}
