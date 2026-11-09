// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01ed2be0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01ed2c20()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01ed2c40 reads.
 *
 */
struct Object01ed2c40 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01ed2c40; meaning unknown. */
};
static_assert(offsetof(Object01ed2c40, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01ed2c40(Object01ed2c40 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01ed2ce0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01ed2d20()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01ed2d40 reads.
 *
 */
struct Object01ed2d40 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01ed2d40; meaning unknown. */
};
static_assert(offsetof(Object01ed2d40, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01ed2d40(Object01ed2d40 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01ed6200()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01ed74c0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01ed76a0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01ed76e0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01ed7700 reads.
 *
 */
struct Object01ed7700 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01ed7700; meaning unknown. */
};
static_assert(offsetof(Object01ed7700, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01ed7700(Object01ed7700 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01ed77c0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01ed7800()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01ed7820 reads.
 *
 */
struct Object01ed7820 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01ed7820; meaning unknown. */
};
static_assert(offsetof(Object01ed7820, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01ed7820(Object01ed7820 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01ed78e0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01ed7920()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01ed7940 reads.
 *
 */
struct Object01ed7940 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01ed7940; meaning unknown. */
};
static_assert(offsetof(Object01ed7940, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01ed7940(Object01ed7940 *self)
{
    return &self->member_0x0008;
}
