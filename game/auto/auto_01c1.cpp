// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01c123f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01c13170()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01c136a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01c14e70()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01c14ed0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01c153f0()
{
}

/**
 *
 * The part of the object that auto_return_field_01c157a0 reads.
 *
 */
struct Object01c157a0 {
    uint8_t unknown_0x0000[0x90];
    uint8_t value_0x0090; /**< Read by auto_return_field_01c157a0; meaning unknown. */
};
static_assert(offsetof(Object01c157a0, value_0x0090) == 0x90);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_01c157a0(const Object01c157a0 *self)
{
    return self->value_0x0090;
}

/**
 *
 * The part of the object that auto_return_field_01c157b0 reads.
 *
 */
struct Object01c157b0 {
    uint8_t unknown_0x0000[0x90];
    uint8_t value_0x0090; /**< Read by auto_return_field_01c157b0; meaning unknown. */
};
static_assert(offsetof(Object01c157b0, value_0x0090) == 0x90);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01c157b0(const Object01c157b0 *self)
{
    return self->value_0x0090;
}

/**
 *
 * The part of the object that auto_return_member_address_01c157c0 reads.
 *
 */
struct Object01c157c0 {
    uint8_t unknown_0x0000[0x30];
    uint8_t member_0x0030; /**< Read by auto_return_member_address_01c157c0; meaning unknown. */
};
static_assert(offsetof(Object01c157c0, member_0x0030) == 0x30);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01c157c0(Object01c157c0 *self)
{
    return &self->member_0x0030;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01c15a50()
{
}

/**
 *
 * The part of the object that auto_return_field_01c15d80 reads.
 *
 */
struct Object01c15d80 {
    uint8_t unknown_0x0000[0x80];
    uint8_t value_0x0080; /**< Read by auto_return_field_01c15d80; meaning unknown. */
};
static_assert(offsetof(Object01c15d80, value_0x0080) == 0x80);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_01c15d80(const Object01c15d80 *self)
{
    return self->value_0x0080;
}

/**
 *
 * The part of the object that auto_return_member_address_01c15da0 reads.
 *
 */
struct Object01c15da0 {
    uint8_t unknown_0x0000[0x20];
    uint8_t member_0x0020; /**< Read by auto_return_member_address_01c15da0; meaning unknown. */
};
static_assert(offsetof(Object01c15da0, member_0x0020) == 0x20);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01c15da0(Object01c15da0 *self)
{
    return &self->member_0x0020;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01c16310()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01c163e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01c186b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01c1ad30()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01c1b8e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01c1bce0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01c1bd30()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_01c1bd40 = 0x1;

extern "C" uint8_t bb_auto_return_constant_01c1bd40()
{
    return value_01c1bd40;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01c1f050()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01c1f060()
{
}
