// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_float_field_027e08c0 reads.
 *
 */
struct Object027e08c0 {
    uint8_t unknown_0x0000[0x18];
    float value_0x0018; /**< Read by auto_return_float_field_027e08c0; meaning unknown. */
};
static_assert(offsetof(Object027e08c0, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_027e08c0(const Object027e08c0 *self)
{
    return self->value_0x0018;
}

/**
 *
 * The part of the object that auto_return_float_field_027e08d0 reads.
 *
 */
struct Object027e08d0 {
    uint8_t unknown_0x0000[0x1c];
    float value_0x001c; /**< Read by auto_return_float_field_027e08d0; meaning unknown. */
};
static_assert(offsetof(Object027e08d0, value_0x001c) == 0x1c);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_027e08d0(const Object027e08d0 *self)
{
    return self->value_0x001c;
}

/**
 *
 * The part of the object that auto_return_float_field_027e0de0 reads.
 *
 */
struct Object027e0de0 {
    uint8_t unknown_0x0000[0x118];
    float value_0x0118; /**< Read by auto_return_float_field_027e0de0; meaning unknown. */
};
static_assert(offsetof(Object027e0de0, value_0x0118) == 0x118);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_027e0de0(const Object027e0de0 *self)
{
    return self->value_0x0118;
}

/**
 *
 * The part of the object that auto_return_float_field_027e0df0 reads.
 *
 */
struct Object027e0df0 {
    uint8_t unknown_0x0000[0x11c];
    float value_0x011c; /**< Read by auto_return_float_field_027e0df0; meaning unknown. */
};
static_assert(offsetof(Object027e0df0, value_0x011c) == 0x11c);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_027e0df0(const Object027e0df0 *self)
{
    return self->value_0x011c;
}

/**
 *
 * The part of the object that auto_return_field_027e1af0 reads.
 *
 */
struct Object027e1af0 {
    uint8_t unknown_0x0000[0xa0];
    uint32_t value_0x00a0; /**< Read by auto_return_field_027e1af0; meaning unknown. */
};
static_assert(offsetof(Object027e1af0, value_0x00a0) == 0xa0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_027e1af0(const Object027e1af0 *self)
{
    return self->value_0x00a0;
}

/**
 *
 * The part of the object that auto_return_float_field_027e4440 reads.
 *
 */
struct Object027e4440 {
    uint8_t unknown_0x0000[0x2c8];
    float value_0x02c8; /**< Read by auto_return_float_field_027e4440; meaning unknown. */
};
static_assert(offsetof(Object027e4440, value_0x02c8) == 0x2c8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_027e4440(const Object027e4440 *self)
{
    return self->value_0x02c8;
}

/**
 *
 * The part of the object that auto_return_float_field_027e4450 reads.
 *
 */
struct Object027e4450 {
    uint8_t unknown_0x0000[0x2cc];
    float value_0x02cc; /**< Read by auto_return_float_field_027e4450; meaning unknown. */
};
static_assert(offsetof(Object027e4450, value_0x02cc) == 0x2cc);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_027e4450(const Object027e4450 *self)
{
    return self->value_0x02cc;
}
