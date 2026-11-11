// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_01732860 = 0x1;

extern "C" uint8_t bb_auto_return_constant_01732860()
{
    return value_01732860;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_01732870 = 0x1;

extern "C" uint8_t bb_auto_return_constant_01732870()
{
    return value_01732870;
}

/**
 *
 * The part of the object that auto_return_field_01735900 reads.
 *
 */
struct Object01735900 {
    uint8_t unknown_0x0000[0x8d];
    uint8_t value_0x008d; /**< Read by auto_return_field_01735900; meaning unknown. */
};
static_assert(offsetof(Object01735900, value_0x008d) == 0x8d);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_01735900(const Object01735900 *self)
{
    return self->value_0x008d;
}
