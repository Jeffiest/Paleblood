// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_014602e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_014602f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_014624a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_014624b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01463de0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01464d60 = 0x1;

extern "C" uint32_t bb_auto_return_constant_01464d60()
{
    return value_01464d60;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01464d90()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01466d70()
{
}

/**
 *
 * The part of the object that auto_return_field_01466d80 reads.
 *
 */
struct Object01466d80 {
    uint8_t unknown_0x0000[0x8];
    uint64_t value_0x0008; /**< Read by auto_return_field_01466d80; meaning unknown. */
};
static_assert(offsetof(Object01466d80, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01466d80(const Object01466d80 *self)
{
    return self->value_0x0008;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_014676b0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0146fdc0()
{
    return 0;
}
