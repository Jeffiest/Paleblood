// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_00ec80f0 reads.
 *
 */
struct Object00ec80f0 {
    uint8_t unknown_0x0000[0x80];
    uint64_t value_0x0080; /**< Read by auto_return_field_00ec80f0; meaning unknown. */
};
static_assert(offsetof(Object00ec80f0, value_0x0080) == 0x80);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_00ec80f0(const Object00ec80f0 *self)
{
    return self->value_0x0080;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_00ece870 = 0x1;

extern "C" uint8_t bb_auto_return_constant_00ece870()
{
    return value_00ece870;
}
