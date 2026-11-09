// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_float_field_010606b0 reads.
 *
 */
struct Object010606b0 {
    uint8_t unknown_0x0000[0x174];
    float value_0x0174; /**< Read by auto_return_float_field_010606b0; meaning unknown. */
};
static_assert(offsetof(Object010606b0, value_0x0174) == 0x174);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_010606b0(const Object010606b0 *self)
{
    return self->value_0x0174;
}

/**
 *
 * The part of the object that auto_return_float_field_01060760 reads.
 *
 */
struct Object01060760 {
    uint8_t unknown_0x0000[0x164];
    float value_0x0164; /**< Read by auto_return_float_field_01060760; meaning unknown. */
};
static_assert(offsetof(Object01060760, value_0x0164) == 0x164);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_01060760(const Object01060760 *self)
{
    return self->value_0x0164;
}

/**
 *
 * The part of the object that auto_return_float_field_01060c50 reads.
 *
 */
struct Object01060c50 {
    uint8_t unknown_0x0000[0x3b0];
    float value_0x03b0; /**< Read by auto_return_float_field_01060c50; meaning unknown. */
};
static_assert(offsetof(Object01060c50, value_0x03b0) == 0x3b0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_01060c50(const Object01060c50 *self)
{
    return self->value_0x03b0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01066890()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0106c9e0 = 0x1;

extern "C" uint32_t bb_auto_return_constant_0106c9e0()
{
    return value_0106c9e0;
}

/**
 *
 * The part of the object that auto_return_field_0106c9f0 reads.
 *
 */
struct Object0106c9f0 {
    uint8_t unknown_0x0000[0x11d];
    uint8_t value_0x011d; /**< Read by auto_return_field_0106c9f0; meaning unknown. */
};
static_assert(offsetof(Object0106c9f0, value_0x011d) == 0x11d);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_0106c9f0(const Object0106c9f0 *self)
{
    return self->value_0x011d;
}
