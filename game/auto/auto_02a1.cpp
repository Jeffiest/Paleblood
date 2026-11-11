// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a129b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a17f50()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a17f90()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a17fd0()
{
}

/**
 *
 * The part of the object that auto_return_field_02a1d980 reads.
 *
 */
struct Object02a1d980 {
    uint8_t unknown_0x0000[0x108];
    uint64_t value_0x0108; /**< Read by auto_return_field_02a1d980; meaning unknown. */
};
static_assert(offsetof(Object02a1d980, value_0x0108) == 0x108);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02a1d980(const Object02a1d980 *self)
{
    return self->value_0x0108;
}
