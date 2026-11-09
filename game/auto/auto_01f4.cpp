// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f40140()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f40180()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f401a0 reads.
 *
 */
struct Object01f401a0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f401a0; meaning unknown. */
};
static_assert(offsetof(Object01f401a0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f401a0(Object01f401a0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f407e0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_01f408a0 reads.
 *
 */
struct Object01f408a0 {
    uint8_t unknown_0x0000[0x10];
    uint8_t member_0x0010; /**< Read by auto_return_member_address_01f408a0; meaning unknown. */
};
static_assert(offsetof(Object01f408a0, member_0x0010) == 0x10);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f408a0(Object01f408a0 *self)
{
    return &self->member_0x0010;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f430e0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_01f431a0 reads.
 *
 */
struct Object01f431a0 {
    uint8_t unknown_0x0000[0x10];
    uint8_t member_0x0010; /**< Read by auto_return_member_address_01f431a0; meaning unknown. */
};
static_assert(offsetof(Object01f431a0, member_0x0010) == 0x10);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f431a0(Object01f431a0 *self)
{
    return &self->member_0x0010;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f439a0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f439e0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f43a00 reads.
 *
 */
struct Object01f43a00 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f43a00; meaning unknown. */
};
static_assert(offsetof(Object01f43a00, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f43a00(Object01f43a00 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f44450()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_01f44510 reads.
 *
 */
struct Object01f44510 {
    uint8_t unknown_0x0000[0x10];
    uint8_t member_0x0010; /**< Read by auto_return_member_address_01f44510; meaning unknown. */
};
static_assert(offsetof(Object01f44510, member_0x0010) == 0x10);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f44510(Object01f44510 *self)
{
    return &self->member_0x0010;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f445d0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f44610()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f44630 reads.
 *
 */
struct Object01f44630 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f44630; meaning unknown. */
};
static_assert(offsetof(Object01f44630, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f44630(Object01f44630 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f44900()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f44940()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f44960 reads.
 *
 */
struct Object01f44960 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f44960; meaning unknown. */
};
static_assert(offsetof(Object01f44960, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f44960(Object01f44960 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f44a20()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f44a60()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f44a80 reads.
 *
 */
struct Object01f44a80 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f44a80; meaning unknown. */
};
static_assert(offsetof(Object01f44a80, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f44a80(Object01f44a80 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * The part of the object that auto_return_member_address_01f44cb0 reads.
 *
 */
struct Object01f44cb0 {
    uint8_t unknown_0x0000[0xdf8];
    uint8_t member_0x0df8; /**< Read by auto_return_member_address_01f44cb0; meaning unknown. */
};
static_assert(offsetof(Object01f44cb0, member_0x0df8) == 0xdf8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f44cb0(Object01f44cb0 *self)
{
    return &self->member_0x0df8;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_01f44cc0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_01f44cc0()
{
    return value_01f44cc0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f45140()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f45180()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f451a0 reads.
 *
 */
struct Object01f451a0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f451a0; meaning unknown. */
};
static_assert(offsetof(Object01f451a0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f451a0(Object01f451a0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f45240()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f45280()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f452a0 reads.
 *
 */
struct Object01f452a0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f452a0; meaning unknown. */
};
static_assert(offsetof(Object01f452a0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f452a0(Object01f452a0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f45350()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f45390()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f453b0 reads.
 *
 */
struct Object01f453b0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f453b0; meaning unknown. */
};
static_assert(offsetof(Object01f453b0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f453b0(Object01f453b0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f45cf0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f45d30()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f45d50 reads.
 *
 */
struct Object01f45d50 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f45d50; meaning unknown. */
};
static_assert(offsetof(Object01f45d50, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f45d50(Object01f45d50 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f45e20()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f45e60()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f45e80 reads.
 *
 */
struct Object01f45e80 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f45e80; meaning unknown. */
};
static_assert(offsetof(Object01f45e80, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f45e80(Object01f45e80 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f45f40()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f45f80()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f45fa0 reads.
 *
 */
struct Object01f45fa0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f45fa0; meaning unknown. */
};
static_assert(offsetof(Object01f45fa0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f45fa0(Object01f45fa0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f46100()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f46140()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f46160 reads.
 *
 */
struct Object01f46160 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f46160; meaning unknown. */
};
static_assert(offsetof(Object01f46160, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f46160(Object01f46160 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f46230()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f46270()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f46290 reads.
 *
 */
struct Object01f46290 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f46290; meaning unknown. */
};
static_assert(offsetof(Object01f46290, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f46290(Object01f46290 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f463c0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f46400()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f46420 reads.
 *
 */
struct Object01f46420 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f46420; meaning unknown. */
};
static_assert(offsetof(Object01f46420, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f46420(Object01f46420 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f46520()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f46530()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f46570()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f46590 reads.
 *
 */
struct Object01f46590 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f46590; meaning unknown. */
};
static_assert(offsetof(Object01f46590, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f46590(Object01f46590 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f46660()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f466a0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f466c0 reads.
 *
 */
struct Object01f466c0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f466c0; meaning unknown. */
};
static_assert(offsetof(Object01f466c0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f466c0(Object01f466c0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f46a40()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_01f46b40 reads.
 *
 */
struct Object01f46b40 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f46b40; meaning unknown. */
};
static_assert(offsetof(Object01f46b40, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f46b40(Object01f46b40 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f46c00()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f46c40()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f46c60 reads.
 *
 */
struct Object01f46c60 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f46c60; meaning unknown. */
};
static_assert(offsetof(Object01f46c60, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f46c60(Object01f46c60 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f46d00()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f46d40()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f46d60 reads.
 *
 */
struct Object01f46d60 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f46d60; meaning unknown. */
};
static_assert(offsetof(Object01f46d60, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f46d60(Object01f46d60 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f47770()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f477b0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f477d0 reads.
 *
 */
struct Object01f477d0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f477d0; meaning unknown. */
};
static_assert(offsetof(Object01f477d0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f477d0(Object01f477d0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f47900()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f47940()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f47960 reads.
 *
 */
struct Object01f47960 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f47960; meaning unknown. */
};
static_assert(offsetof(Object01f47960, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f47960(Object01f47960 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f480e0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f48120()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f48140 reads.
 *
 */
struct Object01f48140 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f48140; meaning unknown. */
};
static_assert(offsetof(Object01f48140, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f48140(Object01f48140 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f48aa0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f48ae0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f48b00 reads.
 *
 */
struct Object01f48b00 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f48b00; meaning unknown. */
};
static_assert(offsetof(Object01f48b00, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f48b00(Object01f48b00 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f48c30()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f48c70()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f48c90 reads.
 *
 */
struct Object01f48c90 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f48c90; meaning unknown. */
};
static_assert(offsetof(Object01f48c90, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f48c90(Object01f48c90 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f49ad0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f49b10()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f49b30 reads.
 *
 */
struct Object01f49b30 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f49b30; meaning unknown. */
};
static_assert(offsetof(Object01f49b30, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f49b30(Object01f49b30 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f49be0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f49c20()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f49c40 reads.
 *
 */
struct Object01f49c40 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f49c40; meaning unknown. */
};
static_assert(offsetof(Object01f49c40, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f49c40(Object01f49c40 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f49dc0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f49e00()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f49e20 reads.
 *
 */
struct Object01f49e20 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f49e20; meaning unknown. */
};
static_assert(offsetof(Object01f49e20, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f49e20(Object01f49e20 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f49fa0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f49fe0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f4a000 reads.
 *
 */
struct Object01f4a000 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f4a000; meaning unknown. */
};
static_assert(offsetof(Object01f4a000, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f4a000(Object01f4a000 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f4a2e0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f4a320()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f4a340 reads.
 *
 */
struct Object01f4a340 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f4a340; meaning unknown. */
};
static_assert(offsetof(Object01f4a340, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f4a340(Object01f4a340 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f4b330()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f4b370()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f4b390 reads.
 *
 */
struct Object01f4b390 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f4b390; meaning unknown. */
};
static_assert(offsetof(Object01f4b390, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f4b390(Object01f4b390 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f4bb40()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f4bb80()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f4bba0 reads.
 *
 */
struct Object01f4bba0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f4bba0; meaning unknown. */
};
static_assert(offsetof(Object01f4bba0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f4bba0(Object01f4bba0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f4bde0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f4be20()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f4be40 reads.
 *
 */
struct Object01f4be40 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f4be40; meaning unknown. */
};
static_assert(offsetof(Object01f4be40, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f4be40(Object01f4be40 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f4c1d0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f4c210()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f4c230 reads.
 *
 */
struct Object01f4c230 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f4c230; meaning unknown. */
};
static_assert(offsetof(Object01f4c230, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f4c230(Object01f4c230 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f4c3e0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f4c420()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f4c440 reads.
 *
 */
struct Object01f4c440 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f4c440; meaning unknown. */
};
static_assert(offsetof(Object01f4c440, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f4c440(Object01f4c440 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f4c510()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f4c550()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f4c570 reads.
 *
 */
struct Object01f4c570 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f4c570; meaning unknown. */
};
static_assert(offsetof(Object01f4c570, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f4c570(Object01f4c570 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f4c610()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f4c650()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f4c670 reads.
 *
 */
struct Object01f4c670 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f4c670; meaning unknown. */
};
static_assert(offsetof(Object01f4c670, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f4c670(Object01f4c670 *self)
{
    return &self->member_0x0008;
}
