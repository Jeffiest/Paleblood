// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_024507e0 reads.
 *
 */
struct Object024507e0 {
    uint8_t unknown_0x0000[0x18];
    uint32_t value_0x0018; /**< Read by auto_return_field_024507e0; meaning unknown. */
};
static_assert(offsetof(Object024507e0, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_024507e0(const Object024507e0 *self)
{
    return self->value_0x0018;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02450a10 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02450a10()
{
    return value_02450a10;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02450a20 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02450a20()
{
    return value_02450a20;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0245a560()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0245a7c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0245a8c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0245abb0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0245ad90()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0245b300 = 0x140;

extern "C" uint32_t bb_auto_return_constant_0245b300()
{
    return value_0245b300;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0245b620 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_0245b620()
{
    return value_0245b620;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0245b940 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_0245b940()
{
    return value_0245b940;
}
