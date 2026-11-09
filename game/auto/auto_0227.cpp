// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_02270390 reads.
 *
 */
struct Object02270390 {
    uint8_t unknown_0x0000[0x58];
    uint8_t value_0x0058; /**< Read by auto_return_field_02270390; meaning unknown. */
};
static_assert(offsetof(Object02270390, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02270390(const Object02270390 *self)
{
    return self->value_0x0058;
}

/**
 *
 * The part of the object that auto_return_field_02270f50 reads.
 *
 */
struct Object02270f50 {
    uint8_t unknown_0x0000[0x50];
    uint32_t value_0x0050; /**< Read by auto_return_field_02270f50; meaning unknown. */
};
static_assert(offsetof(Object02270f50, value_0x0050) == 0x50);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02270f50(const Object02270f50 *self)
{
    return self->value_0x0050;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02271020()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02271030()
{
}

/**
 *
 * The part of the object that auto_return_field_02271320 reads.
 *
 */
struct Object02271320 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02271320; meaning unknown. */
};
static_assert(offsetof(Object02271320, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02271320(const Object02271320 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02271330 reads.
 *
 */
struct Object02271330 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02271330; meaning unknown. */
};
static_assert(offsetof(Object02271330, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02271330(const Object02271330 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02271380()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02271600 = 0xe0;

extern "C" uint32_t bb_auto_return_constant_02271600()
{
    return value_02271600;
}

/**
 *
 * The part of the object that auto_return_field_02271640 reads.
 *
 */
struct Object02271640 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02271640; meaning unknown. */
};
static_assert(offsetof(Object02271640, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02271640(const Object02271640 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02271650 reads.
 *
 */
struct Object02271650 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02271650; meaning unknown. */
};
static_assert(offsetof(Object02271650, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02271650(const Object02271650 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_022716a0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02271920 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_02271920()
{
    return value_02271920;
}

/**
 *
 * The part of the object that auto_return_field_02271960 reads.
 *
 */
struct Object02271960 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02271960; meaning unknown. */
};
static_assert(offsetof(Object02271960, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02271960(const Object02271960 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02271970 reads.
 *
 */
struct Object02271970 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02271970; meaning unknown. */
};
static_assert(offsetof(Object02271970, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02271970(const Object02271970 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_022719c0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02271c40 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_02271c40()
{
    return value_02271c40;
}

/**
 *
 * The part of the object that auto_return_field_02271c80 reads.
 *
 */
struct Object02271c80 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02271c80; meaning unknown. */
};
static_assert(offsetof(Object02271c80, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02271c80(const Object02271c80 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02271c90 reads.
 *
 */
struct Object02271c90 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02271c90; meaning unknown. */
};
static_assert(offsetof(Object02271c90, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02271c90(const Object02271c90 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02271ce0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02271f60 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_02271f60()
{
    return value_02271f60;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02272800()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02273740()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_022737a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_022748f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02274950()
{
}

/**
 *
 * The part of the object that auto_return_field_02279fb0 reads.
 *
 */
struct Object02279fb0 {
    uint8_t unknown_0x0000[0x58];
    uint8_t value_0x0058; /**< Read by auto_return_field_02279fb0; meaning unknown. */
};
static_assert(offsetof(Object02279fb0, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02279fb0(const Object02279fb0 *self)
{
    return self->value_0x0058;
}

/**
 *
 * The part of the object that auto_return_field_0227a930 reads.
 *
 */
struct Object0227a930 {
    uint8_t unknown_0x0000[0x50];
    uint32_t value_0x0050; /**< Read by auto_return_field_0227a930; meaning unknown. */
};
static_assert(offsetof(Object0227a930, value_0x0050) == 0x50);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_0227a930(const Object0227a930 *self)
{
    return self->value_0x0050;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0227aa00()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0227aa10()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0227aad0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0227ab30()
{
}

/**
 *
 * The part of the object that auto_return_field_0227add0 reads.
 *
 */
struct Object0227add0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0227add0; meaning unknown. */
};
static_assert(offsetof(Object0227add0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0227add0(const Object0227add0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0227ade0 reads.
 *
 */
struct Object0227ade0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0227ade0; meaning unknown. */
};
static_assert(offsetof(Object0227ade0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0227ade0(const Object0227ade0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0227ae30()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0227b0b0 = 0xd8;

extern "C" uint32_t bb_auto_return_constant_0227b0b0()
{
    return value_0227b0b0;
}

/**
 *
 * The part of the object that auto_return_field_0227b0f0 reads.
 *
 */
struct Object0227b0f0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0227b0f0; meaning unknown. */
};
static_assert(offsetof(Object0227b0f0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0227b0f0(const Object0227b0f0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0227b100 reads.
 *
 */
struct Object0227b100 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0227b100; meaning unknown. */
};
static_assert(offsetof(Object0227b100, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0227b100(const Object0227b100 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0227b150()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0227b3d0 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_0227b3d0()
{
    return value_0227b3d0;
}

/**
 *
 * The part of the object that auto_return_field_0227b410 reads.
 *
 */
struct Object0227b410 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0227b410; meaning unknown. */
};
static_assert(offsetof(Object0227b410, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0227b410(const Object0227b410 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0227b420 reads.
 *
 */
struct Object0227b420 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0227b420; meaning unknown. */
};
static_assert(offsetof(Object0227b420, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0227b420(const Object0227b420 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0227b470()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0227b6f0 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_0227b6f0()
{
    return value_0227b6f0;
}

/**
 *
 * The part of the object that auto_return_field_0227b730 reads.
 *
 */
struct Object0227b730 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0227b730; meaning unknown. */
};
static_assert(offsetof(Object0227b730, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0227b730(const Object0227b730 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0227b740 reads.
 *
 */
struct Object0227b740 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0227b740; meaning unknown. */
};
static_assert(offsetof(Object0227b740, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0227b740(const Object0227b740 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0227b790()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0227ba10 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_0227ba10()
{
    return value_0227ba10;
}
