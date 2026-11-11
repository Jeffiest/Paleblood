// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_010f30d0 reads.
 *
 */
struct Object010f30d0 {
    uint8_t unknown_0x0000[0xa4];
    uint8_t value_0x00a4; /**< Read by auto_return_field_010f30d0; meaning unknown. */
};
static_assert(offsetof(Object010f30d0, value_0x00a4) == 0xa4);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_010f30d0(const Object010f30d0 *self)
{
    return self->value_0x00a4;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_010f4020 = 0x1;

extern "C" uint8_t bb_auto_return_constant_010f4020()
{
    return value_010f4020;
}

/**
 *
 * The part of the object that auto_return_field_010f4740 reads.
 *
 */
struct Object010f4740 {
    uint8_t unknown_0x0000[0x10];
    uint64_t value_0x0010; /**< Read by auto_return_field_010f4740; meaning unknown. */
};
static_assert(offsetof(Object010f4740, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_010f4740(const Object010f4740 *self)
{
    return self->value_0x0010;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_010f4bb0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_010f4bb0()
{
    return value_010f4bb0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_010f5740 = 0x1;

extern "C" uint8_t bb_auto_return_constant_010f5740()
{
    return value_010f5740;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_010f59c0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_010f5f80 reads.
 *
 */
struct Object010f5f80 {
    uint8_t unknown_0x0000[0x10];
    uint64_t value_0x0010; /**< Read by auto_return_field_010f5f80; meaning unknown. */
};
static_assert(offsetof(Object010f5f80, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_010f5f80(const Object010f5f80 *self)
{
    return self->value_0x0010;
}

/**
 *
 * The part of the object that auto_return_field_010f7bc0 reads.
 *
 */
struct Object010f7bc0 {
    uint8_t unknown_0x0000[0x28];
    uint8_t value_0x0028; /**< Read by auto_return_field_010f7bc0; meaning unknown. */
};
static_assert(offsetof(Object010f7bc0, value_0x0028) == 0x28);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_010f7bc0(const Object010f7bc0 *self)
{
    return self->value_0x0028;
}

/**
 *
 * The part of the object that auto_return_field_010f7ed0 reads.
 *
 */
struct Object010f7ed0 {
    uint8_t unknown_0x0000[0x2c];
    uint8_t value_0x002c; /**< Read by auto_return_field_010f7ed0; meaning unknown. */
};
static_assert(offsetof(Object010f7ed0, value_0x002c) == 0x2c);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_010f7ed0(const Object010f7ed0 *self)
{
    return self->value_0x002c;
}

/**
 *
 * The part of the object that auto_return_field_010fbf20 reads.
 *
 */
struct Object010fbf20 {
    uint8_t unknown_0x0000[0x8];
    uint64_t value_0x0008; /**< Read by auto_return_field_010fbf20; meaning unknown. */
};
static_assert(offsetof(Object010fbf20, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_010fbf20(const Object010fbf20 *self)
{
    return self->value_0x0008;
}
