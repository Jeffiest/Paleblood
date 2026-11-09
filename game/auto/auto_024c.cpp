// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_member_address_024c1300 reads.
 *
 */
struct Object024c1300 {
    uint8_t unknown_0x0000[0x638];
    uint8_t member_0x0638; /**< Read by auto_return_member_address_024c1300; meaning unknown. */
};
static_assert(offsetof(Object024c1300, member_0x0638) == 0x638);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_024c1300(Object024c1300 *self)
{
    return &self->member_0x0638;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_024c1510()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_024c1520()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_024c17c0 reads.
 *
 */
struct Object024c17c0 {
    uint8_t unknown_0x0000[0x490];
    uint64_t value_0x0490; /**< Read by auto_return_field_024c17c0; meaning unknown. */
};
static_assert(offsetof(Object024c17c0, value_0x0490) == 0x490);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_024c17c0(const Object024c17c0 *self)
{
    return self->value_0x0490;
}

/**
 *
 * The part of the object that auto_return_member_address_024c17d0 reads.
 *
 */
struct Object024c17d0 {
    uint8_t unknown_0x0000[0x680];
    uint8_t member_0x0680; /**< Read by auto_return_member_address_024c17d0; meaning unknown. */
};
static_assert(offsetof(Object024c17d0, member_0x0680) == 0x680);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_024c17d0(Object024c17d0 *self)
{
    return &self->member_0x0680;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_024c1db0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_024c7040 reads.
 *
 */
struct Object024c7040 {
    uint8_t unknown_0x0000[0xe0];
    uint8_t member_0x00e0; /**< Read by auto_return_member_address_024c7040; meaning unknown. */
};
static_assert(offsetof(Object024c7040, member_0x00e0) == 0xe0);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_024c7040(Object024c7040 *self)
{
    return &self->member_0x00e0;
}

/**
 *
 * The part of the object that auto_return_field_024c7050 reads.
 *
 */
struct Object024c7050 {
    uint8_t unknown_0x0000[0x78];
    uint32_t value_0x0078; /**< Read by auto_return_field_024c7050; meaning unknown. */
};
static_assert(offsetof(Object024c7050, value_0x0078) == 0x78);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_024c7050(const Object024c7050 *self)
{
    return self->value_0x0078;
}

/**
 *
 * The part of the object that auto_return_field_024c7060 reads.
 *
 */
struct Object024c7060 {
    uint8_t unknown_0x0000[0x7d];
    uint8_t value_0x007d; /**< Read by auto_return_field_024c7060; meaning unknown. */
};
static_assert(offsetof(Object024c7060, value_0x007d) == 0x7d);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_024c7060(const Object024c7060 *self)
{
    return self->value_0x007d;
}

/**
 *
 * The part of the object that auto_return_field_024cccc0 reads.
 *
 */
struct Object024cccc0 {
    uint8_t unknown_0x0000[0x1d4];
    uint8_t value_0x01d4; /**< Read by auto_return_field_024cccc0; meaning unknown. */
};
static_assert(offsetof(Object024cccc0, value_0x01d4) == 0x1d4);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_024cccc0(const Object024cccc0 *self)
{
    return self->value_0x01d4;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_024ce100()
{
}

/**
 *
 * The part of the object that auto_return_field_024ce7a0 reads.
 *
 */
struct Object024ce7a0 {
    uint8_t value_0x0000; /**< Read by auto_return_field_024ce7a0; meaning unknown. */
};
static_assert(offsetof(Object024ce7a0, value_0x0000) == 0x0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_024ce7a0(const Object024ce7a0 *self)
{
    return self->value_0x0000;
}
