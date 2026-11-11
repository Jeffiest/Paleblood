// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_023002d0()
{
}

/**
 *
 * The part of the object that auto_return_field_023083b0 reads.
 *
 */
struct Object023083b0 {
    uint8_t unknown_0x0000[0xc0];
    uint32_t value_0x00c0; /**< Read by auto_return_field_023083b0; meaning unknown. */
};
static_assert(offsetof(Object023083b0, value_0x00c0) == 0xc0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_023083b0(const Object023083b0 *self)
{
    return self->value_0x00c0;
}

/**
 *
 * The part of the object that auto_return_field_023083e0 reads.
 *
 */
struct Object023083e0 {
    uint8_t unknown_0x0000[0xc8];
    uint32_t value_0x00c8; /**< Read by auto_return_field_023083e0; meaning unknown. */
};
static_assert(offsetof(Object023083e0, value_0x00c8) == 0xc8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_023083e0(const Object023083e0 *self)
{
    return self->value_0x00c8;
}

/**
 *
 * The part of the object that auto_return_field_02308410 reads.
 *
 */
struct Object02308410 {
    uint8_t unknown_0x0000[0xd0];
    uint32_t value_0x00d0; /**< Read by auto_return_field_02308410; meaning unknown. */
};
static_assert(offsetof(Object02308410, value_0x00d0) == 0xd0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02308410(const Object02308410 *self)
{
    return self->value_0x00d0;
}

/**
 *
 * The part of the object that auto_return_field_02308480 reads.
 *
 */
struct Object02308480 {
    uint8_t unknown_0x0000[0xdc];
    uint32_t value_0x00dc; /**< Read by auto_return_field_02308480; meaning unknown. */
};
static_assert(offsetof(Object02308480, value_0x00dc) == 0xdc);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02308480(const Object02308480 *self)
{
    return self->value_0x00dc;
}
