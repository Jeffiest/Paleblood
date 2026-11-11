// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_01072560 reads.
 *
 */
struct Object01072560 {
    uint8_t unknown_0x0000[0x9e8];
    uint32_t value_0x09e8; /**< Read by auto_return_field_01072560; meaning unknown. */
};
static_assert(offsetof(Object01072560, value_0x09e8) == 0x9e8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01072560(const Object01072560 *self)
{
    return self->value_0x09e8;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_01073e00 = 0x1;

extern "C" uint8_t bb_auto_return_constant_01073e00()
{
    return value_01073e00;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_01075590 = 0x1;

extern "C" uint8_t bb_auto_return_constant_01075590()
{
    return value_01075590;
}

/**
 *
 * The part of the object that auto_return_field_010797c0 reads.
 *
 */
struct Object010797c0 {
    uint8_t unknown_0x0000[0xe4];
    uint32_t value_0x00e4; /**< Read by auto_return_field_010797c0; meaning unknown. */
};
static_assert(offsetof(Object010797c0, value_0x00e4) == 0xe4);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_010797c0(const Object010797c0 *self)
{
    return self->value_0x00e4;
}

/**
 *
 * The part of the object that auto_return_field_01079850 reads.
 *
 */
struct Object01079850 {
    uint8_t unknown_0x0000[0xe0];
    uint32_t value_0x00e0; /**< Read by auto_return_field_01079850; meaning unknown. */
};
static_assert(offsetof(Object01079850, value_0x00e0) == 0xe0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01079850(const Object01079850 *self)
{
    return self->value_0x00e0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0107cc30 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0107cc30()
{
    return value_0107cc30;
}
