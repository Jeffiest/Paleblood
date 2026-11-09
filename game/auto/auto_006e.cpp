// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_006e17d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_006e1b70()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_006e1b80()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_006e1b90()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_006e3340 = 0x1;

extern "C" uint8_t bb_auto_return_constant_006e3340()
{
    return value_006e3340;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_006e3350 = 0x1;

extern "C" uint8_t bb_auto_return_constant_006e3350()
{
    return value_006e3350;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_006e6620()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_006ef7f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_006ef800()
{
}

/**
 *
 * The part of the object that auto_return_member_address_006efee0 reads.
 *
 */
struct Object006efee0 {
    uint8_t unknown_0x0000[0x18];
    uint8_t member_0x0018; /**< Read by auto_return_member_address_006efee0; meaning unknown. */
};
static_assert(offsetof(Object006efee0, member_0x0018) == 0x18);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_006efee0(Object006efee0 *self)
{
    return &self->member_0x0018;
}
