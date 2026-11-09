// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01450330()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01450860()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01457570()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01459080()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01459190()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01459ef0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0145ad90()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0145aed0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0145b6e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0145bc70()
{
}

/**
 *
 * The part of the object that auto_return_field_0145f280 reads.
 *
 */
struct Object0145f280 {
    uint8_t unknown_0x0000[0x408];
    uint8_t value_0x0408; /**< Read by auto_return_field_0145f280; meaning unknown. */
};
static_assert(offsetof(Object0145f280, value_0x0408) == 0x408);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_0145f280(const Object0145f280 *self)
{
    return self->value_0x0408;
}

/**
 *
 * The part of the object that auto_return_member_address_0145f290 reads.
 *
 */
struct Object0145f290 {
    uint8_t unknown_0x0000[0x50];
    uint8_t member_0x0050; /**< Read by auto_return_member_address_0145f290; meaning unknown. */
};
static_assert(offsetof(Object0145f290, member_0x0050) == 0x50);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0145f290(Object0145f290 *self)
{
    return &self->member_0x0050;
}
