// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01010ff0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01011960()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_010130b0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_010130c0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_float_field_01015e70 reads.
 *
 */
struct Object01015e70 {
    uint8_t unknown_0x0000[0x5c];
    float value_0x005c; /**< Read by auto_return_float_field_01015e70; meaning unknown. */
};
static_assert(offsetof(Object01015e70, value_0x005c) == 0x5c);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_01015e70(const Object01015e70 *self)
{
    return self->value_0x005c;
}

/**
 *
 * The part of the object that auto_return_float_field_01015e80 reads.
 *
 */
struct Object01015e80 {
    uint8_t unknown_0x0000[0x60];
    float value_0x0060; /**< Read by auto_return_float_field_01015e80; meaning unknown. */
};
static_assert(offsetof(Object01015e80, value_0x0060) == 0x60);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_01015e80(const Object01015e80 *self)
{
    return self->value_0x0060;
}

/**
 *
 * The part of the object that auto_return_member_address_01015e90 reads.
 *
 */
struct Object01015e90 {
    uint8_t unknown_0x0000[0x64];
    uint8_t member_0x0064; /**< Read by auto_return_member_address_01015e90; meaning unknown. */
};
static_assert(offsetof(Object01015e90, member_0x0064) == 0x64);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01015e90(Object01015e90 *self)
{
    return &self->member_0x0064;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_01016270 = 0x1;

extern "C" uint8_t bb_auto_return_constant_01016270()
{
    return value_01016270;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01019260()
{
    return 0;
}
