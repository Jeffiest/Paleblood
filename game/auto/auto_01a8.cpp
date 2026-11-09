// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01a800a0 = 0x5b0;

extern "C" uint32_t bb_auto_return_constant_01a800a0()
{
    return value_01a800a0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a82140()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a82160()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01a822b0 reads.
 *
 */
struct Object01a822b0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01a822b0; meaning unknown. */
};
static_assert(offsetof(Object01a822b0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a822b0(const Object01a822b0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01a822c0 reads.
 *
 */
struct Object01a822c0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01a822c0; meaning unknown. */
};
static_assert(offsetof(Object01a822c0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a822c0(const Object01a822c0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a82310()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01a82590 = 0x600;

extern "C" uint32_t bb_auto_return_constant_01a82590()
{
    return value_01a82590;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a83a70()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a83a90()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01a83be0 reads.
 *
 */
struct Object01a83be0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01a83be0; meaning unknown. */
};
static_assert(offsetof(Object01a83be0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a83be0(const Object01a83be0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01a83bf0 reads.
 *
 */
struct Object01a83bf0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01a83bf0; meaning unknown. */
};
static_assert(offsetof(Object01a83bf0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a83bf0(const Object01a83bf0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a83c40()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01a83ec0 = 0x180;

extern "C" uint32_t bb_auto_return_constant_01a83ec0()
{
    return value_01a83ec0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a85080()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a850a0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01a851f0 reads.
 *
 */
struct Object01a851f0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01a851f0; meaning unknown. */
};
static_assert(offsetof(Object01a851f0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a851f0(const Object01a851f0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01a85200 reads.
 *
 */
struct Object01a85200 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01a85200; meaning unknown. */
};
static_assert(offsetof(Object01a85200, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a85200(const Object01a85200 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a85250()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01a854d0 = 0x60;

extern "C" uint32_t bb_auto_return_constant_01a854d0()
{
    return value_01a854d0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a86bf0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a87a70()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a87a90()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01a87be0 reads.
 *
 */
struct Object01a87be0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01a87be0; meaning unknown. */
};
static_assert(offsetof(Object01a87be0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a87be0(const Object01a87be0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01a87bf0 reads.
 *
 */
struct Object01a87bf0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01a87bf0; meaning unknown. */
};
static_assert(offsetof(Object01a87bf0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a87bf0(const Object01a87bf0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a87c40()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01a87ec0 = 0x1a0;

extern "C" uint32_t bb_auto_return_constant_01a87ec0()
{
    return value_01a87ec0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a8afb0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a8afd0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01a8b120 reads.
 *
 */
struct Object01a8b120 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01a8b120; meaning unknown. */
};
static_assert(offsetof(Object01a8b120, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a8b120(const Object01a8b120 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01a8b130 reads.
 *
 */
struct Object01a8b130 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01a8b130; meaning unknown. */
};
static_assert(offsetof(Object01a8b130, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a8b130(const Object01a8b130 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a8b180()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01a8b400 = 0x40;

extern "C" uint32_t bb_auto_return_constant_01a8b400()
{
    return value_01a8b400;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a8b840()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a8b860()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01a8b9b0 reads.
 *
 */
struct Object01a8b9b0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01a8b9b0; meaning unknown. */
};
static_assert(offsetof(Object01a8b9b0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a8b9b0(const Object01a8b9b0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01a8b9c0 reads.
 *
 */
struct Object01a8b9c0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01a8b9c0; meaning unknown. */
};
static_assert(offsetof(Object01a8b9c0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a8b9c0(const Object01a8b9c0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a8ba10()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01a8bc90 = 0x298;

extern "C" uint32_t bb_auto_return_constant_01a8bc90()
{
    return value_01a8bc90;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a8cf40()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a8cf60()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01a8d0b0 reads.
 *
 */
struct Object01a8d0b0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01a8d0b0; meaning unknown. */
};
static_assert(offsetof(Object01a8d0b0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a8d0b0(const Object01a8d0b0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01a8d0c0 reads.
 *
 */
struct Object01a8d0c0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01a8d0c0; meaning unknown. */
};
static_assert(offsetof(Object01a8d0c0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a8d0c0(const Object01a8d0c0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a8d110()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01a8d390 = 0x1b0;

extern "C" uint32_t bb_auto_return_constant_01a8d390()
{
    return value_01a8d390;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a8d750()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a8e600()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a8e620()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01a8e770 reads.
 *
 */
struct Object01a8e770 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01a8e770; meaning unknown. */
};
static_assert(offsetof(Object01a8e770, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a8e770(const Object01a8e770 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01a8e780 reads.
 *
 */
struct Object01a8e780 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01a8e780; meaning unknown. */
};
static_assert(offsetof(Object01a8e780, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a8e780(const Object01a8e780 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a8e7d0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01a8ea50 = 0x178;

extern "C" uint32_t bb_auto_return_constant_01a8ea50()
{
    return value_01a8ea50;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a8f190()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a8ff30()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a8ff50()
{
    return 0;
}
