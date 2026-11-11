// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_014868d0 reads.
 *
 */
struct Object014868d0 {
    uint8_t unknown_0x0000[0x1a];
    uint16_t value_0x001a; /**< Read by auto_return_field_014868d0; meaning unknown. */
};
static_assert(offsetof(Object014868d0, value_0x001a) == 0x1a);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_014868d0(const Object014868d0 *self)
{
    return self->value_0x001a;
}

/**
 *
 * The part of the object that auto_return_field_01486ca0 reads.
 *
 */
struct Object01486ca0 {
    uint32_t value_0x0000; /**< Read by auto_return_field_01486ca0; meaning unknown. */
};
static_assert(offsetof(Object01486ca0, value_0x0000) == 0x0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01486ca0(const Object01486ca0 *self)
{
    return self->value_0x0000;
}

/**
 *
 * The part of the object that auto_return_field_01486d70 reads.
 *
 */
struct Object01486d70 {
    uint8_t unknown_0x0000[0x18];
    uint16_t value_0x0018; /**< Read by auto_return_field_01486d70; meaning unknown. */
};
static_assert(offsetof(Object01486d70, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01486d70(const Object01486d70 *self)
{
    return self->value_0x0018;
}
