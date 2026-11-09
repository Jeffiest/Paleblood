// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02211240()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02211d80()
{
}

/**
 *
 * The part of the object that auto_return_field_022136e0 reads.
 *
 */
struct Object022136e0 {
    uint8_t unknown_0x0000[0x58];
    uint32_t value_0x0058; /**< Read by auto_return_field_022136e0; meaning unknown. */
};
static_assert(offsetof(Object022136e0, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_022136e0(const Object022136e0 *self)
{
    return self->value_0x0058;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_022137b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_022137c0()
{
}

/**
 *
 * The part of the object that auto_return_field_02213a30 reads.
 *
 */
struct Object02213a30 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02213a30; meaning unknown. */
};
static_assert(offsetof(Object02213a30, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02213a30(const Object02213a30 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02213a40 reads.
 *
 */
struct Object02213a40 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02213a40; meaning unknown. */
};
static_assert(offsetof(Object02213a40, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02213a40(const Object02213a40 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02213a90()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02213d10 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_02213d10()
{
    return value_02213d10;
}

/**
 *
 * The part of the object that auto_return_field_02213d50 reads.
 *
 */
struct Object02213d50 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02213d50; meaning unknown. */
};
static_assert(offsetof(Object02213d50, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02213d50(const Object02213d50 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02213d60 reads.
 *
 */
struct Object02213d60 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02213d60; meaning unknown. */
};
static_assert(offsetof(Object02213d60, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02213d60(const Object02213d60 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02213db0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02214030 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_02214030()
{
    return value_02214030;
}

/**
 *
 * The part of the object that auto_return_field_02214070 reads.
 *
 */
struct Object02214070 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02214070; meaning unknown. */
};
static_assert(offsetof(Object02214070, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02214070(const Object02214070 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02214080 reads.
 *
 */
struct Object02214080 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02214080; meaning unknown. */
};
static_assert(offsetof(Object02214080, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02214080(const Object02214080 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_022140d0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02214350 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_02214350()
{
    return value_02214350;
}

/**
 *
 * The part of the object that auto_return_field_02214390 reads.
 *
 */
struct Object02214390 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02214390; meaning unknown. */
};
static_assert(offsetof(Object02214390, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02214390(const Object02214390 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_022143a0 reads.
 *
 */
struct Object022143a0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_022143a0; meaning unknown. */
};
static_assert(offsetof(Object022143a0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_022143a0(const Object022143a0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_022143f0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02214670 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_02214670()
{
    return value_02214670;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02217150()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02217300()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02217360()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_022174a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_022175a0()
{
}

/**
 *
 * The part of the object that auto_return_field_0221bb60 reads.
 *
 */
struct Object0221bb60 {
    uint8_t unknown_0x0000[0x58];
    uint8_t value_0x0058; /**< Read by auto_return_field_0221bb60; meaning unknown. */
};
static_assert(offsetof(Object0221bb60, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_0221bb60(const Object0221bb60 *self)
{
    return self->value_0x0058;
}

/**
 *
 * The part of the object that auto_return_field_0221c730 reads.
 *
 */
struct Object0221c730 {
    uint8_t unknown_0x0000[0x50];
    uint32_t value_0x0050; /**< Read by auto_return_field_0221c730; meaning unknown. */
};
static_assert(offsetof(Object0221c730, value_0x0050) == 0x50);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_0221c730(const Object0221c730 *self)
{
    return self->value_0x0050;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0221c800()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0221c810()
{
}

/**
 *
 * The part of the object that auto_return_field_0221cb00 reads.
 *
 */
struct Object0221cb00 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0221cb00; meaning unknown. */
};
static_assert(offsetof(Object0221cb00, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0221cb00(const Object0221cb00 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0221cb10 reads.
 *
 */
struct Object0221cb10 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0221cb10; meaning unknown. */
};
static_assert(offsetof(Object0221cb10, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0221cb10(const Object0221cb10 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0221cb60()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0221cde0 = 0x170;

extern "C" uint32_t bb_auto_return_constant_0221cde0()
{
    return value_0221cde0;
}

/**
 *
 * The part of the object that auto_return_field_0221ce20 reads.
 *
 */
struct Object0221ce20 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0221ce20; meaning unknown. */
};
static_assert(offsetof(Object0221ce20, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0221ce20(const Object0221ce20 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0221ce30 reads.
 *
 */
struct Object0221ce30 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0221ce30; meaning unknown. */
};
static_assert(offsetof(Object0221ce30, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0221ce30(const Object0221ce30 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0221ce80()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0221d100 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_0221d100()
{
    return value_0221d100;
}

/**
 *
 * The part of the object that auto_return_field_0221d140 reads.
 *
 */
struct Object0221d140 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0221d140; meaning unknown. */
};
static_assert(offsetof(Object0221d140, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0221d140(const Object0221d140 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0221d150 reads.
 *
 */
struct Object0221d150 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0221d150; meaning unknown. */
};
static_assert(offsetof(Object0221d150, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0221d150(const Object0221d150 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0221d1a0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0221d420 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_0221d420()
{
    return value_0221d420;
}

/**
 *
 * The part of the object that auto_return_field_0221d460 reads.
 *
 */
struct Object0221d460 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0221d460; meaning unknown. */
};
static_assert(offsetof(Object0221d460, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0221d460(const Object0221d460 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0221d470 reads.
 *
 */
struct Object0221d470 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0221d470; meaning unknown. */
};
static_assert(offsetof(Object0221d470, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0221d470(const Object0221d470 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0221d4c0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0221d740 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_0221d740()
{
    return value_0221d740;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0221e530()
{
}

/**
 *
 * The part of the object that auto_return_field_0221e620 reads.
 *
 */
struct Object0221e620 {
    uint8_t unknown_0x0000[0x10];
    uint32_t value_0x0010; /**< Read by auto_return_field_0221e620; meaning unknown. */
};
static_assert(offsetof(Object0221e620, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_0221e620(const Object0221e620 *self)
{
    return self->value_0x0010;
}

/**
 *
 * The part of the object that auto_return_field_0221e640 reads.
 *
 */
struct Object0221e640 {
    uint8_t unknown_0x0000[0x14];
    uint32_t value_0x0014; /**< Read by auto_return_field_0221e640; meaning unknown. */
};
static_assert(offsetof(Object0221e640, value_0x0014) == 0x14);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_0221e640(const Object0221e640 *self)
{
    return self->value_0x0014;
}

/**
 *
 * The part of the object that auto_return_field_0221fcd0 reads.
 *
 */
struct Object0221fcd0 {
    uint8_t unknown_0x0000[0x128];
    uint32_t value_0x0128; /**< Read by auto_return_field_0221fcd0; meaning unknown. */
};
static_assert(offsetof(Object0221fcd0, value_0x0128) == 0x128);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_0221fcd0(const Object0221fcd0 *self)
{
    return self->value_0x0128;
}

/**
 *
 * The part of the object that auto_return_field_0221fce0 reads.
 *
 */
struct Object0221fce0 {
    uint8_t unknown_0x0000[0x12c];
    uint32_t value_0x012c; /**< Read by auto_return_field_0221fce0; meaning unknown. */
};
static_assert(offsetof(Object0221fce0, value_0x012c) == 0x12c);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_0221fce0(const Object0221fce0 *self)
{
    return self->value_0x012c;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0221ff60()
{
    return 0;
}
