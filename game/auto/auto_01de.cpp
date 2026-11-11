// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01de2280 = 0xf0;

extern "C" uint32_t bb_auto_return_constant_01de2280()
{
    return value_01de2280;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01de25a0 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01de25a0()
{
    return value_01de25a0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01de28c0 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01de28c0()
{
    return value_01de28c0;
}

/**
 *
 * The part of the object that auto_return_field_01de3840 reads.
 *
 */
struct Object01de3840 {
    uint8_t unknown_0x0000[0x15c];
    uint8_t value_0x015c; /**< Read by auto_return_field_01de3840; meaning unknown. */
};
static_assert(offsetof(Object01de3840, value_0x015c) == 0x15c);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_01de3840(const Object01de3840 *self)
{
    return self->value_0x015c;
}

/**
 *
 * The part of the object that auto_return_field_01de3850 reads.
 *
 */
struct Object01de3850 {
    uint8_t unknown_0x0000[0x15d];
    uint8_t value_0x015d; /**< Read by auto_return_field_01de3850; meaning unknown. */
};
static_assert(offsetof(Object01de3850, value_0x015d) == 0x15d);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_01de3850(const Object01de3850 *self)
{
    return self->value_0x015d;
}

/**
 *
 * The part of the object that auto_return_field_01de60f0 reads.
 *
 */
struct Object01de60f0 {
    uint8_t unknown_0x0000[0x58];
    uint8_t value_0x0058; /**< Read by auto_return_field_01de60f0; meaning unknown. */
};
static_assert(offsetof(Object01de60f0, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_01de60f0(const Object01de60f0 *self)
{
    return self->value_0x0058;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01de6db0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01de7380 = 0x170;

extern "C" uint32_t bb_auto_return_constant_01de7380()
{
    return value_01de7380;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01de76a0 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_01de76a0()
{
    return value_01de76a0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01de79c0 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_01de79c0()
{
    return value_01de79c0;
}
