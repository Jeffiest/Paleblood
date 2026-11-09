// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_017e0530()
{
}

/**
 *
 * The part of the object that auto_return_field_017e2660 reads.
 *
 */
struct Object017e2660 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_017e2660; meaning unknown. */
};
static_assert(offsetof(Object017e2660, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_017e2660(const Object017e2660 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_017e2670 reads.
 *
 */
struct Object017e2670 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_017e2670; meaning unknown. */
};
static_assert(offsetof(Object017e2670, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_017e2670(const Object017e2670 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_017e26c0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_017e2940 = 0x80;

extern "C" uint32_t bb_auto_return_constant_017e2940()
{
    return value_017e2940;
}

/**
 *
 * The part of the object that auto_return_field_017e3620 reads.
 *
 */
struct Object017e3620 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_017e3620; meaning unknown. */
};
static_assert(offsetof(Object017e3620, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_017e3620(const Object017e3620 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_017e3630 reads.
 *
 */
struct Object017e3630 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_017e3630; meaning unknown. */
};
static_assert(offsetof(Object017e3630, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_017e3630(const Object017e3630 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_017e3680()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_017e3900 = 0xa8;

extern "C" uint32_t bb_auto_return_constant_017e3900()
{
    return value_017e3900;
}

/**
 *
 * The part of the object that auto_return_field_017e47d0 reads.
 *
 */
struct Object017e47d0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_017e47d0; meaning unknown. */
};
static_assert(offsetof(Object017e47d0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_017e47d0(const Object017e47d0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_017e47e0 reads.
 *
 */
struct Object017e47e0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_017e47e0; meaning unknown. */
};
static_assert(offsetof(Object017e47e0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_017e47e0(const Object017e47e0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_017e4830()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_017e4ab0 = 0x90;

extern "C" uint32_t bb_auto_return_constant_017e4ab0()
{
    return value_017e4ab0;
}

/**
 *
 * The part of the object that auto_return_field_017e51f0 reads.
 *
 */
struct Object017e51f0 {
    uint8_t unknown_0x0000[0xf8];
    uint64_t value_0x00f8; /**< Read by auto_return_field_017e51f0; meaning unknown. */
};
static_assert(offsetof(Object017e51f0, value_0x00f8) == 0xf8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_017e51f0(const Object017e51f0 *self)
{
    return self->value_0x00f8;
}

/**
 *
 * The part of the object that auto_return_field_017e67b0 reads.
 *
 */
struct Object017e67b0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_017e67b0; meaning unknown. */
};
static_assert(offsetof(Object017e67b0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_017e67b0(const Object017e67b0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_017e67c0 reads.
 *
 */
struct Object017e67c0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_017e67c0; meaning unknown. */
};
static_assert(offsetof(Object017e67c0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_017e67c0(const Object017e67c0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_017e6810()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_017e6a90 = 0x108;

extern "C" uint32_t bb_auto_return_constant_017e6a90()
{
    return value_017e6a90;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_017e9590()
{
}

/**
 *
 * The part of the object that auto_return_field_017e9cf0 reads.
 *
 */
struct Object017e9cf0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_017e9cf0; meaning unknown. */
};
static_assert(offsetof(Object017e9cf0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_017e9cf0(const Object017e9cf0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_017e9d00 reads.
 *
 */
struct Object017e9d00 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_017e9d00; meaning unknown. */
};
static_assert(offsetof(Object017e9d00, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_017e9d00(const Object017e9d00 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_017e9d50()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_017e9df0 = 0xa0;

extern "C" uint32_t bb_auto_return_constant_017e9df0()
{
    return value_017e9df0;
}

/**
 *
 * The part of the object that auto_return_field_017eacd0 reads.
 *
 */
struct Object017eacd0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_017eacd0; meaning unknown. */
};
static_assert(offsetof(Object017eacd0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_017eacd0(const Object017eacd0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_017eace0 reads.
 *
 */
struct Object017eace0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_017eace0; meaning unknown. */
};
static_assert(offsetof(Object017eace0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_017eace0(const Object017eace0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_017ead30()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_017eadd0 = 0xa8;

extern "C" uint32_t bb_auto_return_constant_017eadd0()
{
    return value_017eadd0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_017eb890()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_017eb8a0()
{
}

/**
 *
 * The part of the object that auto_return_field_017ebe50 reads.
 *
 */
struct Object017ebe50 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_017ebe50; meaning unknown. */
};
static_assert(offsetof(Object017ebe50, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_017ebe50(const Object017ebe50 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_017ebe60 reads.
 *
 */
struct Object017ebe60 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_017ebe60; meaning unknown. */
};
static_assert(offsetof(Object017ebe60, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_017ebe60(const Object017ebe60 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_017ebeb0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_017ec130 = 0x100;

extern "C" uint32_t bb_auto_return_constant_017ec130()
{
    return value_017ec130;
}

/**
 *
 * The part of the object that auto_return_field_017ecea0 reads.
 *
 */
struct Object017ecea0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_017ecea0; meaning unknown. */
};
static_assert(offsetof(Object017ecea0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_017ecea0(const Object017ecea0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_017eceb0 reads.
 *
 */
struct Object017eceb0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_017eceb0; meaning unknown. */
};
static_assert(offsetof(Object017eceb0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_017eceb0(const Object017eceb0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_017ecf00()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_017ed180 = 0xa0;

extern "C" uint32_t bb_auto_return_constant_017ed180()
{
    return value_017ed180;
}

/**
 *
 * The part of the object that auto_return_field_017edcb0 reads.
 *
 */
struct Object017edcb0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_017edcb0; meaning unknown. */
};
static_assert(offsetof(Object017edcb0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_017edcb0(const Object017edcb0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_017edcc0 reads.
 *
 */
struct Object017edcc0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_017edcc0; meaning unknown. */
};
static_assert(offsetof(Object017edcc0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_017edcc0(const Object017edcc0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_017edd10()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_017edf90 = 0xa0;

extern "C" uint32_t bb_auto_return_constant_017edf90()
{
    return value_017edf90;
}

/**
 *
 * The part of the object that auto_return_field_017ee460 reads.
 *
 */
struct Object017ee460 {
    uint8_t unknown_0x0000[0x88];
    uint64_t value_0x0088; /**< Read by auto_return_field_017ee460; meaning unknown. */
};
static_assert(offsetof(Object017ee460, value_0x0088) == 0x88);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_017ee460(const Object017ee460 *self)
{
    return self->value_0x0088;
}

/**
 *
 * The part of the object that auto_return_field_017eea10 reads.
 *
 */
struct Object017eea10 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_017eea10; meaning unknown. */
};
static_assert(offsetof(Object017eea10, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_017eea10(const Object017eea10 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_017eea20 reads.
 *
 */
struct Object017eea20 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_017eea20; meaning unknown. */
};
static_assert(offsetof(Object017eea20, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_017eea20(const Object017eea20 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_017eea70()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_017eecf0 = 0x90;

extern "C" uint32_t bb_auto_return_constant_017eecf0()
{
    return value_017eecf0;
}
