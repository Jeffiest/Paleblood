// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_01254c40 reads.
 *
 */
struct Object01254c40 {
    uint8_t unknown_0x0000[0x68];
    uint32_t value_0x0068; /**< Read by auto_return_field_01254c40; meaning unknown. */
};
static_assert(offsetof(Object01254c40, value_0x0068) == 0x68);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01254c40(const Object01254c40 *self)
{
    return self->value_0x0068;
}

/**
 *
 * The part of the object that auto_return_field_01254c60 reads.
 *
 */
struct Object01254c60 {
    uint8_t unknown_0x0000[0x68];
    uint32_t value_0x0068; /**< Read by auto_return_field_01254c60; meaning unknown. */
};
static_assert(offsetof(Object01254c60, value_0x0068) == 0x68);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01254c60(const Object01254c60 *self)
{
    return self->value_0x0068;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01255c60()
{
}

/**
 *
 * The part of the object that auto_return_field_01258540 reads.
 *
 */
struct Object01258540 {
    uint8_t unknown_0x0000[0xe4];
    uint32_t value_0x00e4; /**< Read by auto_return_field_01258540; meaning unknown. */
};
static_assert(offsetof(Object01258540, value_0x00e4) == 0xe4);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01258540(const Object01258540 *self)
{
    return self->value_0x00e4;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01258890()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_012588a0()
{
}
