// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f70410()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f70450()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f70470 reads.
 *
 */
struct Object01f70470 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f70470; meaning unknown. */
};
static_assert(offsetof(Object01f70470, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f70470(Object01f70470 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f70c90()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f70cd0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f70cf0 reads.
 *
 */
struct Object01f70cf0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f70cf0; meaning unknown. */
};
static_assert(offsetof(Object01f70cf0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f70cf0(Object01f70cf0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f70e80()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f70ec0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f70ee0 reads.
 *
 */
struct Object01f70ee0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f70ee0; meaning unknown. */
};
static_assert(offsetof(Object01f70ee0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f70ee0(Object01f70ee0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f70ff0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f71030()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f71050 reads.
 *
 */
struct Object01f71050 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f71050; meaning unknown. */
};
static_assert(offsetof(Object01f71050, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f71050(Object01f71050 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f71230()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f71270()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f71290 reads.
 *
 */
struct Object01f71290 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f71290; meaning unknown. */
};
static_assert(offsetof(Object01f71290, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f71290(Object01f71290 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f71390()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f713d0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f713f0 reads.
 *
 */
struct Object01f713f0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f713f0; meaning unknown. */
};
static_assert(offsetof(Object01f713f0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f713f0(Object01f713f0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f71580()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f715c0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f715e0 reads.
 *
 */
struct Object01f715e0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f715e0; meaning unknown. */
};
static_assert(offsetof(Object01f715e0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f715e0(Object01f715e0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f716f0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f71730()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f71750 reads.
 *
 */
struct Object01f71750 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f71750; meaning unknown. */
};
static_assert(offsetof(Object01f71750, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f71750(Object01f71750 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f71850()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f71890()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f718b0 reads.
 *
 */
struct Object01f718b0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f718b0; meaning unknown. */
};
static_assert(offsetof(Object01f718b0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f718b0(Object01f718b0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f720b0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f720f0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f72110 reads.
 *
 */
struct Object01f72110 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f72110; meaning unknown. */
};
static_assert(offsetof(Object01f72110, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f72110(Object01f72110 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f721f0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f72230()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f72250 reads.
 *
 */
struct Object01f72250 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f72250; meaning unknown. */
};
static_assert(offsetof(Object01f72250, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f72250(Object01f72250 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f72470()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f724b0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f724d0 reads.
 *
 */
struct Object01f724d0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f724d0; meaning unknown. */
};
static_assert(offsetof(Object01f724d0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f724d0(Object01f724d0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f72570()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f725b0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f725d0 reads.
 *
 */
struct Object01f725d0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f725d0; meaning unknown. */
};
static_assert(offsetof(Object01f725d0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f725d0(Object01f725d0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_01f72e60 reads.
 *
 */
struct Object01f72e60 {
    uint8_t unknown_0x0000[0x3c0];
    uint8_t value_0x03c0; /**< Read by auto_return_field_01f72e60; meaning unknown. */
};
static_assert(offsetof(Object01f72e60, value_0x03c0) == 0x3c0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_01f72e60(const Object01f72e60 *self)
{
    return self->value_0x03c0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f72f50()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f72f90()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f72fb0 reads.
 *
 */
struct Object01f72fb0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f72fb0; meaning unknown. */
};
static_assert(offsetof(Object01f72fb0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f72fb0(Object01f72fb0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f73380()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f733c0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f733e0 reads.
 *
 */
struct Object01f733e0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f733e0; meaning unknown. */
};
static_assert(offsetof(Object01f733e0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f733e0(Object01f733e0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f734c0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f73500()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f73520 reads.
 *
 */
struct Object01f73520 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f73520; meaning unknown. */
};
static_assert(offsetof(Object01f73520, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f73520(Object01f73520 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f736b0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f736f0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f73710 reads.
 *
 */
struct Object01f73710 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f73710; meaning unknown. */
};
static_assert(offsetof(Object01f73710, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f73710(Object01f73710 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f73a80()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f73ac0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f73ae0 reads.
 *
 */
struct Object01f73ae0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f73ae0; meaning unknown. */
};
static_assert(offsetof(Object01f73ae0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f73ae0(Object01f73ae0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f73ed0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f73f10()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f73f30 reads.
 *
 */
struct Object01f73f30 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f73f30; meaning unknown. */
};
static_assert(offsetof(Object01f73f30, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f73f30(Object01f73f30 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f74320()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f74360()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f74380 reads.
 *
 */
struct Object01f74380 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f74380; meaning unknown. */
};
static_assert(offsetof(Object01f74380, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f74380(Object01f74380 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f74800()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f74840()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f74860 reads.
 *
 */
struct Object01f74860 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f74860; meaning unknown. */
};
static_assert(offsetof(Object01f74860, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f74860(Object01f74860 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f74bc0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f74c00()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f74c20 reads.
 *
 */
struct Object01f74c20 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f74c20; meaning unknown. */
};
static_assert(offsetof(Object01f74c20, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f74c20(Object01f74c20 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f74d90()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f74dd0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f74df0 reads.
 *
 */
struct Object01f74df0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f74df0; meaning unknown. */
};
static_assert(offsetof(Object01f74df0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f74df0(Object01f74df0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f75080()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f750c0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f750e0 reads.
 *
 */
struct Object01f750e0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f750e0; meaning unknown. */
};
static_assert(offsetof(Object01f750e0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f750e0(Object01f750e0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f75190()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f751d0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f751f0 reads.
 *
 */
struct Object01f751f0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f751f0; meaning unknown. */
};
static_assert(offsetof(Object01f751f0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f751f0(Object01f751f0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f757b0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f757f0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f75810 reads.
 *
 */
struct Object01f75810 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f75810; meaning unknown. */
};
static_assert(offsetof(Object01f75810, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f75810(Object01f75810 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f758b0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f758f0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f75910 reads.
 *
 */
struct Object01f75910 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f75910; meaning unknown. */
};
static_assert(offsetof(Object01f75910, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f75910(Object01f75910 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f75a40()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f75a80()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f75aa0 reads.
 *
 */
struct Object01f75aa0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f75aa0; meaning unknown. */
};
static_assert(offsetof(Object01f75aa0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f75aa0(Object01f75aa0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f75d40()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_01f75e40 reads.
 *
 */
struct Object01f75e40 {
    uint8_t unknown_0x0000[0x10];
    uint8_t member_0x0010; /**< Read by auto_return_member_address_01f75e40; meaning unknown. */
};
static_assert(offsetof(Object01f75e40, member_0x0010) == 0x10);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f75e40(Object01f75e40 *self)
{
    return &self->member_0x0010;
}
