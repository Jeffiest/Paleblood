// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00605d80()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00609ed0()
{
}

/**
 *
 * The part of the object that auto_return_field_0060ad90 reads.
 *
 */
struct Object0060ad90 {
    uint8_t unknown_0x0000[0x88];
    uint64_t value_0x0088; /**< Read by auto_return_field_0060ad90; meaning unknown. */
};
static_assert(offsetof(Object0060ad90, value_0x0088) == 0x88);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0060ad90(const Object0060ad90 *self)
{
    return self->value_0x0088;
}
