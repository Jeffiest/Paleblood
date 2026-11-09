// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fd0170()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_01fd0290 reads.
 *
 */
struct Object01fd0290 {
    uint8_t unknown_0x0000[0x10];
    uint8_t member_0x0010; /**< Read by auto_return_member_address_01fd0290; meaning unknown. */
};
static_assert(offsetof(Object01fd0290, member_0x0010) == 0x10);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fd0290(Object01fd0290 *self)
{
    return &self->member_0x0010;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fd06f0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_01fd0780 reads.
 *
 */
struct Object01fd0780 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fd0780; meaning unknown. */
};
static_assert(offsetof(Object01fd0780, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fd0780(Object01fd0780 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fd0820()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fd0860()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fd0880 reads.
 *
 */
struct Object01fd0880 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fd0880; meaning unknown. */
};
static_assert(offsetof(Object01fd0880, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fd0880(Object01fd0880 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fd09a0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fd09e0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fd0a00 reads.
 *
 */
struct Object01fd0a00 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fd0a00; meaning unknown. */
};
static_assert(offsetof(Object01fd0a00, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fd0a00(Object01fd0a00 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fd0ae0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fd0b20()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fd0b40 reads.
 *
 */
struct Object01fd0b40 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fd0b40; meaning unknown. */
};
static_assert(offsetof(Object01fd0b40, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fd0b40(Object01fd0b40 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fd1150()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fd1190()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fd11b0 reads.
 *
 */
struct Object01fd11b0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fd11b0; meaning unknown. */
};
static_assert(offsetof(Object01fd11b0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fd11b0(Object01fd11b0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fd1250()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fd1290()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fd12b0 reads.
 *
 */
struct Object01fd12b0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fd12b0; meaning unknown. */
};
static_assert(offsetof(Object01fd12b0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fd12b0(Object01fd12b0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fd13c0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fd1400()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fd1420 reads.
 *
 */
struct Object01fd1420 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fd1420; meaning unknown. */
};
static_assert(offsetof(Object01fd1420, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fd1420(Object01fd1420 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fd15a0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fd15e0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fd1600 reads.
 *
 */
struct Object01fd1600 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fd1600; meaning unknown. */
};
static_assert(offsetof(Object01fd1600, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fd1600(Object01fd1600 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fd16a0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fd16e0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fd1700 reads.
 *
 */
struct Object01fd1700 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fd1700; meaning unknown. */
};
static_assert(offsetof(Object01fd1700, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fd1700(Object01fd1700 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fd1b60()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fd1ba0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fd1bc0 reads.
 *
 */
struct Object01fd1bc0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fd1bc0; meaning unknown. */
};
static_assert(offsetof(Object01fd1bc0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fd1bc0(Object01fd1bc0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fd1cd0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fd1d10()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fd1d30 reads.
 *
 */
struct Object01fd1d30 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fd1d30; meaning unknown. */
};
static_assert(offsetof(Object01fd1d30, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fd1d30(Object01fd1d30 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fd1f50()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fd1f90()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fd1fb0 reads.
 *
 */
struct Object01fd1fb0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fd1fb0; meaning unknown. */
};
static_assert(offsetof(Object01fd1fb0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fd1fb0(Object01fd1fb0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fd20d0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fd2110()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fd2130 reads.
 *
 */
struct Object01fd2130 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fd2130; meaning unknown. */
};
static_assert(offsetof(Object01fd2130, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fd2130(Object01fd2130 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fd25b0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fd25f0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fd2610 reads.
 *
 */
struct Object01fd2610 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fd2610; meaning unknown. */
};
static_assert(offsetof(Object01fd2610, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fd2610(Object01fd2610 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fd2ad0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_01fd2cb0 reads.
 *
 */
struct Object01fd2cb0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fd2cb0; meaning unknown. */
};
static_assert(offsetof(Object01fd2cb0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fd2cb0(Object01fd2cb0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fd2ee0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fd2f20()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fd2f40 reads.
 *
 */
struct Object01fd2f40 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fd2f40; meaning unknown. */
};
static_assert(offsetof(Object01fd2f40, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fd2f40(Object01fd2f40 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fd35a0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fd35e0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fd3600 reads.
 *
 */
struct Object01fd3600 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fd3600; meaning unknown. */
};
static_assert(offsetof(Object01fd3600, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fd3600(Object01fd3600 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fd3710()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fd3750()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fd3770 reads.
 *
 */
struct Object01fd3770 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fd3770; meaning unknown. */
};
static_assert(offsetof(Object01fd3770, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fd3770(Object01fd3770 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fd3990()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fd39d0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fd39f0 reads.
 *
 */
struct Object01fd39f0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fd39f0; meaning unknown. */
};
static_assert(offsetof(Object01fd39f0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fd39f0(Object01fd39f0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fd3aa0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fd3ae0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fd3b00 reads.
 *
 */
struct Object01fd3b00 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fd3b00; meaning unknown. */
};
static_assert(offsetof(Object01fd3b00, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fd3b00(Object01fd3b00 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fd4230()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fd4270()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fd4290 reads.
 *
 */
struct Object01fd4290 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fd4290; meaning unknown. */
};
static_assert(offsetof(Object01fd4290, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fd4290(Object01fd4290 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fd4ca0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fd4ce0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fd4d00 reads.
 *
 */
struct Object01fd4d00 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fd4d00; meaning unknown. */
};
static_assert(offsetof(Object01fd4d00, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fd4d00(Object01fd4d00 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fd4f50()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_01fd5130 reads.
 *
 */
struct Object01fd5130 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fd5130; meaning unknown. */
};
static_assert(offsetof(Object01fd5130, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fd5130(Object01fd5130 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fd5370()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fd53b0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fd53d0 reads.
 *
 */
struct Object01fd53d0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fd53d0; meaning unknown. */
};
static_assert(offsetof(Object01fd53d0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fd53d0(Object01fd53d0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fd5480()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fd54c0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fd54e0 reads.
 *
 */
struct Object01fd54e0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fd54e0; meaning unknown. */
};
static_assert(offsetof(Object01fd54e0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fd54e0(Object01fd54e0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fd5990()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fd59d0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fd59f0 reads.
 *
 */
struct Object01fd59f0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fd59f0; meaning unknown. */
};
static_assert(offsetof(Object01fd59f0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fd59f0(Object01fd59f0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fd5e30()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_01fd6010 reads.
 *
 */
struct Object01fd6010 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fd6010; meaning unknown. */
};
static_assert(offsetof(Object01fd6010, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fd6010(Object01fd6010 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fd60d0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fd6110()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fd6130 reads.
 *
 */
struct Object01fd6130 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fd6130; meaning unknown. */
};
static_assert(offsetof(Object01fd6130, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fd6130(Object01fd6130 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fd6540()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_01fd6730 reads.
 *
 */
struct Object01fd6730 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fd6730; meaning unknown. */
};
static_assert(offsetof(Object01fd6730, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fd6730(Object01fd6730 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fd7bb0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fd7c60()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fd7ca0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fd7cc0 reads.
 *
 */
struct Object01fd7cc0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fd7cc0; meaning unknown. */
};
static_assert(offsetof(Object01fd7cc0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fd7cc0(Object01fd7cc0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fd7de0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fd7e20()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fd7e40 reads.
 *
 */
struct Object01fd7e40 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fd7e40; meaning unknown. */
};
static_assert(offsetof(Object01fd7e40, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fd7e40(Object01fd7e40 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fd8060()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fd80a0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fd80c0 reads.
 *
 */
struct Object01fd80c0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fd80c0; meaning unknown. */
};
static_assert(offsetof(Object01fd80c0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fd80c0(Object01fd80c0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fd8240()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fd8280()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fd82a0 reads.
 *
 */
struct Object01fd82a0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fd82a0; meaning unknown. */
};
static_assert(offsetof(Object01fd82a0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fd82a0(Object01fd82a0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fd8460()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fd84a0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fd84c0 reads.
 *
 */
struct Object01fd84c0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fd84c0; meaning unknown. */
};
static_assert(offsetof(Object01fd84c0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fd84c0(Object01fd84c0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fd8880()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_01fd8910 reads.
 *
 */
struct Object01fd8910 {
    uint8_t unknown_0x0000[0x10];
    uint8_t member_0x0010; /**< Read by auto_return_member_address_01fd8910; meaning unknown. */
};
static_assert(offsetof(Object01fd8910, member_0x0010) == 0x10);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fd8910(Object01fd8910 *self)
{
    return &self->member_0x0010;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fd89c0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fd8a00()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fd8a20 reads.
 *
 */
struct Object01fd8a20 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fd8a20; meaning unknown. */
};
static_assert(offsetof(Object01fd8a20, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fd8a20(Object01fd8a20 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fd8de0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_01fd8e70 reads.
 *
 */
struct Object01fd8e70 {
    uint8_t unknown_0x0000[0x10];
    uint8_t member_0x0010; /**< Read by auto_return_member_address_01fd8e70; meaning unknown. */
};
static_assert(offsetof(Object01fd8e70, member_0x0010) == 0x10);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fd8e70(Object01fd8e70 *self)
{
    return &self->member_0x0010;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fd8f20()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fd8f60()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fd8f80 reads.
 *
 */
struct Object01fd8f80 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fd8f80; meaning unknown. */
};
static_assert(offsetof(Object01fd8f80, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fd8f80(Object01fd8f80 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fd9100()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fd9140()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fd9160 reads.
 *
 */
struct Object01fd9160 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fd9160; meaning unknown. */
};
static_assert(offsetof(Object01fd9160, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fd9160(Object01fd9160 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fd9270()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fd92b0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fd92d0 reads.
 *
 */
struct Object01fd92d0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fd92d0; meaning unknown. */
};
static_assert(offsetof(Object01fd92d0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fd92d0(Object01fd92d0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fd93f0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fd9430()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fd9450 reads.
 *
 */
struct Object01fd9450 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fd9450; meaning unknown. */
};
static_assert(offsetof(Object01fd9450, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fd9450(Object01fd9450 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fd9850()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fd9890()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fd98b0 reads.
 *
 */
struct Object01fd98b0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fd98b0; meaning unknown. */
};
static_assert(offsetof(Object01fd98b0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fd98b0(Object01fd98b0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fd9ab0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_01fd9b80 reads.
 *
 */
struct Object01fd9b80 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fd9b80; meaning unknown. */
};
static_assert(offsetof(Object01fd9b80, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fd9b80(Object01fd9b80 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fd9ce0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fd9d20()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fd9d40 reads.
 *
 */
struct Object01fd9d40 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fd9d40; meaning unknown. */
};
static_assert(offsetof(Object01fd9d40, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fd9d40(Object01fd9d40 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fd9ea0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fd9ee0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fd9f00 reads.
 *
 */
struct Object01fd9f00 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fd9f00; meaning unknown. */
};
static_assert(offsetof(Object01fd9f00, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fd9f00(Object01fd9f00 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fda060()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fda0a0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fda0c0 reads.
 *
 */
struct Object01fda0c0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fda0c0; meaning unknown. */
};
static_assert(offsetof(Object01fda0c0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fda0c0(Object01fda0c0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fda220()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fda260()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fda280 reads.
 *
 */
struct Object01fda280 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fda280; meaning unknown. */
};
static_assert(offsetof(Object01fda280, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fda280(Object01fda280 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fda330()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fda370()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fda390 reads.
 *
 */
struct Object01fda390 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fda390; meaning unknown. */
};
static_assert(offsetof(Object01fda390, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fda390(Object01fda390 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fda440()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fda480()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fda4a0 reads.
 *
 */
struct Object01fda4a0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fda4a0; meaning unknown. */
};
static_assert(offsetof(Object01fda4a0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fda4a0(Object01fda4a0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fda5f0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fda630()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fda650 reads.
 *
 */
struct Object01fda650 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fda650; meaning unknown. */
};
static_assert(offsetof(Object01fda650, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fda650(Object01fda650 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fda840()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_01fda900 reads.
 *
 */
struct Object01fda900 {
    uint8_t unknown_0x0000[0x10];
    uint8_t member_0x0010; /**< Read by auto_return_member_address_01fda900; meaning unknown. */
};
static_assert(offsetof(Object01fda900, member_0x0010) == 0x10);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fda900(Object01fda900 *self)
{
    return &self->member_0x0010;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fda9a0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fda9e0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fdaa00 reads.
 *
 */
struct Object01fdaa00 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fdaa00; meaning unknown. */
};
static_assert(offsetof(Object01fdaa00, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fdaa00(Object01fdaa00 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fdade0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fdae20()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fdae40 reads.
 *
 */
struct Object01fdae40 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fdae40; meaning unknown. */
};
static_assert(offsetof(Object01fdae40, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fdae40(Object01fdae40 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fdafb0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fdaff0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fdb010 reads.
 *
 */
struct Object01fdb010 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fdb010; meaning unknown. */
};
static_assert(offsetof(Object01fdb010, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fdb010(Object01fdb010 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fdb180()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fdb1c0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fdb1e0 reads.
 *
 */
struct Object01fdb1e0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fdb1e0; meaning unknown. */
};
static_assert(offsetof(Object01fdb1e0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fdb1e0(Object01fdb1e0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fdb280()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fdb2c0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fdb2e0 reads.
 *
 */
struct Object01fdb2e0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fdb2e0; meaning unknown. */
};
static_assert(offsetof(Object01fdb2e0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fdb2e0(Object01fdb2e0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fdb390()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fdb3d0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fdb3f0 reads.
 *
 */
struct Object01fdb3f0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fdb3f0; meaning unknown. */
};
static_assert(offsetof(Object01fdb3f0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fdb3f0(Object01fdb3f0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fdb490()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fdb4d0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fdb4f0 reads.
 *
 */
struct Object01fdb4f0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fdb4f0; meaning unknown. */
};
static_assert(offsetof(Object01fdb4f0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fdb4f0(Object01fdb4f0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_01fdb580 = 0x1;

extern "C" uint8_t bb_auto_return_constant_01fdb580()
{
    return value_01fdb580;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fdb590()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fdb5d0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fdb5f0 reads.
 *
 */
struct Object01fdb5f0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fdb5f0; meaning unknown. */
};
static_assert(offsetof(Object01fdb5f0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fdb5f0(Object01fdb5f0 *self)
{
    return &self->member_0x0008;
}
