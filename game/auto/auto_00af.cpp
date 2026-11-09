// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00af3260()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00af32c0()
{
}

/**
 *
 * The part of the object that auto_return_field_00af6140 reads.
 *
 */
struct Object00af6140 {
    uint8_t unknown_0x0000[0x58];
    uint32_t value_0x0058; /**< Read by auto_return_field_00af6140; meaning unknown. */
};
static_assert(offsetof(Object00af6140, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_00af6140(const Object00af6140 *self)
{
    return self->value_0x0058;
}

/**
 *
 * The part of the object that auto_return_member_address_00af6160 reads.
 *
 */
struct Object00af6160 {
    uint8_t unknown_0x0000[0x40];
    uint8_t member_0x0040; /**< Read by auto_return_member_address_00af6160; meaning unknown. */
};
static_assert(offsetof(Object00af6160, member_0x0040) == 0x40);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_00af6160(Object00af6160 *self)
{
    return &self->member_0x0040;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00af63a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00af9fa0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00afa1c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00afa3f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00afacd0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_00afb830 = 0x1;

extern "C" uint8_t bb_auto_return_constant_00afb830()
{
    return value_00afb830;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_00afb840 = 0x1;

extern "C" uint32_t bb_auto_return_constant_00afb840()
{
    return value_00afb840;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_00afbaf0 = 0x1;

extern "C" uint32_t bb_auto_return_constant_00afbaf0()
{
    return value_00afbaf0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00aff520()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_00aff800()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_00aff810()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_00aff820 = 0x1;

extern "C" uint8_t bb_auto_return_constant_00aff820()
{
    return value_00aff820;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00aff830()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00aff840()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00aff9a0()
{
}
