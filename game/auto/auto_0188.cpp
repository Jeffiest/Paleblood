// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_018829c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01883910()
{
}

/**
 *
 * The part of the object that auto_return_field_01883c30 reads.
 *
 */
struct Object01883c30 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01883c30; meaning unknown. */
};
static_assert(offsetof(Object01883c30, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01883c30(const Object01883c30 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01883c40 reads.
 *
 */
struct Object01883c40 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01883c40; meaning unknown. */
};
static_assert(offsetof(Object01883c40, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01883c40(const Object01883c40 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01883c90()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01883f10 = 0xf8;

extern "C" uint32_t bb_auto_return_constant_01883f10()
{
    return value_01883f10;
}

/**
 *
 * The part of the object that auto_return_field_01883f50 reads.
 *
 */
struct Object01883f50 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01883f50; meaning unknown. */
};
static_assert(offsetof(Object01883f50, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01883f50(const Object01883f50 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01883f60 reads.
 *
 */
struct Object01883f60 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01883f60; meaning unknown. */
};
static_assert(offsetof(Object01883f60, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01883f60(const Object01883f60 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01883fb0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01884230 = 0x28;

extern "C" uint32_t bb_auto_return_constant_01884230()
{
    return value_01884230;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01884620()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01884c30()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01884c40()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01884c50()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01884c60()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_01884ce0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_01884ce0()
{
    return value_01884ce0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_018852b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01886740()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01887de0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01887eb0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01888200()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01888b10()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01889310 = 0x3;

extern "C" uint32_t bb_auto_return_constant_01889310()
{
    return value_01889310;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0188b7c0 = 0x9;

extern "C" uint32_t bb_auto_return_constant_0188b7c0()
{
    return value_0188b7c0;
}

/**
 *
 * The part of the object that auto_return_field_0188dd20 reads.
 *
 */
struct Object0188dd20 {
    uint8_t unknown_0x0000[0xb];
    uint8_t value_0x000b; /**< Read by auto_return_field_0188dd20; meaning unknown. */
};
static_assert(offsetof(Object0188dd20, value_0x000b) == 0xb);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_0188dd20(const Object0188dd20 *self)
{
    return self->value_0x000b;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0188dd40()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0188e170()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0188e180()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0188e1c0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_0188e1e0 reads.
 *
 */
struct Object0188e1e0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_0188e1e0; meaning unknown. */
};
static_assert(offsetof(Object0188e1e0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0188e1e0(Object0188e1e0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0188e1f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0188e240()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0188e2a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0188e300()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0188e3d0()
{
}
