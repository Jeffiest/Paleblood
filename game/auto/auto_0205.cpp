// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02053b80()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02053bc0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_02053be0 reads.
 *
 */
struct Object02053be0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_02053be0; meaning unknown. */
};
static_assert(offsetof(Object02053be0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02053be0(Object02053be0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0205ae20()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0205ae60()
{
}

/**
 *
 * The part of the object that auto_return_member_address_0205ae80 reads.
 *
 */
struct Object0205ae80 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_0205ae80; meaning unknown. */
};
static_assert(offsetof(Object0205ae80, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0205ae80(Object0205ae80 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0205b000()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0205b040()
{
}

/**
 *
 * The part of the object that auto_return_member_address_0205b060 reads.
 *
 */
struct Object0205b060 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_0205b060; meaning unknown. */
};
static_assert(offsetof(Object0205b060, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0205b060(Object0205b060 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_0205dfb0 reads.
 *
 */
struct Object0205dfb0 {
    uint8_t unknown_0x0000[0x48];
    uint32_t value_0x0048; /**< Read by auto_return_field_0205dfb0; meaning unknown. */
};
static_assert(offsetof(Object0205dfb0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_0205dfb0(const Object0205dfb0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * The part of the object that auto_return_field_0205dfc0 reads.
 *
 */
struct Object0205dfc0 {
    uint8_t unknown_0x0000[0x50];
    uint32_t value_0x0050; /**< Read by auto_return_field_0205dfc0; meaning unknown. */
};
static_assert(offsetof(Object0205dfc0, value_0x0050) == 0x50);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_0205dfc0(const Object0205dfc0 *self)
{
    return self->value_0x0050;
}

/**
 *
 * The part of the object that auto_return_field_0205e110 reads.
 *
 */
struct Object0205e110 {
    uint8_t unknown_0x0000[0x58];
    uint32_t value_0x0058; /**< Read by auto_return_field_0205e110; meaning unknown. */
};
static_assert(offsetof(Object0205e110, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_0205e110(const Object0205e110 *self)
{
    return self->value_0x0058;
}
