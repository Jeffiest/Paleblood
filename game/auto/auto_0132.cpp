// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_013254f0()
{
}

/**
 *
 * The part of the object that auto_return_field_0132c720 reads.
 *
 */
struct Object0132c720 {
    uint8_t unknown_0x0000[0x170];
    uint64_t value_0x0170; /**< Read by auto_return_field_0132c720; meaning unknown. */
};
static_assert(offsetof(Object0132c720, value_0x0170) == 0x170);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0132c720(const Object0132c720 *self)
{
    return self->value_0x0170;
}
