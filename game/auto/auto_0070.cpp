// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_00700ab0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_00700ac0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00702a90()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00702e10()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00702e20()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00702e30()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00702e40()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_007030d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_007030e0()
{
}

/**
 *
 * The part of the object that auto_return_field_0070de20 reads.
 *
 */
struct Object0070de20 {
    uint8_t unknown_0x0000[0x8];
    uint64_t value_0x0008; /**< Read by auto_return_field_0070de20; meaning unknown. */
};
static_assert(offsetof(Object0070de20, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0070de20(const Object0070de20 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_0070de30 reads.
 *
 */
struct Object0070de30 {
    uint8_t unknown_0x0000[0x8];
    uint64_t value_0x0008; /**< Read by auto_return_field_0070de30; meaning unknown. */
};
static_assert(offsetof(Object0070de30, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0070de30(const Object0070de30 *self)
{
    return self->value_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0070e460()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0070ea80()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0070eb70()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0070eca0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0070ed60()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0070ee00()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0070f480()
{
    return 0;
}
