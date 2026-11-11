// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_008cc710 reads.
 *
 */
struct Object008cc710 {
    uint8_t unknown_0x0000[0x28];
    int8_t value_0x0028; /**< Read by auto_return_field_008cc710; meaning unknown. */
};
static_assert(offsetof(Object008cc710, value_0x0028) == 0x28);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" int32_t bb_auto_return_field_008cc710(const Object008cc710 *self)
{
    return self->value_0x0028;
}

/**
 *
 * The part of the object that auto_return_field_008cc760 reads.
 *
 */
struct Object008cc760 {
    uint8_t unknown_0x0000[0x2a];
    int8_t value_0x002a; /**< Read by auto_return_field_008cc760; meaning unknown. */
};
static_assert(offsetof(Object008cc760, value_0x002a) == 0x2a);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" int32_t bb_auto_return_field_008cc760(const Object008cc760 *self)
{
    return self->value_0x002a;
}

/**
 *
 * The part of the object that auto_return_field_008cc780 reads.
 *
 */
struct Object008cc780 {
    uint8_t unknown_0x0000[0x2b];
    int8_t value_0x002b; /**< Read by auto_return_field_008cc780; meaning unknown. */
};
static_assert(offsetof(Object008cc780, value_0x002b) == 0x2b);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" int32_t bb_auto_return_field_008cc780(const Object008cc780 *self)
{
    return self->value_0x002b;
}
