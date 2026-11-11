// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_017e51f0 reads.
 *
 */
struct Object017e51f0 {
    uint8_t unknown_0x0000[0xf8];
    uint64_t value_0x00f8; /**< Read by auto_return_field_017e51f0; meaning unknown. */
};
static_assert(offsetof(Object017e51f0, value_0x00f8) == 0xf8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_017e51f0(const Object017e51f0 *self)
{
    return self->value_0x00f8;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_017eb8a0()
{
}

/**
 *
 * The part of the object that auto_return_field_017ee460 reads.
 *
 */
struct Object017ee460 {
    uint8_t unknown_0x0000[0x88];
    uint64_t value_0x0088; /**< Read by auto_return_field_017ee460; meaning unknown. */
};
static_assert(offsetof(Object017ee460, value_0x0088) == 0x88);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_017ee460(const Object017ee460 *self)
{
    return self->value_0x0088;
}
