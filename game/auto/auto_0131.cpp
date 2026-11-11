// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0131d080()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_0131d500 reads.
 *
 */
struct Object0131d500 {
    uint8_t unknown_0x0000[0x128];
    uint64_t value_0x0128; /**< Read by auto_return_field_0131d500; meaning unknown. */
};
static_assert(offsetof(Object0131d500, value_0x0128) == 0x128);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0131d500(const Object0131d500 *self)
{
    return self->value_0x0128;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0131d970()
{
}
