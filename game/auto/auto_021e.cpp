// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_021e0150 reads.
 *
 */
struct Object021e0150 {
    uint8_t unknown_0x0000[0x118];
    uint32_t value_0x0118; /**< Read by auto_return_field_021e0150; meaning unknown. */
};
static_assert(offsetof(Object021e0150, value_0x0118) == 0x118);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_021e0150(const Object021e0150 *self)
{
    return self->value_0x0118;
}

/**
 *
 * The part of the object that auto_return_field_021e01a0 reads.
 *
 */
struct Object021e01a0 {
    uint8_t unknown_0x0000[0x2a0];
    uint32_t value_0x02a0; /**< Read by auto_return_field_021e01a0; meaning unknown. */
};
static_assert(offsetof(Object021e01a0, value_0x02a0) == 0x2a0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_021e01a0(const Object021e01a0 *self)
{
    return self->value_0x02a0;
}

/**
 *
 * The part of the object that auto_return_field_021e1170 reads.
 *
 */
struct Object021e1170 {
    uint32_t value_0x0000; /**< Read by auto_return_field_021e1170; meaning unknown. */
};
static_assert(offsetof(Object021e1170, value_0x0000) == 0x0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_021e1170(const Object021e1170 *self)
{
    return self->value_0x0000;
}

/**
 *
 * The part of the object that auto_return_field_021e1180 reads.
 *
 */
struct Object021e1180 {
    uint8_t unknown_0x0000[0x4];
    uint32_t value_0x0004; /**< Read by auto_return_field_021e1180; meaning unknown. */
};
static_assert(offsetof(Object021e1180, value_0x0004) == 0x4);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_021e1180(const Object021e1180 *self)
{
    return self->value_0x0004;
}

/**
 *
 * The part of the object that auto_return_field_021e11a0 reads.
 *
 */
struct Object021e11a0 {
    uint8_t unknown_0x0000[0x8];
    int8_t value_0x0008; /**< Read by auto_return_field_021e11a0; meaning unknown. */
};
static_assert(offsetof(Object021e11a0, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" int32_t bb_auto_return_field_021e11a0(const Object021e11a0 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_021e11b0 reads.
 *
 */
struct Object021e11b0 {
    uint8_t unknown_0x0000[0x8];
    int16_t value_0x0008; /**< Read by auto_return_field_021e11b0; meaning unknown. */
};
static_assert(offsetof(Object021e11b0, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" int32_t bb_auto_return_field_021e11b0(const Object021e11b0 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_021e11c0 reads.
 *
 */
struct Object021e11c0 {
    uint8_t unknown_0x0000[0x8];
    uint32_t value_0x0008; /**< Read by auto_return_field_021e11c0; meaning unknown. */
};
static_assert(offsetof(Object021e11c0, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_021e11c0(const Object021e11c0 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_float_field_021e11d0 reads.
 *
 */
struct Object021e11d0 {
    uint8_t unknown_0x0000[0x8];
    float value_0x0008; /**< Read by auto_return_float_field_021e11d0; meaning unknown. */
};
static_assert(offsetof(Object021e11d0, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_021e11d0(const Object021e11d0 *self)
{
    return self->value_0x0008;
}
