// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01491210()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01491270()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01491280()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01495ff0()
{
}

/**
 *
 * The part of the object that auto_return_field_01496000 reads.
 *
 */
struct Object01496000 {
    uint8_t unknown_0x0000[0x8];
    uint32_t value_0x0008; /**< Read by auto_return_field_01496000; meaning unknown. */
};
static_assert(offsetof(Object01496000, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01496000(const Object01496000 *self)
{
    return self->value_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0149b3c0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0149ede0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0149ef20()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0149f980()
{
}
