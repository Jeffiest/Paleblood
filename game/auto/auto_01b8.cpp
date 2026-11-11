// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_01b8e110 reads.
 *
 */
struct Object01b8e110 {
    uint8_t unknown_0x0000[0xd8];
    uint32_t value_0x00d8; /**< Read by auto_return_field_01b8e110; meaning unknown. */
};
static_assert(offsetof(Object01b8e110, value_0x00d8) == 0xd8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01b8e110(const Object01b8e110 *self)
{
    return self->value_0x00d8;
}

/**
 *
 * The part of the object that auto_return_field_01b8fa80 reads.
 *
 */
struct Object01b8fa80 {
    uint8_t unknown_0x0000[0x118];
    uint8_t value_0x0118; /**< Read by auto_return_field_01b8fa80; meaning unknown. */
};
static_assert(offsetof(Object01b8fa80, value_0x0118) == 0x118);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01b8fa80(const Object01b8fa80 *self)
{
    return self->value_0x0118;
}
