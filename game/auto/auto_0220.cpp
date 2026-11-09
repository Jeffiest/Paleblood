// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02201da0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02202430()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02202f60()
{
}

/**
 *
 * The part of the object that auto_return_field_02203e40 reads.
 *
 */
struct Object02203e40 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02203e40; meaning unknown. */
};
static_assert(offsetof(Object02203e40, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02203e40(const Object02203e40 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02203e50 reads.
 *
 */
struct Object02203e50 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02203e50; meaning unknown. */
};
static_assert(offsetof(Object02203e50, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02203e50(const Object02203e50 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02203ea0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02204120 = 0x90;

extern "C" uint32_t bb_auto_return_constant_02204120()
{
    return value_02204120;
}

/**
 *
 * The part of the object that auto_return_field_02204f10 reads.
 *
 */
struct Object02204f10 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02204f10; meaning unknown. */
};
static_assert(offsetof(Object02204f10, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02204f10(const Object02204f10 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02204f20 reads.
 *
 */
struct Object02204f20 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02204f20; meaning unknown. */
};
static_assert(offsetof(Object02204f20, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02204f20(const Object02204f20 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02204f70()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_022051f0 = 0x88;

extern "C" uint32_t bb_auto_return_constant_022051f0()
{
    return value_022051f0;
}

/**
 *
 * The part of the object that auto_return_field_02206720 reads.
 *
 */
struct Object02206720 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02206720; meaning unknown. */
};
static_assert(offsetof(Object02206720, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02206720(const Object02206720 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02206730 reads.
 *
 */
struct Object02206730 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02206730; meaning unknown. */
};
static_assert(offsetof(Object02206730, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02206730(const Object02206730 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02206780()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02206a00 = 0xb8;

extern "C" uint32_t bb_auto_return_constant_02206a00()
{
    return value_02206a00;
}

/**
 *
 * The part of the object that auto_return_field_02207480 reads.
 *
 */
struct Object02207480 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02207480; meaning unknown. */
};
static_assert(offsetof(Object02207480, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02207480(const Object02207480 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02207490 reads.
 *
 */
struct Object02207490 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02207490; meaning unknown. */
};
static_assert(offsetof(Object02207490, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02207490(const Object02207490 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_022074e0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02207760 = 0x90;

extern "C" uint32_t bb_auto_return_constant_02207760()
{
    return value_02207760;
}

/**
 *
 * The part of the object that auto_return_field_02208120 reads.
 *
 */
struct Object02208120 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02208120; meaning unknown. */
};
static_assert(offsetof(Object02208120, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02208120(const Object02208120 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02208130 reads.
 *
 */
struct Object02208130 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02208130; meaning unknown. */
};
static_assert(offsetof(Object02208130, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02208130(const Object02208130 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02208180()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02208400 = 0x78;

extern "C" uint32_t bb_auto_return_constant_02208400()
{
    return value_02208400;
}

/**
 *
 * The part of the object that auto_return_field_02208e90 reads.
 *
 */
struct Object02208e90 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02208e90; meaning unknown. */
};
static_assert(offsetof(Object02208e90, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02208e90(const Object02208e90 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02208ea0 reads.
 *
 */
struct Object02208ea0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02208ea0; meaning unknown. */
};
static_assert(offsetof(Object02208ea0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02208ea0(const Object02208ea0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02208ef0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02209170 = 0x90;

extern "C" uint32_t bb_auto_return_constant_02209170()
{
    return value_02209170;
}

/**
 *
 * The part of the object that auto_return_field_02209b30 reads.
 *
 */
struct Object02209b30 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02209b30; meaning unknown. */
};
static_assert(offsetof(Object02209b30, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02209b30(const Object02209b30 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02209b40 reads.
 *
 */
struct Object02209b40 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02209b40; meaning unknown. */
};
static_assert(offsetof(Object02209b40, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02209b40(const Object02209b40 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02209b90()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02209e10 = 0x78;

extern "C" uint32_t bb_auto_return_constant_02209e10()
{
    return value_02209e10;
}

/**
 *
 * The part of the object that auto_return_field_0220aa80 reads.
 *
 */
struct Object0220aa80 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0220aa80; meaning unknown. */
};
static_assert(offsetof(Object0220aa80, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0220aa80(const Object0220aa80 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0220aa90 reads.
 *
 */
struct Object0220aa90 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0220aa90; meaning unknown. */
};
static_assert(offsetof(Object0220aa90, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0220aa90(const Object0220aa90 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0220aae0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0220ad60 = 0x98;

extern "C" uint32_t bb_auto_return_constant_0220ad60()
{
    return value_0220ad60;
}

/**
 *
 * The part of the object that auto_return_field_0220b810 reads.
 *
 */
struct Object0220b810 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0220b810; meaning unknown. */
};
static_assert(offsetof(Object0220b810, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0220b810(const Object0220b810 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0220b820 reads.
 *
 */
struct Object0220b820 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0220b820; meaning unknown. */
};
static_assert(offsetof(Object0220b820, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0220b820(const Object0220b820 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0220b870()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0220baf0 = 0x90;

extern "C" uint32_t bb_auto_return_constant_0220baf0()
{
    return value_0220baf0;
}

/**
 *
 * The part of the object that auto_return_field_0220c7b0 reads.
 *
 */
struct Object0220c7b0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0220c7b0; meaning unknown. */
};
static_assert(offsetof(Object0220c7b0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0220c7b0(const Object0220c7b0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0220c7c0 reads.
 *
 */
struct Object0220c7c0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0220c7c0; meaning unknown. */
};
static_assert(offsetof(Object0220c7c0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0220c7c0(const Object0220c7c0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0220c810()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0220ca90 = 0x120;

extern "C" uint32_t bb_auto_return_constant_0220ca90()
{
    return value_0220ca90;
}

/**
 *
 * The part of the object that auto_return_field_0220fb40 reads.
 *
 */
struct Object0220fb40 {
    uint8_t unknown_0x0000[0x50];
    uint32_t value_0x0050; /**< Read by auto_return_field_0220fb40; meaning unknown. */
};
static_assert(offsetof(Object0220fb40, value_0x0050) == 0x50);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_0220fb40(const Object0220fb40 *self)
{
    return self->value_0x0050;
}

/**
 *
 * The part of the object that auto_return_field_0220fea0 reads.
 *
 */
struct Object0220fea0 {
    uint8_t unknown_0x0000[0x68];
    uint64_t value_0x0068; /**< Read by auto_return_field_0220fea0; meaning unknown. */
};
static_assert(offsetof(Object0220fea0, value_0x0068) == 0x68);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0220fea0(const Object0220fea0 *self)
{
    return self->value_0x0068;
}

/**
 *
 * The part of the object that auto_return_field_0220feb0 reads.
 *
 */
struct Object0220feb0 {
    uint8_t unknown_0x0000[0x60];
    uint64_t value_0x0060; /**< Read by auto_return_field_0220feb0; meaning unknown. */
};
static_assert(offsetof(Object0220feb0, value_0x0060) == 0x60);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0220feb0(const Object0220feb0 *self)
{
    return self->value_0x0060;
}

/**
 *
 * The part of the object that auto_return_field_0220ffb0 reads.
 *
 */
struct Object0220ffb0 {
    uint8_t unknown_0x0000[0x70];
    uint64_t value_0x0070; /**< Read by auto_return_field_0220ffb0; meaning unknown. */
};
static_assert(offsetof(Object0220ffb0, value_0x0070) == 0x70);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0220ffb0(const Object0220ffb0 *self)
{
    return self->value_0x0070;
}
