// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016d38c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016d3920()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016d3980()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016d54b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016d5510()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016d91e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016d9240()
{
}

/**
 *
 * The part of the object that auto_return_field_016dc890 reads.
 *
 */
struct Object016dc890 {
    uint8_t unknown_0x0000[0x35f8];
    uint64_t value_0x35f8; /**< Read by auto_return_field_016dc890; meaning unknown. */
};
static_assert(offsetof(Object016dc890, value_0x35f8) == 0x35f8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_016dc890(const Object016dc890 *self)
{
    return self->value_0x35f8;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016df9a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016dfa00()
{
}
