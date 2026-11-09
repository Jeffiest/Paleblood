// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c90020()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c90170 = 0x8;

extern "C" uint32_t bb_auto_return_constant_02c90170()
{
    return value_02c90170;
}

/**
 *
 * The part of the object that auto_return_field_02c90310 reads.
 *
 */
struct Object02c90310 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02c90310; meaning unknown. */
};
static_assert(offsetof(Object02c90310, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c90310(const Object02c90310 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02c90320 reads.
 *
 */
struct Object02c90320 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02c90320; meaning unknown. */
};
static_assert(offsetof(Object02c90320, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c90320(const Object02c90320 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c90370()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c904c0 = 0x8;

extern "C" uint32_t bb_auto_return_constant_02c904c0()
{
    return value_02c904c0;
}

/**
 *
 * The part of the object that auto_return_field_02c90660 reads.
 *
 */
struct Object02c90660 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02c90660; meaning unknown. */
};
static_assert(offsetof(Object02c90660, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c90660(const Object02c90660 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02c90670 reads.
 *
 */
struct Object02c90670 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02c90670; meaning unknown. */
};
static_assert(offsetof(Object02c90670, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c90670(const Object02c90670 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c906c0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c90810 = 0x8;

extern "C" uint32_t bb_auto_return_constant_02c90810()
{
    return value_02c90810;
}

/**
 *
 * The part of the object that auto_return_field_02c909b0 reads.
 *
 */
struct Object02c909b0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02c909b0; meaning unknown. */
};
static_assert(offsetof(Object02c909b0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c909b0(const Object02c909b0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02c909c0 reads.
 *
 */
struct Object02c909c0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02c909c0; meaning unknown. */
};
static_assert(offsetof(Object02c909c0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c909c0(const Object02c909c0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c90a10()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c90b60 = 0x8;

extern "C" uint32_t bb_auto_return_constant_02c90b60()
{
    return value_02c90b60;
}

/**
 *
 * The part of the object that auto_return_field_02c90d00 reads.
 *
 */
struct Object02c90d00 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02c90d00; meaning unknown. */
};
static_assert(offsetof(Object02c90d00, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c90d00(const Object02c90d00 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02c90d10 reads.
 *
 */
struct Object02c90d10 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02c90d10; meaning unknown. */
};
static_assert(offsetof(Object02c90d10, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c90d10(const Object02c90d10 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c90d60()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c90eb0 = 0x8;

extern "C" uint32_t bb_auto_return_constant_02c90eb0()
{
    return value_02c90eb0;
}

/**
 *
 * The part of the object that auto_return_field_02c91050 reads.
 *
 */
struct Object02c91050 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02c91050; meaning unknown. */
};
static_assert(offsetof(Object02c91050, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c91050(const Object02c91050 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02c91060 reads.
 *
 */
struct Object02c91060 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02c91060; meaning unknown. */
};
static_assert(offsetof(Object02c91060, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c91060(const Object02c91060 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c910b0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c91200 = 0x8;

extern "C" uint32_t bb_auto_return_constant_02c91200()
{
    return value_02c91200;
}

/**
 *
 * The part of the object that auto_return_field_02c913a0 reads.
 *
 */
struct Object02c913a0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02c913a0; meaning unknown. */
};
static_assert(offsetof(Object02c913a0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c913a0(const Object02c913a0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02c913b0 reads.
 *
 */
struct Object02c913b0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02c913b0; meaning unknown. */
};
static_assert(offsetof(Object02c913b0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c913b0(const Object02c913b0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c91400()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c91550 = 0x8;

extern "C" uint32_t bb_auto_return_constant_02c91550()
{
    return value_02c91550;
}

/**
 *
 * The part of the object that auto_return_field_02c916f0 reads.
 *
 */
struct Object02c916f0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02c916f0; meaning unknown. */
};
static_assert(offsetof(Object02c916f0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c916f0(const Object02c916f0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02c91700 reads.
 *
 */
struct Object02c91700 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02c91700; meaning unknown. */
};
static_assert(offsetof(Object02c91700, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c91700(const Object02c91700 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c91750()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c918a0 = 0x8;

extern "C" uint32_t bb_auto_return_constant_02c918a0()
{
    return value_02c918a0;
}

/**
 *
 * The part of the object that auto_return_field_02c91a40 reads.
 *
 */
struct Object02c91a40 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02c91a40; meaning unknown. */
};
static_assert(offsetof(Object02c91a40, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c91a40(const Object02c91a40 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02c91a50 reads.
 *
 */
struct Object02c91a50 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02c91a50; meaning unknown. */
};
static_assert(offsetof(Object02c91a50, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c91a50(const Object02c91a50 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c91aa0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c91bf0 = 0x8;

extern "C" uint32_t bb_auto_return_constant_02c91bf0()
{
    return value_02c91bf0;
}

/**
 *
 * The part of the object that auto_return_field_02c91d90 reads.
 *
 */
struct Object02c91d90 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02c91d90; meaning unknown. */
};
static_assert(offsetof(Object02c91d90, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c91d90(const Object02c91d90 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02c91da0 reads.
 *
 */
struct Object02c91da0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02c91da0; meaning unknown. */
};
static_assert(offsetof(Object02c91da0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c91da0(const Object02c91da0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c91df0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c91f40 = 0x8;

extern "C" uint32_t bb_auto_return_constant_02c91f40()
{
    return value_02c91f40;
}

/**
 *
 * The part of the object that auto_return_field_02c920e0 reads.
 *
 */
struct Object02c920e0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02c920e0; meaning unknown. */
};
static_assert(offsetof(Object02c920e0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c920e0(const Object02c920e0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02c920f0 reads.
 *
 */
struct Object02c920f0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02c920f0; meaning unknown. */
};
static_assert(offsetof(Object02c920f0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c920f0(const Object02c920f0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c92140()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c92290 = 0x8;

extern "C" uint32_t bb_auto_return_constant_02c92290()
{
    return value_02c92290;
}

/**
 *
 * The part of the object that auto_return_field_02c922d0 reads.
 *
 */
struct Object02c922d0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02c922d0; meaning unknown. */
};
static_assert(offsetof(Object02c922d0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c922d0(const Object02c922d0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02c922e0 reads.
 *
 */
struct Object02c922e0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02c922e0; meaning unknown. */
};
static_assert(offsetof(Object02c922e0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c922e0(const Object02c922e0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c92330()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c92480 = 0x8;

extern "C" uint32_t bb_auto_return_constant_02c92480()
{
    return value_02c92480;
}

/**
 *
 * The part of the object that auto_return_field_02c99570 reads.
 *
 */
struct Object02c99570 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02c99570; meaning unknown. */
};
static_assert(offsetof(Object02c99570, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c99570(const Object02c99570 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02c99580 reads.
 *
 */
struct Object02c99580 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02c99580; meaning unknown. */
};
static_assert(offsetof(Object02c99580, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c99580(const Object02c99580 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c995d0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c99720 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02c99720()
{
    return value_02c99720;
}

/**
 *
 * The part of the object that auto_return_field_02c99820 reads.
 *
 */
struct Object02c99820 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02c99820; meaning unknown. */
};
static_assert(offsetof(Object02c99820, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c99820(const Object02c99820 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02c99830 reads.
 *
 */
struct Object02c99830 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02c99830; meaning unknown. */
};
static_assert(offsetof(Object02c99830, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c99830(const Object02c99830 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c99880()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c999d0 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02c999d0()
{
    return value_02c999d0;
}

/**
 *
 * The part of the object that auto_return_field_02c99ad0 reads.
 *
 */
struct Object02c99ad0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02c99ad0; meaning unknown. */
};
static_assert(offsetof(Object02c99ad0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c99ad0(const Object02c99ad0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02c99ae0 reads.
 *
 */
struct Object02c99ae0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02c99ae0; meaning unknown. */
};
static_assert(offsetof(Object02c99ae0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c99ae0(const Object02c99ae0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c99b30()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c99c80 = 0x50;

extern "C" uint32_t bb_auto_return_constant_02c99c80()
{
    return value_02c99c80;
}

/**
 *
 * The part of the object that auto_return_field_02c99d80 reads.
 *
 */
struct Object02c99d80 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02c99d80; meaning unknown. */
};
static_assert(offsetof(Object02c99d80, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c99d80(const Object02c99d80 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02c99d90 reads.
 *
 */
struct Object02c99d90 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02c99d90; meaning unknown. */
};
static_assert(offsetof(Object02c99d90, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c99d90(const Object02c99d90 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c99de0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c99f30 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02c99f30()
{
    return value_02c99f30;
}

/**
 *
 * The part of the object that auto_return_field_02c9a030 reads.
 *
 */
struct Object02c9a030 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02c9a030; meaning unknown. */
};
static_assert(offsetof(Object02c9a030, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c9a030(const Object02c9a030 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02c9a040 reads.
 *
 */
struct Object02c9a040 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02c9a040; meaning unknown. */
};
static_assert(offsetof(Object02c9a040, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c9a040(const Object02c9a040 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c9a090()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c9a1e0 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02c9a1e0()
{
    return value_02c9a1e0;
}

/**
 *
 * The part of the object that auto_return_field_02c9a2e0 reads.
 *
 */
struct Object02c9a2e0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02c9a2e0; meaning unknown. */
};
static_assert(offsetof(Object02c9a2e0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c9a2e0(const Object02c9a2e0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02c9a2f0 reads.
 *
 */
struct Object02c9a2f0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02c9a2f0; meaning unknown. */
};
static_assert(offsetof(Object02c9a2f0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c9a2f0(const Object02c9a2f0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c9a340()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c9a490 = 0x20;

extern "C" uint32_t bb_auto_return_constant_02c9a490()
{
    return value_02c9a490;
}

/**
 *
 * The part of the object that auto_return_field_02c9a590 reads.
 *
 */
struct Object02c9a590 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02c9a590; meaning unknown. */
};
static_assert(offsetof(Object02c9a590, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c9a590(const Object02c9a590 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02c9a5a0 reads.
 *
 */
struct Object02c9a5a0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02c9a5a0; meaning unknown. */
};
static_assert(offsetof(Object02c9a5a0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c9a5a0(const Object02c9a5a0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c9a5f0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c9a740 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02c9a740()
{
    return value_02c9a740;
}

/**
 *
 * The part of the object that auto_return_field_02c9a840 reads.
 *
 */
struct Object02c9a840 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02c9a840; meaning unknown. */
};
static_assert(offsetof(Object02c9a840, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c9a840(const Object02c9a840 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02c9a850 reads.
 *
 */
struct Object02c9a850 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02c9a850; meaning unknown. */
};
static_assert(offsetof(Object02c9a850, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c9a850(const Object02c9a850 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c9a8a0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c9a9f0 = 0x20;

extern "C" uint32_t bb_auto_return_constant_02c9a9f0()
{
    return value_02c9a9f0;
}

/**
 *
 * The part of the object that auto_return_field_02c9aaf0 reads.
 *
 */
struct Object02c9aaf0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02c9aaf0; meaning unknown. */
};
static_assert(offsetof(Object02c9aaf0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c9aaf0(const Object02c9aaf0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02c9ab00 reads.
 *
 */
struct Object02c9ab00 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02c9ab00; meaning unknown. */
};
static_assert(offsetof(Object02c9ab00, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c9ab00(const Object02c9ab00 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c9ab50()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c9aca0 = 0x20;

extern "C" uint32_t bb_auto_return_constant_02c9aca0()
{
    return value_02c9aca0;
}

/**
 *
 * The part of the object that auto_return_field_02c9ada0 reads.
 *
 */
struct Object02c9ada0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02c9ada0; meaning unknown. */
};
static_assert(offsetof(Object02c9ada0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c9ada0(const Object02c9ada0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02c9adb0 reads.
 *
 */
struct Object02c9adb0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02c9adb0; meaning unknown. */
};
static_assert(offsetof(Object02c9adb0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c9adb0(const Object02c9adb0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c9ae00()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c9af50 = 0x20;

extern "C" uint32_t bb_auto_return_constant_02c9af50()
{
    return value_02c9af50;
}

/**
 *
 * The part of the object that auto_return_field_02c9b050 reads.
 *
 */
struct Object02c9b050 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02c9b050; meaning unknown. */
};
static_assert(offsetof(Object02c9b050, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c9b050(const Object02c9b050 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02c9b060 reads.
 *
 */
struct Object02c9b060 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02c9b060; meaning unknown. */
};
static_assert(offsetof(Object02c9b060, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c9b060(const Object02c9b060 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c9b0b0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c9b200 = 0x20;

extern "C" uint32_t bb_auto_return_constant_02c9b200()
{
    return value_02c9b200;
}

/**
 *
 * The part of the object that auto_return_field_02c9b300 reads.
 *
 */
struct Object02c9b300 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02c9b300; meaning unknown. */
};
static_assert(offsetof(Object02c9b300, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c9b300(const Object02c9b300 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02c9b310 reads.
 *
 */
struct Object02c9b310 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02c9b310; meaning unknown. */
};
static_assert(offsetof(Object02c9b310, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c9b310(const Object02c9b310 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c9b360()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c9b4b0 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02c9b4b0()
{
    return value_02c9b4b0;
}

/**
 *
 * The part of the object that auto_return_field_02c9b5b0 reads.
 *
 */
struct Object02c9b5b0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02c9b5b0; meaning unknown. */
};
static_assert(offsetof(Object02c9b5b0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c9b5b0(const Object02c9b5b0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02c9b5c0 reads.
 *
 */
struct Object02c9b5c0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02c9b5c0; meaning unknown. */
};
static_assert(offsetof(Object02c9b5c0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c9b5c0(const Object02c9b5c0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c9b610()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c9b760 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02c9b760()
{
    return value_02c9b760;
}

/**
 *
 * The part of the object that auto_return_field_02c9b860 reads.
 *
 */
struct Object02c9b860 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02c9b860; meaning unknown. */
};
static_assert(offsetof(Object02c9b860, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c9b860(const Object02c9b860 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02c9b870 reads.
 *
 */
struct Object02c9b870 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02c9b870; meaning unknown. */
};
static_assert(offsetof(Object02c9b870, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c9b870(const Object02c9b870 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c9b8c0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c9ba10 = 0x30;

extern "C" uint32_t bb_auto_return_constant_02c9ba10()
{
    return value_02c9ba10;
}

/**
 *
 * The part of the object that auto_return_field_02c9bb10 reads.
 *
 */
struct Object02c9bb10 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02c9bb10; meaning unknown. */
};
static_assert(offsetof(Object02c9bb10, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c9bb10(const Object02c9bb10 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02c9bb20 reads.
 *
 */
struct Object02c9bb20 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02c9bb20; meaning unknown. */
};
static_assert(offsetof(Object02c9bb20, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c9bb20(const Object02c9bb20 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c9bb70()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c9bcc0 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02c9bcc0()
{
    return value_02c9bcc0;
}

/**
 *
 * The part of the object that auto_return_field_02c9bdc0 reads.
 *
 */
struct Object02c9bdc0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02c9bdc0; meaning unknown. */
};
static_assert(offsetof(Object02c9bdc0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c9bdc0(const Object02c9bdc0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02c9bdd0 reads.
 *
 */
struct Object02c9bdd0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02c9bdd0; meaning unknown. */
};
static_assert(offsetof(Object02c9bdd0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c9bdd0(const Object02c9bdd0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c9be20()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c9bf70 = 0x18;

extern "C" uint32_t bb_auto_return_constant_02c9bf70()
{
    return value_02c9bf70;
}

/**
 *
 * The part of the object that auto_return_field_02c9c070 reads.
 *
 */
struct Object02c9c070 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02c9c070; meaning unknown. */
};
static_assert(offsetof(Object02c9c070, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c9c070(const Object02c9c070 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02c9c080 reads.
 *
 */
struct Object02c9c080 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02c9c080; meaning unknown. */
};
static_assert(offsetof(Object02c9c080, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c9c080(const Object02c9c080 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c9c0d0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c9c220 = 0x20;

extern "C" uint32_t bb_auto_return_constant_02c9c220()
{
    return value_02c9c220;
}

/**
 *
 * The part of the object that auto_return_field_02c9c320 reads.
 *
 */
struct Object02c9c320 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02c9c320; meaning unknown. */
};
static_assert(offsetof(Object02c9c320, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c9c320(const Object02c9c320 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02c9c330 reads.
 *
 */
struct Object02c9c330 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02c9c330; meaning unknown. */
};
static_assert(offsetof(Object02c9c330, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c9c330(const Object02c9c330 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c9c380()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c9c4d0 = 0x20;

extern "C" uint32_t bb_auto_return_constant_02c9c4d0()
{
    return value_02c9c4d0;
}

/**
 *
 * The part of the object that auto_return_field_02c9c5d0 reads.
 *
 */
struct Object02c9c5d0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02c9c5d0; meaning unknown. */
};
static_assert(offsetof(Object02c9c5d0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c9c5d0(const Object02c9c5d0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02c9c5e0 reads.
 *
 */
struct Object02c9c5e0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02c9c5e0; meaning unknown. */
};
static_assert(offsetof(Object02c9c5e0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c9c5e0(const Object02c9c5e0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c9c630()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c9c780 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02c9c780()
{
    return value_02c9c780;
}

/**
 *
 * The part of the object that auto_return_field_02c9c880 reads.
 *
 */
struct Object02c9c880 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02c9c880; meaning unknown. */
};
static_assert(offsetof(Object02c9c880, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c9c880(const Object02c9c880 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02c9c890 reads.
 *
 */
struct Object02c9c890 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02c9c890; meaning unknown. */
};
static_assert(offsetof(Object02c9c890, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c9c890(const Object02c9c890 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c9c8e0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c9ca30 = 0x20;

extern "C" uint32_t bb_auto_return_constant_02c9ca30()
{
    return value_02c9ca30;
}

/**
 *
 * The part of the object that auto_return_field_02c9cb30 reads.
 *
 */
struct Object02c9cb30 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02c9cb30; meaning unknown. */
};
static_assert(offsetof(Object02c9cb30, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c9cb30(const Object02c9cb30 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02c9cb40 reads.
 *
 */
struct Object02c9cb40 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02c9cb40; meaning unknown. */
};
static_assert(offsetof(Object02c9cb40, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c9cb40(const Object02c9cb40 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c9cb90()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c9cce0 = 0x20;

extern "C" uint32_t bb_auto_return_constant_02c9cce0()
{
    return value_02c9cce0;
}

/**
 *
 * The part of the object that auto_return_field_02c9cde0 reads.
 *
 */
struct Object02c9cde0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02c9cde0; meaning unknown. */
};
static_assert(offsetof(Object02c9cde0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c9cde0(const Object02c9cde0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02c9cdf0 reads.
 *
 */
struct Object02c9cdf0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02c9cdf0; meaning unknown. */
};
static_assert(offsetof(Object02c9cdf0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c9cdf0(const Object02c9cdf0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c9ce40()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c9cf90 = 0x20;

extern "C" uint32_t bb_auto_return_constant_02c9cf90()
{
    return value_02c9cf90;
}

/**
 *
 * The part of the object that auto_return_field_02c9d090 reads.
 *
 */
struct Object02c9d090 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02c9d090; meaning unknown. */
};
static_assert(offsetof(Object02c9d090, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c9d090(const Object02c9d090 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02c9d0a0 reads.
 *
 */
struct Object02c9d0a0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02c9d0a0; meaning unknown. */
};
static_assert(offsetof(Object02c9d0a0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c9d0a0(const Object02c9d0a0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c9d0f0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c9d240 = 0x20;

extern "C" uint32_t bb_auto_return_constant_02c9d240()
{
    return value_02c9d240;
}

/**
 *
 * The part of the object that auto_return_field_02c9d340 reads.
 *
 */
struct Object02c9d340 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02c9d340; meaning unknown. */
};
static_assert(offsetof(Object02c9d340, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c9d340(const Object02c9d340 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02c9d350 reads.
 *
 */
struct Object02c9d350 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02c9d350; meaning unknown. */
};
static_assert(offsetof(Object02c9d350, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c9d350(const Object02c9d350 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c9d3a0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c9d4f0 = 0x20;

extern "C" uint32_t bb_auto_return_constant_02c9d4f0()
{
    return value_02c9d4f0;
}

/**
 *
 * The part of the object that auto_return_field_02c9d5f0 reads.
 *
 */
struct Object02c9d5f0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02c9d5f0; meaning unknown. */
};
static_assert(offsetof(Object02c9d5f0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c9d5f0(const Object02c9d5f0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02c9d600 reads.
 *
 */
struct Object02c9d600 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02c9d600; meaning unknown. */
};
static_assert(offsetof(Object02c9d600, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c9d600(const Object02c9d600 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c9d650()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c9d7a0 = 0x20;

extern "C" uint32_t bb_auto_return_constant_02c9d7a0()
{
    return value_02c9d7a0;
}

/**
 *
 * The part of the object that auto_return_field_02c9d8a0 reads.
 *
 */
struct Object02c9d8a0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02c9d8a0; meaning unknown. */
};
static_assert(offsetof(Object02c9d8a0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c9d8a0(const Object02c9d8a0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02c9d8b0 reads.
 *
 */
struct Object02c9d8b0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02c9d8b0; meaning unknown. */
};
static_assert(offsetof(Object02c9d8b0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c9d8b0(const Object02c9d8b0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c9d900()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c9da50 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02c9da50()
{
    return value_02c9da50;
}

/**
 *
 * The part of the object that auto_return_field_02c9db50 reads.
 *
 */
struct Object02c9db50 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02c9db50; meaning unknown. */
};
static_assert(offsetof(Object02c9db50, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c9db50(const Object02c9db50 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02c9db60 reads.
 *
 */
struct Object02c9db60 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02c9db60; meaning unknown. */
};
static_assert(offsetof(Object02c9db60, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c9db60(const Object02c9db60 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c9dbb0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c9dd00 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02c9dd00()
{
    return value_02c9dd00;
}

/**
 *
 * The part of the object that auto_return_field_02c9de00 reads.
 *
 */
struct Object02c9de00 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02c9de00; meaning unknown. */
};
static_assert(offsetof(Object02c9de00, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c9de00(const Object02c9de00 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02c9de10 reads.
 *
 */
struct Object02c9de10 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02c9de10; meaning unknown. */
};
static_assert(offsetof(Object02c9de10, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c9de10(const Object02c9de10 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c9de60()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c9dfb0 = 0x20;

extern "C" uint32_t bb_auto_return_constant_02c9dfb0()
{
    return value_02c9dfb0;
}

/**
 *
 * The part of the object that auto_return_field_02c9e0b0 reads.
 *
 */
struct Object02c9e0b0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02c9e0b0; meaning unknown. */
};
static_assert(offsetof(Object02c9e0b0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c9e0b0(const Object02c9e0b0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02c9e0c0 reads.
 *
 */
struct Object02c9e0c0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02c9e0c0; meaning unknown. */
};
static_assert(offsetof(Object02c9e0c0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c9e0c0(const Object02c9e0c0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c9e110()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c9e260 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02c9e260()
{
    return value_02c9e260;
}

/**
 *
 * The part of the object that auto_return_field_02c9e360 reads.
 *
 */
struct Object02c9e360 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02c9e360; meaning unknown. */
};
static_assert(offsetof(Object02c9e360, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c9e360(const Object02c9e360 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02c9e370 reads.
 *
 */
struct Object02c9e370 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02c9e370; meaning unknown. */
};
static_assert(offsetof(Object02c9e370, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c9e370(const Object02c9e370 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c9e3c0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c9e510 = 0x18;

extern "C" uint32_t bb_auto_return_constant_02c9e510()
{
    return value_02c9e510;
}

/**
 *
 * The part of the object that auto_return_field_02c9e610 reads.
 *
 */
struct Object02c9e610 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02c9e610; meaning unknown. */
};
static_assert(offsetof(Object02c9e610, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c9e610(const Object02c9e610 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02c9e620 reads.
 *
 */
struct Object02c9e620 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02c9e620; meaning unknown. */
};
static_assert(offsetof(Object02c9e620, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c9e620(const Object02c9e620 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c9e670()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c9e7c0 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02c9e7c0()
{
    return value_02c9e7c0;
}

/**
 *
 * The part of the object that auto_return_field_02c9e8c0 reads.
 *
 */
struct Object02c9e8c0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02c9e8c0; meaning unknown. */
};
static_assert(offsetof(Object02c9e8c0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c9e8c0(const Object02c9e8c0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02c9e8d0 reads.
 *
 */
struct Object02c9e8d0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02c9e8d0; meaning unknown. */
};
static_assert(offsetof(Object02c9e8d0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c9e8d0(const Object02c9e8d0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c9e920()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c9ea70 = 0x20;

extern "C" uint32_t bb_auto_return_constant_02c9ea70()
{
    return value_02c9ea70;
}

/**
 *
 * The part of the object that auto_return_field_02c9eb70 reads.
 *
 */
struct Object02c9eb70 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02c9eb70; meaning unknown. */
};
static_assert(offsetof(Object02c9eb70, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c9eb70(const Object02c9eb70 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02c9eb80 reads.
 *
 */
struct Object02c9eb80 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02c9eb80; meaning unknown. */
};
static_assert(offsetof(Object02c9eb80, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c9eb80(const Object02c9eb80 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c9ebd0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c9ed20 = 0x20;

extern "C" uint32_t bb_auto_return_constant_02c9ed20()
{
    return value_02c9ed20;
}

/**
 *
 * The part of the object that auto_return_field_02c9ee20 reads.
 *
 */
struct Object02c9ee20 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02c9ee20; meaning unknown. */
};
static_assert(offsetof(Object02c9ee20, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c9ee20(const Object02c9ee20 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02c9ee30 reads.
 *
 */
struct Object02c9ee30 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02c9ee30; meaning unknown. */
};
static_assert(offsetof(Object02c9ee30, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c9ee30(const Object02c9ee30 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c9ee80()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c9efd0 = 0x20;

extern "C" uint32_t bb_auto_return_constant_02c9efd0()
{
    return value_02c9efd0;
}

/**
 *
 * The part of the object that auto_return_field_02c9f0d0 reads.
 *
 */
struct Object02c9f0d0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02c9f0d0; meaning unknown. */
};
static_assert(offsetof(Object02c9f0d0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c9f0d0(const Object02c9f0d0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02c9f0e0 reads.
 *
 */
struct Object02c9f0e0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02c9f0e0; meaning unknown. */
};
static_assert(offsetof(Object02c9f0e0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c9f0e0(const Object02c9f0e0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c9f130()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c9f280 = 0x20;

extern "C" uint32_t bb_auto_return_constant_02c9f280()
{
    return value_02c9f280;
}

/**
 *
 * The part of the object that auto_return_field_02c9f380 reads.
 *
 */
struct Object02c9f380 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02c9f380; meaning unknown. */
};
static_assert(offsetof(Object02c9f380, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c9f380(const Object02c9f380 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02c9f390 reads.
 *
 */
struct Object02c9f390 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02c9f390; meaning unknown. */
};
static_assert(offsetof(Object02c9f390, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c9f390(const Object02c9f390 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c9f3e0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c9f530 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02c9f530()
{
    return value_02c9f530;
}

/**
 *
 * The part of the object that auto_return_field_02c9f630 reads.
 *
 */
struct Object02c9f630 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02c9f630; meaning unknown. */
};
static_assert(offsetof(Object02c9f630, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c9f630(const Object02c9f630 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02c9f640 reads.
 *
 */
struct Object02c9f640 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02c9f640; meaning unknown. */
};
static_assert(offsetof(Object02c9f640, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c9f640(const Object02c9f640 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c9f690()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c9f7e0 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02c9f7e0()
{
    return value_02c9f7e0;
}

/**
 *
 * The part of the object that auto_return_field_02c9f8e0 reads.
 *
 */
struct Object02c9f8e0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02c9f8e0; meaning unknown. */
};
static_assert(offsetof(Object02c9f8e0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c9f8e0(const Object02c9f8e0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02c9f8f0 reads.
 *
 */
struct Object02c9f8f0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02c9f8f0; meaning unknown. */
};
static_assert(offsetof(Object02c9f8f0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c9f8f0(const Object02c9f8f0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c9f940()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c9fa90 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02c9fa90()
{
    return value_02c9fa90;
}

/**
 *
 * The part of the object that auto_return_field_02c9fb90 reads.
 *
 */
struct Object02c9fb90 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02c9fb90; meaning unknown. */
};
static_assert(offsetof(Object02c9fb90, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c9fb90(const Object02c9fb90 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02c9fba0 reads.
 *
 */
struct Object02c9fba0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02c9fba0; meaning unknown. */
};
static_assert(offsetof(Object02c9fba0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c9fba0(const Object02c9fba0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c9fbf0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c9fd40 = 0x18;

extern "C" uint32_t bb_auto_return_constant_02c9fd40()
{
    return value_02c9fd40;
}

/**
 *
 * The part of the object that auto_return_field_02c9fe40 reads.
 *
 */
struct Object02c9fe40 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02c9fe40; meaning unknown. */
};
static_assert(offsetof(Object02c9fe40, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c9fe40(const Object02c9fe40 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02c9fe50 reads.
 *
 */
struct Object02c9fe50 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02c9fe50; meaning unknown. */
};
static_assert(offsetof(Object02c9fe50, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c9fe50(const Object02c9fe50 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c9fea0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c9fff0 = 0x20;

extern "C" uint32_t bb_auto_return_constant_02c9fff0()
{
    return value_02c9fff0;
}
