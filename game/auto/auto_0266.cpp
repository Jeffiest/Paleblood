// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_026601f0 reads.
 *
 */
struct Object026601f0 {
    uint8_t unknown_0x0000[0x38];
    uint64_t value_0x0038; /**< Read by auto_return_field_026601f0; meaning unknown. */
};
static_assert(offsetof(Object026601f0, value_0x0038) == 0x38);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_026601f0(const Object026601f0 *self)
{
    return self->value_0x0038;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02660620()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02662200()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02662220 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02662220()
{
    return value_02662220;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02663d60()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02664420()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02665940()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0266b040()
{
}
