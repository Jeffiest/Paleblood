// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_0145f280 reads.
 *
 */
struct Object0145f280 {
    uint8_t unknown_0x0000[0x408];
    uint8_t value_0x0408; /**< Read by auto_return_field_0145f280; meaning unknown. */
};
static_assert(offsetof(Object0145f280, value_0x0408) == 0x408);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_0145f280(const Object0145f280 *self)
{
    return self->value_0x0408;
}
