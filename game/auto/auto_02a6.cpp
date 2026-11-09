// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a69270()
{
}

/**
 *
 * The part of the object that auto_return_field_02a69280 reads.
 *
 */
struct Object02a69280 {
    uint8_t unknown_0x0000[0x20];
    uint32_t value_0x0020; /**< Read by auto_return_field_02a69280; meaning unknown. */
};
static_assert(offsetof(Object02a69280, value_0x0020) == 0x20);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02a69280(const Object02a69280 *self)
{
    return self->value_0x0020;
}

/**
 *
 * The part of the object that auto_return_field_02a69340 reads.
 *
 */
struct Object02a69340 {
    uint8_t unknown_0x0000[0x8];
    uint64_t value_0x0008; /**< Read by auto_return_field_02a69340; meaning unknown. */
};
static_assert(offsetof(Object02a69340, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02a69340(const Object02a69340 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_02a69350 reads.
 *
 */
struct Object02a69350 {
    uint8_t unknown_0x0000[0x10];
    uint64_t value_0x0010; /**< Read by auto_return_field_02a69350; meaning unknown. */
};
static_assert(offsetof(Object02a69350, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02a69350(const Object02a69350 *self)
{
    return self->value_0x0010;
}

/**
 *
 * The part of the object that auto_return_field_02a69360 reads.
 *
 */
struct Object02a69360 {
    uint8_t unknown_0x0000[0x18];
    uint64_t value_0x0018; /**< Read by auto_return_field_02a69360; meaning unknown. */
};
static_assert(offsetof(Object02a69360, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02a69360(const Object02a69360 *self)
{
    return self->value_0x0018;
}

/**
 *
 * The part of the object that auto_return_field_02a69370 reads.
 *
 */
struct Object02a69370 {
    uint8_t unknown_0x0000[0x20];
    uint32_t value_0x0020; /**< Read by auto_return_field_02a69370; meaning unknown. */
};
static_assert(offsetof(Object02a69370, value_0x0020) == 0x20);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02a69370(const Object02a69370 *self)
{
    return self->value_0x0020;
}

/**
 *
 * The part of the object that auto_return_field_02a6a0c0 reads.
 *
 */
struct Object02a6a0c0 {
    uint8_t unknown_0x0000[0x24];
    uint32_t value_0x0024; /**< Read by auto_return_field_02a6a0c0; meaning unknown. */
};
static_assert(offsetof(Object02a6a0c0, value_0x0024) == 0x24);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02a6a0c0(const Object02a6a0c0 *self)
{
    return self->value_0x0024;
}

/**
 *
 * The part of the object that auto_return_field_02a6a0d0 reads.
 *
 */
struct Object02a6a0d0 {
    uint8_t unknown_0x0000[0x28];
    uint64_t value_0x0028; /**< Read by auto_return_field_02a6a0d0; meaning unknown. */
};
static_assert(offsetof(Object02a6a0d0, value_0x0028) == 0x28);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02a6a0d0(const Object02a6a0d0 *self)
{
    return self->value_0x0028;
}

/**
 *
 * The part of the object that auto_return_field_02a6d310 reads.
 *
 */
struct Object02a6d310 {
    uint8_t unknown_0x0000[0x28];
    uint64_t value_0x0028; /**< Read by auto_return_field_02a6d310; meaning unknown. */
};
static_assert(offsetof(Object02a6d310, value_0x0028) == 0x28);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02a6d310(const Object02a6d310 *self)
{
    return self->value_0x0028;
}

/**
 *
 * The part of the object that auto_return_field_02a6d320 reads.
 *
 */
struct Object02a6d320 {
    uint8_t unknown_0x0000[0x30];
    uint32_t value_0x0030; /**< Read by auto_return_field_02a6d320; meaning unknown. */
};
static_assert(offsetof(Object02a6d320, value_0x0030) == 0x30);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02a6d320(const Object02a6d320 *self)
{
    return self->value_0x0030;
}

/**
 *
 * The part of the object that auto_return_field_02a6d840 reads.
 *
 */
struct Object02a6d840 {
    uint8_t unknown_0x0000[0xc0];
    uint64_t value_0x00c0; /**< Read by auto_return_field_02a6d840; meaning unknown. */
};
static_assert(offsetof(Object02a6d840, value_0x00c0) == 0xc0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02a6d840(const Object02a6d840 *self)
{
    return self->value_0x00c0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02a6ffd0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02a6ffd0()
{
    return value_02a6ffd0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02a6ffe0()
{
    return 0;
}
