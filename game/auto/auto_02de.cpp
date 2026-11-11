// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02de1b70()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02de1bd0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02de28e0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02de3540()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02de3810()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02de38e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02de3b90()
{
}

/**
 *
 * The part of the object that auto_return_float_field_02de4670 reads.
 *
 */
struct Object02de4670 {
    uint8_t unknown_0x0000[0x60];
    float value_0x0060; /**< Read by auto_return_float_field_02de4670; meaning unknown. */
};
static_assert(offsetof(Object02de4670, value_0x0060) == 0x60);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_02de4670(const Object02de4670 *self)
{
    return self->value_0x0060;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02de4680()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02de56d0()
{
}
