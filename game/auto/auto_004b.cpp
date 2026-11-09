// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_004bb150()
{
}

/**
 *
 * The part of the object that auto_return_field_004bb210 reads.
 *
 */
struct Object004bb210 {
    uint8_t unknown_0x0000[0x8];
    uint64_t value_0x0008; /**< Read by auto_return_field_004bb210; meaning unknown. */
};
static_assert(offsetof(Object004bb210, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_004bb210(const Object004bb210 *self)
{
    return self->value_0x0008;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_004bb390()
{
}
