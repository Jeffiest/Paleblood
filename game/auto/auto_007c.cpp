// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_007c7b70 = 0x2911;

extern "C" uint32_t bb_auto_return_constant_007c7b70()
{
    return value_007c7b70;
}

/**
 *
 * The part of the object that auto_return_field_007cc6c0 reads.
 *
 */
struct Object007cc6c0 {
    uint8_t unknown_0x0000[0x428];
    uint32_t value_0x0428; /**< Read by auto_return_field_007cc6c0; meaning unknown. */
};
static_assert(offsetof(Object007cc6c0, value_0x0428) == 0x428);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_007cc6c0(const Object007cc6c0 *self)
{
    return self->value_0x0428;
}

/**
 *
 * The part of the object that auto_return_field_007cc6d0 reads.
 *
 */
struct Object007cc6d0 {
    uint8_t unknown_0x0000[0x188];
    uint32_t value_0x0188; /**< Read by auto_return_field_007cc6d0; meaning unknown. */
};
static_assert(offsetof(Object007cc6d0, value_0x0188) == 0x188);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_007cc6d0(const Object007cc6d0 *self)
{
    return self->value_0x0188;
}
