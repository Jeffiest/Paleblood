// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02e62c90()
{
}

/**
 *
 * The part of the object that auto_return_field_02e64d00 reads.
 *
 */
struct Object02e64d00 {
    uint8_t unknown_0x0000[0x6c];
    uint8_t value_0x006c; /**< Read by auto_return_field_02e64d00; meaning unknown. */
};
static_assert(offsetof(Object02e64d00, value_0x006c) == 0x6c);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02e64d00(const Object02e64d00 *self)
{
    return self->value_0x006c;
}

/**
 *
 * The part of the object that auto_return_field_02e67080 reads.
 *
 */
struct Object02e67080 {
    uint8_t unknown_0x0000[0x11a];
    uint8_t value_0x011a; /**< Read by auto_return_field_02e67080; meaning unknown. */
};
static_assert(offsetof(Object02e67080, value_0x011a) == 0x11a);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02e67080(const Object02e67080 *self)
{
    return self->value_0x011a;
}

/**
 *
 * The part of the object that auto_return_field_02e6b9c0 reads.
 *
 */
struct Object02e6b9c0 {
    uint8_t unknown_0x0000[0x91];
    uint8_t value_0x0091; /**< Read by auto_return_field_02e6b9c0; meaning unknown. */
};
static_assert(offsetof(Object02e6b9c0, value_0x0091) == 0x91);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02e6b9c0(const Object02e6b9c0 *self)
{
    return self->value_0x0091;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02e6e0f0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02e6e0f0()
{
    return value_02e6e0f0;
}
