// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01622250()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016222b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016255a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016255c0()
{
}

/**
 *
 * The part of the object that auto_return_field_01626310 reads.
 *
 */
struct Object01626310 {
    uint8_t unknown_0x0000[0x1c];
    uint8_t value_0x001c; /**< Read by auto_return_field_01626310; meaning unknown. */
};
static_assert(offsetof(Object01626310, value_0x001c) == 0x1c);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_01626310(const Object01626310 *self)
{
    return self->value_0x001c;
}

/**
 *
 * The part of the object that auto_return_field_01626320 reads.
 *
 */
struct Object01626320 {
    uint8_t unknown_0x0000[0x18];
    uint32_t value_0x0018; /**< Read by auto_return_field_01626320; meaning unknown. */
};
static_assert(offsetof(Object01626320, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01626320(const Object01626320 *self)
{
    return self->value_0x0018;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0162a360()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0162a3c0()
{
}

/**
 *
 * The part of the object that auto_return_float_field_0162dc10 reads.
 *
 */
struct Object0162dc10 {
    uint8_t unknown_0x0000[0x8];
    float value_0x0008; /**< Read by auto_return_float_field_0162dc10; meaning unknown. */
};
static_assert(offsetof(Object0162dc10, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_0162dc10(const Object0162dc10 *self)
{
    return self->value_0x0008;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0162eb30 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0162eb30()
{
    return value_0162eb30;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0162eb80()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0162ebb0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0162ec80()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0162ece0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0162edb0()
{
}
