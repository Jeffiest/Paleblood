// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_019235b0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_019235b0()
{
    return value_019235b0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_019256f0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_019256f0()
{
    return value_019256f0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0192a230()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0192a290()
{
}

/**
 *
 * The part of the object that auto_return_field_0192b0f0 reads.
 *
 */
struct Object0192b0f0 {
    uint8_t unknown_0x0000[0x1c8];
    uint64_t value_0x01c8; /**< Read by auto_return_field_0192b0f0; meaning unknown. */
};
static_assert(offsetof(Object0192b0f0, value_0x01c8) == 0x1c8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0192b0f0(const Object0192b0f0 *self)
{
    return self->value_0x01c8;
}

/**
 *
 * The part of the object that auto_return_field_0192bc60 reads.
 *
 */
struct Object0192bc60 {
    uint8_t unknown_0x0000[0x2a8];
    uint8_t value_0x02a8; /**< Read by auto_return_field_0192bc60; meaning unknown. */
};
static_assert(offsetof(Object0192bc60, value_0x02a8) == 0x2a8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_0192bc60(const Object0192bc60 *self)
{
    return self->value_0x02a8;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0192c380 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0192c380()
{
    return value_0192c380;
}
