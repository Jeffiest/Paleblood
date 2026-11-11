// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_00ad1180 reads.
 *
 */
struct Object00ad1180 {
    uint8_t unknown_0x0000[0x60];
    int16_t value_0x0060; /**< Read by auto_return_field_00ad1180; meaning unknown. */
};
static_assert(offsetof(Object00ad1180, value_0x0060) == 0x60);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" int32_t bb_auto_return_field_00ad1180(const Object00ad1180 *self)
{
    return self->value_0x0060;
}

/**
 *
 * The part of the object that auto_return_field_00ad7c30 reads.
 *
 */
struct Object00ad7c30 {
    uint8_t unknown_0x0000[0xa4];
    uint32_t value_0x00a4; /**< Read by auto_return_field_00ad7c30; meaning unknown. */
};
static_assert(offsetof(Object00ad7c30, value_0x00a4) == 0xa4);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_00ad7c30(const Object00ad7c30 *self)
{
    return self->value_0x00a4;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_00ad7d60 = 0x1;

extern "C" uint8_t bb_auto_return_constant_00ad7d60()
{
    return value_00ad7d60;
}

/**
 *
 * The part of the object that auto_return_field_00ad7d70 reads.
 *
 */
struct Object00ad7d70 {
    uint8_t unknown_0x0000[0xb0];
    uint64_t value_0x00b0; /**< Read by auto_return_field_00ad7d70; meaning unknown. */
};
static_assert(offsetof(Object00ad7d70, value_0x00b0) == 0xb0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_00ad7d70(const Object00ad7d70 *self)
{
    return self->value_0x00b0;
}
