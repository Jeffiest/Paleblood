// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_010de6e0()
{
}

/**
 *
 * The part of the object that auto_return_field_010d2570 reads.
 *
 */
struct Object010d2570 {
    uint8_t unknown_0x0000[0x4];
    uint8_t value_0x0004; /**< Read by auto_return_field_010d2570; meaning unknown. */
};
static_assert(offsetof(Object010d2570, value_0x0004) == 0x4);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_010d2570(const Object010d2570 *self)
{
    return self->value_0x0004;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_010d51a0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_010d51a0()
{
    return value_010d51a0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_010d86b0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_010d86b0()
{
    return value_010d86b0;
}

/**
 *
 * The part of the object that auto_return_field_010df740 reads.
 *
 */
struct Object010df740 {
    uint8_t unknown_0x0000[0xe0];
    uint64_t value_0x00e0; /**< Read by auto_return_field_010df740; meaning unknown. */
};
static_assert(offsetof(Object010df740, value_0x00e0) == 0xe0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_010df740(const Object010df740 *self)
{
    return self->value_0x00e0;
}
