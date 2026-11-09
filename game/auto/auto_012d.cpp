// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_012dca40 reads.
 *
 */
struct Object012dca40 {
    uint8_t unknown_0x0000[0x17];
    uint8_t value_0x0017; /**< Read by auto_return_field_012dca40; meaning unknown. */
};
static_assert(offsetof(Object012dca40, value_0x0017) == 0x17);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_012dca40(const Object012dca40 *self)
{
    return self->value_0x0017;
}

/**
 *
 * The part of the object that auto_return_field_012dca50 reads.
 *
 */
struct Object012dca50 {
    uint8_t unknown_0x0000[0x18];
    uint8_t value_0x0018; /**< Read by auto_return_field_012dca50; meaning unknown. */
};
static_assert(offsetof(Object012dca50, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_012dca50(const Object012dca50 *self)
{
    return self->value_0x0018;
}
