// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0041cac0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0041d010 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0041d010()
{
    return value_0041d010;
}

/**
 *
 * The part of the object that auto_return_field_00418d80 reads.
 *
 */
struct Object00418d80 {
    uint8_t unknown_0x0000[0x1c0];
    uint64_t value_0x01c0; /**< Read by auto_return_field_00418d80; meaning unknown. */
};
static_assert(offsetof(Object00418d80, value_0x01c0) == 0x1c0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_00418d80(const Object00418d80 *self)
{
    return self->value_0x01c0;
}
