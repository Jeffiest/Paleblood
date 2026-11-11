// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_009fc160 reads.
 *
 */
struct Object009fc160 {
    uint8_t unknown_0x0000[0x280];
    uint64_t value_0x0280; /**< Read by auto_return_field_009fc160; meaning unknown. */
};
static_assert(offsetof(Object009fc160, value_0x0280) == 0x280);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_009fc160(const Object009fc160 *self)
{
    return self->value_0x0280;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_009fdb30 = 0x1;

extern "C" uint8_t bb_auto_return_constant_009fdb30()
{
    return value_009fdb30;
}
