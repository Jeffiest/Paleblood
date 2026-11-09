// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_0155f740 reads.
 *
 */
struct Object0155f740 {
    uint8_t unknown_0x0000[0x58];
    uint64_t value_0x0058; /**< Read by auto_return_field_0155f740; meaning unknown. */
};
static_assert(offsetof(Object0155f740, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0155f740(const Object0155f740 *self)
{
    return self->value_0x0058;
}
