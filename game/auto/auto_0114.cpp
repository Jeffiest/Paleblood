// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01141530()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01142e90 reads.
 *
 */
struct Object01142e90 {
    uint8_t unknown_0x0000[0x200];
    uint64_t value_0x0200; /**< Read by auto_return_field_01142e90; meaning unknown. */
};
static_assert(offsetof(Object01142e90, value_0x0200) == 0x200);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01142e90(const Object01142e90 *self)
{
    return self->value_0x0200;
}

/**
 *
 * The part of the object that auto_return_field_011472f0 reads.
 *
 */
struct __attribute__((packed)) Object011472f0 {
    uint8_t unknown_0x0000[0x205];
    uint64_t value_0x0205; /**< Read by auto_return_field_011472f0; meaning unknown. */
};
static_assert(offsetof(Object011472f0, value_0x0205) == 0x205);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_011472f0(const Object011472f0 *self)
{
    return self->value_0x0205;
}
