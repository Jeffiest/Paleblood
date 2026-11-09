// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_011f61c0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_011f63d0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_011f6510()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_011f6590()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_011f7240()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_011f73f0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_011fa860()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_011fad60()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_011fb0c0 = 0x1;

extern "C" uint32_t bb_auto_return_constant_011fb0c0()
{
    return value_011fb0c0;
}

/**
 *
 * The part of the object that auto_return_field_011fb1d0 reads.
 *
 */
struct Object011fb1d0 {
    uint8_t unknown_0x0000[0xc];
    uint32_t value_0x000c; /**< Read by auto_return_field_011fb1d0; meaning unknown. */
};
static_assert(offsetof(Object011fb1d0, value_0x000c) == 0xc);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_011fb1d0(const Object011fb1d0 *self)
{
    return self->value_0x000c;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_011fb200()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_011fb240()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_011fd1f0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_011febb0 reads.
 *
 */
struct Object011febb0 {
    uint8_t unknown_0x0000[0x2c];
    uint32_t value_0x002c; /**< Read by auto_return_field_011febb0; meaning unknown. */
};
static_assert(offsetof(Object011febb0, value_0x002c) == 0x2c);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_011febb0(const Object011febb0 *self)
{
    return self->value_0x002c;
}
