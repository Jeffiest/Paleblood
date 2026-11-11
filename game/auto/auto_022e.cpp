// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_022e1130 reads.
 *
 */
struct Object022e1130 {
    uint8_t unknown_0x0000[0x90];
    uint64_t value_0x0090; /**< Read by auto_return_field_022e1130; meaning unknown. */
};
static_assert(offsetof(Object022e1130, value_0x0090) == 0x90);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_022e1130(const Object022e1130 *self)
{
    return self->value_0x0090;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_022e16c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_022e4600()
{
}

/**
 *
 * The part of the object that auto_return_field_022e5fc0 reads.
 *
 */
struct Object022e5fc0 {
    uint8_t unknown_0x0000[0x68];
    uint64_t value_0x0068; /**< Read by auto_return_field_022e5fc0; meaning unknown. */
};
static_assert(offsetof(Object022e5fc0, value_0x0068) == 0x68);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_022e5fc0(const Object022e5fc0 *self)
{
    return self->value_0x0068;
}

/**
 *
 * The part of the object that auto_return_field_022ea680 reads.
 *
 */
struct Object022ea680 {
    uint8_t unknown_0x0000[0x90];
    uint64_t value_0x0090; /**< Read by auto_return_field_022ea680; meaning unknown. */
};
static_assert(offsetof(Object022ea680, value_0x0090) == 0x90);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_022ea680(const Object022ea680 *self)
{
    return self->value_0x0090;
}
