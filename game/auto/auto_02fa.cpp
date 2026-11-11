// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_02fa2b00 reads.
 *
 */
struct Object02fa2b00 {
    uint64_t value_0x0000; /**< Read by auto_return_field_02fa2b00; meaning unknown. */
};
static_assert(offsetof(Object02fa2b00, value_0x0000) == 0x0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02fa2b00(const Object02fa2b00 *self)
{
    return self->value_0x0000;
}
