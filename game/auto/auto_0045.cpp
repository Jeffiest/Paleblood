// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_00450ba0 reads.
 *
 */
struct Object00450ba0 {
    uint8_t unknown_0x0000[0x30];
    uint64_t value_0x0030; /**< Read by auto_return_field_00450ba0; meaning unknown. */
};
static_assert(offsetof(Object00450ba0, value_0x0030) == 0x30);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_00450ba0(const Object00450ba0 *self)
{
    return self->value_0x0030;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_00451100 = 0x1;

extern "C" uint8_t bb_auto_return_constant_00451100()
{
    return value_00451100;
}

/**
 *
 * The part of the object that auto_return_field_00454c70 reads.
 *
 */
struct Object00454c70 {
    uint8_t unknown_0x0000[0x28];
    uint64_t value_0x0028; /**< Read by auto_return_field_00454c70; meaning unknown. */
};
static_assert(offsetof(Object00454c70, value_0x0028) == 0x28);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_00454c70(const Object00454c70 *self)
{
    return self->value_0x0028;
}
