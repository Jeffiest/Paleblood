// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fc34d0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_01fc3670 reads.
 *
 */
struct Object01fc3670 {
    uint8_t unknown_0x0000[0x10];
    uint8_t member_0x0010; /**< Read by auto_return_member_address_01fc3670; meaning unknown. */
};
static_assert(offsetof(Object01fc3670, member_0x0010) == 0x10);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fc3670(Object01fc3670 *self)
{
    return &self->member_0x0010;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fc3760()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fc37a0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fc37c0 reads.
 *
 */
struct Object01fc37c0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fc37c0; meaning unknown. */
};
static_assert(offsetof(Object01fc37c0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fc37c0(Object01fc37c0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01fc3800 = 0x8;

extern "C" uint32_t bb_auto_return_constant_01fc3800()
{
    return value_01fc3800;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fc3980()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fc39c0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fc39e0 reads.
 *
 */
struct Object01fc39e0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fc39e0; meaning unknown. */
};
static_assert(offsetof(Object01fc39e0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fc39e0(Object01fc39e0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fc3d30()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fc3d70()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fc3d90 reads.
 *
 */
struct Object01fc3d90 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fc3d90; meaning unknown. */
};
static_assert(offsetof(Object01fc3d90, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fc3d90(Object01fc3d90 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fc48e0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fc4920()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fc4940 reads.
 *
 */
struct Object01fc4940 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fc4940; meaning unknown. */
};
static_assert(offsetof(Object01fc4940, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fc4940(Object01fc4940 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fc4de0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fc4e20()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fc4e40 reads.
 *
 */
struct Object01fc4e40 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fc4e40; meaning unknown. */
};
static_assert(offsetof(Object01fc4e40, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fc4e40(Object01fc4e40 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fc5010()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_01fc50e0 reads.
 *
 */
struct Object01fc50e0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fc50e0; meaning unknown. */
};
static_assert(offsetof(Object01fc50e0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fc50e0(Object01fc50e0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fc5ac0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_01fc5b80 reads.
 *
 */
struct Object01fc5b80 {
    uint8_t unknown_0x0000[0x10];
    uint8_t member_0x0010; /**< Read by auto_return_member_address_01fc5b80; meaning unknown. */
};
static_assert(offsetof(Object01fc5b80, member_0x0010) == 0x10);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fc5b80(Object01fc5b80 *self)
{
    return &self->member_0x0010;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fc5c40()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fc5c80()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fc5ca0 reads.
 *
 */
struct Object01fc5ca0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fc5ca0; meaning unknown. */
};
static_assert(offsetof(Object01fc5ca0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fc5ca0(Object01fc5ca0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fc5e20()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fc5e60()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fc5e80 reads.
 *
 */
struct Object01fc5e80 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fc5e80; meaning unknown. */
};
static_assert(offsetof(Object01fc5e80, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fc5e80(Object01fc5e80 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fc5f40()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fc5f80()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fc5fa0 reads.
 *
 */
struct Object01fc5fa0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fc5fa0; meaning unknown. */
};
static_assert(offsetof(Object01fc5fa0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fc5fa0(Object01fc5fa0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * The part of the object that auto_return_member_address_01fc6230 reads.
 *
 */
struct Object01fc6230 {
    uint8_t unknown_0x0000[0xdf8];
    uint8_t member_0x0df8; /**< Read by auto_return_member_address_01fc6230; meaning unknown. */
};
static_assert(offsetof(Object01fc6230, member_0x0df8) == 0xdf8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fc6230(Object01fc6230 *self)
{
    return &self->member_0x0df8;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_01fc6240 = 0x1;

extern "C" uint8_t bb_auto_return_constant_01fc6240()
{
    return value_01fc6240;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fc67d0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fc6810()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fc6830 reads.
 *
 */
struct Object01fc6830 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fc6830; meaning unknown. */
};
static_assert(offsetof(Object01fc6830, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fc6830(Object01fc6830 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fc68d0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fc6910()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fc6930 reads.
 *
 */
struct Object01fc6930 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fc6930; meaning unknown. */
};
static_assert(offsetof(Object01fc6930, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fc6930(Object01fc6930 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fc69e0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fc6a20()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fc6a40 reads.
 *
 */
struct Object01fc6a40 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fc6a40; meaning unknown. */
};
static_assert(offsetof(Object01fc6a40, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fc6a40(Object01fc6a40 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fc6af0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fc6b30()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fc6b50 reads.
 *
 */
struct Object01fc6b50 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fc6b50; meaning unknown. */
};
static_assert(offsetof(Object01fc6b50, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fc6b50(Object01fc6b50 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fc6c00()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fc6c40()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fc6c60 reads.
 *
 */
struct Object01fc6c60 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fc6c60; meaning unknown. */
};
static_assert(offsetof(Object01fc6c60, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fc6c60(Object01fc6c60 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fc6f60()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fc6fa0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fc6fc0 reads.
 *
 */
struct Object01fc6fc0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fc6fc0; meaning unknown. */
};
static_assert(offsetof(Object01fc6fc0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fc6fc0(Object01fc6fc0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_01fc7050 reads.
 *
 */
struct Object01fc7050 {
    uint8_t unknown_0x0000[0x8];
    uint8_t value_0x0008; /**< Read by auto_return_field_01fc7050; meaning unknown. */
};
static_assert(offsetof(Object01fc7050, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_01fc7050(const Object01fc7050 *self)
{
    return self->value_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fc7060()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fc70a0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fc70c0 reads.
 *
 */
struct Object01fc70c0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fc70c0; meaning unknown. */
};
static_assert(offsetof(Object01fc70c0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fc70c0(Object01fc70c0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fc7360()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_01fc7480 reads.
 *
 */
struct Object01fc7480 {
    uint8_t unknown_0x0000[0x10];
    uint8_t member_0x0010; /**< Read by auto_return_member_address_01fc7480; meaning unknown. */
};
static_assert(offsetof(Object01fc7480, member_0x0010) == 0x10);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fc7480(Object01fc7480 *self)
{
    return &self->member_0x0010;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fc7840()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_01fc79c0 reads.
 *
 */
struct Object01fc79c0 {
    uint8_t unknown_0x0000[0x10];
    uint8_t member_0x0010; /**< Read by auto_return_member_address_01fc79c0; meaning unknown. */
};
static_assert(offsetof(Object01fc79c0, member_0x0010) == 0x10);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fc79c0(Object01fc79c0 *self)
{
    return &self->member_0x0010;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fc7be0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_01fc7ca0 reads.
 *
 */
struct Object01fc7ca0 {
    uint8_t unknown_0x0000[0x10];
    uint8_t member_0x0010; /**< Read by auto_return_member_address_01fc7ca0; meaning unknown. */
};
static_assert(offsetof(Object01fc7ca0, member_0x0010) == 0x10);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fc7ca0(Object01fc7ca0 *self)
{
    return &self->member_0x0010;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fc8060()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_01fc81e0 reads.
 *
 */
struct Object01fc81e0 {
    uint8_t unknown_0x0000[0x10];
    uint8_t member_0x0010; /**< Read by auto_return_member_address_01fc81e0; meaning unknown. */
};
static_assert(offsetof(Object01fc81e0, member_0x0010) == 0x10);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fc81e0(Object01fc81e0 *self)
{
    return &self->member_0x0010;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fc8680()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_01fc8740 reads.
 *
 */
struct Object01fc8740 {
    uint8_t unknown_0x0000[0x10];
    uint8_t member_0x0010; /**< Read by auto_return_member_address_01fc8740; meaning unknown. */
};
static_assert(offsetof(Object01fc8740, member_0x0010) == 0x10);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fc8740(Object01fc8740 *self)
{
    return &self->member_0x0010;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fc8950()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fc8990()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fc89b0 reads.
 *
 */
struct Object01fc89b0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fc89b0; meaning unknown. */
};
static_assert(offsetof(Object01fc89b0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fc89b0(Object01fc89b0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fc8cc0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_01fc8e20 reads.
 *
 */
struct Object01fc8e20 {
    uint8_t unknown_0x0000[0x10];
    uint8_t member_0x0010; /**< Read by auto_return_member_address_01fc8e20; meaning unknown. */
};
static_assert(offsetof(Object01fc8e20, member_0x0010) == 0x10);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fc8e20(Object01fc8e20 *self)
{
    return &self->member_0x0010;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fc9430()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fc9470()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fc9490 reads.
 *
 */
struct Object01fc9490 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fc9490; meaning unknown. */
};
static_assert(offsetof(Object01fc9490, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fc9490(Object01fc9490 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fc95b0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fc95f0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fc9610 reads.
 *
 */
struct Object01fc9610 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fc9610; meaning unknown. */
};
static_assert(offsetof(Object01fc9610, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fc9610(Object01fc9610 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fc9790()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fc97d0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fc97f0 reads.
 *
 */
struct Object01fc97f0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fc97f0; meaning unknown. */
};
static_assert(offsetof(Object01fc97f0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fc97f0(Object01fc97f0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fc9c00()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fc9c40()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fc9c60 reads.
 *
 */
struct Object01fc9c60 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fc9c60; meaning unknown. */
};
static_assert(offsetof(Object01fc9c60, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fc9c60(Object01fc9c60 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fca1f0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fca230()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fca250 reads.
 *
 */
struct Object01fca250 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fca250; meaning unknown. */
};
static_assert(offsetof(Object01fca250, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fca250(Object01fca250 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fca3b0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fca3f0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fca410 reads.
 *
 */
struct Object01fca410 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fca410; meaning unknown. */
};
static_assert(offsetof(Object01fca410, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fca410(Object01fca410 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fca5e0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_01fca6b0 reads.
 *
 */
struct Object01fca6b0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fca6b0; meaning unknown. */
};
static_assert(offsetof(Object01fca6b0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fca6b0(Object01fca6b0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fca940()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fca980()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fca9a0 reads.
 *
 */
struct Object01fca9a0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fca9a0; meaning unknown. */
};
static_assert(offsetof(Object01fca9a0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fca9a0(Object01fca9a0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fcaab0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fcaaf0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fcab10 reads.
 *
 */
struct Object01fcab10 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fcab10; meaning unknown. */
};
static_assert(offsetof(Object01fcab10, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fcab10(Object01fcab10 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fcada0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fcade0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fcae00 reads.
 *
 */
struct Object01fcae00 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fcae00; meaning unknown. */
};
static_assert(offsetof(Object01fcae00, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fcae00(Object01fcae00 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fcaf10()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fcaf50()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fcaf70 reads.
 *
 */
struct Object01fcaf70 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fcaf70; meaning unknown. */
};
static_assert(offsetof(Object01fcaf70, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fcaf70(Object01fcaf70 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fcb0b0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fcb0f0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fcb110 reads.
 *
 */
struct Object01fcb110 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fcb110; meaning unknown. */
};
static_assert(offsetof(Object01fcb110, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fcb110(Object01fcb110 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fcb1c0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fcb200()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fcb220 reads.
 *
 */
struct Object01fcb220 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fcb220; meaning unknown. */
};
static_assert(offsetof(Object01fcb220, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fcb220(Object01fcb220 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fcb360()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fcb3a0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fcb3c0 reads.
 *
 */
struct Object01fcb3c0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fcb3c0; meaning unknown. */
};
static_assert(offsetof(Object01fcb3c0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fcb3c0(Object01fcb3c0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fcb470()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fcb4b0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fcb4d0 reads.
 *
 */
struct Object01fcb4d0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fcb4d0; meaning unknown. */
};
static_assert(offsetof(Object01fcb4d0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fcb4d0(Object01fcb4d0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fcb5e0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fcb620()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fcb640 reads.
 *
 */
struct Object01fcb640 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fcb640; meaning unknown. */
};
static_assert(offsetof(Object01fcb640, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fcb640(Object01fcb640 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fcb750()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fcb790()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fcb7b0 reads.
 *
 */
struct Object01fcb7b0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fcb7b0; meaning unknown. */
};
static_assert(offsetof(Object01fcb7b0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fcb7b0(Object01fcb7b0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fcb8c0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fcb900()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fcb920 reads.
 *
 */
struct Object01fcb920 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fcb920; meaning unknown. */
};
static_assert(offsetof(Object01fcb920, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fcb920(Object01fcb920 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fcba30()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fcba70()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fcba90 reads.
 *
 */
struct Object01fcba90 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fcba90; meaning unknown. */
};
static_assert(offsetof(Object01fcba90, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fcba90(Object01fcba90 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fcbba0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fcbbe0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fcbc00 reads.
 *
 */
struct Object01fcbc00 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fcbc00; meaning unknown. */
};
static_assert(offsetof(Object01fcbc00, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fcbc00(Object01fcbc00 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fcbcb0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fcbcf0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fcbd10 reads.
 *
 */
struct Object01fcbd10 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fcbd10; meaning unknown. */
};
static_assert(offsetof(Object01fcbd10, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fcbd10(Object01fcbd10 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fcbe20()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fcbe60()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fcbe80 reads.
 *
 */
struct Object01fcbe80 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fcbe80; meaning unknown. */
};
static_assert(offsetof(Object01fcbe80, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fcbe80(Object01fcbe80 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fcbf30()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fcbf70()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fcbf90 reads.
 *
 */
struct Object01fcbf90 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fcbf90; meaning unknown. */
};
static_assert(offsetof(Object01fcbf90, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fcbf90(Object01fcbf90 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fcc0a0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fcc0e0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fcc100 reads.
 *
 */
struct Object01fcc100 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fcc100; meaning unknown. */
};
static_assert(offsetof(Object01fcc100, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fcc100(Object01fcc100 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fcc1b0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fcc1f0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fcc210 reads.
 *
 */
struct Object01fcc210 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fcc210; meaning unknown. */
};
static_assert(offsetof(Object01fcc210, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fcc210(Object01fcc210 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fcc2d0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fcc310()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fcc330 reads.
 *
 */
struct Object01fcc330 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fcc330; meaning unknown. */
};
static_assert(offsetof(Object01fcc330, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fcc330(Object01fcc330 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fcc3f0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fcc430()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fcc450 reads.
 *
 */
struct Object01fcc450 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fcc450; meaning unknown. */
};
static_assert(offsetof(Object01fcc450, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fcc450(Object01fcc450 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fcc5b0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fcc5f0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fcc610 reads.
 *
 */
struct Object01fcc610 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fcc610; meaning unknown. */
};
static_assert(offsetof(Object01fcc610, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fcc610(Object01fcc610 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fcc6b0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fcc6f0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fcc710 reads.
 *
 */
struct Object01fcc710 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fcc710; meaning unknown. */
};
static_assert(offsetof(Object01fcc710, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fcc710(Object01fcc710 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fcc7c0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fcc800()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fcc820 reads.
 *
 */
struct Object01fcc820 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fcc820; meaning unknown. */
};
static_assert(offsetof(Object01fcc820, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fcc820(Object01fcc820 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fcc990()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fcc9d0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fcc9f0 reads.
 *
 */
struct Object01fcc9f0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fcc9f0; meaning unknown. */
};
static_assert(offsetof(Object01fcc9f0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fcc9f0(Object01fcc9f0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fccaa0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fccae0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fccb00 reads.
 *
 */
struct Object01fccb00 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fccb00; meaning unknown. */
};
static_assert(offsetof(Object01fccb00, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fccb00(Object01fccb00 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fccf30()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fccf70()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fccf90 reads.
 *
 */
struct Object01fccf90 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fccf90; meaning unknown. */
};
static_assert(offsetof(Object01fccf90, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fccf90(Object01fccf90 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fcd040()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fcd080()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fcd0a0 reads.
 *
 */
struct Object01fcd0a0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fcd0a0; meaning unknown. */
};
static_assert(offsetof(Object01fcd0a0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fcd0a0(Object01fcd0a0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fcd290()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fcd2d0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fcd2f0 reads.
 *
 */
struct Object01fcd2f0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fcd2f0; meaning unknown. */
};
static_assert(offsetof(Object01fcd2f0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fcd2f0(Object01fcd2f0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fcd3a0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fcd3e0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fcd400 reads.
 *
 */
struct Object01fcd400 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fcd400; meaning unknown. */
};
static_assert(offsetof(Object01fcd400, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fcd400(Object01fcd400 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fcd4b0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fcd4f0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fcd510 reads.
 *
 */
struct Object01fcd510 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fcd510; meaning unknown. */
};
static_assert(offsetof(Object01fcd510, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fcd510(Object01fcd510 *self)
{
    return &self->member_0x0008;
}
