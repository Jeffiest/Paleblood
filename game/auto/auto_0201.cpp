// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_member_address_02010040 reads.
 *
 */
struct Object02010040 {
    uint8_t unknown_0x0000[0x10];
    uint8_t member_0x0010; /**< Read by auto_return_member_address_02010040; meaning unknown. */
};
static_assert(offsetof(Object02010040, member_0x0010) == 0x10);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02010040(Object02010040 *self)
{
    return &self->member_0x0010;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_020100f0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02010130()
{
}

/**
 *
 * The part of the object that auto_return_member_address_02010150 reads.
 *
 */
struct Object02010150 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_02010150; meaning unknown. */
};
static_assert(offsetof(Object02010150, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02010150(Object02010150 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02010250()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02010290()
{
}

/**
 *
 * The part of the object that auto_return_member_address_020102b0 reads.
 *
 */
struct Object020102b0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_020102b0; meaning unknown. */
};
static_assert(offsetof(Object020102b0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_020102b0(Object020102b0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02011630()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_02011740 reads.
 *
 */
struct Object02011740 {
    uint8_t unknown_0x0000[0x10];
    uint8_t member_0x0010; /**< Read by auto_return_member_address_02011740; meaning unknown. */
};
static_assert(offsetof(Object02011740, member_0x0010) == 0x10);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02011740(Object02011740 *self)
{
    return &self->member_0x0010;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02011800()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02011840()
{
}

/**
 *
 * The part of the object that auto_return_member_address_02011860 reads.
 *
 */
struct Object02011860 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_02011860; meaning unknown. */
};
static_assert(offsetof(Object02011860, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02011860(Object02011860 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02011a20()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02011a60()
{
}

/**
 *
 * The part of the object that auto_return_member_address_02011a80 reads.
 *
 */
struct Object02011a80 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_02011a80; meaning unknown. */
};
static_assert(offsetof(Object02011a80, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02011a80(Object02011a80 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02011be0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02011c20()
{
}

/**
 *
 * The part of the object that auto_return_member_address_02011c40 reads.
 *
 */
struct Object02011c40 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_02011c40; meaning unknown. */
};
static_assert(offsetof(Object02011c40, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02011c40(Object02011c40 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02011f10()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_02011fd0 reads.
 *
 */
struct Object02011fd0 {
    uint8_t unknown_0x0000[0x10];
    uint8_t member_0x0010; /**< Read by auto_return_member_address_02011fd0; meaning unknown. */
};
static_assert(offsetof(Object02011fd0, member_0x0010) == 0x10);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02011fd0(Object02011fd0 *self)
{
    return &self->member_0x0010;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02012080()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_020120c0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_020120e0 reads.
 *
 */
struct Object020120e0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_020120e0; meaning unknown. */
};
static_assert(offsetof(Object020120e0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_020120e0(Object020120e0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02012280()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_02012350 reads.
 *
 */
struct Object02012350 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_02012350; meaning unknown. */
};
static_assert(offsetof(Object02012350, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02012350(Object02012350 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02012520()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02012560()
{
}

/**
 *
 * The part of the object that auto_return_member_address_02012580 reads.
 *
 */
struct Object02012580 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_02012580; meaning unknown. */
};
static_assert(offsetof(Object02012580, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02012580(Object02012580 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02012690()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_020126d0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_020126f0 reads.
 *
 */
struct Object020126f0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_020126f0; meaning unknown. */
};
static_assert(offsetof(Object020126f0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_020126f0(Object020126f0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02012800()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02012840()
{
}

/**
 *
 * The part of the object that auto_return_member_address_02012860 reads.
 *
 */
struct Object02012860 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_02012860; meaning unknown. */
};
static_assert(offsetof(Object02012860, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02012860(Object02012860 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02012970()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_020129b0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_020129d0 reads.
 *
 */
struct Object020129d0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_020129d0; meaning unknown. */
};
static_assert(offsetof(Object020129d0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_020129d0(Object020129d0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02012b00()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02012b40()
{
}

/**
 *
 * The part of the object that auto_return_member_address_02012b60 reads.
 *
 */
struct Object02012b60 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_02012b60; meaning unknown. */
};
static_assert(offsetof(Object02012b60, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02012b60(Object02012b60 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02012c70()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02012cb0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_02012cd0 reads.
 *
 */
struct Object02012cd0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_02012cd0; meaning unknown. */
};
static_assert(offsetof(Object02012cd0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02012cd0(Object02012cd0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02012dc0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02012e00()
{
}

/**
 *
 * The part of the object that auto_return_member_address_02012e20 reads.
 *
 */
struct Object02012e20 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_02012e20; meaning unknown. */
};
static_assert(offsetof(Object02012e20, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02012e20(Object02012e20 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02012ee0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02012f20()
{
}

/**
 *
 * The part of the object that auto_return_member_address_02012f40 reads.
 *
 */
struct Object02012f40 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_02012f40; meaning unknown. */
};
static_assert(offsetof(Object02012f40, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02012f40(Object02012f40 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02012fe0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02013020()
{
}

/**
 *
 * The part of the object that auto_return_member_address_02013040 reads.
 *
 */
struct Object02013040 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_02013040; meaning unknown. */
};
static_assert(offsetof(Object02013040, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02013040(Object02013040 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_020130e0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02013120()
{
}

/**
 *
 * The part of the object that auto_return_member_address_02013140 reads.
 *
 */
struct Object02013140 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_02013140; meaning unknown. */
};
static_assert(offsetof(Object02013140, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02013140(Object02013140 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02013260()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_020132a0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_020132c0 reads.
 *
 */
struct Object020132c0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_020132c0; meaning unknown. */
};
static_assert(offsetof(Object020132c0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_020132c0(Object020132c0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_020133b0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_020133f0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_02013410 reads.
 *
 */
struct Object02013410 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_02013410; meaning unknown. */
};
static_assert(offsetof(Object02013410, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02013410(Object02013410 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_020137b0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_02013960 reads.
 *
 */
struct Object02013960 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_02013960; meaning unknown. */
};
static_assert(offsetof(Object02013960, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02013960(Object02013960 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02013a00()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02013a40()
{
}

/**
 *
 * The part of the object that auto_return_member_address_02013a60 reads.
 *
 */
struct Object02013a60 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_02013a60; meaning unknown. */
};
static_assert(offsetof(Object02013a60, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02013a60(Object02013a60 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02013bd0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02013c10()
{
}

/**
 *
 * The part of the object that auto_return_member_address_02013c30 reads.
 *
 */
struct Object02013c30 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_02013c30; meaning unknown. */
};
static_assert(offsetof(Object02013c30, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02013c30(Object02013c30 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02014370()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_020143b0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_020143d0 reads.
 *
 */
struct Object020143d0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_020143d0; meaning unknown. */
};
static_assert(offsetof(Object020143d0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_020143d0(Object020143d0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_020144b0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_02014690 reads.
 *
 */
struct Object02014690 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_02014690; meaning unknown. */
};
static_assert(offsetof(Object02014690, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02014690(Object02014690 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02014750()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_02014930 reads.
 *
 */
struct Object02014930 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_02014930; meaning unknown. */
};
static_assert(offsetof(Object02014930, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02014930(Object02014930 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02014aa0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_02014c80 reads.
 *
 */
struct Object02014c80 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_02014c80; meaning unknown. */
};
static_assert(offsetof(Object02014c80, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02014c80(Object02014c80 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02014d60()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_02014f40 reads.
 *
 */
struct Object02014f40 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_02014f40; meaning unknown. */
};
static_assert(offsetof(Object02014f40, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02014f40(Object02014f40 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_020150a0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_020152c0 reads.
 *
 */
struct Object020152c0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_020152c0; meaning unknown. */
};
static_assert(offsetof(Object020152c0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_020152c0(Object020152c0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02015420()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_02015640 reads.
 *
 */
struct Object02015640 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_02015640; meaning unknown. */
};
static_assert(offsetof(Object02015640, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02015640(Object02015640 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02015790()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_020157d0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_020157f0 reads.
 *
 */
struct Object020157f0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_020157f0; meaning unknown. */
};
static_assert(offsetof(Object020157f0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_020157f0(Object020157f0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02015a10()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02015a50()
{
}

/**
 *
 * The part of the object that auto_return_member_address_02015a70 reads.
 *
 */
struct Object02015a70 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_02015a70; meaning unknown. */
};
static_assert(offsetof(Object02015a70, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02015a70(Object02015a70 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02015b90()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_02015d70 reads.
 *
 */
struct Object02015d70 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_02015d70; meaning unknown. */
};
static_assert(offsetof(Object02015d70, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02015d70(Object02015d70 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02016590()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_02016770 reads.
 *
 */
struct Object02016770 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_02016770; meaning unknown. */
};
static_assert(offsetof(Object02016770, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02016770(Object02016770 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_020169a0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_02016b80 reads.
 *
 */
struct Object02016b80 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_02016b80; meaning unknown. */
};
static_assert(offsetof(Object02016b80, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02016b80(Object02016b80 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02016cb0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_02016e90 reads.
 *
 */
struct Object02016e90 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_02016e90; meaning unknown. */
};
static_assert(offsetof(Object02016e90, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02016e90(Object02016e90 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02017880()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_02017a60 reads.
 *
 */
struct Object02017a60 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_02017a60; meaning unknown. */
};
static_assert(offsetof(Object02017a60, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02017a60(Object02017a60 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02017c90()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_02017e70 reads.
 *
 */
struct Object02017e70 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_02017e70; meaning unknown. */
};
static_assert(offsetof(Object02017e70, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02017e70(Object02017e70 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02017f60()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_02018140 reads.
 *
 */
struct Object02018140 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_02018140; meaning unknown. */
};
static_assert(offsetof(Object02018140, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02018140(Object02018140 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02018370()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_02018550 reads.
 *
 */
struct Object02018550 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_02018550; meaning unknown. */
};
static_assert(offsetof(Object02018550, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02018550(Object02018550 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02018630()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_02018700 reads.
 *
 */
struct Object02018700 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_02018700; meaning unknown. */
};
static_assert(offsetof(Object02018700, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02018700(Object02018700 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_020188b0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_02018a90 reads.
 *
 */
struct Object02018a90 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_02018a90; meaning unknown. */
};
static_assert(offsetof(Object02018a90, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02018a90(Object02018a90 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02018b70()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_02018d50 reads.
 *
 */
struct Object02018d50 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_02018d50; meaning unknown. */
};
static_assert(offsetof(Object02018d50, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02018d50(Object02018d50 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02018df0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02018e30()
{
}

/**
 *
 * The part of the object that auto_return_member_address_02018e50 reads.
 *
 */
struct Object02018e50 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_02018e50; meaning unknown. */
};
static_assert(offsetof(Object02018e50, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02018e50(Object02018e50 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02018f80()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_02019160 reads.
 *
 */
struct Object02019160 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_02019160; meaning unknown. */
};
static_assert(offsetof(Object02019160, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02019160(Object02019160 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02019710()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_020197d0 reads.
 *
 */
struct Object020197d0 {
    uint8_t unknown_0x0000[0x10];
    uint8_t member_0x0010; /**< Read by auto_return_member_address_020197d0; meaning unknown. */
};
static_assert(offsetof(Object020197d0, member_0x0010) == 0x10);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_020197d0(Object020197d0 *self)
{
    return &self->member_0x0010;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02019d20()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02019d30()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02019d70()
{
}

/**
 *
 * The part of the object that auto_return_member_address_02019d90 reads.
 *
 */
struct Object02019d90 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_02019d90; meaning unknown. */
};
static_assert(offsetof(Object02019d90, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02019d90(Object02019d90 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02019da0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02019df0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0201c6c0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0201c700()
{
}

/**
 *
 * The part of the object that auto_return_member_address_0201c720 reads.
 *
 */
struct Object0201c720 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_0201c720; meaning unknown. */
};
static_assert(offsetof(Object0201c720, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0201c720(Object0201c720 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0201e3e0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_0201e4a0 reads.
 *
 */
struct Object0201e4a0 {
    uint8_t unknown_0x0000[0x10];
    uint8_t member_0x0010; /**< Read by auto_return_member_address_0201e4a0; meaning unknown. */
};
static_assert(offsetof(Object0201e4a0, member_0x0010) == 0x10);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0201e4a0(Object0201e4a0 *self)
{
    return &self->member_0x0010;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0201e540()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0201e580()
{
}

/**
 *
 * The part of the object that auto_return_member_address_0201e5a0 reads.
 *
 */
struct Object0201e5a0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_0201e5a0; meaning unknown. */
};
static_assert(offsetof(Object0201e5a0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0201e5a0(Object0201e5a0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0201e700()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0201e740()
{
}

/**
 *
 * The part of the object that auto_return_member_address_0201e760 reads.
 *
 */
struct Object0201e760 {
    uint8_t unknown_0x0000[0x10];
    uint8_t member_0x0010; /**< Read by auto_return_member_address_0201e760; meaning unknown. */
};
static_assert(offsetof(Object0201e760, member_0x0010) == 0x10);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0201e760(Object0201e760 *self)
{
    return &self->member_0x0010;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0201e770()
{
    return 0;
}
