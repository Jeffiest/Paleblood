// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_02b9a310 reads.
 *
 */
struct Object02b9a310 {
    uint8_t unknown_0x0000[0x8];
    uint32_t value_0x0008; /**< Read by auto_return_field_02b9a310; meaning unknown. */
};
static_assert(offsetof(Object02b9a310, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02b9a310(const Object02b9a310 *self)
{
    return self->value_0x0008;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02b9a420()
{
}

/**
 *
 * The part of the object that auto_return_field_02b9a430 reads.
 *
 */
struct Object02b9a430 {
    uint8_t unknown_0x0000[0x8];
    uint64_t value_0x0008; /**< Read by auto_return_field_02b9a430; meaning unknown. */
};
static_assert(offsetof(Object02b9a430, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02b9a430(const Object02b9a430 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_02b9a440 reads.
 *
 */
struct Object02b9a440 {
    uint8_t unknown_0x0000[0x8];
    uint64_t value_0x0008; /**< Read by auto_return_field_02b9a440; meaning unknown. */
};
static_assert(offsetof(Object02b9a440, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02b9a440(const Object02b9a440 *self)
{
    return self->value_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02b9bdd0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_02b9dc50 reads.
 *
 */
struct Object02b9dc50 {
    uint8_t unknown_0x0000[0x6c];
    uint8_t value_0x006c; /**< Read by auto_return_field_02b9dc50; meaning unknown. */
};
static_assert(offsetof(Object02b9dc50, value_0x006c) == 0x6c);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02b9dc50(const Object02b9dc50 *self)
{
    return self->value_0x006c;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02b9dc60 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02b9dc60()
{
    return value_02b9dc60;
}

/**
 *
 * The part of the object that auto_return_field_02b9eef0 reads.
 *
 */
struct Object02b9eef0 {
    uint8_t unknown_0x0000[0xf8];
    uint32_t value_0x00f8; /**< Read by auto_return_field_02b9eef0; meaning unknown. */
};
static_assert(offsetof(Object02b9eef0, value_0x00f8) == 0xf8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02b9eef0(const Object02b9eef0 *self)
{
    return self->value_0x00f8;
}

/**
 *
 * The part of the object that auto_return_field_02b9f540 reads.
 *
 */
struct Object02b9f540 {
    uint8_t unknown_0x0000[0x70];
    uint64_t value_0x0070; /**< Read by auto_return_field_02b9f540; meaning unknown. */
};
static_assert(offsetof(Object02b9f540, value_0x0070) == 0x70);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02b9f540(const Object02b9f540 *self)
{
    return self->value_0x0070;
}

/**
 *
 * The part of the object that auto_return_field_02b9f550 reads.
 *
 */
struct Object02b9f550 {
    uint8_t unknown_0x0000[0x6e];
    uint8_t value_0x006e; /**< Read by auto_return_field_02b9f550; meaning unknown. */
};
static_assert(offsetof(Object02b9f550, value_0x006e) == 0x6e);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02b9f550(const Object02b9f550 *self)
{
    return self->value_0x006e;
}
