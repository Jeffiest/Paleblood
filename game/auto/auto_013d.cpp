// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_013d0500()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_013d22b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_013d5cd0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_013d5d70()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_013d5e10()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_013d5eb0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_013d5f50()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_013d6380()
{
}

/**
 *
 * The part of the object that auto_return_field_013d6870 reads.
 *
 */
struct Object013d6870 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_013d6870; meaning unknown. */
};
static_assert(offsetof(Object013d6870, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_013d6870(const Object013d6870 *self)
{
    return self->value_0x0040;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_013db660()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_013dbdd0()
{
}
