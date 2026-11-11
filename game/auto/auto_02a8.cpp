// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_02a841a0 reads.
 *
 */
struct Object02a841a0 {
    uint8_t unknown_0x0000[0x8];
    uint32_t value_0x0008; /**< Read by auto_return_field_02a841a0; meaning unknown. */
};
static_assert(offsetof(Object02a841a0, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02a841a0(const Object02a841a0 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_02a868e0 reads.
 *
 */
struct Object02a868e0 {
    uint8_t unknown_0x0000[0x10];
    uint64_t value_0x0010; /**< Read by auto_return_field_02a868e0; meaning unknown. */
};
static_assert(offsetof(Object02a868e0, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02a868e0(const Object02a868e0 *self)
{
    return self->value_0x0010;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02a8bfc0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02a8bfc0()
{
    return value_02a8bfc0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02a8c4b0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02a8c4b0()
{
    return value_02a8c4b0;
}

/**
 *
 * The part of the object that auto_return_field_02a8cf40 reads.
 *
 */
struct Object02a8cf40 {
    uint8_t unknown_0x0000[0x98];
    uint64_t value_0x0098; /**< Read by auto_return_field_02a8cf40; meaning unknown. */
};
static_assert(offsetof(Object02a8cf40, value_0x0098) == 0x98);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02a8cf40(const Object02a8cf40 *self)
{
    return self->value_0x0098;
}

/**
 *
 * The part of the object that auto_return_field_02a8cf50 reads.
 *
 */
struct Object02a8cf50 {
    uint8_t unknown_0x0000[0x90];
    uint64_t value_0x0090; /**< Read by auto_return_field_02a8cf50; meaning unknown. */
};
static_assert(offsetof(Object02a8cf50, value_0x0090) == 0x90);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02a8cf50(const Object02a8cf50 *self)
{
    return self->value_0x0090;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02a8d220 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02a8d220()
{
    return value_02a8d220;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02a8d230 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02a8d230()
{
    return value_02a8d230;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02a8d240 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02a8d240()
{
    return value_02a8d240;
}

/**
 *
 * The part of the object that auto_return_field_02a8d7f0 reads.
 *
 */
struct Object02a8d7f0 {
    uint8_t unknown_0x0000[0x98];
    uint64_t value_0x0098; /**< Read by auto_return_field_02a8d7f0; meaning unknown. */
};
static_assert(offsetof(Object02a8d7f0, value_0x0098) == 0x98);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02a8d7f0(const Object02a8d7f0 *self)
{
    return self->value_0x0098;
}

/**
 *
 * The part of the object that auto_return_field_02a8d800 reads.
 *
 */
struct Object02a8d800 {
    uint8_t unknown_0x0000[0x90];
    uint64_t value_0x0090; /**< Read by auto_return_field_02a8d800; meaning unknown. */
};
static_assert(offsetof(Object02a8d800, value_0x0090) == 0x90);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02a8d800(const Object02a8d800 *self)
{
    return self->value_0x0090;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02a8dd20 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02a8dd20()
{
    return value_02a8dd20;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02a8dd30 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02a8dd30()
{
    return value_02a8dd30;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02a8dd40 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02a8dd40()
{
    return value_02a8dd40;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02a8dda0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02a8ecc0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02a8ecc0()
{
    return value_02a8ecc0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02a8ee20 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02a8ee20()
{
    return value_02a8ee20;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a8ee50()
{
}
