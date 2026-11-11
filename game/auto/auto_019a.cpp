// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_019a03c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_019a0420()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_019a8670 = 0x2;

extern "C" uint32_t bb_auto_return_constant_019a8670()
{
    return value_019a8670;
}

/**
 *
 * The part of the object that auto_return_member_address_019aa430 reads.
 *
 */
struct Object019aa430 {
    uint8_t unknown_0x0000[0x108];
    uint8_t member_0x0108; /**< Read by auto_return_member_address_019aa430; meaning unknown. */
};
static_assert(offsetof(Object019aa430, member_0x0108) == 0x108);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_019aa430(Object019aa430 *self)
{
    return &self->member_0x0108;
}

/**
 *
 * The part of the object that auto_return_field_019ac1b0 reads.
 *
 */
struct Object019ac1b0 {
    uint8_t unknown_0x0000[0x58];
    uint8_t value_0x0058; /**< Read by auto_return_field_019ac1b0; meaning unknown. */
};
static_assert(offsetof(Object019ac1b0, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_019ac1b0(const Object019ac1b0 *self)
{
    return self->value_0x0058;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_019ace80()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_019ad4f0 = 0x178;

extern "C" uint32_t bb_auto_return_constant_019ad4f0()
{
    return value_019ad4f0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_019ad810 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_019ad810()
{
    return value_019ad810;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_019adb30 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_019adb30()
{
    return value_019adb30;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_019ae8d0()
{
}
