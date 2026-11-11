// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_01cd6880 reads.
 *
 */
struct Object01cd6880 {
    uint8_t unknown_0x0000[0x3b0];
    uint64_t value_0x03b0; /**< Read by auto_return_field_01cd6880; meaning unknown. */
};
static_assert(offsetof(Object01cd6880, value_0x03b0) == 0x3b0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01cd6880(const Object01cd6880 *self)
{
    return self->value_0x03b0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_01cd7410 = 0x1;

extern "C" uint8_t bb_auto_return_constant_01cd7410()
{
    return value_01cd7410;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_01cd7510 = 0x1;

extern "C" uint8_t bb_auto_return_constant_01cd7510()
{
    return value_01cd7510;
}

/**
 *
 * The part of the object that auto_return_field_01cd7590 reads.
 *
 */
struct Object01cd7590 {
    uint8_t unknown_0x0000[0x1f0];
    uint32_t value_0x01f0; /**< Read by auto_return_field_01cd7590; meaning unknown. */
};
static_assert(offsetof(Object01cd7590, value_0x01f0) == 0x1f0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01cd7590(const Object01cd7590 *self)
{
    return self->value_0x01f0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01cd77b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01cd7800()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01cd7860()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01cd78c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01cd7b20()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01cde800()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01cde8d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01cde930()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01cde990()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01cdea60()
{
}
