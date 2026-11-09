// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_014a0cf0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_014a1030()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_014a3bf0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_014a64c0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_014a64f0 reads.
 *
 */
struct Object014a64f0 {
    uint8_t unknown_0x0000[0x18];
    uint32_t value_0x0018; /**< Read by auto_return_field_014a64f0; meaning unknown. */
};
static_assert(offsetof(Object014a64f0, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_014a64f0(const Object014a64f0 *self)
{
    return self->value_0x0018;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_014a8400 = 0x40;

extern "C" uint32_t bb_auto_return_constant_014a8400()
{
    return value_014a8400;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_014a8410 = 0x14;

extern "C" uint32_t bb_auto_return_constant_014a8410()
{
    return value_014a8410;
}

/**
 *
 * The part of the object that auto_return_member_address_014aaa00 reads.
 *
 */
struct Object014aaa00 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_014aaa00; meaning unknown. */
};
static_assert(offsetof(Object014aaa00, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_014aaa00(Object014aaa00 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_014ae6a0()
{
}
