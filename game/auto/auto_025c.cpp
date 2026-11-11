// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_025c4250 reads.
 *
 */
struct Object025c4250 {
    uint8_t unknown_0x0000[0x148];
    uint8_t value_0x0148; /**< Read by auto_return_field_025c4250; meaning unknown. */
};
static_assert(offsetof(Object025c4250, value_0x0148) == 0x148);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_025c4250(const Object025c4250 *self)
{
    return self->value_0x0148;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_025cca10()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_025cca30()
{
}
