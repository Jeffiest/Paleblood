// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_02f90250 reads.
 *
 */
struct Object02f90250 {
    uint8_t unknown_0x0000[0x1c];
    uint8_t value_0x001c; /**< Read by auto_return_field_02f90250; meaning unknown. */
};
static_assert(offsetof(Object02f90250, value_0x001c) == 0x1c);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02f90250(const Object02f90250 *self)
{
    return self->value_0x001c;
}

/**
 *
 * The part of the object that auto_return_field_02f902d0 reads.
 *
 */
struct Object02f902d0 {
    uint8_t unknown_0x0000[0x6c];
    uint8_t value_0x006c; /**< Read by auto_return_field_02f902d0; meaning unknown. */
};
static_assert(offsetof(Object02f902d0, value_0x006c) == 0x6c);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02f902d0(const Object02f902d0 *self)
{
    return self->value_0x006c;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02f94c50 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02f94c50()
{
    return value_02f94c50;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02f977a0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02f977a0()
{
    return value_02f977a0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02f97870()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02f97b10 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02f97b10()
{
    return value_02f97b10;
}

/**
 *
 * The part of the object that auto_return_field_02f97b80 reads.
 *
 */
struct Object02f97b80 {
    uint8_t unknown_0x0000[0x8];
    uint64_t value_0x0008; /**< Read by auto_return_field_02f97b80; meaning unknown. */
};
static_assert(offsetof(Object02f97b80, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f97b80(const Object02f97b80 *self)
{
    return self->value_0x0008;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02f97c20()
{
}

/**
 *
 * The part of the object that auto_return_field_02f97c60 reads.
 *
 */
struct Object02f97c60 {
    uint8_t unknown_0x0000[0x8];
    uint64_t value_0x0008; /**< Read by auto_return_field_02f97c60; meaning unknown. */
};
static_assert(offsetof(Object02f97c60, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f97c60(const Object02f97c60 *self)
{
    return self->value_0x0008;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02f97d00()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02f98eb0()
{
}

/**
 *
 * The part of the object that auto_return_field_02f99750 reads.
 *
 */
struct Object02f99750 {
    uint8_t unknown_0x0000[0x48];
    uint8_t value_0x0048; /**< Read by auto_return_field_02f99750; meaning unknown. */
};
static_assert(offsetof(Object02f99750, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02f99750(const Object02f99750 *self)
{
    return self->value_0x0048;
}

/**
 *
 * The part of the object that auto_return_field_02f99ab0 reads.
 *
 */
struct Object02f99ab0 {
    uint8_t unknown_0x0000[0x40];
    uint8_t value_0x0040; /**< Read by auto_return_field_02f99ab0; meaning unknown. */
};
static_assert(offsetof(Object02f99ab0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02f99ab0(const Object02f99ab0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02f9a7d0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02f9a7d0()
{
    return value_02f9a7d0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02f9ad50()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f9ad80()
{
    return 0;
}
