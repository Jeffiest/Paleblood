// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_00e132c0 reads.
 *
 */
struct Object00e132c0 {
    uint8_t unknown_0x0000[0x80];
    uint64_t value_0x0080; /**< Read by auto_return_field_00e132c0; meaning unknown. */
};
static_assert(offsetof(Object00e132c0, value_0x0080) == 0x80);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_00e132c0(const Object00e132c0 *self)
{
    return self->value_0x0080;
}

/**
 *
 * The part of the object that auto_return_field_00e18420 reads.
 *
 */
struct Object00e18420 {
    uint8_t unknown_0x0000[0x2d];
    int8_t value_0x002d; /**< Read by auto_return_field_00e18420; meaning unknown. */
};
static_assert(offsetof(Object00e18420, value_0x002d) == 0x2d);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" int32_t bb_auto_return_field_00e18420(const Object00e18420 *self)
{
    return self->value_0x002d;
}

/**
 *
 * The part of the object that auto_return_field_00e19f20 reads.
 *
 */
struct Object00e19f20 {
    uint8_t unknown_0x0000[0x7dc8];
    uint64_t value_0x7dc8; /**< Read by auto_return_field_00e19f20; meaning unknown. */
};
static_assert(offsetof(Object00e19f20, value_0x7dc8) == 0x7dc8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_00e19f20(const Object00e19f20 *self)
{
    return self->value_0x7dc8;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00e1a820()
{
}
