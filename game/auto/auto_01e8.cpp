// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e842d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e84330()
{
}

/**
 *
 * The part of the object that auto_return_field_01e866e0 reads.
 *
 */
struct Object01e866e0 {
    uint8_t unknown_0x0000[0x18];
    uint64_t value_0x0018; /**< Read by auto_return_field_01e866e0; meaning unknown. */
};
static_assert(offsetof(Object01e866e0, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e866e0(const Object01e866e0 *self)
{
    return self->value_0x0018;
}

/**
 *
 * The part of the object that auto_return_member_address_01e86db0 reads.
 *
 */
struct Object01e86db0 {
    uint8_t unknown_0x0000[0x14010];
    uint8_t member_0x14010; /**< Read by auto_return_member_address_01e86db0; meaning unknown. */
};
static_assert(offsetof(Object01e86db0, member_0x14010) == 0x14010);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01e86db0(Object01e86db0 *self)
{
    return &self->member_0x14010;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e8adf0()
{
}

/**
 *
 * The part of the object that auto_return_field_01e8b700 reads.
 *
 */
struct Object01e8b700 {
    uint8_t unknown_0x0000[0x80];
    uint32_t value_0x0080; /**< Read by auto_return_field_01e8b700; meaning unknown. */
};
static_assert(offsetof(Object01e8b700, value_0x0080) == 0x80);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01e8b700(const Object01e8b700 *self)
{
    return self->value_0x0080;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e8eb90()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e8ebf0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01e8f100 reads.
 *
 */
struct Object01e8f100 {
    uint8_t unknown_0x0000[0x20];
    uint8_t member_0x0020; /**< Read by auto_return_member_address_01e8f100; meaning unknown. */
};
static_assert(offsetof(Object01e8f100, member_0x0020) == 0x20);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01e8f100(Object01e8f100 *self)
{
    return &self->member_0x0020;
}
