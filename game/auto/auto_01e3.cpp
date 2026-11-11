// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_01e31230 = 0x1;

extern "C" uint8_t bb_auto_return_constant_01e31230()
{
    return value_01e31230;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_01e31280 = 0x1;

extern "C" uint8_t bb_auto_return_constant_01e31280()
{
    return value_01e31280;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_01e31290 = 0x1;

extern "C" uint8_t bb_auto_return_constant_01e31290()
{
    return value_01e31290;
}

/**
 *
 * The part of the object that auto_return_field_01e320f0 reads.
 *
 */
struct Object01e320f0 {
    uint8_t unknown_0x0000[0xa8];
    uint32_t value_0x00a8; /**< Read by auto_return_field_01e320f0; meaning unknown. */
};
static_assert(offsetof(Object01e320f0, value_0x00a8) == 0xa8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01e320f0(const Object01e320f0 *self)
{
    return self->value_0x00a8;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e38f10()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e39a40()
{
}

/**
 *
 * The part of the object that auto_return_float_field_01e3a7a0 reads.
 *
 */
struct Object01e3a7a0 {
    uint8_t unknown_0x0000[0x10];
    float value_0x0010; /**< Read by auto_return_float_field_01e3a7a0; meaning unknown. */
};
static_assert(offsetof(Object01e3a7a0, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_01e3a7a0(const Object01e3a7a0 *self)
{
    return self->value_0x0010;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01e3b420()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e3e260()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e3e2c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e3e880()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e3f3a0()
{
}
