// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_00d7cd20 = 0x1;

extern "C" uint8_t bb_auto_return_constant_00d7cd20()
{
    return value_00d7cd20;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00d7ce60()
{
}

/**
 *
 * The part of the object that auto_return_field_00d7dba0 reads.
 *
 */
struct Object00d7dba0 {
    uint8_t unknown_0x0000[0x58];
    uint64_t value_0x0058; /**< Read by auto_return_field_00d7dba0; meaning unknown. */
};
static_assert(offsetof(Object00d7dba0, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_00d7dba0(const Object00d7dba0 *self)
{
    return self->value_0x0058;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00d7eec0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00d7eed0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00d7eef0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00d7ef00()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00d7ef20()
{
}
