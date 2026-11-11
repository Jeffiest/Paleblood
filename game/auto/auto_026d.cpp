// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_026d6260 reads.
 *
 */
struct Object026d6260 {
    uint8_t unknown_0x0000[0x858];
    uint64_t value_0x0858; /**< Read by auto_return_field_026d6260; meaning unknown. */
};
static_assert(offsetof(Object026d6260, value_0x0858) == 0x858);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_026d6260(const Object026d6260 *self)
{
    return self->value_0x0858;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_026db780()
{
}
