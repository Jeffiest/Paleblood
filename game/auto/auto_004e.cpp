// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_member_address_004e8550 reads.
 *
 */
struct Object004e8550 {
    uint8_t unknown_0x0000[0xd0];
    uint8_t member_0x00d0; /**< Read by auto_return_member_address_004e8550; meaning unknown. */
};
static_assert(offsetof(Object004e8550, member_0x00d0) == 0xd0);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_004e8550(Object004e8550 *self)
{
    return &self->member_0x00d0;
}

/**
 *
 * The part of the object that auto_return_field_004ea8a0 reads.
 *
 */
struct Object004ea8a0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_004ea8a0; meaning unknown. */
};
static_assert(offsetof(Object004ea8a0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_004ea8a0(const Object004ea8a0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_004ef270 reads.
 *
 */
struct Object004ef270 {
    uint8_t unknown_0x0000[0x18];
    uint64_t value_0x0018; /**< Read by auto_return_field_004ef270; meaning unknown. */
};
static_assert(offsetof(Object004ef270, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_004ef270(const Object004ef270 *self)
{
    return self->value_0x0018;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_004ef2d0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_004ef2e0()
{
    return 0;
}
