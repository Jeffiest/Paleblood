// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_00c02230 reads.
 *
 */
struct Object00c02230 {
    uint8_t unknown_0x0000[0x20];
    uint8_t value_0x0020; /**< Read by auto_return_field_00c02230; meaning unknown. */
};
static_assert(offsetof(Object00c02230, value_0x0020) == 0x20);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_00c02230(const Object00c02230 *self)
{
    return self->value_0x0020;
}

/**
 *
 * The part of the object that auto_return_field_00c02240 reads.
 *
 */
struct Object00c02240 {
    uint8_t unknown_0x0000[0x21];
    uint8_t value_0x0021; /**< Read by auto_return_field_00c02240; meaning unknown. */
};
static_assert(offsetof(Object00c02240, value_0x0021) == 0x21);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_00c02240(const Object00c02240 *self)
{
    return self->value_0x0021;
}

/**
 *
 * The part of the object that auto_return_field_00c02250 reads.
 *
 */
struct Object00c02250 {
    uint8_t unknown_0x0000[0x21];
    uint8_t value_0x0021; /**< Read by auto_return_field_00c02250; meaning unknown. */
};
static_assert(offsetof(Object00c02250, value_0x0021) == 0x21);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_00c02250(const Object00c02250 *self)
{
    return self->value_0x0021;
}

/**
 *
 * The part of the object that auto_return_field_00c02260 reads.
 *
 */
struct Object00c02260 {
    uint8_t unknown_0x0000[0x22];
    uint8_t value_0x0022; /**< Read by auto_return_field_00c02260; meaning unknown. */
};
static_assert(offsetof(Object00c02260, value_0x0022) == 0x22);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_00c02260(const Object00c02260 *self)
{
    return self->value_0x0022;
}

/**
 *
 * The part of the object that auto_return_field_00c08010 reads.
 *
 */
struct Object00c08010 {
    uint8_t unknown_0x0000[0x88];
    uint32_t value_0x0088; /**< Read by auto_return_field_00c08010; meaning unknown. */
};
static_assert(offsetof(Object00c08010, value_0x0088) == 0x88);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_00c08010(const Object00c08010 *self)
{
    return self->value_0x0088;
}

/**
 *
 * The part of the object that auto_return_field_00c080a0 reads.
 *
 */
struct Object00c080a0 {
    uint8_t unknown_0x0000[0x98];
    uint32_t value_0x0098; /**< Read by auto_return_field_00c080a0; meaning unknown. */
};
static_assert(offsetof(Object00c080a0, value_0x0098) == 0x98);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_00c080a0(const Object00c080a0 *self)
{
    return self->value_0x0098;
}

/**
 *
 * The part of the object that auto_return_field_00c0d570 reads.
 *
 */
struct Object00c0d570 {
    uint8_t unknown_0x0000[0x80];
    uint8_t value_0x0080; /**< Read by auto_return_field_00c0d570; meaning unknown. */
};
static_assert(offsetof(Object00c0d570, value_0x0080) == 0x80);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_00c0d570(const Object00c0d570 *self)
{
    return self->value_0x0080;
}

/**
 *
 * The part of the object that auto_return_field_00c0e6b0 reads.
 *
 */
struct Object00c0e6b0 {
    uint8_t unknown_0x0000[0x98];
    uint32_t value_0x0098; /**< Read by auto_return_field_00c0e6b0; meaning unknown. */
};
static_assert(offsetof(Object00c0e6b0, value_0x0098) == 0x98);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_00c0e6b0(const Object00c0e6b0 *self)
{
    return self->value_0x0098;
}
