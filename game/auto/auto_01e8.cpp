// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e80010()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e80020()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e80030()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e80040()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e80050()
{
}

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
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e84b80()
{
}

/**
 *
 * The part of the object that auto_return_field_01e866b0 reads.
 *
 */
struct Object01e866b0 {
    uint64_t value_0x0000; /**< Read by auto_return_field_01e866b0; meaning unknown. */
};
static_assert(offsetof(Object01e866b0, value_0x0000) == 0x0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e866b0(const Object01e866b0 *self)
{
    return self->value_0x0000;
}

/**
 *
 * The part of the object that auto_return_field_01e866c0 reads.
 *
 */
struct Object01e866c0 {
    uint8_t unknown_0x0000[0x8];
    uint64_t value_0x0008; /**< Read by auto_return_field_01e866c0; meaning unknown. */
};
static_assert(offsetof(Object01e866c0, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e866c0(const Object01e866c0 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_01e866d0 reads.
 *
 */
struct Object01e866d0 {
    uint8_t unknown_0x0000[0x10];
    uint64_t value_0x0010; /**< Read by auto_return_field_01e866d0; meaning unknown. */
};
static_assert(offsetof(Object01e866d0, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e866d0(const Object01e866d0 *self)
{
    return self->value_0x0010;
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
extern "C" void bb_auto_empty_01e89220()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e8a970()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e8a980()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e8a990()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e8a9a0()
{
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
extern "C" void bb_auto_empty_01e8c510()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e8d3b0()
{
}

/**
 *
 * The part of the object that auto_return_field_01e8e600 reads.
 *
 */
struct Object01e8e600 {
    uint8_t unknown_0x0000[0x18];
    uint32_t value_0x0018; /**< Read by auto_return_field_01e8e600; meaning unknown. */
};
static_assert(offsetof(Object01e8e600, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01e8e600(const Object01e8e600 *self)
{
    return self->value_0x0018;
}

/**
 *
 * The part of the object that auto_return_field_01e8e620 reads.
 *
 */
struct Object01e8e620 {
    uint8_t unknown_0x0000[0x1c];
    uint32_t value_0x001c; /**< Read by auto_return_field_01e8e620; meaning unknown. */
};
static_assert(offsetof(Object01e8e620, value_0x001c) == 0x1c);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01e8e620(const Object01e8e620 *self)
{
    return self->value_0x001c;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01e8e650()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e8e660()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01e8e670()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e8e680()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e8e870()
{
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
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e8eee0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01e8f0d0 reads.
 *
 */
struct Object01e8f0d0 {
    uint8_t unknown_0x0000[0x68];
    uint8_t member_0x0068; /**< Read by auto_return_member_address_01e8f0d0; meaning unknown. */
};
static_assert(offsetof(Object01e8f0d0, member_0x0068) == 0x68);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01e8f0d0(Object01e8f0d0 *self)
{
    return &self->member_0x0068;
}

/**
 *
 * The part of the object that auto_return_member_address_01e8f0f0 reads.
 *
 */
struct Object01e8f0f0 {
    uint8_t unknown_0x0000[0x10];
    uint8_t member_0x0010; /**< Read by auto_return_member_address_01e8f0f0; meaning unknown. */
};
static_assert(offsetof(Object01e8f0f0, member_0x0010) == 0x10);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01e8f0f0(Object01e8f0f0 *self)
{
    return &self->member_0x0010;
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

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e8f3d0()
{
}
