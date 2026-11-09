// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c00d30()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c013e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c01500()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c01570()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c01750()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_02c098d0 reads.
 *
 */
struct Object02c098d0 {
    uint8_t unknown_0x0000[0x3cc];
    uint8_t value_0x03cc; /**< Read by auto_return_field_02c098d0; meaning unknown. */
};
static_assert(offsetof(Object02c098d0, value_0x03cc) == 0x3cc);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02c098d0(const Object02c098d0 *self)
{
    return self->value_0x03cc;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c09fd0()
{
}

/**
 *
 * The part of the object that auto_return_field_02c0a2f0 reads.
 *
 */
struct Object02c0a2f0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02c0a2f0; meaning unknown. */
};
static_assert(offsetof(Object02c0a2f0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c0a2f0(const Object02c0a2f0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02c0a300 reads.
 *
 */
struct Object02c0a300 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02c0a300; meaning unknown. */
};
static_assert(offsetof(Object02c0a300, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c0a300(const Object02c0a300 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c0a350()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c0a4a0 = 0x408;

extern "C" uint32_t bb_auto_return_constant_02c0a4a0()
{
    return value_02c0a4a0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c0adb0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c0b120()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c0b6d0()
{
}

/**
 *
 * The part of the object that auto_return_field_02c0bf10 reads.
 *
 */
struct Object02c0bf10 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02c0bf10; meaning unknown. */
};
static_assert(offsetof(Object02c0bf10, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c0bf10(const Object02c0bf10 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02c0bf20 reads.
 *
 */
struct Object02c0bf20 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02c0bf20; meaning unknown. */
};
static_assert(offsetof(Object02c0bf20, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c0bf20(const Object02c0bf20 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c0bf70()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c0c0c0 = 0x390;

extern "C" uint32_t bb_auto_return_constant_02c0c0c0()
{
    return value_02c0c0c0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02c0c390 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02c0c390()
{
    return value_02c0c390;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c0c3a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c0c3b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c0c3c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c0c3d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c0c3e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c0c3f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c0c400()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02c0c410 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02c0c410()
{
    return value_02c0c410;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c0c420()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02c0c430 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02c0c430()
{
    return value_02c0c430;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c0c440()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c0c450 = 0xffff;

extern "C" uint32_t bb_auto_return_constant_02c0c450()
{
    return value_02c0c450;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c0c470()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c0c480()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02c0c490 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02c0c490()
{
    return value_02c0c490;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02c0c4a0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02c0c4a0()
{
    return value_02c0c4a0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c0c4b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c0c4c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c0c4d0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02c0c4f0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02c0c4f0()
{
    return value_02c0c4f0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c0c500()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02c0c510 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02c0c510()
{
    return value_02c0c510;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c0c520()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_02c0c6b0 reads.
 *
 */
struct Object02c0c6b0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02c0c6b0; meaning unknown. */
};
static_assert(offsetof(Object02c0c6b0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c0c6b0(const Object02c0c6b0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02c0c6c0 reads.
 *
 */
struct Object02c0c6c0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02c0c6c0; meaning unknown. */
};
static_assert(offsetof(Object02c0c6c0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c0c6c0(const Object02c0c6c0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c0c710()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c0c860 = 0x390;

extern "C" uint32_t bb_auto_return_constant_02c0c860()
{
    return value_02c0c860;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c0cd80()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c0cd90()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c0cda0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c0cdb0()
{
}

/**
 *
 * The part of the object that auto_return_field_02c0cdc0 reads.
 *
 */
struct Object02c0cdc0 {
    uint8_t unknown_0x0000[0x28];
    uint8_t value_0x0028; /**< Read by auto_return_field_02c0cdc0; meaning unknown. */
};
static_assert(offsetof(Object02c0cdc0, value_0x0028) == 0x28);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02c0cdc0(const Object02c0cdc0 *self)
{
    return self->value_0x0028;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c0d340()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c0dcf0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c0e460 = 0x1;

extern "C" uint32_t bb_auto_return_constant_02c0e460()
{
    return value_02c0e460;
}

/**
 *
 * The part of the object that auto_return_field_02c0e510 reads.
 *
 */
struct Object02c0e510 {
    uint8_t unknown_0x0000[0xec];
    uint8_t value_0x00ec; /**< Read by auto_return_field_02c0e510; meaning unknown. */
};
static_assert(offsetof(Object02c0e510, value_0x00ec) == 0xec);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02c0e510(const Object02c0e510 *self)
{
    return self->value_0x00ec;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02c0e970 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02c0e970()
{
    return value_02c0e970;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02c0f360 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02c0f360()
{
    return value_02c0f360;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02c0f960 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02c0f960()
{
    return value_02c0f960;
}
