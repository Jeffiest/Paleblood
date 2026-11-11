// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_018c1090()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_018c1160()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_018c11c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_018c64d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_018c65a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_018c66a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_018c6770()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_018c80f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_018c81c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_018c8220()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_018c9ae0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_018c9ae0()
{
    return value_018c9ae0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_018ca6c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_018cc140()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_018cc1a0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_018cf500 reads.
 *
 */
struct Object018cf500 {
    uint8_t unknown_0x0000[0x158];
    uint8_t member_0x0158; /**< Read by auto_return_member_address_018cf500; meaning unknown. */
};
static_assert(offsetof(Object018cf500, member_0x0158) == 0x158);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_018cf500(Object018cf500 *self)
{
    return &self->member_0x0158;
}

/**
 *
 * The part of the object that auto_return_member_address_018cf760 reads.
 *
 */
struct Object018cf760 {
    uint8_t unknown_0x0000[0x158];
    uint8_t member_0x0158; /**< Read by auto_return_member_address_018cf760; meaning unknown. */
};
static_assert(offsetof(Object018cf760, member_0x0158) == 0x158);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_018cf760(Object018cf760 *self)
{
    return &self->member_0x0158;
}

/**
 *
 * The part of the object that auto_return_member_address_018cf770 reads.
 *
 */
struct Object018cf770 {
    uint8_t unknown_0x0000[0x158];
    uint8_t member_0x0158; /**< Read by auto_return_member_address_018cf770; meaning unknown. */
};
static_assert(offsetof(Object018cf770, member_0x0158) == 0x158);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_018cf770(Object018cf770 *self)
{
    return &self->member_0x0158;
}
