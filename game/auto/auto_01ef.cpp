// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_member_address_01ef5630 reads.
 *
 */
struct Object01ef5630 {
    uint8_t unknown_0x0000[0xdf0];
    uint8_t member_0x0df0; /**< Read by auto_return_member_address_01ef5630; meaning unknown. */
};
static_assert(offsetof(Object01ef5630, member_0x0df0) == 0xdf0);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01ef5630(Object01ef5630 *self)
{
    return &self->member_0x0df0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_01ef5640 = 0x1;

extern "C" uint8_t bb_auto_return_constant_01ef5640()
{
    return value_01ef5640;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01ef5780()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01ef57c0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01ef57e0 reads.
 *
 */
struct Object01ef57e0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01ef57e0; meaning unknown. */
};
static_assert(offsetof(Object01ef57e0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01ef57e0(Object01ef57e0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01ef5890()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01ef58d0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01ef58f0 reads.
 *
 */
struct Object01ef58f0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01ef58f0; meaning unknown. */
};
static_assert(offsetof(Object01ef58f0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01ef58f0(Object01ef58f0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01ef5a10()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01ef5a50()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01ef5a70 reads.
 *
 */
struct Object01ef5a70 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01ef5a70; meaning unknown. */
};
static_assert(offsetof(Object01ef5a70, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01ef5a70(Object01ef5a70 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01ef6370()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01ef63b0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01ef63d0 reads.
 *
 */
struct Object01ef63d0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01ef63d0; meaning unknown. */
};
static_assert(offsetof(Object01ef63d0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01ef63d0(Object01ef63d0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01ef6590()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01ef65d0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01ef65f0 reads.
 *
 */
struct Object01ef65f0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01ef65f0; meaning unknown. */
};
static_assert(offsetof(Object01ef65f0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01ef65f0(Object01ef65f0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01ef6fb0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_01ef7070 reads.
 *
 */
struct Object01ef7070 {
    uint8_t unknown_0x0000[0x10];
    uint8_t member_0x0010; /**< Read by auto_return_member_address_01ef7070; meaning unknown. */
};
static_assert(offsetof(Object01ef7070, member_0x0010) == 0x10);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01ef7070(Object01ef7070 *self)
{
    return &self->member_0x0010;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01ef7130()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01ef7170()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01ef7190 reads.
 *
 */
struct Object01ef7190 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01ef7190; meaning unknown. */
};
static_assert(offsetof(Object01ef7190, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01ef7190(Object01ef7190 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01ef7290()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01ef72d0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01ef72f0 reads.
 *
 */
struct Object01ef72f0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01ef72f0; meaning unknown. */
};
static_assert(offsetof(Object01ef72f0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01ef72f0(Object01ef72f0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01ef73b0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01ef73f0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01ef7410 reads.
 *
 */
struct Object01ef7410 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01ef7410; meaning unknown. */
};
static_assert(offsetof(Object01ef7410, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01ef7410(Object01ef7410 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * The part of the object that auto_return_member_address_01ef7980 reads.
 *
 */
struct Object01ef7980 {
    uint8_t unknown_0x0000[0xdf8];
    uint8_t member_0x0df8; /**< Read by auto_return_member_address_01ef7980; meaning unknown. */
};
static_assert(offsetof(Object01ef7980, member_0x0df8) == 0xdf8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01ef7980(Object01ef7980 *self)
{
    return &self->member_0x0df8;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_01ef7990 = 0x1;

extern "C" uint8_t bb_auto_return_constant_01ef7990()
{
    return value_01ef7990;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01ef7e40()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01ef7e80()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01ef7ea0 reads.
 *
 */
struct Object01ef7ea0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01ef7ea0; meaning unknown. */
};
static_assert(offsetof(Object01ef7ea0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01ef7ea0(Object01ef7ea0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01ef7f40()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01ef7f80()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01ef7fa0 reads.
 *
 */
struct Object01ef7fa0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01ef7fa0; meaning unknown. */
};
static_assert(offsetof(Object01ef7fa0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01ef7fa0(Object01ef7fa0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01ef8190()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01ef81d0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01ef81f0 reads.
 *
 */
struct Object01ef81f0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01ef81f0; meaning unknown. */
};
static_assert(offsetof(Object01ef81f0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01ef81f0(Object01ef81f0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01ef82b0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01ef82f0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01ef8310 reads.
 *
 */
struct Object01ef8310 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01ef8310; meaning unknown. */
};
static_assert(offsetof(Object01ef8310, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01ef8310(Object01ef8310 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01ef8730()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01ef8770()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01ef8790 reads.
 *
 */
struct Object01ef8790 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01ef8790; meaning unknown. */
};
static_assert(offsetof(Object01ef8790, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01ef8790(Object01ef8790 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01ef8820()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01ef8830()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01ef8870()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01ef8890 reads.
 *
 */
struct Object01ef8890 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01ef8890; meaning unknown. */
};
static_assert(offsetof(Object01ef8890, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01ef8890(Object01ef8890 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01ef8920()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01ef8930()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01ef8970()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01ef8990 reads.
 *
 */
struct Object01ef8990 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01ef8990; meaning unknown. */
};
static_assert(offsetof(Object01ef8990, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01ef8990(Object01ef8990 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01ef8a40()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01ef8a80()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01ef8aa0 reads.
 *
 */
struct Object01ef8aa0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01ef8aa0; meaning unknown. */
};
static_assert(offsetof(Object01ef8aa0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01ef8aa0(Object01ef8aa0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01ef8b50()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01ef8b90()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01ef8bb0 reads.
 *
 */
struct Object01ef8bb0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01ef8bb0; meaning unknown. */
};
static_assert(offsetof(Object01ef8bb0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01ef8bb0(Object01ef8bb0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01ef8c50()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01ef8c90()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01ef8cb0 reads.
 *
 */
struct Object01ef8cb0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01ef8cb0; meaning unknown. */
};
static_assert(offsetof(Object01ef8cb0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01ef8cb0(Object01ef8cb0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01ef8d60()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01ef8da0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01ef8dc0 reads.
 *
 */
struct Object01ef8dc0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01ef8dc0; meaning unknown. */
};
static_assert(offsetof(Object01ef8dc0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01ef8dc0(Object01ef8dc0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01ef8e60()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01ef8ea0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01ef8ec0 reads.
 *
 */
struct Object01ef8ec0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01ef8ec0; meaning unknown. */
};
static_assert(offsetof(Object01ef8ec0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01ef8ec0(Object01ef8ec0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01ef9120()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01ef9160()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01ef9180 reads.
 *
 */
struct Object01ef9180 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01ef9180; meaning unknown. */
};
static_assert(offsetof(Object01ef9180, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01ef9180(Object01ef9180 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01ef93b0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01ef93f0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01ef9410 reads.
 *
 */
struct Object01ef9410 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01ef9410; meaning unknown. */
};
static_assert(offsetof(Object01ef9410, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01ef9410(Object01ef9410 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01ef94b0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01ef94f0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01ef9510 reads.
 *
 */
struct Object01ef9510 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01ef9510; meaning unknown. */
};
static_assert(offsetof(Object01ef9510, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01ef9510(Object01ef9510 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01ef95b0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01ef95f0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01ef9610 reads.
 *
 */
struct Object01ef9610 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01ef9610; meaning unknown. */
};
static_assert(offsetof(Object01ef9610, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01ef9610(Object01ef9610 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01ef96b0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01ef96f0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01ef9710 reads.
 *
 */
struct Object01ef9710 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01ef9710; meaning unknown. */
};
static_assert(offsetof(Object01ef9710, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01ef9710(Object01ef9710 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01ef97b0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01ef97f0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01ef9810 reads.
 *
 */
struct Object01ef9810 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01ef9810; meaning unknown. */
};
static_assert(offsetof(Object01ef9810, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01ef9810(Object01ef9810 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01ef9fa0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01ef9fe0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01efa000 reads.
 *
 */
struct Object01efa000 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01efa000; meaning unknown. */
};
static_assert(offsetof(Object01efa000, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01efa000(Object01efa000 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01efa1b0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01efa1f0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01efa210 reads.
 *
 */
struct Object01efa210 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01efa210; meaning unknown. */
};
static_assert(offsetof(Object01efa210, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01efa210(Object01efa210 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01efa2e0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01efa320()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01efa340 reads.
 *
 */
struct Object01efa340 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01efa340; meaning unknown. */
};
static_assert(offsetof(Object01efa340, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01efa340(Object01efa340 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_01efa3d0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_01efa3d0()
{
    return value_01efa3d0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01efa3e0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01efa420()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01efa440 reads.
 *
 */
struct Object01efa440 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01efa440; meaning unknown. */
};
static_assert(offsetof(Object01efa440, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01efa440(Object01efa440 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01efa4e0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01efa520()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01efa540 reads.
 *
 */
struct Object01efa540 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01efa540; meaning unknown. */
};
static_assert(offsetof(Object01efa540, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01efa540(Object01efa540 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01efa5e0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01efa620()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01efa640 reads.
 *
 */
struct Object01efa640 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01efa640; meaning unknown. */
};
static_assert(offsetof(Object01efa640, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01efa640(Object01efa640 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01efa710()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01efa750()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01efa770 reads.
 *
 */
struct Object01efa770 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01efa770; meaning unknown. */
};
static_assert(offsetof(Object01efa770, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01efa770(Object01efa770 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_01efa800 = 0x1;

extern "C" uint8_t bb_auto_return_constant_01efa800()
{
    return value_01efa800;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01efa810()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01efa850()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01efa870 reads.
 *
 */
struct Object01efa870 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01efa870; meaning unknown. */
};
static_assert(offsetof(Object01efa870, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01efa870(Object01efa870 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01efa910()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01efa950()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01efa970 reads.
 *
 */
struct Object01efa970 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01efa970; meaning unknown. */
};
static_assert(offsetof(Object01efa970, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01efa970(Object01efa970 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01efaa10()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01efaa50()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01efaa70 reads.
 *
 */
struct Object01efaa70 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01efaa70; meaning unknown. */
};
static_assert(offsetof(Object01efaa70, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01efaa70(Object01efaa70 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01efb260()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01efb2a0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01efb2c0 reads.
 *
 */
struct Object01efb2c0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01efb2c0; meaning unknown. */
};
static_assert(offsetof(Object01efb2c0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01efb2c0(Object01efb2c0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01efb550()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_01efb610 reads.
 *
 */
struct Object01efb610 {
    uint8_t unknown_0x0000[0x10];
    uint8_t member_0x0010; /**< Read by auto_return_member_address_01efb610; meaning unknown. */
};
static_assert(offsetof(Object01efb610, member_0x0010) == 0x10);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01efb610(Object01efb610 *self)
{
    return &self->member_0x0010;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01efb830()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01efb870()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01efb890 reads.
 *
 */
struct Object01efb890 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01efb890; meaning unknown. */
};
static_assert(offsetof(Object01efb890, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01efb890(Object01efb890 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01efba90()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_01efbb60 reads.
 *
 */
struct Object01efbb60 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01efbb60; meaning unknown. */
};
static_assert(offsetof(Object01efbb60, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01efbb60(Object01efbb60 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01efbc60()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01efbca0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01efbcc0 reads.
 *
 */
struct Object01efbcc0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01efbcc0; meaning unknown. */
};
static_assert(offsetof(Object01efbcc0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01efbcc0(Object01efbcc0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01efbe30()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01efbe70()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01efbe90 reads.
 *
 */
struct Object01efbe90 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01efbe90; meaning unknown. */
};
static_assert(offsetof(Object01efbe90, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01efbe90(Object01efbe90 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01efc280()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01efc2c0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01efc2e0 reads.
 *
 */
struct Object01efc2e0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01efc2e0; meaning unknown. */
};
static_assert(offsetof(Object01efc2e0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01efc2e0(Object01efc2e0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01efc480()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01efc4c0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01efc4e0 reads.
 *
 */
struct Object01efc4e0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01efc4e0; meaning unknown. */
};
static_assert(offsetof(Object01efc4e0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01efc4e0(Object01efc4e0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01efc5e0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01efc620()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01efc640 reads.
 *
 */
struct Object01efc640 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01efc640; meaning unknown. */
};
static_assert(offsetof(Object01efc640, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01efc640(Object01efc640 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01efc7b0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01efc7f0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01efc810 reads.
 *
 */
struct Object01efc810 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01efc810; meaning unknown. */
};
static_assert(offsetof(Object01efc810, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01efc810(Object01efc810 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01efca10()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_01efcae0 reads.
 *
 */
struct Object01efcae0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01efcae0; meaning unknown. */
};
static_assert(offsetof(Object01efcae0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01efcae0(Object01efcae0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01efd110()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01efd120 reads.
 *
 */
struct Object01efd120 {
    uint8_t unknown_0x0000[0xdf0];
    uint64_t value_0x0df0; /**< Read by auto_return_field_01efd120; meaning unknown. */
};
static_assert(offsetof(Object01efd120, value_0x0df0) == 0xdf0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01efd120(const Object01efd120 *self)
{
    return self->value_0x0df0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_01efd470 = 0x1;

extern "C" uint8_t bb_auto_return_constant_01efd470()
{
    return value_01efd470;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01efd510()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01efd550()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01efd570 reads.
 *
 */
struct Object01efd570 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01efd570; meaning unknown. */
};
static_assert(offsetof(Object01efd570, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01efd570(Object01efd570 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_01efd600 = 0x1;

extern "C" uint8_t bb_auto_return_constant_01efd600()
{
    return value_01efd600;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01efd610()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01efd650()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01efd670 reads.
 *
 */
struct Object01efd670 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01efd670; meaning unknown. */
};
static_assert(offsetof(Object01efd670, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01efd670(Object01efd670 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_01efd700 = 0x1;

extern "C" uint8_t bb_auto_return_constant_01efd700()
{
    return value_01efd700;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01efd710()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01efd750()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01efd770 reads.
 *
 */
struct Object01efd770 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01efd770; meaning unknown. */
};
static_assert(offsetof(Object01efd770, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01efd770(Object01efd770 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01efda30()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01efda70()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01efda90 reads.
 *
 */
struct Object01efda90 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01efda90; meaning unknown. */
};
static_assert(offsetof(Object01efda90, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01efda90(Object01efda90 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01efdb40()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01efdb80()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01efdba0 reads.
 *
 */
struct Object01efdba0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01efdba0; meaning unknown. */
};
static_assert(offsetof(Object01efdba0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01efdba0(Object01efdba0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01efdc40()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01efdc80()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01efdca0 reads.
 *
 */
struct Object01efdca0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01efdca0; meaning unknown. */
};
static_assert(offsetof(Object01efdca0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01efdca0(Object01efdca0 *self)
{
    return &self->member_0x0008;
}
