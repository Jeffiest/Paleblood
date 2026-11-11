// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_member_address_01f84ab0 reads.
 *
 */
struct Object01f84ab0 {
    uint8_t unknown_0x0000[0xe20];
    uint8_t member_0x0e20; /**< Read by auto_return_member_address_01f84ab0; meaning unknown. */
};
static_assert(offsetof(Object01f84ab0, member_0x0e20) == 0xe20);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f84ab0(Object01f84ab0 *self)
{
    return &self->member_0x0e20;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_01f84ac0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_01f84ac0()
{
    return value_01f84ac0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f85300()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f85580()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f85700()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f85800()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f85980()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f85a80()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f85c20()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f85d30()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f85e40()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f85f80()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f860e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f86250()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f865b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f86920()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f86ae0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f86f10()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f87130()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f87350()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f87ad0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f88c60()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f89e80()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f8a000()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f8a110()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f8a210()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f8a310()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f8a420()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f8a530()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f8aca0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f8ada0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f8b450()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f8b760()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f8ba60()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f8bbc0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f8c040 reads.
 *
 */
struct Object01f8c040 {
    uint8_t unknown_0x0000[0x10];
    uint8_t member_0x0010; /**< Read by auto_return_member_address_01f8c040; meaning unknown. */
};
static_assert(offsetof(Object01f8c040, member_0x0010) == 0x10);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f8c040(Object01f8c040 *self)
{
    return &self->member_0x0010;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f8c420()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f8cc40()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f8cd70()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f8ce70()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f8cf70()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f8d070()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f8db00()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f8e320()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f8f550()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f8f660()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f8f760()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f8fab0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f8fbb0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f8fcc0()
{
}
