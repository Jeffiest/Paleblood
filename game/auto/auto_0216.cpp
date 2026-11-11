// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_021638d0()
{
}

/**
 *
 * The part of the object that auto_return_field_02164d90 reads.
 *
 */
struct Object02164d90 {
    uint8_t unknown_0x0000[0x80];
    uint64_t value_0x0080; /**< Read by auto_return_field_02164d90; meaning unknown. */
};
static_assert(offsetof(Object02164d90, value_0x0080) == 0x80);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02164d90(const Object02164d90 *self)
{
    return self->value_0x0080;
}

/**
 *
 * The part of the object that auto_return_field_02164da0 reads.
 *
 */
struct Object02164da0 {
    uint8_t unknown_0x0000[0xe0];
    uint8_t value_0x00e0; /**< Read by auto_return_field_02164da0; meaning unknown. */
};
static_assert(offsetof(Object02164da0, value_0x00e0) == 0xe0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02164da0(const Object02164da0 *self)
{
    return self->value_0x00e0;
}

/**
 *
 * The part of the object that auto_return_field_02166770 reads.
 *
 */
struct Object02166770 {
    uint8_t unknown_0x0000[0x388];
    uint64_t value_0x0388; /**< Read by auto_return_field_02166770; meaning unknown. */
};
static_assert(offsetof(Object02166770, value_0x0388) == 0x388);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02166770(const Object02166770 *self)
{
    return self->value_0x0388;
}

/**
 *
 * The part of the object that auto_return_member_address_0216e010 reads.
 *
 */
struct Object0216e010 {
    uint8_t unknown_0x0000[0x88];
    uint8_t member_0x0088; /**< Read by auto_return_member_address_0216e010; meaning unknown. */
};
static_assert(offsetof(Object0216e010, member_0x0088) == 0x88);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0216e010(Object0216e010 *self)
{
    return &self->member_0x0088;
}

/**
 *
 * The part of the object that auto_return_field_0216f990 reads.
 *
 */
struct Object0216f990 {
    uint8_t unknown_0x0000[0x460];
    uint64_t value_0x0460; /**< Read by auto_return_field_0216f990; meaning unknown. */
};
static_assert(offsetof(Object0216f990, value_0x0460) == 0x460);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0216f990(const Object0216f990 *self)
{
    return self->value_0x0460;
}

/**
 *
 * The part of the object that auto_return_field_0216f9a0 reads.
 *
 */
struct Object0216f9a0 {
    uint8_t unknown_0x0000[0x468];
    uint64_t value_0x0468; /**< Read by auto_return_field_0216f9a0; meaning unknown. */
};
static_assert(offsetof(Object0216f9a0, value_0x0468) == 0x468);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0216f9a0(const Object0216f9a0 *self)
{
    return self->value_0x0468;
}
