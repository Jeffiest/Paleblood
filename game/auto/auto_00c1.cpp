// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_00c10450 reads.
 *
 */
struct Object00c10450 {
    uint8_t unknown_0x0000[0x18];
    uint64_t value_0x0018; /**< Read by auto_return_field_00c10450; meaning unknown. */
};
static_assert(offsetof(Object00c10450, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_00c10450(const Object00c10450 *self)
{
    return self->value_0x0018;
}

/**
 *
 * The part of the object that auto_return_field_00c10460 reads.
 *
 */
struct Object00c10460 {
    uint8_t unknown_0x0000[0x8];
    uint64_t value_0x0008; /**< Read by auto_return_field_00c10460; meaning unknown. */
};
static_assert(offsetof(Object00c10460, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_00c10460(const Object00c10460 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_00c1c580 reads.
 *
 */
struct Object00c1c580 {
    uint8_t unknown_0x0000[0x29];
    uint8_t value_0x0029; /**< Read by auto_return_field_00c1c580; meaning unknown. */
};
static_assert(offsetof(Object00c1c580, value_0x0029) == 0x29);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_00c1c580(const Object00c1c580 *self)
{
    return self->value_0x0029;
}

/**
 *
 * The part of the object that auto_return_field_00c1cb40 reads.
 *
 */
struct Object00c1cb40 {
    uint8_t unknown_0x0000[0x88];
    uint64_t value_0x0088; /**< Read by auto_return_field_00c1cb40; meaning unknown. */
};
static_assert(offsetof(Object00c1cb40, value_0x0088) == 0x88);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_00c1cb40(const Object00c1cb40 *self)
{
    return self->value_0x0088;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00c1ead0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00c1eae0()
{
}
