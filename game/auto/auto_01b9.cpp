// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b90250()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b902a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b90370()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b91970()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b919d0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01b97960 reads.
 *
 */
struct Object01b97960 {
    uint8_t unknown_0x0000[0x98];
    uint8_t member_0x0098; /**< Read by auto_return_member_address_01b97960; meaning unknown. */
};
static_assert(offsetof(Object01b97960, member_0x0098) == 0x98);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01b97960(Object01b97960 *self)
{
    return &self->member_0x0098;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01b98fd0 = 0x28;

extern "C" uint32_t bb_auto_return_constant_01b98fd0()
{
    return value_01b98fd0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b9b990()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b9c5c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b9d210()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b9de70()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b9eac0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b9f6b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b9fa80()
{
}
