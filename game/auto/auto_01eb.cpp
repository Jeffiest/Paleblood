// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_01eb0210 reads.
 *
 */
struct Object01eb0210 {
    uint8_t unknown_0x0000[0x10];
    uint32_t value_0x0010; /**< Read by auto_return_field_01eb0210; meaning unknown. */
};
static_assert(offsetof(Object01eb0210, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01eb0210(const Object01eb0210 *self)
{
    return self->value_0x0010;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01eb11c0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01eb1a50()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01eb1a60 = 0xffffffff;

extern "C" uint32_t bb_auto_return_constant_01eb1a60()
{
    return value_01eb1a60;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01eb1a70 = 0xffffffff;

extern "C" uint32_t bb_auto_return_constant_01eb1a70()
{
    return value_01eb1a70;
}

/**
 *
 * The part of the object that auto_return_member_address_01eb5360 reads.
 *
 */
struct Object01eb5360 {
    uint8_t unknown_0x0000[0x108];
    uint8_t member_0x0108; /**< Read by auto_return_member_address_01eb5360; meaning unknown. */
};
static_assert(offsetof(Object01eb5360, member_0x0108) == 0x108);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01eb5360(Object01eb5360 *self)
{
    return &self->member_0x0108;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01eb7fc0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01eb8180()
{
}
