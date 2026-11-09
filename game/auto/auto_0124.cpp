// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01244760()
{
}

/**
 *
 * The part of the object that auto_return_field_01245330 reads.
 *
 */
struct Object01245330 {
    uint8_t unknown_0x0000[0x30];
    uint32_t value_0x0030; /**< Read by auto_return_field_01245330; meaning unknown. */
};
static_assert(offsetof(Object01245330, value_0x0030) == 0x30);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01245330(const Object01245330 *self)
{
    return self->value_0x0030;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01245340()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_01245410 = 0x1;

extern "C" uint8_t bb_auto_return_constant_01245410()
{
    return value_01245410;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01245520()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01248040()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0124a830()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0124a9a0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0124a9b0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0124a9b0()
{
    return value_0124a9b0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0124be80()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0124c110()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0124c440()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0124c5c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0124c5d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0124c5e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0124c5f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0124c600()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0124c610()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0124eda0()
{
}
