// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02646d00()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02649510()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0264a830()
{
}

/**
 *
 * The part of the object that auto_return_field_0264c390 reads.
 *
 */
struct Object0264c390 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0264c390; meaning unknown. */
};
static_assert(offsetof(Object0264c390, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0264c390(const Object0264c390 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0264c3a0 reads.
 *
 */
struct Object0264c3a0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0264c3a0; meaning unknown. */
};
static_assert(offsetof(Object0264c3a0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0264c3a0(const Object0264c3a0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0264c3f0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0264c670 = 0x38;

extern "C" uint32_t bb_auto_return_constant_0264c670()
{
    return value_0264c670;
}

/**
 *
 * The part of the object that auto_return_member_address_0264dde0 reads.
 *
 */
struct Object0264dde0 {
    uint8_t unknown_0x0000[0x1d8];
    uint8_t member_0x01d8; /**< Read by auto_return_member_address_0264dde0; meaning unknown. */
};
static_assert(offsetof(Object0264dde0, member_0x01d8) == 0x1d8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0264dde0(Object0264dde0 *self)
{
    return &self->member_0x01d8;
}
