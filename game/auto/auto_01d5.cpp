// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d50d00 = 0x68;

extern "C" uint32_t bb_auto_return_constant_01d50d00()
{
    return value_01d50d00;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d522b0 = 0x30;

extern "C" uint32_t bb_auto_return_constant_01d522b0()
{
    return value_01d522b0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d525d0 = 0x28;

extern "C" uint32_t bb_auto_return_constant_01d525d0()
{
    return value_01d525d0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d54460 = 0x78;

extern "C" uint32_t bb_auto_return_constant_01d54460()
{
    return value_01d54460;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d54ba0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d58f80 = 0xe0;

extern "C" uint32_t bb_auto_return_constant_01d58f80()
{
    return value_01d58f80;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d592a0 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01d592a0()
{
    return value_01d592a0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d595c0 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01d595c0()
{
    return value_01d595c0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d5cac0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d5cbe0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d5cce0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d5cdf0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d5cef0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d5d000()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d5d100()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d5d210()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01d5d230 reads.
 *
 */
struct Object01d5d230 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01d5d230; meaning unknown. */
};
static_assert(offsetof(Object01d5d230, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01d5d230(Object01d5d230 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d5d550 = 0x1d0;

extern "C" uint32_t bb_auto_return_constant_01d5d550()
{
    return value_01d5d550;
}
