// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_01806070 reads.
 *
 */
struct Object01806070 {
    uint8_t unknown_0x0000[0x90];
    uint32_t value_0x0090; /**< Read by auto_return_field_01806070; meaning unknown. */
};
static_assert(offsetof(Object01806070, value_0x0090) == 0x90);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01806070(const Object01806070 *self)
{
    return self->value_0x0090;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01807870 = 0x90;

extern "C" uint32_t bb_auto_return_constant_01807870()
{
    return value_01807870;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0180e690 = 0x90;

extern "C" uint32_t bb_auto_return_constant_0180e690()
{
    return value_0180e690;
}
