// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_0137d4c0 reads.
 *
 */
struct Object0137d4c0 {
    uint8_t unknown_0x0000[0xc0];
    uint64_t value_0x00c0; /**< Read by auto_return_field_0137d4c0; meaning unknown. */
};
static_assert(offsetof(Object0137d4c0, value_0x00c0) == 0xc0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0137d4c0(const Object0137d4c0 *self)
{
    return self->value_0x00c0;
}

/**
 *
 * The part of the object that auto_return_field_0137d4e0 reads.
 *
 */
struct Object0137d4e0 {
    uint8_t unknown_0x0000[0x164];
    uint8_t value_0x0164; /**< Read by auto_return_field_0137d4e0; meaning unknown. */
};
static_assert(offsetof(Object0137d4e0, value_0x0164) == 0x164);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_0137d4e0(const Object0137d4e0 *self)
{
    return self->value_0x0164;
}

/**
 *
 * The part of the object that auto_return_field_0137d4f0 reads.
 *
 */
struct Object0137d4f0 {
    uint8_t unknown_0x0000[0x165];
    uint8_t value_0x0165; /**< Read by auto_return_field_0137d4f0; meaning unknown. */
};
static_assert(offsetof(Object0137d4f0, value_0x0165) == 0x165);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_0137d4f0(const Object0137d4f0 *self)
{
    return self->value_0x0165;
}

/**
 *
 * The part of the object that auto_return_float_field_0137d500 reads.
 *
 */
struct Object0137d500 {
    uint8_t unknown_0x0000[0x160];
    float value_0x0160; /**< Read by auto_return_float_field_0137d500; meaning unknown. */
};
static_assert(offsetof(Object0137d500, value_0x0160) == 0x160);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_0137d500(const Object0137d500 *self)
{
    return self->value_0x0160;
}
