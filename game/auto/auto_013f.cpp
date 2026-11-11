// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_013f69f0 reads.
 *
 */
struct Object013f69f0 {
    uint8_t unknown_0x0000[0x98];
    uint64_t value_0x0098; /**< Read by auto_return_field_013f69f0; meaning unknown. */
};
static_assert(offsetof(Object013f69f0, value_0x0098) == 0x98);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_013f69f0(const Object013f69f0 *self)
{
    return self->value_0x0098;
}

/**
 *
 * The part of the object that auto_return_field_013f99e0 reads.
 *
 */
struct Object013f99e0 {
    uint8_t unknown_0x0000[0xc0];
    uint64_t value_0x00c0; /**< Read by auto_return_field_013f99e0; meaning unknown. */
};
static_assert(offsetof(Object013f99e0, value_0x00c0) == 0xc0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_013f99e0(const Object013f99e0 *self)
{
    return self->value_0x00c0;
}

/**
 *
 * The part of the object that auto_return_field_013ff270 reads.
 *
 */
struct Object013ff270 {
    uint8_t unknown_0x0000[0xc0];
    uint64_t value_0x00c0; /**< Read by auto_return_field_013ff270; meaning unknown. */
};
static_assert(offsetof(Object013ff270, value_0x00c0) == 0xc0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_013ff270(const Object013ff270 *self)
{
    return self->value_0x00c0;
}
