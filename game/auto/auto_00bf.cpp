// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_00bf1a30 reads.
 *
 */
struct Object00bf1a30 {
    uint8_t unknown_0x0000[0x140];
    uint32_t value_0x0140; /**< Read by auto_return_field_00bf1a30; meaning unknown. */
};
static_assert(offsetof(Object00bf1a30, value_0x0140) == 0x140);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_00bf1a30(const Object00bf1a30 *self)
{
    return self->value_0x0140;
}

/**
 *
 * The part of the object that auto_return_field_00bf1aa0 reads.
 *
 */
struct Object00bf1aa0 {
    uint8_t unknown_0x0000[0x18];
    uint64_t value_0x0018; /**< Read by auto_return_field_00bf1aa0; meaning unknown. */
};
static_assert(offsetof(Object00bf1aa0, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_00bf1aa0(const Object00bf1aa0 *self)
{
    return self->value_0x0018;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_00bf6eb0 = 0x1;

extern "C" uint32_t bb_auto_return_constant_00bf6eb0()
{
    return value_00bf6eb0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00bfcd80()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_00bfd560()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_00bffca0 = 0x3;

extern "C" uint32_t bb_auto_return_constant_00bffca0()
{
    return value_00bffca0;
}
