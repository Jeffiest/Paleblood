// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_021c0c20()
{
}

/**
 *
 * The part of the object that auto_return_field_021c20e0 reads.
 *
 */
struct Object021c20e0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_021c20e0; meaning unknown. */
};
static_assert(offsetof(Object021c20e0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_021c20e0(const Object021c20e0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_021c20f0 reads.
 *
 */
struct Object021c20f0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_021c20f0; meaning unknown. */
};
static_assert(offsetof(Object021c20f0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_021c20f0(const Object021c20f0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_021c2140()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_021c23c0 = 0x98;

extern "C" uint32_t bb_auto_return_constant_021c23c0()
{
    return value_021c23c0;
}

/**
 *
 * The part of the object that auto_return_field_021c2970 reads.
 *
 */
struct Object021c2970 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_021c2970; meaning unknown. */
};
static_assert(offsetof(Object021c2970, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_021c2970(const Object021c2970 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_021c2980 reads.
 *
 */
struct Object021c2980 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_021c2980; meaning unknown. */
};
static_assert(offsetof(Object021c2980, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_021c2980(const Object021c2980 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_021c29d0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_021c2c50 = 0x90;

extern "C" uint32_t bb_auto_return_constant_021c2c50()
{
    return value_021c2c50;
}

/**
 *
 * The part of the object that auto_return_field_021c3710 reads.
 *
 */
struct Object021c3710 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_021c3710; meaning unknown. */
};
static_assert(offsetof(Object021c3710, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_021c3710(const Object021c3710 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_021c3720 reads.
 *
 */
struct Object021c3720 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_021c3720; meaning unknown. */
};
static_assert(offsetof(Object021c3720, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_021c3720(const Object021c3720 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_021c3770()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_021c39f0 = 0x98;

extern "C" uint32_t bb_auto_return_constant_021c39f0()
{
    return value_021c39f0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_021c3c00()
{
}

/**
 *
 * The part of the object that auto_return_field_021c3c10 reads.
 *
 */
struct Object021c3c10 {
    uint8_t unknown_0x0000[0x8];
    uint64_t value_0x0008; /**< Read by auto_return_field_021c3c10; meaning unknown. */
};
static_assert(offsetof(Object021c3c10, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_021c3c10(const Object021c3c10 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_021c41c0 reads.
 *
 */
struct Object021c41c0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_021c41c0; meaning unknown. */
};
static_assert(offsetof(Object021c41c0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_021c41c0(const Object021c41c0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_021c41d0 reads.
 *
 */
struct Object021c41d0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_021c41d0; meaning unknown. */
};
static_assert(offsetof(Object021c41d0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_021c41d0(const Object021c41d0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_021c4220()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_021c44a0 = 0x10;

extern "C" uint32_t bb_auto_return_constant_021c44a0()
{
    return value_021c44a0;
}

/**
 *
 * The part of the object that auto_return_field_021c4830 reads.
 *
 */
struct Object021c4830 {
    uint8_t unknown_0x0000[0xc0];
    uint32_t value_0x00c0; /**< Read by auto_return_field_021c4830; meaning unknown. */
};
static_assert(offsetof(Object021c4830, value_0x00c0) == 0xc0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_021c4830(const Object021c4830 *self)
{
    return self->value_0x00c0;
}

/**
 *
 * The part of the object that auto_return_field_021c4e70 reads.
 *
 */
struct Object021c4e70 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_021c4e70; meaning unknown. */
};
static_assert(offsetof(Object021c4e70, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_021c4e70(const Object021c4e70 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_021c4e80 reads.
 *
 */
struct Object021c4e80 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_021c4e80; meaning unknown. */
};
static_assert(offsetof(Object021c4e80, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_021c4e80(const Object021c4e80 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_021c4ed0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_021c5150 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_021c5150()
{
    return value_021c5150;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_021c5360()
{
}

/**
 *
 * The part of the object that auto_return_field_021c5370 reads.
 *
 */
struct Object021c5370 {
    uint8_t unknown_0x0000[0x8];
    uint64_t value_0x0008; /**< Read by auto_return_field_021c5370; meaning unknown. */
};
static_assert(offsetof(Object021c5370, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_021c5370(const Object021c5370 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_021c5920 reads.
 *
 */
struct Object021c5920 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_021c5920; meaning unknown. */
};
static_assert(offsetof(Object021c5920, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_021c5920(const Object021c5920 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_021c5930 reads.
 *
 */
struct Object021c5930 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_021c5930; meaning unknown. */
};
static_assert(offsetof(Object021c5930, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_021c5930(const Object021c5930 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_021c5980()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_021c5c00 = 0x10;

extern "C" uint32_t bb_auto_return_constant_021c5c00()
{
    return value_021c5c00;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_021c5c70()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_021c5f60()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_021c6320 = 0x1;

extern "C" uint32_t bb_auto_return_constant_021c6320()
{
    return value_021c6320;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_021c6330()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_021c66b0()
{
}

/**
 *
 * The part of the object that auto_return_field_021c6fb0 reads.
 *
 */
struct Object021c6fb0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_021c6fb0; meaning unknown. */
};
static_assert(offsetof(Object021c6fb0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_021c6fb0(const Object021c6fb0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_021c6fc0 reads.
 *
 */
struct Object021c6fc0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_021c6fc0; meaning unknown. */
};
static_assert(offsetof(Object021c6fc0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_021c6fc0(const Object021c6fc0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_021c7010()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_021c7290 = 0x18;

extern "C" uint32_t bb_auto_return_constant_021c7290()
{
    return value_021c7290;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_021c72d0()
{
}

/**
 *
 * The part of the object that auto_return_field_021c7bf0 reads.
 *
 */
struct Object021c7bf0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_021c7bf0; meaning unknown. */
};
static_assert(offsetof(Object021c7bf0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_021c7bf0(const Object021c7bf0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_021c7c00 reads.
 *
 */
struct Object021c7c00 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_021c7c00; meaning unknown. */
};
static_assert(offsetof(Object021c7c00, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_021c7c00(const Object021c7c00 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_021c7c50()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_021c7cf0 = 0x18;

extern "C" uint32_t bb_auto_return_constant_021c7cf0()
{
    return value_021c7cf0;
}

/**
 *
 * The part of the object that auto_return_field_021c8030 reads.
 *
 */
struct Object021c8030 {
    uint8_t unknown_0x0000[0x40];
    uint32_t value_0x0040; /**< Read by auto_return_field_021c8030; meaning unknown. */
};
static_assert(offsetof(Object021c8030, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_021c8030(const Object021c8030 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_021c81e0 reads.
 *
 */
struct Object021c81e0 {
    uint8_t unknown_0x0000[0x64];
    uint8_t value_0x0064; /**< Read by auto_return_field_021c81e0; meaning unknown. */
};
static_assert(offsetof(Object021c81e0, value_0x0064) == 0x64);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_021c81e0(const Object021c81e0 *self)
{
    return self->value_0x0064;
}

/**
 *
 * The part of the object that auto_return_field_021c81f0 reads.
 *
 */
struct Object021c81f0 {
    uint8_t unknown_0x0000[0x60];
    uint32_t value_0x0060; /**< Read by auto_return_field_021c81f0; meaning unknown. */
};
static_assert(offsetof(Object021c81f0, value_0x0060) == 0x60);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_021c81f0(const Object021c81f0 *self)
{
    return self->value_0x0060;
}

/**
 *
 * The part of the object that auto_return_field_021c8210 reads.
 *
 */
struct Object021c8210 {
    uint8_t unknown_0x0000[0x38];
    uint64_t value_0x0038; /**< Read by auto_return_field_021c8210; meaning unknown. */
};
static_assert(offsetof(Object021c8210, value_0x0038) == 0x38);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_021c8210(const Object021c8210 *self)
{
    return self->value_0x0038;
}

/**
 *
 * The part of the object that auto_return_member_address_021c8220 reads.
 *
 */
struct Object021c8220 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_021c8220; meaning unknown. */
};
static_assert(offsetof(Object021c8220, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_021c8220(Object021c8220 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_021c84a0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_021c84a0()
{
    return value_021c84a0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_021c84b0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_021c84b0()
{
    return value_021c84b0;
}

/**
 *
 * The part of the object that auto_return_field_021c8b90 reads.
 *
 */
struct Object021c8b90 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_021c8b90; meaning unknown. */
};
static_assert(offsetof(Object021c8b90, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_021c8b90(const Object021c8b90 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_021c8ba0 reads.
 *
 */
struct Object021c8ba0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_021c8ba0; meaning unknown. */
};
static_assert(offsetof(Object021c8ba0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_021c8ba0(const Object021c8ba0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_021c8bf0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_021c8f70 = 0x20;

extern "C" uint32_t bb_auto_return_constant_021c8f70()
{
    return value_021c8f70;
}

/**
 *
 * The part of the object that auto_return_field_021ca330 reads.
 *
 */
struct Object021ca330 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_021ca330; meaning unknown. */
};
static_assert(offsetof(Object021ca330, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_021ca330(const Object021ca330 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_021ca340 reads.
 *
 */
struct Object021ca340 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_021ca340; meaning unknown. */
};
static_assert(offsetof(Object021ca340, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_021ca340(const Object021ca340 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_021ca390()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_021ca7c0 = 0x30;

extern "C" uint32_t bb_auto_return_constant_021ca7c0()
{
    return value_021ca7c0;
}

/**
 *
 * The part of the object that auto_return_field_021cade0 reads.
 *
 */
struct Object021cade0 {
    uint8_t unknown_0x0000[0xb8];
    uint64_t value_0x00b8; /**< Read by auto_return_field_021cade0; meaning unknown. */
};
static_assert(offsetof(Object021cade0, value_0x00b8) == 0xb8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_021cade0(const Object021cade0 *self)
{
    return self->value_0x00b8;
}

/**
 *
 * The part of the object that auto_return_field_021cb0e0 reads.
 *
 */
struct Object021cb0e0 {
    uint8_t unknown_0x0000[0xa0];
    uint64_t value_0x00a0; /**< Read by auto_return_field_021cb0e0; meaning unknown. */
};
static_assert(offsetof(Object021cb0e0, value_0x00a0) == 0xa0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_021cb0e0(const Object021cb0e0 *self)
{
    return self->value_0x00a0;
}

/**
 *
 * The part of the object that auto_return_field_021cb0f0 reads.
 *
 */
struct Object021cb0f0 {
    uint8_t unknown_0x0000[0xa8];
    uint64_t value_0x00a8; /**< Read by auto_return_field_021cb0f0; meaning unknown. */
};
static_assert(offsetof(Object021cb0f0, value_0x00a8) == 0xa8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_021cb0f0(const Object021cb0f0 *self)
{
    return self->value_0x00a8;
}

/**
 *
 * The part of the object that auto_return_field_021cb100 reads.
 *
 */
struct Object021cb100 {
    uint8_t unknown_0x0000[0xb0];
    uint64_t value_0x00b0; /**< Read by auto_return_field_021cb100; meaning unknown. */
};
static_assert(offsetof(Object021cb100, value_0x00b0) == 0xb0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_021cb100(const Object021cb100 *self)
{
    return self->value_0x00b0;
}

/**
 *
 * The part of the object that auto_return_member_address_021cb4d0 reads.
 *
 */
struct Object021cb4d0 {
    uint8_t unknown_0x0000[0x70];
    uint8_t member_0x0070; /**< Read by auto_return_member_address_021cb4d0; meaning unknown. */
};
static_assert(offsetof(Object021cb4d0, member_0x0070) == 0x70);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_021cb4d0(Object021cb4d0 *self)
{
    return &self->member_0x0070;
}

/**
 *
 * The part of the object that auto_return_field_021cb4e0 reads.
 *
 */
struct Object021cb4e0 {
    uint8_t unknown_0x0000[0x90];
    uint64_t value_0x0090; /**< Read by auto_return_field_021cb4e0; meaning unknown. */
};
static_assert(offsetof(Object021cb4e0, value_0x0090) == 0x90);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_021cb4e0(const Object021cb4e0 *self)
{
    return self->value_0x0090;
}

/**
 *
 * The part of the object that auto_return_field_021cbb50 reads.
 *
 */
struct Object021cbb50 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_021cbb50; meaning unknown. */
};
static_assert(offsetof(Object021cbb50, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_021cbb50(const Object021cbb50 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_021cbb60 reads.
 *
 */
struct Object021cbb60 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_021cbb60; meaning unknown. */
};
static_assert(offsetof(Object021cbb60, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_021cbb60(const Object021cbb60 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_021cbbb0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_021cbe30 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_021cbe30()
{
    return value_021cbe30;
}
