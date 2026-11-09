// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02444920()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02444960()
{
}

/**
 *
 * The part of the object that auto_return_member_address_02444980 reads.
 *
 */
struct Object02444980 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_02444980; meaning unknown. */
};
static_assert(offsetof(Object02444980, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02444980(Object02444980 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_02445ab0 reads.
 *
 */
struct Object02445ab0 {
    uint8_t unknown_0x0000[0x24];
    uint32_t value_0x0024; /**< Read by auto_return_field_02445ab0; meaning unknown. */
};
static_assert(offsetof(Object02445ab0, value_0x0024) == 0x24);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02445ab0(const Object02445ab0 *self)
{
    return self->value_0x0024;
}

/**
 *
 * The part of the object that auto_return_field_024471b0 reads.
 *
 */
struct Object024471b0 {
    uint8_t unknown_0x0000[0xc8];
    uint8_t value_0x00c8; /**< Read by auto_return_field_024471b0; meaning unknown. */
};
static_assert(offsetof(Object024471b0, value_0x00c8) == 0xc8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_024471b0(const Object024471b0 *self)
{
    return self->value_0x00c8;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_024473c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02447420()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02449db0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0244a860()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0244a890 = 0x1;

extern "C" uint32_t bb_auto_return_constant_0244a890()
{
    return value_0244a890;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0244ab10 = 0x1;

extern "C" uint32_t bb_auto_return_constant_0244ab10()
{
    return value_0244ab10;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0244cd50()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0244cd80 = 0x2;

extern "C" uint32_t bb_auto_return_constant_0244cd80()
{
    return value_0244cd80;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0244d000 = 0x1;

extern "C" uint32_t bb_auto_return_constant_0244d000()
{
    return value_0244d000;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0244ef00()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0244efc0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0244f290()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0244f2f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0244f350()
{
}
