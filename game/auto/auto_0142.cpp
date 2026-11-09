// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_01423c00 reads.
 *
 */
struct Object01423c00 {
    uint8_t unknown_0x0000[0x38];
    uint64_t value_0x0038; /**< Read by auto_return_field_01423c00; meaning unknown. */
};
static_assert(offsetof(Object01423c00, value_0x0038) == 0x38);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01423c00(const Object01423c00 *self)
{
    return self->value_0x0038;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01426ea0()
{
}
