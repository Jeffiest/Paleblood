// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_020913c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_020914c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_020915d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_020916e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_020917f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02091900()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02091a10()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02091b20()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02091c30()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02091d40()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02091e50()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02094400()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_020952d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02095560()
{
}

/**
 *
 * The part of the object that auto_return_member_address_02095580 reads.
 *
 */
struct Object02095580 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_02095580; meaning unknown. */
};
static_assert(offsetof(Object02095580, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02095580(Object02095580 *self)
{
    return &self->member_0x0008;
}
