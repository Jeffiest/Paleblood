// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_00822e60 = 0x1;

extern "C" uint8_t bb_auto_return_constant_00822e60()
{
    return value_00822e60;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_00822e70 = 0x1;

extern "C" uint8_t bb_auto_return_constant_00822e70()
{
    return value_00822e70;
}

/**
 *
 * The part of the object that auto_return_field_00823b60 reads.
 *
 */
struct Object00823b60 {
    uint8_t unknown_0x0000[0x338];
    uint32_t value_0x0338; /**< Read by auto_return_field_00823b60; meaning unknown. */
};
static_assert(offsetof(Object00823b60, value_0x0338) == 0x338);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_00823b60(const Object00823b60 *self)
{
    return self->value_0x0338;
}

/**
 *
 * The part of the object that auto_return_field_008240d0 reads.
 *
 */
struct Object008240d0 {
    uint8_t unknown_0x0000[0x1a];
    int16_t value_0x001a; /**< Read by auto_return_field_008240d0; meaning unknown. */
};
static_assert(offsetof(Object008240d0, value_0x001a) == 0x1a);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" int32_t bb_auto_return_field_008240d0(const Object008240d0 *self)
{
    return self->value_0x001a;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_00826660 = 0x1;

extern "C" uint8_t bb_auto_return_constant_00826660()
{
    return value_00826660;
}

/**
 *
 * The part of the object that auto_return_field_00828f50 reads.
 *
 */
struct Object00828f50 {
    uint8_t unknown_0x0000[0x18];
    uint8_t value_0x0018; /**< Read by auto_return_field_00828f50; meaning unknown. */
};
static_assert(offsetof(Object00828f50, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_00828f50(const Object00828f50 *self)
{
    return self->value_0x0018;
}
