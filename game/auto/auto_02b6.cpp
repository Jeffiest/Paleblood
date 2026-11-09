// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_member_address_02b609f0 reads.
 *
 */
struct Object02b609f0 {
    uint8_t unknown_0x0000[0x38];
    uint8_t member_0x0038; /**< Read by auto_return_member_address_02b609f0; meaning unknown. */
};
static_assert(offsetof(Object02b609f0, member_0x0038) == 0x38);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02b609f0(Object02b609f0 *self)
{
    return &self->member_0x0038;
}

/**
 *
 * The part of the object that auto_return_field_02b60c10 reads.
 *
 */
struct Object02b60c10 {
    uint8_t unknown_0x0000[0x8];
    uint32_t value_0x0008; /**< Read by auto_return_field_02b60c10; meaning unknown. */
};
static_assert(offsetof(Object02b60c10, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02b60c10(const Object02b60c10 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_02b60ce0 reads.
 *
 */
struct Object02b60ce0 {
    uint32_t value_0x0000; /**< Read by auto_return_field_02b60ce0; meaning unknown. */
};
static_assert(offsetof(Object02b60ce0, value_0x0000) == 0x0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02b60ce0(const Object02b60ce0 *self)
{
    return self->value_0x0000;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02b60d00()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02b60d10()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02b60d20()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02b60d30()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02b66c10()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02b66f80()
{
}
