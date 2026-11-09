// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_006a13c0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_006a1500()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_006a1510()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_006a15f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_006a1610()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_006a1650()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_006a1660()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_006a1670()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_006a1680()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_006a1690()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_006a16b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_006a16c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_006a16e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_006a1750()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_006a1790()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_006a1b60()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_006a1b70()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_006a37d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_006aba40()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_006aba50 = 0x40;

extern "C" uint32_t bb_auto_return_constant_006aba50()
{
    return value_006aba50;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_006ad2b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_006ae760()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_006ae8d0 = 0x48;

extern "C" uint32_t bb_auto_return_constant_006ae8d0()
{
    return value_006ae8d0;
}

/**
 *
 * The part of the object that auto_return_field_006ae8e0 reads.
 *
 */
struct Object006ae8e0 {
    uint8_t unknown_0x0000[0xe8];
    uint64_t value_0x00e8; /**< Read by auto_return_field_006ae8e0; meaning unknown. */
};
static_assert(offsetof(Object006ae8e0, value_0x00e8) == 0xe8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_006ae8e0(const Object006ae8e0 *self)
{
    return self->value_0x00e8;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_006aebe0 = 0x50;

extern "C" uint32_t bb_auto_return_constant_006aebe0()
{
    return value_006aebe0;
}

/**
 *
 * The part of the object that auto_return_field_006af080 reads.
 *
 */
struct Object006af080 {
    uint8_t unknown_0x0000[0xd0];
    uint64_t value_0x00d0; /**< Read by auto_return_field_006af080; meaning unknown. */
};
static_assert(offsetof(Object006af080, value_0x00d0) == 0xd0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_006af080(const Object006af080 *self)
{
    return self->value_0x00d0;
}
