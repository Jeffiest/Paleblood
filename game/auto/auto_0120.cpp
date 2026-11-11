// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_01201f10 reads.
 *
 */
struct Object01201f10 {
    uint8_t unknown_0x0000[0x350];
    uint64_t value_0x0350; /**< Read by auto_return_field_01201f10; meaning unknown. */
};
static_assert(offsetof(Object01201f10, value_0x0350) == 0x350);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01201f10(const Object01201f10 *self)
{
    return self->value_0x0350;
}

/**
 *
 * The part of the object that auto_return_field_01201f20 reads.
 *
 */
struct Object01201f20 {
    uint8_t unknown_0x0000[0x358];
    uint64_t value_0x0358; /**< Read by auto_return_field_01201f20; meaning unknown. */
};
static_assert(offsetof(Object01201f20, value_0x0358) == 0x358);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01201f20(const Object01201f20 *self)
{
    return self->value_0x0358;
}
