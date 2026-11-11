// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f12410()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f12840()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f12950()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f16990()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f16ce0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f1b330 reads.
 *
 */
struct Object01f1b330 {
    uint8_t unknown_0x0000[0xe50];
    uint8_t member_0x0e50; /**< Read by auto_return_member_address_01f1b330; meaning unknown. */
};
static_assert(offsetof(Object01f1b330, member_0x0e50) == 0xe50);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f1b330(Object01f1b330 *self)
{
    return &self->member_0x0e50;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_01f1b340 = 0x1;

extern "C" uint8_t bb_auto_return_constant_01f1b340()
{
    return value_01f1b340;
}

/**
 *
 * The part of the object that auto_return_member_address_01f1e070 reads.
 *
 */
struct Object01f1e070 {
    uint8_t unknown_0x0000[0xdf0];
    uint8_t member_0x0df0; /**< Read by auto_return_member_address_01f1e070; meaning unknown. */
};
static_assert(offsetof(Object01f1e070, member_0x0df0) == 0xdf0);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f1e070(Object01f1e070 *self)
{
    return &self->member_0x0df0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_01f1e080 = 0x1;

extern "C" uint8_t bb_auto_return_constant_01f1e080()
{
    return value_01f1e080;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f1e1a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f1e2c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f1e3d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f1e4f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f1e610()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f1e730()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f1e850()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f1eec0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f1f1f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f1f340()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f1f6d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f1fbc0()
{
}
