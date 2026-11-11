// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_00ebfd10 reads.
 *
 */
struct Object00ebfd10 {
    uint8_t unknown_0x0000[0xa8];
    uint64_t value_0x00a8; /**< Read by auto_return_field_00ebfd10; meaning unknown. */
};
static_assert(offsetof(Object00ebfd10, value_0x00a8) == 0xa8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_00ebfd10(const Object00ebfd10 *self)
{
    return self->value_0x00a8;
}
