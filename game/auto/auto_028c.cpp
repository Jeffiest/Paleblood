// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028c1bd0()
{
}

/**
 *
 * The part of the object that auto_return_field_028c3560 reads.
 *
 */
struct Object028c3560 {
    uint8_t unknown_0x0000[0xc8];
    uint64_t value_0x00c8; /**< Read by auto_return_field_028c3560; meaning unknown. */
};
static_assert(offsetof(Object028c3560, value_0x00c8) == 0xc8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_028c3560(const Object028c3560 *self)
{
    return self->value_0x00c8;
}

/**
 *
 * The part of the object that auto_return_member_address_028c35a0 reads.
 *
 */
struct Object028c35a0 {
    uint8_t unknown_0x0000[0xd0];
    uint8_t member_0x00d0; /**< Read by auto_return_member_address_028c35a0; meaning unknown. */
};
static_assert(offsetof(Object028c35a0, member_0x00d0) == 0xd0);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_028c35a0(Object028c35a0 *self)
{
    return &self->member_0x00d0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_028c42f0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_028c42f0()
{
    return value_028c42f0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028c43e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028c6370()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_028ca620 = 0x1;

extern "C" uint8_t bb_auto_return_constant_028ca620()
{
    return value_028ca620;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_028ca760 = 0x1;

extern "C" uint8_t bb_auto_return_constant_028ca760()
{
    return value_028ca760;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_028ca770 = 0x1;

extern "C" uint8_t bb_auto_return_constant_028ca770()
{
    return value_028ca770;
}

/**
 *
 * The part of the object that auto_return_field_028cd760 reads.
 *
 */
struct Object028cd760 {
    uint8_t unknown_0x0000[0x148];
    uint32_t value_0x0148; /**< Read by auto_return_field_028cd760; meaning unknown. */
};
static_assert(offsetof(Object028cd760, value_0x0148) == 0x148);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_028cd760(const Object028cd760 *self)
{
    return self->value_0x0148;
}

/**
 *
 * The part of the object that auto_return_field_028cdcb0 reads.
 *
 */
struct Object028cdcb0 {
    uint8_t unknown_0x0000[0x1a8];
    uint32_t value_0x01a8; /**< Read by auto_return_field_028cdcb0; meaning unknown. */
};
static_assert(offsetof(Object028cdcb0, value_0x01a8) == 0x1a8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_028cdcb0(const Object028cdcb0 *self)
{
    return self->value_0x01a8;
}

/**
 *
 * The part of the object that auto_return_float_field_028ce080 reads.
 *
 */
struct Object028ce080 {
    uint8_t unknown_0x0000[0x78];
    float value_0x0078; /**< Read by auto_return_float_field_028ce080; meaning unknown. */
};
static_assert(offsetof(Object028ce080, value_0x0078) == 0x78);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_028ce080(const Object028ce080 *self)
{
    return self->value_0x0078;
}

/**
 *
 * The part of the object that auto_return_float_field_028ce0a0 reads.
 *
 */
struct Object028ce0a0 {
    uint8_t unknown_0x0000[0x7c];
    float value_0x007c; /**< Read by auto_return_float_field_028ce0a0; meaning unknown. */
};
static_assert(offsetof(Object028ce0a0, value_0x007c) == 0x7c);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_028ce0a0(const Object028ce0a0 *self)
{
    return self->value_0x007c;
}
