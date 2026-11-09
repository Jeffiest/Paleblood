// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_02100e10 reads.
 *
 */
struct Object02100e10 {
    uint8_t unknown_0x0000[0x110];
    uint64_t value_0x0110; /**< Read by auto_return_field_02100e10; meaning unknown. */
};
static_assert(offsetof(Object02100e10, value_0x0110) == 0x110);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02100e10(const Object02100e10 *self)
{
    return self->value_0x0110;
}

/**
 *
 * The part of the object that auto_return_field_02100e20 reads.
 *
 */
struct Object02100e20 {
    uint8_t unknown_0x0000[0x308];
    uint64_t value_0x0308; /**< Read by auto_return_field_02100e20; meaning unknown. */
};
static_assert(offsetof(Object02100e20, value_0x0308) == 0x308);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02100e20(const Object02100e20 *self)
{
    return self->value_0x0308;
}

/**
 *
 * The part of the object that auto_return_field_02104030 reads.
 *
 */
struct Object02104030 {
    uint8_t unknown_0x0000[0x58];
    uint8_t value_0x0058; /**< Read by auto_return_field_02104030; meaning unknown. */
};
static_assert(offsetof(Object02104030, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02104030(const Object02104030 *self)
{
    return self->value_0x0058;
}

/**
 *
 * The part of the object that auto_return_field_02104c20 reads.
 *
 */
struct Object02104c20 {
    uint8_t unknown_0x0000[0x50];
    uint32_t value_0x0050; /**< Read by auto_return_field_02104c20; meaning unknown. */
};
static_assert(offsetof(Object02104c20, value_0x0050) == 0x50);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02104c20(const Object02104c20 *self)
{
    return self->value_0x0050;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02104cf0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02104d00()
{
}

/**
 *
 * The part of the object that auto_return_field_02104ff0 reads.
 *
 */
struct Object02104ff0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02104ff0; meaning unknown. */
};
static_assert(offsetof(Object02104ff0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02104ff0(const Object02104ff0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02105000 reads.
 *
 */
struct Object02105000 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02105000; meaning unknown. */
};
static_assert(offsetof(Object02105000, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02105000(const Object02105000 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02105050()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_021052d0 = 0x310;

extern "C" uint32_t bb_auto_return_constant_021052d0()
{
    return value_021052d0;
}

/**
 *
 * The part of the object that auto_return_field_02105310 reads.
 *
 */
struct Object02105310 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02105310; meaning unknown. */
};
static_assert(offsetof(Object02105310, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02105310(const Object02105310 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02105320 reads.
 *
 */
struct Object02105320 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02105320; meaning unknown. */
};
static_assert(offsetof(Object02105320, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02105320(const Object02105320 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02105370()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_021055f0 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_021055f0()
{
    return value_021055f0;
}

/**
 *
 * The part of the object that auto_return_field_02105630 reads.
 *
 */
struct Object02105630 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02105630; meaning unknown. */
};
static_assert(offsetof(Object02105630, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02105630(const Object02105630 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02105640 reads.
 *
 */
struct Object02105640 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02105640; meaning unknown. */
};
static_assert(offsetof(Object02105640, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02105640(const Object02105640 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02105690()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02105910 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_02105910()
{
    return value_02105910;
}

/**
 *
 * The part of the object that auto_return_field_02105950 reads.
 *
 */
struct Object02105950 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02105950; meaning unknown. */
};
static_assert(offsetof(Object02105950, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02105950(const Object02105950 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02105960 reads.
 *
 */
struct Object02105960 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02105960; meaning unknown. */
};
static_assert(offsetof(Object02105960, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02105960(const Object02105960 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_021059b0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02105c30 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_02105c30()
{
    return value_02105c30;
}

/**
 *
 * The part of the object that auto_return_field_02106440 reads.
 *
 */
struct Object02106440 {
    uint8_t unknown_0x0000[0x8];
    uint32_t value_0x0008; /**< Read by auto_return_field_02106440; meaning unknown. */
};
static_assert(offsetof(Object02106440, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02106440(const Object02106440 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_member_address_021064a0 reads.
 *
 */
struct Object021064a0 {
    uint8_t unknown_0x0000[0x18];
    uint8_t member_0x0018; /**< Read by auto_return_member_address_021064a0; meaning unknown. */
};
static_assert(offsetof(Object021064a0, member_0x0018) == 0x18);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_021064a0(Object021064a0 *self)
{
    return &self->member_0x0018;
}

/**
 *
 * The part of the object that auto_return_member_address_021065e0 reads.
 *
 */
struct Object021065e0 {
    uint8_t unknown_0x0000[0xd8];
    uint8_t member_0x00d8; /**< Read by auto_return_member_address_021065e0; meaning unknown. */
};
static_assert(offsetof(Object021065e0, member_0x00d8) == 0xd8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_021065e0(Object021065e0 *self)
{
    return &self->member_0x00d8;
}

/**
 *
 * The part of the object that auto_return_field_02106600 reads.
 *
 */
struct Object02106600 {
    uint8_t unknown_0x0000[0x1f0];
    uint8_t value_0x01f0; /**< Read by auto_return_field_02106600; meaning unknown. */
};
static_assert(offsetof(Object02106600, value_0x01f0) == 0x1f0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02106600(const Object02106600 *self)
{
    return self->value_0x01f0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02107570()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_021080a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02108100()
{
}

/**
 *
 * The part of the object that auto_return_field_0210a660 reads.
 *
 */
struct Object0210a660 {
    uint8_t unknown_0x0000[0x58];
    uint32_t value_0x0058; /**< Read by auto_return_field_0210a660; meaning unknown. */
};
static_assert(offsetof(Object0210a660, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_0210a660(const Object0210a660 *self)
{
    return self->value_0x0058;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0210a730()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0210a740()
{
}

/**
 *
 * The part of the object that auto_return_field_0210a9b0 reads.
 *
 */
struct Object0210a9b0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0210a9b0; meaning unknown. */
};
static_assert(offsetof(Object0210a9b0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0210a9b0(const Object0210a9b0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0210a9c0 reads.
 *
 */
struct Object0210a9c0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0210a9c0; meaning unknown. */
};
static_assert(offsetof(Object0210a9c0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0210a9c0(const Object0210a9c0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0210aa10()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0210ac90 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_0210ac90()
{
    return value_0210ac90;
}

/**
 *
 * The part of the object that auto_return_field_0210acd0 reads.
 *
 */
struct Object0210acd0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0210acd0; meaning unknown. */
};
static_assert(offsetof(Object0210acd0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0210acd0(const Object0210acd0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0210ace0 reads.
 *
 */
struct Object0210ace0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0210ace0; meaning unknown. */
};
static_assert(offsetof(Object0210ace0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0210ace0(const Object0210ace0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0210ad30()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0210afb0 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_0210afb0()
{
    return value_0210afb0;
}

/**
 *
 * The part of the object that auto_return_field_0210aff0 reads.
 *
 */
struct Object0210aff0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0210aff0; meaning unknown. */
};
static_assert(offsetof(Object0210aff0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0210aff0(const Object0210aff0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0210b000 reads.
 *
 */
struct Object0210b000 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0210b000; meaning unknown. */
};
static_assert(offsetof(Object0210b000, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0210b000(const Object0210b000 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0210b050()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0210b2d0 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_0210b2d0()
{
    return value_0210b2d0;
}

/**
 *
 * The part of the object that auto_return_field_0210b310 reads.
 *
 */
struct Object0210b310 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0210b310; meaning unknown. */
};
static_assert(offsetof(Object0210b310, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0210b310(const Object0210b310 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0210b320 reads.
 *
 */
struct Object0210b320 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0210b320; meaning unknown. */
};
static_assert(offsetof(Object0210b320, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0210b320(const Object0210b320 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0210b370()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0210b5f0 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_0210b5f0()
{
    return value_0210b5f0;
}

/**
 *
 * The part of the object that auto_return_field_0210bac0 reads.
 *
 */
struct Object0210bac0 {
    uint8_t unknown_0x0000[0x88];
    uint64_t value_0x0088; /**< Read by auto_return_field_0210bac0; meaning unknown. */
};
static_assert(offsetof(Object0210bac0, value_0x0088) == 0x88);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0210bac0(const Object0210bac0 *self)
{
    return self->value_0x0088;
}

/**
 *
 * The part of the object that auto_return_field_0210c920 reads.
 *
 */
struct Object0210c920 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0210c920; meaning unknown. */
};
static_assert(offsetof(Object0210c920, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0210c920(const Object0210c920 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0210c930 reads.
 *
 */
struct Object0210c930 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0210c930; meaning unknown. */
};
static_assert(offsetof(Object0210c930, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0210c930(const Object0210c930 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0210c980()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0210cc00 = 0xb8;

extern "C" uint32_t bb_auto_return_constant_0210cc00()
{
    return value_0210cc00;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0210fa50()
{
}
