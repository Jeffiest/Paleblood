// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_008418a0 reads.
 *
 */
struct Object008418a0 {
    uint8_t unknown_0x0000[0x1a8];
    uint64_t value_0x01a8; /**< Read by auto_return_field_008418a0; meaning unknown. */
};
static_assert(offsetof(Object008418a0, value_0x01a8) == 0x1a8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_008418a0(const Object008418a0 *self)
{
    return self->value_0x01a8;
}

/**
 *
 * The part of the object that auto_return_field_008418b0 reads.
 *
 */
struct Object008418b0 {
    uint8_t unknown_0x0000[0x1a0];
    uint64_t value_0x01a0; /**< Read by auto_return_field_008418b0; meaning unknown. */
};
static_assert(offsetof(Object008418b0, value_0x01a0) == 0x1a0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_008418b0(const Object008418b0 *self)
{
    return self->value_0x01a0;
}
