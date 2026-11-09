// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_00dc1e10 = 0x3;

extern "C" uint32_t bb_auto_return_constant_00dc1e10()
{
    return value_00dc1e10;
}

/**
 *
 * The part of the object that auto_return_field_00dc2260 reads.
 *
 */
struct Object00dc2260 {
    uint8_t unknown_0x0000[0xa0];
    uint64_t value_0x00a0; /**< Read by auto_return_field_00dc2260; meaning unknown. */
};
static_assert(offsetof(Object00dc2260, value_0x00a0) == 0xa0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_00dc2260(const Object00dc2260 *self)
{
    return self->value_0x00a0;
}

/**
 *
 * The part of the object that auto_return_float_field_00dc2370 reads.
 *
 */
struct Object00dc2370 {
    uint8_t unknown_0x0000[0xbc];
    float value_0x00bc; /**< Read by auto_return_float_field_00dc2370; meaning unknown. */
};
static_assert(offsetof(Object00dc2370, value_0x00bc) == 0xbc);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_00dc2370(const Object00dc2370 *self)
{
    return self->value_0x00bc;
}

/**
 *
 * The part of the object that auto_return_float_field_00dc2380 reads.
 *
 */
struct Object00dc2380 {
    uint8_t unknown_0x0000[0xc0];
    float value_0x00c0; /**< Read by auto_return_float_field_00dc2380; meaning unknown. */
};
static_assert(offsetof(Object00dc2380, value_0x00c0) == 0xc0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_00dc2380(const Object00dc2380 *self)
{
    return self->value_0x00c0;
}
