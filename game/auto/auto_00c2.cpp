// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_00c24020()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_00c25d60 reads.
 *
 */
struct Object00c25d60 {
    uint8_t unknown_0x0000[0x88];
    uint64_t value_0x0088; /**< Read by auto_return_field_00c25d60; meaning unknown. */
};
static_assert(offsetof(Object00c25d60, value_0x0088) == 0x88);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_00c25d60(const Object00c25d60 *self)
{
    return self->value_0x0088;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00c25da0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00c25dc0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00c25dd0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00c25df0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00c25e00()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00c26c20()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00c26c70()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00c26ce0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00c26cf0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00c28220()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00c28240()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00c28250()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00c28c30()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00c2ae90()
{
}
