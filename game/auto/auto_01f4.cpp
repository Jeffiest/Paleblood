// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f40180()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f401a0 reads.
 *
 */
struct Object01f401a0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f401a0; meaning unknown. */
};
static_assert(offsetof(Object01f401a0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f401a0(Object01f401a0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f439e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f44610()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f44940()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f44a60()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f44a80 reads.
 *
 */
struct Object01f44a80 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f44a80; meaning unknown. */
};
static_assert(offsetof(Object01f44a80, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f44a80(Object01f44a80 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * The part of the object that auto_return_member_address_01f44cb0 reads.
 *
 */
struct Object01f44cb0 {
    uint8_t unknown_0x0000[0xdf8];
    uint8_t member_0x0df8; /**< Read by auto_return_member_address_01f44cb0; meaning unknown. */
};
static_assert(offsetof(Object01f44cb0, member_0x0df8) == 0xdf8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f44cb0(Object01f44cb0 *self)
{
    return &self->member_0x0df8;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_01f44cc0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_01f44cc0()
{
    return value_01f44cc0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f45180()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f45280()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f45390()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f45d30()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f45e60()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f45f80()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f46140()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f46270()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f46400()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f46570()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f466a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f46c40()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f46d40()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f477b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f47940()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f48120()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f48ae0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f48c70()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f49b10()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f49c20()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f49e00()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f49fe0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f4a320()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f4b370()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f4bb80()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f4be20()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f4c210()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f4c420()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f4c550()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f4c650()
{
}
