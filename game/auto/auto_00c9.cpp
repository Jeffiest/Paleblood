// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00c91830()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00c91840()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00c91da0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00c91dc0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00c91de0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00c91e00()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00c922a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00c92d70()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00c92d80()
{
}

/**
 *
 * The part of the object that auto_return_field_00c93df0 reads.
 *
 */
struct Object00c93df0 {
    uint8_t unknown_0x0000[0x20];
    uint64_t value_0x0020; /**< Read by auto_return_field_00c93df0; meaning unknown. */
};
static_assert(offsetof(Object00c93df0, value_0x0020) == 0x20);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_00c93df0(const Object00c93df0 *self)
{
    return self->value_0x0020;
}

/**
 *
 * The part of the object that auto_return_field_00c94850 reads.
 *
 */
struct Object00c94850 {
    uint8_t unknown_0x0000[0x50];
    uint32_t value_0x0050; /**< Read by auto_return_field_00c94850; meaning unknown. */
};
static_assert(offsetof(Object00c94850, value_0x0050) == 0x50);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_00c94850(const Object00c94850 *self)
{
    return self->value_0x0050;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_00c991f0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_00c991f0()
{
    return value_00c991f0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00c9ddb0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00c9ddc0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00c9dde0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00c9ef00()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00c9f2d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00c9f2f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00c9f310()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00c9f330()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00c9ff30()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00c9ff40()
{
}
