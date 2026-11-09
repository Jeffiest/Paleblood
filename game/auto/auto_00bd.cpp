// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_00bdd640 = 0x4;

extern "C" uint32_t bb_auto_return_constant_00bdd640()
{
    return value_00bdd640;
}

/**
 *
 * The part of the object that auto_return_field_00bdec70 reads.
 *
 */
struct Object00bdec70 {
    uint8_t unknown_0x0000[0x20];
    uint64_t value_0x0020; /**< Read by auto_return_field_00bdec70; meaning unknown. */
};
static_assert(offsetof(Object00bdec70, value_0x0020) == 0x20);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_00bdec70(const Object00bdec70 *self)
{
    return self->value_0x0020;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_00bdfd00 = 0x8;

extern "C" uint32_t bb_auto_return_constant_00bdfd00()
{
    return value_00bdfd00;
}
