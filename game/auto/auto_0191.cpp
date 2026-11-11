// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_019119e0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_019119e0()
{
    return value_019119e0;
}

/**
 *
 * The part of the object that auto_return_field_01916510 reads.
 *
 */
struct Object01916510 {
    uint8_t unknown_0x0000[0x114];
    uint16_t value_0x0114; /**< Read by auto_return_field_01916510; meaning unknown. */
};
static_assert(offsetof(Object01916510, value_0x0114) == 0x114);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01916510(const Object01916510 *self)
{
    return self->value_0x0114;
}

/**
 *
 * The part of the object that auto_return_field_01916730 reads.
 *
 */
struct Object01916730 {
    uint8_t unknown_0x0000[0x1c0];
    uint64_t value_0x01c0; /**< Read by auto_return_field_01916730; meaning unknown. */
};
static_assert(offsetof(Object01916730, value_0x01c0) == 0x1c0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01916730(const Object01916730 *self)
{
    return self->value_0x01c0;
}

/**
 *
 * The part of the object that auto_return_field_01916c70 reads.
 *
 */
struct Object01916c70 {
    uint8_t unknown_0x0000[0xf0];
    uint64_t value_0x00f0; /**< Read by auto_return_field_01916c70; meaning unknown. */
};
static_assert(offsetof(Object01916c70, value_0x00f0) == 0xf0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01916c70(const Object01916c70 *self)
{
    return self->value_0x00f0;
}

/**
 *
 * The part of the object that auto_return_field_01916f90 reads.
 *
 */
struct Object01916f90 {
    uint8_t unknown_0x0000[0x1c8];
    uint64_t value_0x01c8; /**< Read by auto_return_field_01916f90; meaning unknown. */
};
static_assert(offsetof(Object01916f90, value_0x01c8) == 0x1c8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01916f90(const Object01916f90 *self)
{
    return self->value_0x01c8;
}

/**
 *
 * The part of the object that auto_return_float_field_019173c0 reads.
 *
 */
struct Object019173c0 {
    uint8_t unknown_0x0000[0x1dc];
    float value_0x01dc; /**< Read by auto_return_float_field_019173c0; meaning unknown. */
};
static_assert(offsetof(Object019173c0, value_0x01dc) == 0x1dc);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_019173c0(const Object019173c0 *self)
{
    return self->value_0x01dc;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01918870()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_019188c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01918920()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01919cb0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01919ee0()
{
}
