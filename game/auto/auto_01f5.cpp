// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_member_address_01f501d0 reads.
 *
 */
struct Object01f501d0 {
    uint8_t unknown_0x0000[0xdf0];
    uint8_t member_0x0df0; /**< Read by auto_return_member_address_01f501d0; meaning unknown. */
};
static_assert(offsetof(Object01f501d0, member_0x0df0) == 0xdf0);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f501d0(Object01f501d0 *self)
{
    return &self->member_0x0df0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_01f501e0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_01f501e0()
{
    return value_01f501e0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f505e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f506e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f50810()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f509c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f50dd0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f50f80()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f51500()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f516b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f51c30()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f51d30()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f51e40()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f52000()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f52430()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f525f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f52b80()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f52c90()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f52da0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f532a0()
{
}

/**
 *
 * The part of the object that auto_return_field_01f55a10 reads.
 *
 */
struct Object01f55a10 {
    uint8_t unknown_0x0000[0xd90];
    uint32_t value_0x0d90; /**< Read by auto_return_field_01f55a10; meaning unknown. */
};
static_assert(offsetof(Object01f55a10, value_0x0d90) == 0xd90);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01f55a10(const Object01f55a10 *self)
{
    return self->value_0x0d90;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_01f55a20 = 0x1;

extern "C" uint8_t bb_auto_return_constant_01f55a20()
{
    return value_01f55a20;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f55b40()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f55c50()
{
}
