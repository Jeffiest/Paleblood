// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_0042b2b0 reads.
 *
 */
struct Object0042b2b0 {
    uint8_t unknown_0x0000[0x5488];
    uint32_t value_0x5488; /**< Read by auto_return_field_0042b2b0; meaning unknown. */
};
static_assert(offsetof(Object0042b2b0, value_0x5488) == 0x5488);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_0042b2b0(const Object0042b2b0 *self)
{
    return self->value_0x5488;
}
