// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_012223b0 reads.
 *
 */
struct Object012223b0 {
    uint8_t unknown_0x0000[0x8];
    uint64_t value_0x0008; /**< Read by auto_return_field_012223b0; meaning unknown. */
};
static_assert(offsetof(Object012223b0, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_012223b0(const Object012223b0 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_012223c0 reads.
 *
 */
struct Object012223c0 {
    uint8_t unknown_0x0000[0x8];
    uint64_t value_0x0008; /**< Read by auto_return_field_012223c0; meaning unknown. */
};
static_assert(offsetof(Object012223c0, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_012223c0(const Object012223c0 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_0122b2a0 reads.
 *
 */
struct Object0122b2a0 {
    uint8_t unknown_0x0000[0x34];
    uint32_t value_0x0034; /**< Read by auto_return_field_0122b2a0; meaning unknown. */
};
static_assert(offsetof(Object0122b2a0, value_0x0034) == 0x34);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_0122b2a0(const Object0122b2a0 *self)
{
    return self->value_0x0034;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0122e6d0()
{
}
