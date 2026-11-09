// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e304d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e311b0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01e311d0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_01e31230 = 0x1;

extern "C" uint8_t bb_auto_return_constant_01e31230()
{
    return value_01e31230;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e31250()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01e31260 = 0xffffffff;

extern "C" uint32_t bb_auto_return_constant_01e31260()
{
    return value_01e31260;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e31270()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_01e31280 = 0x1;

extern "C" uint8_t bb_auto_return_constant_01e31280()
{
    return value_01e31280;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_01e31290 = 0x1;

extern "C" uint8_t bb_auto_return_constant_01e31290()
{
    return value_01e31290;
}

/**
 *
 * The part of the object that auto_return_field_01e312d0 reads.
 *
 */
struct Object01e312d0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01e312d0; meaning unknown. */
};
static_assert(offsetof(Object01e312d0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e312d0(const Object01e312d0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01e312e0 reads.
 *
 */
struct Object01e312e0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01e312e0; meaning unknown. */
};
static_assert(offsetof(Object01e312e0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e312e0(const Object01e312e0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01e31330()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01e313d0 = 0xb0;

extern "C" uint32_t bb_auto_return_constant_01e313d0()
{
    return value_01e313d0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e316b0()
{
}

/**
 *
 * The part of the object that auto_return_field_01e320f0 reads.
 *
 */
struct Object01e320f0 {
    uint8_t unknown_0x0000[0xa8];
    uint32_t value_0x00a8; /**< Read by auto_return_field_01e320f0; meaning unknown. */
};
static_assert(offsetof(Object01e320f0, value_0x00a8) == 0xa8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01e320f0(const Object01e320f0 *self)
{
    return self->value_0x00a8;
}

/**
 *
 * The part of the object that auto_return_field_01e32130 reads.
 *
 */
struct Object01e32130 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01e32130; meaning unknown. */
};
static_assert(offsetof(Object01e32130, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e32130(const Object01e32130 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01e32140 reads.
 *
 */
struct Object01e32140 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01e32140; meaning unknown. */
};
static_assert(offsetof(Object01e32140, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e32140(const Object01e32140 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01e32190()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01e32410 = 0xb0;

extern "C" uint32_t bb_auto_return_constant_01e32410()
{
    return value_01e32410;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e32900()
{
}

/**
 *
 * The part of the object that auto_return_field_01e35500 reads.
 *
 */
struct Object01e35500 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01e35500; meaning unknown. */
};
static_assert(offsetof(Object01e35500, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e35500(const Object01e35500 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01e35510 reads.
 *
 */
struct Object01e35510 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01e35510; meaning unknown. */
};
static_assert(offsetof(Object01e35510, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e35510(const Object01e35510 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01e35560()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01e35600 = 0x320;

extern "C" uint32_t bb_auto_return_constant_01e35600()
{
    return value_01e35600;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e359f0()
{
}

/**
 *
 * The part of the object that auto_return_field_01e36790 reads.
 *
 */
struct Object01e36790 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01e36790; meaning unknown. */
};
static_assert(offsetof(Object01e36790, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e36790(const Object01e36790 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01e367a0 reads.
 *
 */
struct Object01e367a0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01e367a0; meaning unknown. */
};
static_assert(offsetof(Object01e367a0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e367a0(const Object01e367a0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01e367f0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01e36890 = 0x10;

extern "C" uint32_t bb_auto_return_constant_01e36890()
{
    return value_01e36890;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e36aa0()
{
}

/**
 *
 * The part of the object that auto_return_field_01e37150 reads.
 *
 */
struct Object01e37150 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01e37150; meaning unknown. */
};
static_assert(offsetof(Object01e37150, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e37150(const Object01e37150 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01e37160 reads.
 *
 */
struct Object01e37160 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01e37160; meaning unknown. */
};
static_assert(offsetof(Object01e37160, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e37160(const Object01e37160 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01e371b0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01e37430 = 0x10;

extern "C" uint32_t bb_auto_return_constant_01e37430()
{
    return value_01e37430;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e37640()
{
}

/**
 *
 * The part of the object that auto_return_field_01e37d30 reads.
 *
 */
struct Object01e37d30 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01e37d30; meaning unknown. */
};
static_assert(offsetof(Object01e37d30, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e37d30(const Object01e37d30 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01e37d40 reads.
 *
 */
struct Object01e37d40 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01e37d40; meaning unknown. */
};
static_assert(offsetof(Object01e37d40, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e37d40(const Object01e37d40 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01e37d90()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01e38010 = 0x10;

extern "C" uint32_t bb_auto_return_constant_01e38010()
{
    return value_01e38010;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e38420()
{
}

/**
 *
 * The part of the object that auto_return_field_01e38be0 reads.
 *
 */
struct Object01e38be0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01e38be0; meaning unknown. */
};
static_assert(offsetof(Object01e38be0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e38be0(const Object01e38be0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01e38bf0 reads.
 *
 */
struct Object01e38bf0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01e38bf0; meaning unknown. */
};
static_assert(offsetof(Object01e38bf0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e38bf0(const Object01e38bf0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01e38c40()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01e38ce0 = 0x28;

extern "C" uint32_t bb_auto_return_constant_01e38ce0()
{
    return value_01e38ce0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e38f10()
{
}

/**
 *
 * The part of the object that auto_return_field_01e39530 reads.
 *
 */
struct Object01e39530 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01e39530; meaning unknown. */
};
static_assert(offsetof(Object01e39530, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e39530(const Object01e39530 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01e39540 reads.
 *
 */
struct Object01e39540 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01e39540; meaning unknown. */
};
static_assert(offsetof(Object01e39540, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e39540(const Object01e39540 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01e39590()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01e39810 = 0x28;

extern "C" uint32_t bb_auto_return_constant_01e39810()
{
    return value_01e39810;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e39a40()
{
}

/**
 *
 * The part of the object that auto_return_field_01e3a060 reads.
 *
 */
struct Object01e3a060 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01e3a060; meaning unknown. */
};
static_assert(offsetof(Object01e3a060, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e3a060(const Object01e3a060 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01e3a070 reads.
 *
 */
struct Object01e3a070 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01e3a070; meaning unknown. */
};
static_assert(offsetof(Object01e3a070, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e3a070(const Object01e3a070 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01e3a0c0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01e3a340 = 0x28;

extern "C" uint32_t bb_auto_return_constant_01e3a340()
{
    return value_01e3a340;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e3a790()
{
}

/**
 *
 * The part of the object that auto_return_float_field_01e3a7a0 reads.
 *
 */
struct Object01e3a7a0 {
    uint8_t unknown_0x0000[0x10];
    float value_0x0010; /**< Read by auto_return_float_field_01e3a7a0; meaning unknown. */
};
static_assert(offsetof(Object01e3a7a0, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_01e3a7a0(const Object01e3a7a0 *self)
{
    return self->value_0x0010;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01e3b420()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01e3b460 reads.
 *
 */
struct Object01e3b460 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01e3b460; meaning unknown. */
};
static_assert(offsetof(Object01e3b460, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e3b460(const Object01e3b460 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01e3b470 reads.
 *
 */
struct Object01e3b470 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01e3b470; meaning unknown. */
};
static_assert(offsetof(Object01e3b470, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e3b470(const Object01e3b470 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01e3b4c0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01e3b560 = 0x60;

extern "C" uint32_t bb_auto_return_constant_01e3b560()
{
    return value_01e3b560;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e3b7d0()
{
}

/**
 *
 * The part of the object that auto_return_field_01e3be80 reads.
 *
 */
struct Object01e3be80 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01e3be80; meaning unknown. */
};
static_assert(offsetof(Object01e3be80, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e3be80(const Object01e3be80 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01e3be90 reads.
 *
 */
struct Object01e3be90 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01e3be90; meaning unknown. */
};
static_assert(offsetof(Object01e3be90, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e3be90(const Object01e3be90 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01e3bee0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01e3c160 = 0x60;

extern "C" uint32_t bb_auto_return_constant_01e3c160()
{
    return value_01e3c160;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e3c5b0()
{
}

/**
 *
 * The part of the object that auto_return_field_01e3cc30 reads.
 *
 */
struct Object01e3cc30 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01e3cc30; meaning unknown. */
};
static_assert(offsetof(Object01e3cc30, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e3cc30(const Object01e3cc30 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01e3cc40 reads.
 *
 */
struct Object01e3cc40 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01e3cc40; meaning unknown. */
};
static_assert(offsetof(Object01e3cc40, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e3cc40(const Object01e3cc40 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01e3cc90()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01e3cd30 = 0x60;

extern "C" uint32_t bb_auto_return_constant_01e3cd30()
{
    return value_01e3cd30;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e3d130()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e3d920()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e3e260()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e3e2c0()
{
}

/**
 *
 * The part of the object that auto_return_field_01e3e350 reads.
 *
 */
struct Object01e3e350 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01e3e350; meaning unknown. */
};
static_assert(offsetof(Object01e3e350, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e3e350(const Object01e3e350 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01e3e360 reads.
 *
 */
struct Object01e3e360 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01e3e360; meaning unknown. */
};
static_assert(offsetof(Object01e3e360, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e3e360(const Object01e3e360 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01e3e3b0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01e3e450 = 0x18;

extern "C" uint32_t bb_auto_return_constant_01e3e450()
{
    return value_01e3e450;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e3e880()
{
}

/**
 *
 * The part of the object that auto_return_field_01e3eea0 reads.
 *
 */
struct Object01e3eea0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01e3eea0; meaning unknown. */
};
static_assert(offsetof(Object01e3eea0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e3eea0(const Object01e3eea0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01e3eeb0 reads.
 *
 */
struct Object01e3eeb0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01e3eeb0; meaning unknown. */
};
static_assert(offsetof(Object01e3eeb0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e3eeb0(const Object01e3eeb0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01e3ef00()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01e3f180 = 0x18;

extern "C" uint32_t bb_auto_return_constant_01e3f180()
{
    return value_01e3f180;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e3f3a0()
{
}

/**
 *
 * The part of the object that auto_return_field_01e3f9c0 reads.
 *
 */
struct Object01e3f9c0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01e3f9c0; meaning unknown. */
};
static_assert(offsetof(Object01e3f9c0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e3f9c0(const Object01e3f9c0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01e3f9d0 reads.
 *
 */
struct Object01e3f9d0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01e3f9d0; meaning unknown. */
};
static_assert(offsetof(Object01e3f9d0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e3f9d0(const Object01e3f9d0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01e3fa20()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01e3fca0 = 0x18;

extern "C" uint32_t bb_auto_return_constant_01e3fca0()
{
    return value_01e3fca0;
}
