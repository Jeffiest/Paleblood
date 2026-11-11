// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f60050()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f60250()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f60370()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f605d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f60850()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f6aab0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f6abb0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f6bc40()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f6be30()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f6ca00()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f6cbd0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f6ccf0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f6cd10 reads.
 *
 */
struct Object01f6cd10 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f6cd10; meaning unknown. */
};
static_assert(offsetof(Object01f6cd10, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f6cd10(Object01f6cd10 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * The part of the object that auto_return_member_address_01f6d020 reads.
 *
 */
struct Object01f6d020 {
    uint8_t unknown_0x0000[0xdf8];
    uint8_t member_0x0df8; /**< Read by auto_return_member_address_01f6d020; meaning unknown. */
};
static_assert(offsetof(Object01f6d020, member_0x0df8) == 0xdf8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f6d020(Object01f6d020 *self)
{
    return &self->member_0x0df8;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_01f6d030 = 0x1;

extern "C" uint8_t bb_auto_return_constant_01f6d030()
{
    return value_01f6d030;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f6d5d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f6d6d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f6d7e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f6d8f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f6dbc0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f6e2a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f6e3a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f6e4a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f6e5b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f6e770()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f6e960()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f6ea70()
{
}

/**
 *
 * The part of the object that auto_return_field_01f6ed10 reads.
 *
 */
struct Object01f6ed10 {
    uint8_t unknown_0x0000[0x8];
    uint8_t value_0x0008; /**< Read by auto_return_field_01f6ed10; meaning unknown. */
};
static_assert(offsetof(Object01f6ed10, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_01f6ed10(const Object01f6ed10 *self)
{
    return self->value_0x0008;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f6ed60()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f6eef0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f6f160()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f6f260()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f6f580()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f6f680()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f6f810()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f6f920()
{
}
