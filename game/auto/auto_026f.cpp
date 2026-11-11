// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_026f2860 reads.
 *
 */
struct Object026f2860 {
    uint8_t unknown_0x0000[0x13b0];
    uint64_t value_0x13b0; /**< Read by auto_return_field_026f2860; meaning unknown. */
};
static_assert(offsetof(Object026f2860, value_0x13b0) == 0x13b0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_026f2860(const Object026f2860 *self)
{
    return self->value_0x13b0;
}

/**
 *
 * The part of the object that auto_return_field_026f2870 reads.
 *
 */
struct Object026f2870 {
    uint8_t unknown_0x0000[0x13b8];
    uint64_t value_0x13b8; /**< Read by auto_return_field_026f2870; meaning unknown. */
};
static_assert(offsetof(Object026f2870, value_0x13b8) == 0x13b8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_026f2870(const Object026f2870 *self)
{
    return self->value_0x13b8;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_026f3990()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_026f3a90()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_026f83f0()
{
}

/**
 *
 * The part of the object that auto_return_field_026f8a70 reads.
 *
 */
struct Object026f8a70 {
    uint8_t unknown_0x0000[0xf0];
    uint64_t value_0x00f0; /**< Read by auto_return_field_026f8a70; meaning unknown. */
};
static_assert(offsetof(Object026f8a70, value_0x00f0) == 0xf0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_026f8a70(const Object026f8a70 *self)
{
    return self->value_0x00f0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_026f9d00()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_026fd1a0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_026fd1a0()
{
    return value_026fd1a0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_026fd1b0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_026fd1b0()
{
    return value_026fd1b0;
}
