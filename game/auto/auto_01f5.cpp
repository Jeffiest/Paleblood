// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_member_address_01f501d0 reads.
 *
 */
struct Object01f501d0 {
    uint8_t unknown_0x0000[0xdf0];
    uint8_t member_0x0df0; /**< Read by auto_return_member_address_01f501d0; meaning unknown. */
};
static_assert(offsetof(Object01f501d0, member_0x0df0) == 0xdf0);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f501d0(Object01f501d0 *self)
{
    return &self->member_0x0df0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_01f501e0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_01f501e0()
{
    return value_01f501e0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f505a0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f505e0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f50600 reads.
 *
 */
struct Object01f50600 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f50600; meaning unknown. */
};
static_assert(offsetof(Object01f50600, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f50600(Object01f50600 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f506a0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f506e0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f50700 reads.
 *
 */
struct Object01f50700 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f50700; meaning unknown. */
};
static_assert(offsetof(Object01f50700, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f50700(Object01f50700 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f507d0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f50810()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f50830 reads.
 *
 */
struct Object01f50830 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f50830; meaning unknown. */
};
static_assert(offsetof(Object01f50830, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f50830(Object01f50830 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f50980()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f509c0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f509e0 reads.
 *
 */
struct Object01f509e0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f509e0; meaning unknown. */
};
static_assert(offsetof(Object01f509e0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f509e0(Object01f509e0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f50d90()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f50dd0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f50df0 reads.
 *
 */
struct Object01f50df0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f50df0; meaning unknown. */
};
static_assert(offsetof(Object01f50df0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f50df0(Object01f50df0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f50f40()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f50f80()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f50fa0 reads.
 *
 */
struct Object01f50fa0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f50fa0; meaning unknown. */
};
static_assert(offsetof(Object01f50fa0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f50fa0(Object01f50fa0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f514c0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f51500()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f51520 reads.
 *
 */
struct Object01f51520 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f51520; meaning unknown. */
};
static_assert(offsetof(Object01f51520, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f51520(Object01f51520 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f51670()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f516b0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f516d0 reads.
 *
 */
struct Object01f516d0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f516d0; meaning unknown. */
};
static_assert(offsetof(Object01f516d0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f516d0(Object01f516d0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f51bf0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f51c30()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f51c50 reads.
 *
 */
struct Object01f51c50 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f51c50; meaning unknown. */
};
static_assert(offsetof(Object01f51c50, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f51c50(Object01f51c50 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f51cf0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f51d30()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f51d50 reads.
 *
 */
struct Object01f51d50 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f51d50; meaning unknown. */
};
static_assert(offsetof(Object01f51d50, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f51d50(Object01f51d50 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f51e00()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f51e40()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f51e60 reads.
 *
 */
struct Object01f51e60 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f51e60; meaning unknown. */
};
static_assert(offsetof(Object01f51e60, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f51e60(Object01f51e60 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f51fc0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f52000()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f52020 reads.
 *
 */
struct Object01f52020 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f52020; meaning unknown. */
};
static_assert(offsetof(Object01f52020, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f52020(Object01f52020 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f523f0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f52430()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f52450 reads.
 *
 */
struct Object01f52450 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f52450; meaning unknown. */
};
static_assert(offsetof(Object01f52450, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f52450(Object01f52450 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f525b0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f525f0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f52610 reads.
 *
 */
struct Object01f52610 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f52610; meaning unknown. */
};
static_assert(offsetof(Object01f52610, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f52610(Object01f52610 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f52b40()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f52b80()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f52ba0 reads.
 *
 */
struct Object01f52ba0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f52ba0; meaning unknown. */
};
static_assert(offsetof(Object01f52ba0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f52ba0(Object01f52ba0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f52c50()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f52c90()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f52cb0 reads.
 *
 */
struct Object01f52cb0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f52cb0; meaning unknown. */
};
static_assert(offsetof(Object01f52cb0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f52cb0(Object01f52cb0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f52d60()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f52da0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f52dc0 reads.
 *
 */
struct Object01f52dc0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f52dc0; meaning unknown. */
};
static_assert(offsetof(Object01f52dc0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f52dc0(Object01f52dc0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f52ee0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_01f52fa0 reads.
 *
 */
struct Object01f52fa0 {
    uint8_t unknown_0x0000[0x10];
    uint8_t member_0x0010; /**< Read by auto_return_member_address_01f52fa0; meaning unknown. */
};
static_assert(offsetof(Object01f52fa0, member_0x0010) == 0x10);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f52fa0(Object01f52fa0 *self)
{
    return &self->member_0x0010;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f53260()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f532a0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f532c0 reads.
 *
 */
struct Object01f532c0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f532c0; meaning unknown. */
};
static_assert(offsetof(Object01f532c0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f532c0(Object01f532c0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_01f55a10 reads.
 *
 */
struct Object01f55a10 {
    uint8_t unknown_0x0000[0xd90];
    uint32_t value_0x0d90; /**< Read by auto_return_field_01f55a10; meaning unknown. */
};
static_assert(offsetof(Object01f55a10, value_0x0d90) == 0xd90);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01f55a10(const Object01f55a10 *self)
{
    return self->value_0x0d90;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_01f55a20 = 0x1;

extern "C" uint8_t bb_auto_return_constant_01f55a20()
{
    return value_01f55a20;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f55b00()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f55b40()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f55b60 reads.
 *
 */
struct Object01f55b60 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f55b60; meaning unknown. */
};
static_assert(offsetof(Object01f55b60, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f55b60(Object01f55b60 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f55c10()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f55c50()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f55c70 reads.
 *
 */
struct Object01f55c70 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f55c70; meaning unknown. */
};
static_assert(offsetof(Object01f55c70, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f55c70(Object01f55c70 *self)
{
    return &self->member_0x0008;
}
