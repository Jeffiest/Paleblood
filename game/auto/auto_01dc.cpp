// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01dc08f0 = 0x260;

extern "C" uint32_t bb_auto_return_constant_01dc08f0()
{
    return value_01dc08f0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01dc0c10 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01dc0c10()
{
    return value_01dc0c10;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01dc0f30 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01dc0f30()
{
    return value_01dc0f30;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01dc3e50 = 0xf0;

extern "C" uint32_t bb_auto_return_constant_01dc3e50()
{
    return value_01dc3e50;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01dc4170 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01dc4170()
{
    return value_01dc4170;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01dc4490 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01dc4490()
{
    return value_01dc4490;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01dc7680 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01dc7680()
{
    return value_01dc7680;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01dc79a0 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01dc79a0()
{
    return value_01dc79a0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01dc7cc0 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01dc7cc0()
{
    return value_01dc7cc0;
}

/**
 *
 * The part of the object that auto_return_field_01dcdd70 reads.
 *
 */
struct Object01dcdd70 {
    uint8_t unknown_0x0000[0x70];
    uint64_t value_0x0070; /**< Read by auto_return_field_01dcdd70; meaning unknown. */
};
static_assert(offsetof(Object01dcdd70, value_0x0070) == 0x70);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01dcdd70(const Object01dcdd70 *self)
{
    return self->value_0x0070;
}
