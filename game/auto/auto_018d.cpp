// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_018d07e0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_018d18e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_018d6fe0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_018d6ff0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_018d7000()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_018d7060()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_018d7b90()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_018d7be0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_018d7cb0()
{
}

/**
 *
 * The part of the object that auto_return_field_018d90a0 reads.
 *
 */
struct Object018d90a0 {
    uint8_t unknown_0x0000[0x10];
    uint32_t value_0x0010; /**< Read by auto_return_field_018d90a0; meaning unknown. */
};
static_assert(offsetof(Object018d90a0, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_018d90a0(const Object018d90a0 *self)
{
    return self->value_0x0010;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_018daea0 = 0xffffffff;

extern "C" uint32_t bb_auto_return_constant_018daea0()
{
    return value_018daea0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_018daeb0 = 0xffffffff;

extern "C" uint32_t bb_auto_return_constant_018daeb0()
{
    return value_018daeb0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_018dc450()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_018dd430()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_018dd480()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_018dd550()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_018dee40()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_018df550()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_018dfaf0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_018dfbc0()
{
}
