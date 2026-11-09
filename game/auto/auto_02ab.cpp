// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02ab82a0()
{
}

/**
 *
 * The part of the object that auto_return_field_02ab9a50 reads.
 *
 */
struct Object02ab9a50 {
    uint8_t unknown_0x0000[0x24];
    uint8_t value_0x0024; /**< Read by auto_return_field_02ab9a50; meaning unknown. */
};
static_assert(offsetof(Object02ab9a50, value_0x0024) == 0x24);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02ab9a50(const Object02ab9a50 *self)
{
    return self->value_0x0024;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02ab9c00()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02ab9c10()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02ab9c20()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02ab9c30()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02ab9c40()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02ab9c50()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02abb4a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02abb8d0()
{
}
