// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_01a900a0 reads.
 *
 */
struct Object01a900a0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01a900a0; meaning unknown. */
};
static_assert(offsetof(Object01a900a0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a900a0(const Object01a900a0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01a900b0 reads.
 *
 */
struct Object01a900b0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01a900b0; meaning unknown. */
};
static_assert(offsetof(Object01a900b0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a900b0(const Object01a900b0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a90100()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01a90380 = 0x180;

extern "C" uint32_t bb_auto_return_constant_01a90380()
{
    return value_01a90380;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01a907c0 = 0x1f5;

extern "C" uint32_t bb_auto_return_constant_01a907c0()
{
    return value_01a907c0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01a907d0 = 0x2aa;

extern "C" uint32_t bb_auto_return_constant_01a907d0()
{
    return value_01a907d0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a90810()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01a90820 = 0xffffffff;

extern "C" uint32_t bb_auto_return_constant_01a90820()
{
    return value_01a90820;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01a909e0 = 0x228;

extern "C" uint32_t bb_auto_return_constant_01a909e0()
{
    return value_01a909e0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a91330()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a915d0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a915f0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01a91740 reads.
 *
 */
struct Object01a91740 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01a91740; meaning unknown. */
};
static_assert(offsetof(Object01a91740, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a91740(const Object01a91740 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01a91750 reads.
 *
 */
struct Object01a91750 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01a91750; meaning unknown. */
};
static_assert(offsetof(Object01a91750, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a91750(const Object01a91750 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a917a0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01a91a20 = 0x1b0;

extern "C" uint32_t bb_auto_return_constant_01a91a20()
{
    return value_01a91a20;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01a91e10 = 0x1f6;

extern "C" uint32_t bb_auto_return_constant_01a91e10()
{
    return value_01a91e10;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01a91e20 = 0x2a9;

extern "C" uint32_t bb_auto_return_constant_01a91e20()
{
    return value_01a91e20;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01a91e70 = 0xffffffff;

extern "C" uint32_t bb_auto_return_constant_01a91e70()
{
    return value_01a91e70;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a91f30()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a92b10()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a92b30()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01a92c80 reads.
 *
 */
struct Object01a92c80 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01a92c80; meaning unknown. */
};
static_assert(offsetof(Object01a92c80, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a92c80(const Object01a92c80 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01a92c90 reads.
 *
 */
struct Object01a92c90 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01a92c90; meaning unknown. */
};
static_assert(offsetof(Object01a92c90, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a92c90(const Object01a92c90 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a92ce0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01a92f60 = 0x1b0;

extern "C" uint32_t bb_auto_return_constant_01a92f60()
{
    return value_01a92f60;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a93d50()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01a93d60 = 0xffffffff;

extern "C" uint32_t bb_auto_return_constant_01a93d60()
{
    return value_01a93d60;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a93d70()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a93d80()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a949a0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a949b0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a949c0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a949d0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a949e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a94d10()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a94d30()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01a94e80 reads.
 *
 */
struct Object01a94e80 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01a94e80; meaning unknown. */
};
static_assert(offsetof(Object01a94e80, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a94e80(const Object01a94e80 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01a94e90 reads.
 *
 */
struct Object01a94e90 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01a94e90; meaning unknown. */
};
static_assert(offsetof(Object01a94e90, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a94e90(const Object01a94e90 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a94ee0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01a95160 = 0x1a8;

extern "C" uint32_t bb_auto_return_constant_01a95160()
{
    return value_01a95160;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a96290()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a962b0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01a96400 reads.
 *
 */
struct Object01a96400 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01a96400; meaning unknown. */
};
static_assert(offsetof(Object01a96400, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a96400(const Object01a96400 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01a96410 reads.
 *
 */
struct Object01a96410 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01a96410; meaning unknown. */
};
static_assert(offsetof(Object01a96410, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a96410(const Object01a96410 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a96460()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01a966e0 = 0x178;

extern "C" uint32_t bb_auto_return_constant_01a966e0()
{
    return value_01a966e0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a97db0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a97dd0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01a97f20 reads.
 *
 */
struct Object01a97f20 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01a97f20; meaning unknown. */
};
static_assert(offsetof(Object01a97f20, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a97f20(const Object01a97f20 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01a97f30 reads.
 *
 */
struct Object01a97f30 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01a97f30; meaning unknown. */
};
static_assert(offsetof(Object01a97f30, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a97f30(const Object01a97f30 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a97f80()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01a98200 = 0x1a8;

extern "C" uint32_t bb_auto_return_constant_01a98200()
{
    return value_01a98200;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a99b10()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a99b30()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01a99c80 reads.
 *
 */
struct Object01a99c80 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01a99c80; meaning unknown. */
};
static_assert(offsetof(Object01a99c80, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a99c80(const Object01a99c80 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01a99c90 reads.
 *
 */
struct Object01a99c90 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01a99c90; meaning unknown. */
};
static_assert(offsetof(Object01a99c90, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a99c90(const Object01a99c90 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a99ce0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01a99f60 = 0x180;

extern "C" uint32_t bb_auto_return_constant_01a99f60()
{
    return value_01a99f60;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a9d480()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a9d810()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a9d830()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01a9d980 reads.
 *
 */
struct Object01a9d980 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01a9d980; meaning unknown. */
};
static_assert(offsetof(Object01a9d980, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a9d980(const Object01a9d980 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01a9d990 reads.
 *
 */
struct Object01a9d990 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01a9d990; meaning unknown. */
};
static_assert(offsetof(Object01a9d990, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a9d990(const Object01a9d990 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a9d9e0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01a9dc60 = 0x210;

extern "C" uint32_t bb_auto_return_constant_01a9dc60()
{
    return value_01a9dc60;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a9e0b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a9ed70()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a9ed90()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01a9eee0 reads.
 *
 */
struct Object01a9eee0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01a9eee0; meaning unknown. */
};
static_assert(offsetof(Object01a9eee0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a9eee0(const Object01a9eee0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01a9eef0 reads.
 *
 */
struct Object01a9eef0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01a9eef0; meaning unknown. */
};
static_assert(offsetof(Object01a9eef0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a9eef0(const Object01a9eef0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a9ef40()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01a9f1c0 = 0x1d0;

extern "C" uint32_t bb_auto_return_constant_01a9f1c0()
{
    return value_01a9f1c0;
}
