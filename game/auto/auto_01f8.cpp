// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f84aa0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_01f84ab0 reads.
 *
 */
struct Object01f84ab0 {
    uint8_t unknown_0x0000[0xe20];
    uint8_t member_0x0e20; /**< Read by auto_return_member_address_01f84ab0; meaning unknown. */
};
static_assert(offsetof(Object01f84ab0, member_0x0e20) == 0xe20);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f84ab0(Object01f84ab0 *self)
{
    return &self->member_0x0e20;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_01f84ac0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_01f84ac0()
{
    return value_01f84ac0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01f84d60 = 0x6;

extern "C" uint32_t bb_auto_return_constant_01f84d60()
{
    return value_01f84d60;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f852c0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f85300()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f85320 reads.
 *
 */
struct Object01f85320 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f85320; meaning unknown. */
};
static_assert(offsetof(Object01f85320, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f85320(Object01f85320 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f85540()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f85580()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f855a0 reads.
 *
 */
struct Object01f855a0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f855a0; meaning unknown. */
};
static_assert(offsetof(Object01f855a0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f855a0(Object01f855a0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f856c0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f85700()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f85720 reads.
 *
 */
struct Object01f85720 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f85720; meaning unknown. */
};
static_assert(offsetof(Object01f85720, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f85720(Object01f85720 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f857c0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f85800()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f85820 reads.
 *
 */
struct Object01f85820 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f85820; meaning unknown. */
};
static_assert(offsetof(Object01f85820, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f85820(Object01f85820 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f85940()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f85980()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f859a0 reads.
 *
 */
struct Object01f859a0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f859a0; meaning unknown. */
};
static_assert(offsetof(Object01f859a0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f859a0(Object01f859a0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f85a40()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f85a80()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f85aa0 reads.
 *
 */
struct Object01f85aa0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f85aa0; meaning unknown. */
};
static_assert(offsetof(Object01f85aa0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f85aa0(Object01f85aa0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f85be0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f85c20()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f85c40 reads.
 *
 */
struct Object01f85c40 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f85c40; meaning unknown. */
};
static_assert(offsetof(Object01f85c40, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f85c40(Object01f85c40 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f85cf0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f85d30()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f85d50 reads.
 *
 */
struct Object01f85d50 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f85d50; meaning unknown. */
};
static_assert(offsetof(Object01f85d50, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f85d50(Object01f85d50 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f85e00()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f85e40()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f85e60 reads.
 *
 */
struct Object01f85e60 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f85e60; meaning unknown. */
};
static_assert(offsetof(Object01f85e60, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f85e60(Object01f85e60 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f85f40()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f85f80()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f85fa0 reads.
 *
 */
struct Object01f85fa0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f85fa0; meaning unknown. */
};
static_assert(offsetof(Object01f85fa0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f85fa0(Object01f85fa0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f860a0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f860e0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f86100 reads.
 *
 */
struct Object01f86100 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f86100; meaning unknown. */
};
static_assert(offsetof(Object01f86100, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f86100(Object01f86100 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f86210()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f86250()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f86270 reads.
 *
 */
struct Object01f86270 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f86270; meaning unknown. */
};
static_assert(offsetof(Object01f86270, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f86270(Object01f86270 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f86570()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f865b0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f865d0 reads.
 *
 */
struct Object01f865d0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f865d0; meaning unknown. */
};
static_assert(offsetof(Object01f865d0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f865d0(Object01f865d0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f868e0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f86920()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f86940 reads.
 *
 */
struct Object01f86940 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f86940; meaning unknown. */
};
static_assert(offsetof(Object01f86940, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f86940(Object01f86940 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f86aa0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f86ae0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f86b00 reads.
 *
 */
struct Object01f86b00 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f86b00; meaning unknown. */
};
static_assert(offsetof(Object01f86b00, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f86b00(Object01f86b00 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f86ed0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f86f10()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f86f30 reads.
 *
 */
struct Object01f86f30 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f86f30; meaning unknown. */
};
static_assert(offsetof(Object01f86f30, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f86f30(Object01f86f30 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f870f0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f87130()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f87150 reads.
 *
 */
struct Object01f87150 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f87150; meaning unknown. */
};
static_assert(offsetof(Object01f87150, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f87150(Object01f87150 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f87310()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f87350()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f87370 reads.
 *
 */
struct Object01f87370 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f87370; meaning unknown. */
};
static_assert(offsetof(Object01f87370, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f87370(Object01f87370 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f875a0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_01f87660 reads.
 *
 */
struct Object01f87660 {
    uint8_t unknown_0x0000[0x10];
    uint8_t member_0x0010; /**< Read by auto_return_member_address_01f87660; meaning unknown. */
};
static_assert(offsetof(Object01f87660, member_0x0010) == 0x10);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f87660(Object01f87660 *self)
{
    return &self->member_0x0010;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f87870()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_01f878d0 reads.
 *
 */
struct Object01f878d0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f878d0; meaning unknown. */
};
static_assert(offsetof(Object01f878d0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f878d0(Object01f878d0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f87a90()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f87ad0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f87af0 reads.
 *
 */
struct Object01f87af0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f87af0; meaning unknown. */
};
static_assert(offsetof(Object01f87af0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f87af0(Object01f87af0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f87e60()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_01f87ec0 reads.
 *
 */
struct Object01f87ec0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f87ec0; meaning unknown. */
};
static_assert(offsetof(Object01f87ec0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f87ec0(Object01f87ec0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f88950()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_01f88a10 reads.
 *
 */
struct Object01f88a10 {
    uint8_t unknown_0x0000[0x10];
    uint8_t member_0x0010; /**< Read by auto_return_member_address_01f88a10; meaning unknown. */
};
static_assert(offsetof(Object01f88a10, member_0x0010) == 0x10);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f88a10(Object01f88a10 *self)
{
    return &self->member_0x0010;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f88c20()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f88c60()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f88c80 reads.
 *
 */
struct Object01f88c80 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f88c80; meaning unknown. */
};
static_assert(offsetof(Object01f88c80, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f88c80(Object01f88c80 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f88f80()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_01f890b0 reads.
 *
 */
struct Object01f890b0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f890b0; meaning unknown. */
};
static_assert(offsetof(Object01f890b0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f890b0(Object01f890b0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f89e40()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f89e80()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f89ea0 reads.
 *
 */
struct Object01f89ea0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f89ea0; meaning unknown. */
};
static_assert(offsetof(Object01f89ea0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f89ea0(Object01f89ea0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f89fc0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f8a000()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f8a020 reads.
 *
 */
struct Object01f8a020 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f8a020; meaning unknown. */
};
static_assert(offsetof(Object01f8a020, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f8a020(Object01f8a020 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f8a0d0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f8a110()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f8a130 reads.
 *
 */
struct Object01f8a130 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f8a130; meaning unknown. */
};
static_assert(offsetof(Object01f8a130, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f8a130(Object01f8a130 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f8a1d0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f8a210()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f8a230 reads.
 *
 */
struct Object01f8a230 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f8a230; meaning unknown. */
};
static_assert(offsetof(Object01f8a230, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f8a230(Object01f8a230 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f8a2d0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f8a310()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f8a330 reads.
 *
 */
struct Object01f8a330 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f8a330; meaning unknown. */
};
static_assert(offsetof(Object01f8a330, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f8a330(Object01f8a330 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f8a3e0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f8a420()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f8a440 reads.
 *
 */
struct Object01f8a440 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f8a440; meaning unknown. */
};
static_assert(offsetof(Object01f8a440, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f8a440(Object01f8a440 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f8a4f0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f8a530()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f8a550 reads.
 *
 */
struct Object01f8a550 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f8a550; meaning unknown. */
};
static_assert(offsetof(Object01f8a550, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f8a550(Object01f8a550 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f8a6d0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_01f8a790 reads.
 *
 */
struct Object01f8a790 {
    uint8_t unknown_0x0000[0x10];
    uint8_t member_0x0010; /**< Read by auto_return_member_address_01f8a790; meaning unknown. */
};
static_assert(offsetof(Object01f8a790, member_0x0010) == 0x10);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f8a790(Object01f8a790 *self)
{
    return &self->member_0x0010;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f8ac60()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f8aca0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f8acc0 reads.
 *
 */
struct Object01f8acc0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f8acc0; meaning unknown. */
};
static_assert(offsetof(Object01f8acc0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f8acc0(Object01f8acc0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f8ad60()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f8ada0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f8adc0 reads.
 *
 */
struct Object01f8adc0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f8adc0; meaning unknown. */
};
static_assert(offsetof(Object01f8adc0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f8adc0(Object01f8adc0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f8b000()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_01f8b0c0 reads.
 *
 */
struct Object01f8b0c0 {
    uint8_t unknown_0x0000[0x10];
    uint8_t member_0x0010; /**< Read by auto_return_member_address_01f8b0c0; meaning unknown. */
};
static_assert(offsetof(Object01f8b0c0, member_0x0010) == 0x10);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f8b0c0(Object01f8b0c0 *self)
{
    return &self->member_0x0010;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f8b220()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_01f8b2e0 reads.
 *
 */
struct Object01f8b2e0 {
    uint8_t unknown_0x0000[0x10];
    uint8_t member_0x0010; /**< Read by auto_return_member_address_01f8b2e0; meaning unknown. */
};
static_assert(offsetof(Object01f8b2e0, member_0x0010) == 0x10);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f8b2e0(Object01f8b2e0 *self)
{
    return &self->member_0x0010;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f8b410()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f8b450()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f8b470 reads.
 *
 */
struct Object01f8b470 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f8b470; meaning unknown. */
};
static_assert(offsetof(Object01f8b470, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f8b470(Object01f8b470 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f8b720()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f8b760()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f8b780 reads.
 *
 */
struct Object01f8b780 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f8b780; meaning unknown. */
};
static_assert(offsetof(Object01f8b780, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f8b780(Object01f8b780 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f8ba20()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f8ba60()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f8ba80 reads.
 *
 */
struct Object01f8ba80 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f8ba80; meaning unknown. */
};
static_assert(offsetof(Object01f8ba80, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f8ba80(Object01f8ba80 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f8bb80()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f8bbc0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f8bbe0 reads.
 *
 */
struct Object01f8bbe0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f8bbe0; meaning unknown. */
};
static_assert(offsetof(Object01f8bbe0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f8bbe0(Object01f8bbe0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f8bf80()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_01f8c040 reads.
 *
 */
struct Object01f8c040 {
    uint8_t unknown_0x0000[0x10];
    uint8_t member_0x0010; /**< Read by auto_return_member_address_01f8c040; meaning unknown. */
};
static_assert(offsetof(Object01f8c040, member_0x0010) == 0x10);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f8c040(Object01f8c040 *self)
{
    return &self->member_0x0010;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f8c3e0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f8c420()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f8c440 reads.
 *
 */
struct Object01f8c440 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f8c440; meaning unknown. */
};
static_assert(offsetof(Object01f8c440, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f8c440(Object01f8c440 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f8c570()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_01f8c630 reads.
 *
 */
struct Object01f8c630 {
    uint8_t unknown_0x0000[0x10];
    uint8_t member_0x0010; /**< Read by auto_return_member_address_01f8c630; meaning unknown. */
};
static_assert(offsetof(Object01f8c630, member_0x0010) == 0x10);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f8c630(Object01f8c630 *self)
{
    return &self->member_0x0010;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f8c870()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_01f8c930 reads.
 *
 */
struct Object01f8c930 {
    uint8_t unknown_0x0000[0x10];
    uint8_t member_0x0010; /**< Read by auto_return_member_address_01f8c930; meaning unknown. */
};
static_assert(offsetof(Object01f8c930, member_0x0010) == 0x10);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f8c930(Object01f8c930 *self)
{
    return &self->member_0x0010;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f8ca90()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_01f8cb50 reads.
 *
 */
struct Object01f8cb50 {
    uint8_t unknown_0x0000[0x10];
    uint8_t member_0x0010; /**< Read by auto_return_member_address_01f8cb50; meaning unknown. */
};
static_assert(offsetof(Object01f8cb50, member_0x0010) == 0x10);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f8cb50(Object01f8cb50 *self)
{
    return &self->member_0x0010;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f8cc00()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f8cc40()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f8cc60 reads.
 *
 */
struct Object01f8cc60 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f8cc60; meaning unknown. */
};
static_assert(offsetof(Object01f8cc60, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f8cc60(Object01f8cc60 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f8cd30()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f8cd70()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f8cd90 reads.
 *
 */
struct Object01f8cd90 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f8cd90; meaning unknown. */
};
static_assert(offsetof(Object01f8cd90, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f8cd90(Object01f8cd90 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f8ce30()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f8ce70()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f8ce90 reads.
 *
 */
struct Object01f8ce90 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f8ce90; meaning unknown. */
};
static_assert(offsetof(Object01f8ce90, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f8ce90(Object01f8ce90 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f8cf30()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f8cf70()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f8cf90 reads.
 *
 */
struct Object01f8cf90 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f8cf90; meaning unknown. */
};
static_assert(offsetof(Object01f8cf90, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f8cf90(Object01f8cf90 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f8d030()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f8d070()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f8d090 reads.
 *
 */
struct Object01f8d090 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f8d090; meaning unknown. */
};
static_assert(offsetof(Object01f8d090, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f8d090(Object01f8d090 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f8dac0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f8db00()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f8db20 reads.
 *
 */
struct Object01f8db20 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f8db20; meaning unknown. */
};
static_assert(offsetof(Object01f8db20, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f8db20(Object01f8db20 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f8e2e0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f8e320()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f8e340 reads.
 *
 */
struct Object01f8e340 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f8e340; meaning unknown. */
};
static_assert(offsetof(Object01f8e340, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f8e340(Object01f8e340 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f8f510()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f8f550()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f8f570 reads.
 *
 */
struct Object01f8f570 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f8f570; meaning unknown. */
};
static_assert(offsetof(Object01f8f570, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f8f570(Object01f8f570 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f8f620()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f8f660()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f8f680 reads.
 *
 */
struct Object01f8f680 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f8f680; meaning unknown. */
};
static_assert(offsetof(Object01f8f680, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f8f680(Object01f8f680 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f8f720()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f8f760()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f8f780 reads.
 *
 */
struct Object01f8f780 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f8f780; meaning unknown. */
};
static_assert(offsetof(Object01f8f780, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f8f780(Object01f8f780 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f8fa70()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f8fab0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f8fad0 reads.
 *
 */
struct Object01f8fad0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f8fad0; meaning unknown. */
};
static_assert(offsetof(Object01f8fad0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f8fad0(Object01f8fad0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f8fb70()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f8fbb0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f8fbd0 reads.
 *
 */
struct Object01f8fbd0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f8fbd0; meaning unknown. */
};
static_assert(offsetof(Object01f8fbd0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f8fbd0(Object01f8fbd0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f8fc80()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f8fcc0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f8fce0 reads.
 *
 */
struct Object01f8fce0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f8fce0; meaning unknown. */
};
static_assert(offsetof(Object01f8fce0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f8fce0(Object01f8fce0 *self)
{
    return &self->member_0x0008;
}
