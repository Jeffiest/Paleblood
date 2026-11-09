// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dd0600()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dd0660()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dd11c0()
{
}

/**
 *
 * The part of the object that auto_return_field_02dd1a80 reads.
 *
 */
struct Object02dd1a80 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02dd1a80; meaning unknown. */
};
static_assert(offsetof(Object02dd1a80, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02dd1a80(const Object02dd1a80 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02dd1a90 reads.
 *
 */
struct Object02dd1a90 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02dd1a90; meaning unknown. */
};
static_assert(offsetof(Object02dd1a90, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02dd1a90(const Object02dd1a90 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02dd1ae0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02dd1b00 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_02dd1b00()
{
    return value_02dd1b00;
}

/**
 *
 * The part of the object that auto_return_field_02dd1bd0 reads.
 *
 */
struct Object02dd1bd0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02dd1bd0; meaning unknown. */
};
static_assert(offsetof(Object02dd1bd0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02dd1bd0(const Object02dd1bd0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02dd1be0 reads.
 *
 */
struct Object02dd1be0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02dd1be0; meaning unknown. */
};
static_assert(offsetof(Object02dd1be0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02dd1be0(const Object02dd1be0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02dd1c30()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02dd1c50 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_02dd1c50()
{
    return value_02dd1c50;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dd2550()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dd2560()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dd2570()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dd2580()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dd2750()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dd2760()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dd2770()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dd2780()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dd2ab0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dd2ad0()
{
}

/**
 *
 * The part of the object that auto_return_field_02dd2b20 reads.
 *
 */
struct Object02dd2b20 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02dd2b20; meaning unknown. */
};
static_assert(offsetof(Object02dd2b20, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02dd2b20(const Object02dd2b20 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02dd2b30 reads.
 *
 */
struct Object02dd2b30 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02dd2b30; meaning unknown. */
};
static_assert(offsetof(Object02dd2b30, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02dd2b30(const Object02dd2b30 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02dd2b80()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02dd2ba0 = 0x18;

extern "C" uint32_t bb_auto_return_constant_02dd2ba0()
{
    return value_02dd2ba0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dd2c40()
{
}

/**
 *
 * The part of the object that auto_return_field_02dd2c90 reads.
 *
 */
struct Object02dd2c90 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02dd2c90; meaning unknown. */
};
static_assert(offsetof(Object02dd2c90, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02dd2c90(const Object02dd2c90 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02dd2ca0 reads.
 *
 */
struct Object02dd2ca0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02dd2ca0; meaning unknown. */
};
static_assert(offsetof(Object02dd2ca0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02dd2ca0(const Object02dd2ca0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02dd2cf0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02dd2d10 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02dd2d10()
{
    return value_02dd2d10;
}

/**
 *
 * The part of the object that auto_return_field_02dd2de0 reads.
 *
 */
struct Object02dd2de0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02dd2de0; meaning unknown. */
};
static_assert(offsetof(Object02dd2de0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02dd2de0(const Object02dd2de0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02dd2df0 reads.
 *
 */
struct Object02dd2df0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02dd2df0; meaning unknown. */
};
static_assert(offsetof(Object02dd2df0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02dd2df0(const Object02dd2df0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02dd2e40()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02dd2e60 = 0x70;

extern "C" uint32_t bb_auto_return_constant_02dd2e60()
{
    return value_02dd2e60;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dd2f00()
{
}

/**
 *
 * The part of the object that auto_return_field_02dd2f50 reads.
 *
 */
struct Object02dd2f50 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02dd2f50; meaning unknown. */
};
static_assert(offsetof(Object02dd2f50, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02dd2f50(const Object02dd2f50 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02dd2f60 reads.
 *
 */
struct Object02dd2f60 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02dd2f60; meaning unknown. */
};
static_assert(offsetof(Object02dd2f60, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02dd2f60(const Object02dd2f60 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02dd2fb0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02dd2fd0 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02dd2fd0()
{
    return value_02dd2fd0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dd3070()
{
}

/**
 *
 * The part of the object that auto_return_field_02dd3090 reads.
 *
 */
struct Object02dd3090 {
    uint8_t unknown_0x0000[0x8];
    uint64_t value_0x0008; /**< Read by auto_return_field_02dd3090; meaning unknown. */
};
static_assert(offsetof(Object02dd3090, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02dd3090(const Object02dd3090 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_02dd3100 reads.
 *
 */
struct Object02dd3100 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02dd3100; meaning unknown. */
};
static_assert(offsetof(Object02dd3100, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02dd3100(const Object02dd3100 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02dd3110 reads.
 *
 */
struct Object02dd3110 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02dd3110; meaning unknown. */
};
static_assert(offsetof(Object02dd3110, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02dd3110(const Object02dd3110 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02dd3160()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02dd3180 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02dd3180()
{
    return value_02dd3180;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dd3220()
{
}

/**
 *
 * The part of the object that auto_return_field_02dd3240 reads.
 *
 */
struct Object02dd3240 {
    uint8_t unknown_0x0000[0x8];
    uint64_t value_0x0008; /**< Read by auto_return_field_02dd3240; meaning unknown. */
};
static_assert(offsetof(Object02dd3240, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02dd3240(const Object02dd3240 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_02dd32b0 reads.
 *
 */
struct Object02dd32b0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02dd32b0; meaning unknown. */
};
static_assert(offsetof(Object02dd32b0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02dd32b0(const Object02dd32b0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02dd32c0 reads.
 *
 */
struct Object02dd32c0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02dd32c0; meaning unknown. */
};
static_assert(offsetof(Object02dd32c0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02dd32c0(const Object02dd32c0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02dd3310()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02dd3330 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02dd3330()
{
    return value_02dd3330;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dd33d0()
{
}

/**
 *
 * The part of the object that auto_return_field_02dd3420 reads.
 *
 */
struct Object02dd3420 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02dd3420; meaning unknown. */
};
static_assert(offsetof(Object02dd3420, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02dd3420(const Object02dd3420 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02dd3430 reads.
 *
 */
struct Object02dd3430 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02dd3430; meaning unknown. */
};
static_assert(offsetof(Object02dd3430, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02dd3430(const Object02dd3430 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02dd3480()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02dd34a0 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02dd34a0()
{
    return value_02dd34a0;
}

/**
 *
 * The part of the object that auto_return_field_02dd3770 reads.
 *
 */
struct Object02dd3770 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02dd3770; meaning unknown. */
};
static_assert(offsetof(Object02dd3770, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02dd3770(const Object02dd3770 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02dd3780 reads.
 *
 */
struct Object02dd3780 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02dd3780; meaning unknown. */
};
static_assert(offsetof(Object02dd3780, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02dd3780(const Object02dd3780 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02dd37d0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02dd37f0 = 0x70;

extern "C" uint32_t bb_auto_return_constant_02dd37f0()
{
    return value_02dd37f0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dd56e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dd5740()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dd5920()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dd7460()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dd74c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dd91d0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02dd9b30()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02dd9b40()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02dd9b50()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02dd9b60()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02dd9b70()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02dd9b80()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02dd9b90()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02dd9ba0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02dd9bb0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02dd9bc0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02dd9bd0 = 0x2;

extern "C" uint32_t bb_auto_return_constant_02dd9bd0()
{
    return value_02dd9bd0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dd9be0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dd9bf0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dd9c00()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dd9c10()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dd9c20()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dd9c30()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dd9c40()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dd9c50()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dd9c60()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02dd9c70 = 0x4;

extern "C" uint32_t bb_auto_return_constant_02dd9c70()
{
    return value_02dd9c70;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02ddb190()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02ddb1f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02ddb460()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02ddb4c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02ddb5f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02ddb610()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02ddb620()
{
}

/**
 *
 * The part of the object that auto_return_field_02ddb660 reads.
 *
 */
struct Object02ddb660 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02ddb660; meaning unknown. */
};
static_assert(offsetof(Object02ddb660, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02ddb660(const Object02ddb660 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02ddb670 reads.
 *
 */
struct Object02ddb670 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02ddb670; meaning unknown. */
};
static_assert(offsetof(Object02ddb670, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02ddb670(const Object02ddb670 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02ddb6c0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02ddb6e0 = 0x40;

extern "C" uint32_t bb_auto_return_constant_02ddb6e0()
{
    return value_02ddb6e0;
}

/**
 *
 * The part of the object that auto_return_field_02ddcda0 reads.
 *
 */
struct Object02ddcda0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02ddcda0; meaning unknown. */
};
static_assert(offsetof(Object02ddcda0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02ddcda0(const Object02ddcda0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02ddcdb0 reads.
 *
 */
struct Object02ddcdb0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02ddcdb0; meaning unknown. */
};
static_assert(offsetof(Object02ddcdb0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02ddcdb0(const Object02ddcdb0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02ddce00()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02ddce20 = 0x120;

extern "C" uint32_t bb_auto_return_constant_02ddce20()
{
    return value_02ddce20;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02ddd300()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dddd70()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02ddddd0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02ddf850()
{
}
