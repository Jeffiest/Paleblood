// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_014c4030()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_014c43c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_014c43d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_014c43e0()
{
}

/**
 *
 * The part of the object that auto_return_field_014c5430 reads.
 *
 */
struct Object014c5430 {
    uint8_t unknown_0x0000[0x20];
    uint64_t value_0x0020; /**< Read by auto_return_field_014c5430; meaning unknown. */
};
static_assert(offsetof(Object014c5430, value_0x0020) == 0x20);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_014c5430(const Object014c5430 *self)
{
    return self->value_0x0020;
}

/**
 *
 * The part of the object that auto_return_field_014c67b0 reads.
 *
 */
struct Object014c67b0 {
    uint8_t unknown_0x0000[0x38];
    uint32_t value_0x0038; /**< Read by auto_return_field_014c67b0; meaning unknown. */
};
static_assert(offsetof(Object014c67b0, value_0x0038) == 0x38);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_014c67b0(const Object014c67b0 *self)
{
    return self->value_0x0038;
}

/**
 *
 * The part of the object that auto_return_field_014c7980 reads.
 *
 */
struct Object014c7980 {
    uint8_t unknown_0x0000[0x60];
    uint64_t value_0x0060; /**< Read by auto_return_field_014c7980; meaning unknown. */
};
static_assert(offsetof(Object014c7980, value_0x0060) == 0x60);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_014c7980(const Object014c7980 *self)
{
    return self->value_0x0060;
}
