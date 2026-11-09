// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_005f9980()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_005fb280()
{
}

/**
 *
 * The part of the object that auto_return_field_005ffd70 reads.
 *
 */
struct Object005ffd70 {
    uint8_t unknown_0x0000[0x88];
    uint64_t value_0x0088; /**< Read by auto_return_field_005ffd70; meaning unknown. */
};
static_assert(offsetof(Object005ffd70, value_0x0088) == 0x88);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_005ffd70(const Object005ffd70 *self)
{
    return self->value_0x0088;
}

/**
 *
 * The part of the object that auto_return_field_005ffdf0 reads.
 *
 */
struct Object005ffdf0 {
    uint8_t unknown_0x0000[0xa0];
    uint64_t value_0x00a0; /**< Read by auto_return_field_005ffdf0; meaning unknown. */
};
static_assert(offsetof(Object005ffdf0, value_0x00a0) == 0xa0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_005ffdf0(const Object005ffdf0 *self)
{
    return self->value_0x00a0;
}
