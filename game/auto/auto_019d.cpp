// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_019d0240()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_019d0260()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_019d03b0 reads.
 *
 */
struct Object019d03b0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_019d03b0; meaning unknown. */
};
static_assert(offsetof(Object019d03b0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_019d03b0(const Object019d03b0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_019d03c0 reads.
 *
 */
struct Object019d03c0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_019d03c0; meaning unknown. */
};
static_assert(offsetof(Object019d03c0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_019d03c0(const Object019d03c0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_019d0410()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_019d0690 = 0x190;

extern "C" uint32_t bb_auto_return_constant_019d0690()
{
    return value_019d0690;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_019d1f50()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_019d1f70()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_019d20c0 reads.
 *
 */
struct Object019d20c0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_019d20c0; meaning unknown. */
};
static_assert(offsetof(Object019d20c0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_019d20c0(const Object019d20c0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_019d20d0 reads.
 *
 */
struct Object019d20d0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_019d20d0; meaning unknown. */
};
static_assert(offsetof(Object019d20d0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_019d20d0(const Object019d20d0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_019d2120()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_019d23a0 = 0x198;

extern "C" uint32_t bb_auto_return_constant_019d23a0()
{
    return value_019d23a0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_019d49e0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_019d4a00()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_019d4b50 reads.
 *
 */
struct Object019d4b50 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_019d4b50; meaning unknown. */
};
static_assert(offsetof(Object019d4b50, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_019d4b50(const Object019d4b50 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_019d4b60 reads.
 *
 */
struct Object019d4b60 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_019d4b60; meaning unknown. */
};
static_assert(offsetof(Object019d4b60, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_019d4b60(const Object019d4b60 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_019d4bb0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_019d4e30 = 0x1d8;

extern "C" uint32_t bb_auto_return_constant_019d4e30()
{
    return value_019d4e30;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_019d8230()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_019d8250()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_019d83a0 reads.
 *
 */
struct Object019d83a0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_019d83a0; meaning unknown. */
};
static_assert(offsetof(Object019d83a0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_019d83a0(const Object019d83a0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_019d83b0 reads.
 *
 */
struct Object019d83b0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_019d83b0; meaning unknown. */
};
static_assert(offsetof(Object019d83b0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_019d83b0(const Object019d83b0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_019d8400()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_019d8680 = 0x1c0;

extern "C" uint32_t bb_auto_return_constant_019d8680()
{
    return value_019d8680;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_019d9990()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_019d99b0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_019d9b00 reads.
 *
 */
struct Object019d9b00 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_019d9b00; meaning unknown. */
};
static_assert(offsetof(Object019d9b00, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_019d9b00(const Object019d9b00 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_019d9b10 reads.
 *
 */
struct Object019d9b10 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_019d9b10; meaning unknown. */
};
static_assert(offsetof(Object019d9b10, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_019d9b10(const Object019d9b10 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_019d9b60()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_019d9de0 = 0x178;

extern "C" uint32_t bb_auto_return_constant_019d9de0()
{
    return value_019d9de0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_019db150()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_019db170()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_019db2c0 reads.
 *
 */
struct Object019db2c0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_019db2c0; meaning unknown. */
};
static_assert(offsetof(Object019db2c0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_019db2c0(const Object019db2c0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_019db2d0 reads.
 *
 */
struct Object019db2d0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_019db2d0; meaning unknown. */
};
static_assert(offsetof(Object019db2d0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_019db2d0(const Object019db2d0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_019db320()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_019db5a0 = 0x180;

extern "C" uint32_t bb_auto_return_constant_019db5a0()
{
    return value_019db5a0;
}
