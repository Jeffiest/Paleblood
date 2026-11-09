// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_006b0550()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_006b0560()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_006b1120 reads.
 *
 */
struct Object006b1120 {
    uint8_t unknown_0x0000[0x50];
    uint64_t value_0x0050; /**< Read by auto_return_field_006b1120; meaning unknown. */
};
static_assert(offsetof(Object006b1120, value_0x0050) == 0x50);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_006b1120(const Object006b1120 *self)
{
    return self->value_0x0050;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_006b1450()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_006b15c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_006b1730()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_006b1790()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_006b19c0 = 0x58;

extern "C" uint32_t bb_auto_return_constant_006b19c0()
{
    return value_006b19c0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_006b2330()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_006b2340()
{
}
