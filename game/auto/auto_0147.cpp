// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_014712b0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01472770 reads.
 *
 */
struct Object01472770 {
    uint8_t unknown_0x0000[0x8];
    uint32_t value_0x0008; /**< Read by auto_return_field_01472770; meaning unknown. */
};
static_assert(offsetof(Object01472770, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01472770(const Object01472770 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_01472790 reads.
 *
 */
struct Object01472790 {
    uint8_t unknown_0x0000[0xc];
    uint32_t value_0x000c; /**< Read by auto_return_field_01472790; meaning unknown. */
};
static_assert(offsetof(Object01472790, value_0x000c) == 0xc);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01472790(const Object01472790 *self)
{
    return self->value_0x000c;
}
