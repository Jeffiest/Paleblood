// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_025b37f0()
{
}

/**
 *
 * The part of the object that auto_return_field_025ba8f0 reads.
 *
 */
struct Object025ba8f0 {
    uint8_t unknown_0x0000[0x10];
    uint64_t value_0x0010; /**< Read by auto_return_field_025ba8f0; meaning unknown. */
};
static_assert(offsetof(Object025ba8f0, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_025ba8f0(const Object025ba8f0 *self)
{
    return self->value_0x0010;
}

/**
 *
 * The part of the object that auto_return_field_025bd240 reads.
 *
 */
struct Object025bd240 {
    uint8_t unknown_0x0000[0x4c];
    uint8_t value_0x004c; /**< Read by auto_return_field_025bd240; meaning unknown. */
};
static_assert(offsetof(Object025bd240, value_0x004c) == 0x4c);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_025bd240(const Object025bd240 *self)
{
    return self->value_0x004c;
}
