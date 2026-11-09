// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_013e1350()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_013e1d90()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_013e3940()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_013e3950 = 0x1;

extern "C" uint8_t bb_auto_return_constant_013e3950()
{
    return value_013e3950;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_013e3960 = 0x1;

extern "C" uint8_t bb_auto_return_constant_013e3960()
{
    return value_013e3960;
}

/**
 *
 * The part of the object that auto_return_field_013e3970 reads.
 *
 */
struct Object013e3970 {
    uint8_t unknown_0x0000[0x8];
    uint64_t value_0x0008; /**< Read by auto_return_field_013e3970; meaning unknown. */
};
static_assert(offsetof(Object013e3970, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_013e3970(const Object013e3970 *self)
{
    return self->value_0x0008;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_013e3980 = 0x1;

extern "C" uint8_t bb_auto_return_constant_013e3980()
{
    return value_013e3980;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_013e39a0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_013e39b0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_013e39c0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_013e39d0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_013e3c70()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_013e5c40()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_013e7220()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_013e7260()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_013e7270()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_013e7280()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_013e74d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_013e74e0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_013e74f0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_013e7500 = 0x1;

extern "C" uint8_t bb_auto_return_constant_013e7500()
{
    return value_013e7500;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_013e9e90()
{
}

/**
 *
 * The part of the object that auto_return_field_013e9ea0 reads.
 *
 */
struct Object013e9ea0 {
    uint32_t value_0x0000; /**< Read by auto_return_field_013e9ea0; meaning unknown. */
};
static_assert(offsetof(Object013e9ea0, value_0x0000) == 0x0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_013e9ea0(const Object013e9ea0 *self)
{
    return self->value_0x0000;
}

/**
 *
 * The part of the object that auto_return_field_013e9eb0 reads.
 *
 */
struct Object013e9eb0 {
    uint8_t unknown_0x0000[0x4];
    uint8_t value_0x0004; /**< Read by auto_return_field_013e9eb0; meaning unknown. */
};
static_assert(offsetof(Object013e9eb0, value_0x0004) == 0x4);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_013e9eb0(const Object013e9eb0 *self)
{
    return self->value_0x0004;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_013ea8e0()
{
}
