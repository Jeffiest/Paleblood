// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02140b20 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_02140b20()
{
    return value_02140b20;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02140e40 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_02140e40()
{
    return value_02140e40;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02141160 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_02141160()
{
    return value_02141160;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02144e80()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_021450a0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_021450a0()
{
    return value_021450a0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02148880()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02148d40 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02148d40()
{
    return value_02148d40;
}

/**
 *
 * The part of the object that auto_return_field_0214ae10 reads.
 *
 */
struct Object0214ae10 {
    uint8_t unknown_0x0000[0x158];
    uint8_t value_0x0158; /**< Read by auto_return_field_0214ae10; meaning unknown. */
};
static_assert(offsetof(Object0214ae10, value_0x0158) == 0x158);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_0214ae10(const Object0214ae10 *self)
{
    return self->value_0x0158;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0214b2e0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0214d190 = 0x178;

extern "C" uint32_t bb_auto_return_constant_0214d190()
{
    return value_0214d190;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0214d4b0 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_0214d4b0()
{
    return value_0214d4b0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0214d7d0 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_0214d7d0()
{
    return value_0214d7d0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0214ed70()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0214edd0()
{
}
