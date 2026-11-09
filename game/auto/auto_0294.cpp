// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02942440 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02942440()
{
    return value_02942440;
}

/**
 *
 * The part of the object that auto_return_member_address_029458f0 reads.
 *
 */
struct Object029458f0 {
    uint8_t unknown_0x0000[0x20];
    uint8_t member_0x0020; /**< Read by auto_return_member_address_029458f0; meaning unknown. */
};
static_assert(offsetof(Object029458f0, member_0x0020) == 0x20);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_029458f0(Object029458f0 *self)
{
    return &self->member_0x0020;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02945900()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02945af0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_029499a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_029499f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02949f10()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02949f60()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0294a4f0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0294a4f0()
{
    return value_0294a4f0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0294a640()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0294a690()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0294a6e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0294a730()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0294a780()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0294a7e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0294a830()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0294aa50()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0294aa60()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0294ac50()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0294ac60()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0294ae50()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0294ae60()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0294ae70()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0294ae80()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0294ae90()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0294b4e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0294b510()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0294b520()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0294b590()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0294c0b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0294c100()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0294fde0 = 0x40;

extern "C" uint32_t bb_auto_return_constant_0294fde0()
{
    return value_0294fde0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0294fdf0 = 0x1;

extern "C" uint32_t bb_auto_return_constant_0294fdf0()
{
    return value_0294fdf0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0294fe00 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0294fe00()
{
    return value_0294fe00;
}

/**
 *
 * The part of the object that auto_return_field_0294fe10 reads.
 *
 */
struct Object0294fe10 {
    uint8_t unknown_0x0000[0x38];
    uint64_t value_0x0038; /**< Read by auto_return_field_0294fe10; meaning unknown. */
};
static_assert(offsetof(Object0294fe10, value_0x0038) == 0x38);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0294fe10(const Object0294fe10 *self)
{
    return self->value_0x0038;
}
