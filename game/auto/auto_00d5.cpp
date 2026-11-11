// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_00d51b80 reads.
 *
 */
struct Object00d51b80 {
    uint8_t unknown_0x0000[0xc0];
    uint64_t value_0x00c0; /**< Read by auto_return_field_00d51b80; meaning unknown. */
};
static_assert(offsetof(Object00d51b80, value_0x00c0) == 0xc0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_00d51b80(const Object00d51b80 *self)
{
    return self->value_0x00c0;
}

/**
 *
 * The part of the object that auto_return_float_field_00d561c0 reads.
 *
 */
struct Object00d561c0 {
    uint8_t unknown_0x0000[0x20];
    float value_0x0020; /**< Read by auto_return_float_field_00d561c0; meaning unknown. */
};
static_assert(offsetof(Object00d561c0, value_0x0020) == 0x20);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_00d561c0(const Object00d561c0 *self)
{
    return self->value_0x0020;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00d5ae50()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00d5fa20()
{
}
