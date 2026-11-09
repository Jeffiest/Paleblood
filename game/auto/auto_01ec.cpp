// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_01ec0db0 reads.
 *
 */
struct Object01ec0db0 {
    uint8_t unknown_0x0000[0x58];
    uint8_t value_0x0058; /**< Read by auto_return_field_01ec0db0; meaning unknown. */
};
static_assert(offsetof(Object01ec0db0, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_01ec0db0(const Object01ec0db0 *self)
{
    return self->value_0x0058;
}

/**
 *
 * The part of the object that auto_return_field_01ec19d0 reads.
 *
 */
struct Object01ec19d0 {
    uint8_t unknown_0x0000[0x50];
    uint32_t value_0x0050; /**< Read by auto_return_field_01ec19d0; meaning unknown. */
};
static_assert(offsetof(Object01ec19d0, value_0x0050) == 0x50);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01ec19d0(const Object01ec19d0 *self)
{
    return self->value_0x0050;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01ec1aa0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01ec1ab0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01ec1b70()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01ec1bd0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01ec1c30()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01ec1c90()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01ec1cf0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01ec1d50()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01ec1db0()
{
}

/**
 *
 * The part of the object that auto_return_field_01ec20e0 reads.
 *
 */
struct Object01ec20e0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01ec20e0; meaning unknown. */
};
static_assert(offsetof(Object01ec20e0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01ec20e0(const Object01ec20e0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01ec20f0 reads.
 *
 */
struct Object01ec20f0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01ec20f0; meaning unknown. */
};
static_assert(offsetof(Object01ec20f0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01ec20f0(const Object01ec20f0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01ec2140()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01ec23c0 = 0x6a8;

extern "C" uint32_t bb_auto_return_constant_01ec23c0()
{
    return value_01ec23c0;
}

/**
 *
 * The part of the object that auto_return_field_01ec2400 reads.
 *
 */
struct Object01ec2400 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01ec2400; meaning unknown. */
};
static_assert(offsetof(Object01ec2400, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01ec2400(const Object01ec2400 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01ec2410 reads.
 *
 */
struct Object01ec2410 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01ec2410; meaning unknown. */
};
static_assert(offsetof(Object01ec2410, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01ec2410(const Object01ec2410 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01ec2460()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01ec26e0 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_01ec26e0()
{
    return value_01ec26e0;
}

/**
 *
 * The part of the object that auto_return_field_01ec2720 reads.
 *
 */
struct Object01ec2720 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01ec2720; meaning unknown. */
};
static_assert(offsetof(Object01ec2720, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01ec2720(const Object01ec2720 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01ec2730 reads.
 *
 */
struct Object01ec2730 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01ec2730; meaning unknown. */
};
static_assert(offsetof(Object01ec2730, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01ec2730(const Object01ec2730 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01ec2780()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01ec2a00 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_01ec2a00()
{
    return value_01ec2a00;
}

/**
 *
 * The part of the object that auto_return_field_01ec2a40 reads.
 *
 */
struct Object01ec2a40 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01ec2a40; meaning unknown. */
};
static_assert(offsetof(Object01ec2a40, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01ec2a40(const Object01ec2a40 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01ec2a50 reads.
 *
 */
struct Object01ec2a50 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01ec2a50; meaning unknown. */
};
static_assert(offsetof(Object01ec2a50, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01ec2a50(const Object01ec2a50 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01ec2aa0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01ec2d20 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_01ec2d20()
{
    return value_01ec2d20;
}

/**
 *
 * The part of the object that auto_return_field_01ec4360 reads.
 *
 */
struct Object01ec4360 {
    uint8_t unknown_0x0000[0x18];
    uint64_t value_0x0018; /**< Read by auto_return_field_01ec4360; meaning unknown. */
};
static_assert(offsetof(Object01ec4360, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01ec4360(const Object01ec4360 *self)
{
    return self->value_0x0018;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01ec4520()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01ec4580()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01ec4690()
{
}

/**
 *
 * The part of the object that auto_return_field_01ec4e30 reads.
 *
 */
struct Object01ec4e30 {
    uint8_t unknown_0x0000[0x8];
    uint32_t value_0x0008; /**< Read by auto_return_field_01ec4e30; meaning unknown. */
};
static_assert(offsetof(Object01ec4e30, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01ec4e30(const Object01ec4e30 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_01ec4e50 reads.
 *
 */
struct Object01ec4e50 {
    uint8_t unknown_0x0000[0xc];
    uint32_t value_0x000c; /**< Read by auto_return_field_01ec4e50; meaning unknown. */
};
static_assert(offsetof(Object01ec4e50, value_0x000c) == 0xc);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01ec4e50(const Object01ec4e50 *self)
{
    return self->value_0x000c;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01ec6e30()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01ecb180()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01ecde90()
{
}
