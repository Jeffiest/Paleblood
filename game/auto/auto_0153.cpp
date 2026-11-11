// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_015380e0 reads.
 *
 */
struct Object015380e0 {
    uint8_t unknown_0x0000[0x80];
    uint64_t value_0x0080; /**< Read by auto_return_field_015380e0; meaning unknown. */
};
static_assert(offsetof(Object015380e0, value_0x0080) == 0x80);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_015380e0(const Object015380e0 *self)
{
    return self->value_0x0080;
}

/**
 *
 * The part of the object that auto_return_field_015380f0 reads.
 *
 */
struct Object015380f0 {
    uint8_t unknown_0x0000[0x80];
    uint64_t value_0x0080; /**< Read by auto_return_field_015380f0; meaning unknown. */
};
static_assert(offsetof(Object015380f0, value_0x0080) == 0x80);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_015380f0(const Object015380f0 *self)
{
    return self->value_0x0080;
}
