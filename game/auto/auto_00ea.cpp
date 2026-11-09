// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_00eabd70()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_00eabd80()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_00eabd90()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_00eabda0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_00eabdb0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_00eabdc0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_00eabdd0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00eabde0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00eabdf0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_00eabe00()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_00eabe10()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00eabe30()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00eabe50()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_00eabec0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00eabed0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00eabef0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_00eabf10 = 0xffffffff;

extern "C" uint32_t bb_auto_return_constant_00eabf10()
{
    return value_00eabf10;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00eabf20()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_00eabf30()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00eabf40()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00eabf50()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_00eabf60()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00eabf70()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_00eabf80()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00eabf90()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00eabfa0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00eabfb0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00eabfc0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00eabfd0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_00eaf640 reads.
 *
 */
struct Object00eaf640 {
    uint8_t unknown_0x0000[0x10];
    uint8_t member_0x0010; /**< Read by auto_return_member_address_00eaf640; meaning unknown. */
};
static_assert(offsetof(Object00eaf640, member_0x0010) == 0x10);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_00eaf640(Object00eaf640 *self)
{
    return &self->member_0x0010;
}
