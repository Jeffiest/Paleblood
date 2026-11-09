// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_00b00340 = 0x1;

extern "C" uint32_t bb_auto_return_constant_00b00340()
{
    return value_00b00340;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00b003c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00b00550()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00b00570()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00b00840()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_00b00c40 = 0x1;

extern "C" uint32_t bb_auto_return_constant_00b00c40()
{
    return value_00b00c40;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_00b00c50 = 0x1;

extern "C" uint8_t bb_auto_return_constant_00b00c50()
{
    return value_00b00c50;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00b05c80()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00b05ca0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00b05f70()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00b06470()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_00b06690()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_00b066a0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00b066b0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_00b066c0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_00b066d0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_00b066e0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_00b066f0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00b06930()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_00b07180 = 0x1;

extern "C" uint32_t bb_auto_return_constant_00b07180()
{
    return value_00b07180;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00b0e7b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00b0e880()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00b0ea10()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00b0ea30()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00b0ee70()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00b0f0a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00b0f2d0()
{
}

/**
 *
 * The part of the object that auto_return_field_00b0fba0 reads.
 *
 */
struct Object00b0fba0 {
    uint64_t value_0x0000; /**< Read by auto_return_field_00b0fba0; meaning unknown. */
};
static_assert(offsetof(Object00b0fba0, value_0x0000) == 0x0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_00b0fba0(const Object00b0fba0 *self)
{
    return self->value_0x0000;
}
