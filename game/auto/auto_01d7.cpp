// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d72270()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d727f0 = 0x108;

extern "C" uint32_t bb_auto_return_constant_01d727f0()
{
    return value_01d727f0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d72b10 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01d72b10()
{
    return value_01d72b10;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d72e30 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01d72e30()
{
    return value_01d72e30;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d75cd0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d75da0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01d77fa0 reads.
 *
 */
struct Object01d77fa0 {
    uint8_t unknown_0x0000[0xd0];
    uint8_t member_0x00d0; /**< Read by auto_return_member_address_01d77fa0; meaning unknown. */
};
static_assert(offsetof(Object01d77fa0, member_0x00d0) == 0xd0);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01d77fa0(Object01d77fa0 *self)
{
    return &self->member_0x00d0;
}

/**
 *
 * The part of the object that auto_return_member_address_01d77fb0 reads.
 *
 */
struct Object01d77fb0 {
    uint8_t unknown_0x0000[0xd0];
    uint8_t member_0x00d0; /**< Read by auto_return_member_address_01d77fb0; meaning unknown. */
};
static_assert(offsetof(Object01d77fb0, member_0x00d0) == 0xd0);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01d77fb0(Object01d77fb0 *self)
{
    return &self->member_0x00d0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d7a8d0 = 0x210;

extern "C" uint32_t bb_auto_return_constant_01d7a8d0()
{
    return value_01d7a8d0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d7abf0 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01d7abf0()
{
    return value_01d7abf0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d7af10 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01d7af10()
{
    return value_01d7af10;
}

/**
 *
 * The part of the object that auto_return_member_address_01d7c420 reads.
 *
 */
struct Object01d7c420 {
    uint8_t unknown_0x0000[0xd0];
    uint8_t member_0x00d0; /**< Read by auto_return_member_address_01d7c420; meaning unknown. */
};
static_assert(offsetof(Object01d7c420, member_0x00d0) == 0xd0);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01d7c420(Object01d7c420 *self)
{
    return &self->member_0x00d0;
}

/**
 *
 * The part of the object that auto_return_member_address_01d7c430 reads.
 *
 */
struct Object01d7c430 {
    uint8_t unknown_0x0000[0xd0];
    uint8_t member_0x00d0; /**< Read by auto_return_member_address_01d7c430; meaning unknown. */
};
static_assert(offsetof(Object01d7c430, member_0x00d0) == 0xd0);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01d7c430(Object01d7c430 *self)
{
    return &self->member_0x00d0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d7faf0 = 0x3d0;

extern "C" uint32_t bb_auto_return_constant_01d7faf0()
{
    return value_01d7faf0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d7fe10 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01d7fe10()
{
    return value_01d7fe10;
}
