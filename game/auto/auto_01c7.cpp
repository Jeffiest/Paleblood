// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_01c76050 reads.
 *
 */
struct Object01c76050 {
    uint8_t unknown_0x0000[0x1c8];
    uint32_t value_0x01c8; /**< Read by auto_return_field_01c76050; meaning unknown. */
};
static_assert(offsetof(Object01c76050, value_0x01c8) == 0x1c8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01c76050(const Object01c76050 *self)
{
    return self->value_0x01c8;
}

/**
 *
 * The part of the object that auto_return_field_01c777d0 reads.
 *
 */
struct Object01c777d0 {
    uint8_t unknown_0x0000[0xa8];
    uint32_t value_0x00a8; /**< Read by auto_return_field_01c777d0; meaning unknown. */
};
static_assert(offsetof(Object01c777d0, value_0x00a8) == 0xa8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01c777d0(const Object01c777d0 *self)
{
    return self->value_0x00a8;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01c7c6c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01c7c790()
{
}
