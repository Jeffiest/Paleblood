// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f60010()
{
    return 0;
}

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
 * The part of the object that auto_return_member_address_01f60070 reads.
 *
 */
struct Object01f60070 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f60070; meaning unknown. */
};
static_assert(offsetof(Object01f60070, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f60070(Object01f60070 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f60210()
{
    return 0;
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
 * The part of the object that auto_return_member_address_01f60270 reads.
 *
 */
struct Object01f60270 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f60270; meaning unknown. */
};
static_assert(offsetof(Object01f60270, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f60270(Object01f60270 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f60330()
{
    return 0;
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
 * The part of the object that auto_return_member_address_01f60390 reads.
 *
 */
struct Object01f60390 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f60390; meaning unknown. */
};
static_assert(offsetof(Object01f60390, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f60390(Object01f60390 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f60590()
{
    return 0;
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
 * The part of the object that auto_return_member_address_01f605f0 reads.
 *
 */
struct Object01f605f0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f605f0; meaning unknown. */
};
static_assert(offsetof(Object01f605f0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f605f0(Object01f605f0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f60810()
{
    return 0;
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
 * The part of the object that auto_return_member_address_01f60870 reads.
 *
 */
struct Object01f60870 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f60870; meaning unknown. */
};
static_assert(offsetof(Object01f60870, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f60870(Object01f60870 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f60a10()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_01f60b30 reads.
 *
 */
struct Object01f60b30 {
    uint8_t unknown_0x0000[0x10];
    uint8_t member_0x0010; /**< Read by auto_return_member_address_01f60b30; meaning unknown. */
};
static_assert(offsetof(Object01f60b30, member_0x0010) == 0x10);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f60b30(Object01f60b30 *self)
{
    return &self->member_0x0010;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01f659d0 = 0x8;

extern "C" uint32_t bb_auto_return_constant_01f659d0()
{
    return value_01f659d0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f6aa70()
{
    return 0;
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
 * The part of the object that auto_return_member_address_01f6aad0 reads.
 *
 */
struct Object01f6aad0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f6aad0; meaning unknown. */
};
static_assert(offsetof(Object01f6aad0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f6aad0(Object01f6aad0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f6ab70()
{
    return 0;
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
 * The part of the object that auto_return_member_address_01f6abd0 reads.
 *
 */
struct Object01f6abd0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f6abd0; meaning unknown. */
};
static_assert(offsetof(Object01f6abd0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f6abd0(Object01f6abd0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f6b760()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_01f6b820 reads.
 *
 */
struct Object01f6b820 {
    uint8_t unknown_0x0000[0x10];
    uint8_t member_0x0010; /**< Read by auto_return_member_address_01f6b820; meaning unknown. */
};
static_assert(offsetof(Object01f6b820, member_0x0010) == 0x10);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f6b820(Object01f6b820 *self)
{
    return &self->member_0x0010;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f6bc00()
{
    return 0;
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
 * The part of the object that auto_return_member_address_01f6bc60 reads.
 *
 */
struct Object01f6bc60 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f6bc60; meaning unknown. */
};
static_assert(offsetof(Object01f6bc60, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f6bc60(Object01f6bc60 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f6bdf0()
{
    return 0;
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
 * The part of the object that auto_return_member_address_01f6be50 reads.
 *
 */
struct Object01f6be50 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f6be50; meaning unknown. */
};
static_assert(offsetof(Object01f6be50, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f6be50(Object01f6be50 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f6c840()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_01f6c900 reads.
 *
 */
struct Object01f6c900 {
    uint8_t unknown_0x0000[0x10];
    uint8_t member_0x0010; /**< Read by auto_return_member_address_01f6c900; meaning unknown. */
};
static_assert(offsetof(Object01f6c900, member_0x0010) == 0x10);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f6c900(Object01f6c900 *self)
{
    return &self->member_0x0010;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f6c9c0()
{
    return 0;
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
 * The part of the object that auto_return_member_address_01f6ca20 reads.
 *
 */
struct Object01f6ca20 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f6ca20; meaning unknown. */
};
static_assert(offsetof(Object01f6ca20, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f6ca20(Object01f6ca20 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f6cb90()
{
    return 0;
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
 * The part of the object that auto_return_member_address_01f6cbf0 reads.
 *
 */
struct Object01f6cbf0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f6cbf0; meaning unknown. */
};
static_assert(offsetof(Object01f6cbf0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f6cbf0(Object01f6cbf0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f6ccb0()
{
    return 0;
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
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f6d590()
{
    return 0;
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
 * The part of the object that auto_return_member_address_01f6d5f0 reads.
 *
 */
struct Object01f6d5f0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f6d5f0; meaning unknown. */
};
static_assert(offsetof(Object01f6d5f0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f6d5f0(Object01f6d5f0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f6d690()
{
    return 0;
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
 * The part of the object that auto_return_member_address_01f6d6f0 reads.
 *
 */
struct Object01f6d6f0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f6d6f0; meaning unknown. */
};
static_assert(offsetof(Object01f6d6f0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f6d6f0(Object01f6d6f0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f6d7a0()
{
    return 0;
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
 * The part of the object that auto_return_member_address_01f6d800 reads.
 *
 */
struct Object01f6d800 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f6d800; meaning unknown. */
};
static_assert(offsetof(Object01f6d800, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f6d800(Object01f6d800 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f6d8b0()
{
    return 0;
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
 * The part of the object that auto_return_member_address_01f6d910 reads.
 *
 */
struct Object01f6d910 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f6d910; meaning unknown. */
};
static_assert(offsetof(Object01f6d910, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f6d910(Object01f6d910 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f6db80()
{
    return 0;
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
 * The part of the object that auto_return_member_address_01f6dbe0 reads.
 *
 */
struct Object01f6dbe0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f6dbe0; meaning unknown. */
};
static_assert(offsetof(Object01f6dbe0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f6dbe0(Object01f6dbe0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f6e260()
{
    return 0;
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
 * The part of the object that auto_return_member_address_01f6e2c0 reads.
 *
 */
struct Object01f6e2c0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f6e2c0; meaning unknown. */
};
static_assert(offsetof(Object01f6e2c0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f6e2c0(Object01f6e2c0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f6e360()
{
    return 0;
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
 * The part of the object that auto_return_member_address_01f6e3c0 reads.
 *
 */
struct Object01f6e3c0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f6e3c0; meaning unknown. */
};
static_assert(offsetof(Object01f6e3c0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f6e3c0(Object01f6e3c0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f6e460()
{
    return 0;
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
 * The part of the object that auto_return_member_address_01f6e4c0 reads.
 *
 */
struct Object01f6e4c0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f6e4c0; meaning unknown. */
};
static_assert(offsetof(Object01f6e4c0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f6e4c0(Object01f6e4c0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f6e570()
{
    return 0;
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
 * The part of the object that auto_return_member_address_01f6e5d0 reads.
 *
 */
struct Object01f6e5d0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f6e5d0; meaning unknown. */
};
static_assert(offsetof(Object01f6e5d0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f6e5d0(Object01f6e5d0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f6e730()
{
    return 0;
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
 * The part of the object that auto_return_member_address_01f6e790 reads.
 *
 */
struct Object01f6e790 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f6e790; meaning unknown. */
};
static_assert(offsetof(Object01f6e790, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f6e790(Object01f6e790 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f6e920()
{
    return 0;
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
 * The part of the object that auto_return_member_address_01f6e980 reads.
 *
 */
struct Object01f6e980 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f6e980; meaning unknown. */
};
static_assert(offsetof(Object01f6e980, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f6e980(Object01f6e980 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f6ea30()
{
    return 0;
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
 * The part of the object that auto_return_member_address_01f6ea90 reads.
 *
 */
struct Object01f6ea90 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f6ea90; meaning unknown. */
};
static_assert(offsetof(Object01f6ea90, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f6ea90(Object01f6ea90 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f6ebc0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_01f6ec80 reads.
 *
 */
struct Object01f6ec80 {
    uint8_t unknown_0x0000[0x10];
    uint8_t member_0x0010; /**< Read by auto_return_member_address_01f6ec80; meaning unknown. */
};
static_assert(offsetof(Object01f6ec80, member_0x0010) == 0x10);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f6ec80(Object01f6ec80 *self)
{
    return &self->member_0x0010;
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
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f6ed20()
{
    return 0;
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
 * The part of the object that auto_return_member_address_01f6ed80 reads.
 *
 */
struct Object01f6ed80 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f6ed80; meaning unknown. */
};
static_assert(offsetof(Object01f6ed80, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f6ed80(Object01f6ed80 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f6eeb0()
{
    return 0;
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
 * The part of the object that auto_return_member_address_01f6ef10 reads.
 *
 */
struct Object01f6ef10 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f6ef10; meaning unknown. */
};
static_assert(offsetof(Object01f6ef10, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f6ef10(Object01f6ef10 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f6f120()
{
    return 0;
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
 * The part of the object that auto_return_member_address_01f6f180 reads.
 *
 */
struct Object01f6f180 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f6f180; meaning unknown. */
};
static_assert(offsetof(Object01f6f180, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f6f180(Object01f6f180 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f6f220()
{
    return 0;
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
 * The part of the object that auto_return_member_address_01f6f280 reads.
 *
 */
struct Object01f6f280 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f6f280; meaning unknown. */
};
static_assert(offsetof(Object01f6f280, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f6f280(Object01f6f280 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f6f540()
{
    return 0;
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
 * The part of the object that auto_return_member_address_01f6f5a0 reads.
 *
 */
struct Object01f6f5a0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f6f5a0; meaning unknown. */
};
static_assert(offsetof(Object01f6f5a0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f6f5a0(Object01f6f5a0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f6f640()
{
    return 0;
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
 * The part of the object that auto_return_member_address_01f6f6a0 reads.
 *
 */
struct Object01f6f6a0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f6f6a0; meaning unknown. */
};
static_assert(offsetof(Object01f6f6a0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f6f6a0(Object01f6f6a0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f6f7d0()
{
    return 0;
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
 * The part of the object that auto_return_member_address_01f6f830 reads.
 *
 */
struct Object01f6f830 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f6f830; meaning unknown. */
};
static_assert(offsetof(Object01f6f830, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f6f830(Object01f6f830 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f6f8e0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f6f920()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f6f940 reads.
 *
 */
struct Object01f6f940 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f6f940; meaning unknown. */
};
static_assert(offsetof(Object01f6f940, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f6f940(Object01f6f940 *self)
{
    return &self->member_0x0008;
}
