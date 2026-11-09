// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_01c51810 reads.
 *
 */
struct Object01c51810 {
    uint8_t unknown_0x0000[0x148];
    uint64_t value_0x0148; /**< Read by auto_return_field_01c51810; meaning unknown. */
};
static_assert(offsetof(Object01c51810, value_0x0148) == 0x148);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01c51810(const Object01c51810 *self)
{
    return self->value_0x0148;
}

/**
 *
 * The part of the object that auto_return_field_01c52330 reads.
 *
 */
struct Object01c52330 {
    uint8_t unknown_0x0000[0x22];
    uint8_t value_0x0022; /**< Read by auto_return_field_01c52330; meaning unknown. */
};
static_assert(offsetof(Object01c52330, value_0x0022) == 0x22);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_01c52330(const Object01c52330 *self)
{
    return self->value_0x0022;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01c55a70()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01c55a80()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01c55a90()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01c55aa0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01c55b70()
{
}

/**
 *
 * The part of the object that auto_return_field_01c575b0 reads.
 *
 */
struct Object01c575b0 {
    uint8_t unknown_0x0000[0x38];
    uint64_t value_0x0038; /**< Read by auto_return_field_01c575b0; meaning unknown. */
};
static_assert(offsetof(Object01c575b0, value_0x0038) == 0x38);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01c575b0(const Object01c575b0 *self)
{
    return self->value_0x0038;
}

/**
 *
 * The part of the object that auto_return_field_01c575c0 reads.
 *
 */
struct Object01c575c0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01c575c0; meaning unknown. */
};
static_assert(offsetof(Object01c575c0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01c575c0(const Object01c575c0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01c5c5f0()
{
}
