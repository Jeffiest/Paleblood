// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016e5d00()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016e5d60()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016e7a00()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016e83f0()
{
}

/**
 *
 * The part of the object that auto_return_field_016ea220 reads.
 *
 */
struct Object016ea220 {
    uint8_t unknown_0x0000[0x4c];
    uint32_t value_0x004c; /**< Read by auto_return_field_016ea220; meaning unknown. */
};
static_assert(offsetof(Object016ea220, value_0x004c) == 0x4c);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_016ea220(const Object016ea220 *self)
{
    return self->value_0x004c;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016eb9a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016ebe40()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016ec7e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016ede90()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016edef0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016edf50()
{
}
