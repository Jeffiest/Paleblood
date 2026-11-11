// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_006ae8e0 reads.
 *
 */
struct Object006ae8e0 {
    uint8_t unknown_0x0000[0xe8];
    uint64_t value_0x00e8; /**< Read by auto_return_field_006ae8e0; meaning unknown. */
};
static_assert(offsetof(Object006ae8e0, value_0x00e8) == 0xe8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_006ae8e0(const Object006ae8e0 *self)
{
    return self->value_0x00e8;
}

/**
 *
 * The part of the object that auto_return_field_006af080 reads.
 *
 */
struct Object006af080 {
    uint8_t unknown_0x0000[0xd0];
    uint64_t value_0x00d0; /**< Read by auto_return_field_006af080; meaning unknown. */
};
static_assert(offsetof(Object006af080, value_0x00d0) == 0xd0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_006af080(const Object006af080 *self)
{
    return self->value_0x00d0;
}
