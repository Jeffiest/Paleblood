// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02562840()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02562850()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02562860()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02562870()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02562880()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02562e90()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02563800()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02563b40()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02563ec0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02564270()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_025644c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02564500()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02564890()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02564b20()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02564b60()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02564c60()
{
}

/**
 *
 * The part of the object that auto_return_member_address_025676b0 reads.
 *
 */
struct Object025676b0 {
    uint8_t unknown_0x0000[0x130];
    uint8_t member_0x0130; /**< Read by auto_return_member_address_025676b0; meaning unknown. */
};
static_assert(offsetof(Object025676b0, member_0x0130) == 0x130);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_025676b0(Object025676b0 *self)
{
    return &self->member_0x0130;
}

/**
 *
 * The part of the object that auto_return_field_02567870 reads.
 *
 */
struct Object02567870 {
    uint8_t unknown_0x0000[0xdc10];
    uint64_t value_0xdc10; /**< Read by auto_return_field_02567870; meaning unknown. */
};
static_assert(offsetof(Object02567870, value_0xdc10) == 0xdc10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02567870(const Object02567870 *self)
{
    return self->value_0xdc10;
}

/**
 *
 * The part of the object that auto_return_field_02567880 reads.
 *
 */
struct Object02567880 {
    uint8_t unknown_0x0000[0xdc20];
    uint64_t value_0xdc20; /**< Read by auto_return_field_02567880; meaning unknown. */
};
static_assert(offsetof(Object02567880, value_0xdc20) == 0xdc20);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02567880(const Object02567880 *self)
{
    return self->value_0xdc20;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02567d90()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02568c90()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02568ca0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02568cb0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02568e00()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02568f30()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02569060()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02569190()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02569290()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_025693e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_025693f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02569400()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02569410()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_025695b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02569eb0()
{
}

/**
 *
 * The part of the object that auto_return_field_0256a7c0 reads.
 *
 */
struct Object0256a7c0 {
    uint8_t unknown_0x0000[0xb510];
    uint32_t value_0xb510; /**< Read by auto_return_field_0256a7c0; meaning unknown. */
};
static_assert(offsetof(Object0256a7c0, value_0xb510) == 0xb510);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_0256a7c0(const Object0256a7c0 *self)
{
    return self->value_0xb510;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0256aea0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0256af10()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0256cf00()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0256cf10()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_0256d8f0 reads.
 *
 */
struct Object0256d8f0 {
    uint8_t unknown_0x0000[0x20];
    uint8_t value_0x0020; /**< Read by auto_return_field_0256d8f0; meaning unknown. */
};
static_assert(offsetof(Object0256d8f0, value_0x0020) == 0x20);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_0256d8f0(const Object0256d8f0 *self)
{
    return self->value_0x0020;
}

/**
 *
 * The part of the object that auto_return_field_0256e1a0 reads.
 *
 */
struct Object0256e1a0 {
    uint8_t unknown_0x0000[0x8];
    uint64_t value_0x0008; /**< Read by auto_return_field_0256e1a0; meaning unknown. */
};
static_assert(offsetof(Object0256e1a0, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0256e1a0(const Object0256e1a0 *self)
{
    return self->value_0x0008;
}
