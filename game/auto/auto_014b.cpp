// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_014b4d60 reads.
 *
 */
struct Object014b4d60 {
    uint64_t value_0x0000; /**< Read by auto_return_field_014b4d60; meaning unknown. */
};
static_assert(offsetof(Object014b4d60, value_0x0000) == 0x0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_014b4d60(const Object014b4d60 *self)
{
    return self->value_0x0000;
}

/**
 *
 * The part of the object that auto_return_field_014b4d70 reads.
 *
 */
struct Object014b4d70 {
    uint64_t value_0x0000; /**< Read by auto_return_field_014b4d70; meaning unknown. */
};
static_assert(offsetof(Object014b4d70, value_0x0000) == 0x0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_014b4d70(const Object014b4d70 *self)
{
    return self->value_0x0000;
}

/**
 *
 * The part of the object that auto_return_field_014b4ee0 reads.
 *
 */
struct Object014b4ee0 {
    uint8_t unknown_0x0000[0x8];
    uint64_t value_0x0008; /**< Read by auto_return_field_014b4ee0; meaning unknown. */
};
static_assert(offsetof(Object014b4ee0, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_014b4ee0(const Object014b4ee0 *self)
{
    return self->value_0x0008;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_014b5050()
{
}

/**
 *
 * The part of the object that auto_return_field_014bcb60 reads.
 *
 */
struct Object014bcb60 {
    uint8_t unknown_0x0000[0x10];
    uint64_t value_0x0010; /**< Read by auto_return_field_014bcb60; meaning unknown. */
};
static_assert(offsetof(Object014bcb60, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_014bcb60(const Object014bcb60 *self)
{
    return self->value_0x0010;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_014bcd00 = 0x1;

extern "C" uint8_t bb_auto_return_constant_014bcd00()
{
    return value_014bcd00;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_014bcd30 = 0x1;

extern "C" uint8_t bb_auto_return_constant_014bcd30()
{
    return value_014bcd30;
}

/**
 *
 * The part of the object that auto_return_field_014bcd80 reads.
 *
 */
struct Object014bcd80 {
    uint8_t unknown_0x0000[0xc];
    uint32_t value_0x000c; /**< Read by auto_return_field_014bcd80; meaning unknown. */
};
static_assert(offsetof(Object014bcd80, value_0x000c) == 0xc);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_014bcd80(const Object014bcd80 *self)
{
    return self->value_0x000c;
}

/**
 *
 * The part of the object that auto_return_field_014bff80 reads.
 *
 */
struct Object014bff80 {
    uint8_t unknown_0x0000[0x18];
    uint32_t value_0x0018; /**< Read by auto_return_field_014bff80; meaning unknown. */
};
static_assert(offsetof(Object014bff80, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_014bff80(const Object014bff80 *self)
{
    return self->value_0x0018;
}
