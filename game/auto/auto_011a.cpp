// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_011a08c0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_011a0a40()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_011a13a0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_011a42f0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_011a56d0 = 0x50;

extern "C" uint32_t bb_auto_return_constant_011a56d0()
{
    return value_011a56d0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_011a5fd0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_011aa0f0()
{
}

/**
 *
 * The part of the object that auto_return_field_011ac2a0 reads.
 *
 */
struct Object011ac2a0 {
    uint8_t unknown_0x0000[0xc0];
    uint32_t value_0x00c0; /**< Read by auto_return_field_011ac2a0; meaning unknown. */
};
static_assert(offsetof(Object011ac2a0, value_0x00c0) == 0xc0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_011ac2a0(const Object011ac2a0 *self)
{
    return self->value_0x00c0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_011ac490()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_011ae6c0()
{
}
