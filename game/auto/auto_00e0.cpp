// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_00e057f0 reads.
 *
 */
struct Object00e057f0 {
    uint8_t unknown_0x0000[0x358];
    uint64_t value_0x0358; /**< Read by auto_return_field_00e057f0; meaning unknown. */
};
static_assert(offsetof(Object00e057f0, value_0x0358) == 0x358);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_00e057f0(const Object00e057f0 *self)
{
    return self->value_0x0358;
}

/**
 *
 * The part of the object that auto_return_field_00e05800 reads.
 *
 */
struct Object00e05800 {
    uint8_t unknown_0x0000[0x360];
    uint64_t value_0x0360; /**< Read by auto_return_field_00e05800; meaning unknown. */
};
static_assert(offsetof(Object00e05800, value_0x0360) == 0x360);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_00e05800(const Object00e05800 *self)
{
    return self->value_0x0360;
}
