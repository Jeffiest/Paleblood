// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f30010()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f30050()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f30070 reads.
 *
 */
struct Object01f30070 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f30070; meaning unknown. */
};
static_assert(offsetof(Object01f30070, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f30070(Object01f30070 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f30570()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f305b0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f305d0 reads.
 *
 */
struct Object01f305d0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f305d0; meaning unknown. */
};
static_assert(offsetof(Object01f305d0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f305d0(Object01f305d0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f30680()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f306c0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f306e0 reads.
 *
 */
struct Object01f306e0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f306e0; meaning unknown. */
};
static_assert(offsetof(Object01f306e0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f306e0(Object01f306e0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f30780()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f307c0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f307e0 reads.
 *
 */
struct Object01f307e0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f307e0; meaning unknown. */
};
static_assert(offsetof(Object01f307e0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f307e0(Object01f307e0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f308f0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f30930()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f30950 reads.
 *
 */
struct Object01f30950 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f30950; meaning unknown. */
};
static_assert(offsetof(Object01f30950, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f30950(Object01f30950 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f309f0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f30a30()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f30a50 reads.
 *
 */
struct Object01f30a50 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f30a50; meaning unknown. */
};
static_assert(offsetof(Object01f30a50, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f30a50(Object01f30a50 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * The part of the object that auto_return_member_address_01f330f0 reads.
 *
 */
struct Object01f330f0 {
    uint8_t unknown_0x0000[0xdf0];
    uint8_t member_0x0df0; /**< Read by auto_return_member_address_01f330f0; meaning unknown. */
};
static_assert(offsetof(Object01f330f0, member_0x0df0) == 0xdf0);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f330f0(Object01f330f0 *self)
{
    return &self->member_0x0df0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_01f33100 = 0x1;

extern "C" uint8_t bb_auto_return_constant_01f33100()
{
    return value_01f33100;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f331e0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f33220()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f33240 reads.
 *
 */
struct Object01f33240 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f33240; meaning unknown. */
};
static_assert(offsetof(Object01f33240, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f33240(Object01f33240 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f33300()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f33340()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f33360 reads.
 *
 */
struct Object01f33360 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f33360; meaning unknown. */
};
static_assert(offsetof(Object01f33360, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f33360(Object01f33360 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f33410()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f33450()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f33470 reads.
 *
 */
struct Object01f33470 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f33470; meaning unknown. */
};
static_assert(offsetof(Object01f33470, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f33470(Object01f33470 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f33530()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f33570()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f33590 reads.
 *
 */
struct Object01f33590 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f33590; meaning unknown. */
};
static_assert(offsetof(Object01f33590, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f33590(Object01f33590 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f33650()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f33690()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f336b0 reads.
 *
 */
struct Object01f336b0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f336b0; meaning unknown. */
};
static_assert(offsetof(Object01f336b0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f336b0(Object01f336b0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f33770()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f337b0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f337d0 reads.
 *
 */
struct Object01f337d0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f337d0; meaning unknown. */
};
static_assert(offsetof(Object01f337d0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f337d0(Object01f337d0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f33890()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f338d0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f338f0 reads.
 *
 */
struct Object01f338f0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f338f0; meaning unknown. */
};
static_assert(offsetof(Object01f338f0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f338f0(Object01f338f0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f33f00()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f33f40()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f33f60 reads.
 *
 */
struct Object01f33f60 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f33f60; meaning unknown. */
};
static_assert(offsetof(Object01f33f60, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f33f60(Object01f33f60 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f34230()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f34270()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f34290 reads.
 *
 */
struct Object01f34290 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f34290; meaning unknown. */
};
static_assert(offsetof(Object01f34290, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f34290(Object01f34290 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f34380()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f343c0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f343e0 reads.
 *
 */
struct Object01f343e0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f343e0; meaning unknown. */
};
static_assert(offsetof(Object01f343e0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f343e0(Object01f343e0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f34710()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f34750()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f34770 reads.
 *
 */
struct Object01f34770 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f34770; meaning unknown. */
};
static_assert(offsetof(Object01f34770, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f34770(Object01f34770 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f34c00()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f34c40()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f34c60 reads.
 *
 */
struct Object01f34c60 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f34c60; meaning unknown. */
};
static_assert(offsetof(Object01f34c60, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f34c60(Object01f34c60 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f37fb0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_01f38070 reads.
 *
 */
struct Object01f38070 {
    uint8_t unknown_0x0000[0x10];
    uint8_t member_0x0010; /**< Read by auto_return_member_address_01f38070; meaning unknown. */
};
static_assert(offsetof(Object01f38070, member_0x0010) == 0x10);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f38070(Object01f38070 *self)
{
    return &self->member_0x0010;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f38130()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f38170()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f38190 reads.
 *
 */
struct Object01f38190 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f38190; meaning unknown. */
};
static_assert(offsetof(Object01f38190, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f38190(Object01f38190 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f38250()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f38290()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f382b0 reads.
 *
 */
struct Object01f382b0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f382b0; meaning unknown. */
};
static_assert(offsetof(Object01f382b0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f382b0(Object01f382b0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f38370()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f383b0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f383d0 reads.
 *
 */
struct Object01f383d0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f383d0; meaning unknown. */
};
static_assert(offsetof(Object01f383d0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f383d0(Object01f383d0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f38480()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f384c0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f384e0 reads.
 *
 */
struct Object01f384e0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f384e0; meaning unknown. */
};
static_assert(offsetof(Object01f384e0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f384e0(Object01f384e0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01f3c4c0 = 0x8;

extern "C" uint32_t bb_auto_return_constant_01f3c4c0()
{
    return value_01f3c4c0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f3c570()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f3c5b0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f3c5d0 reads.
 *
 */
struct Object01f3c5d0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f3c5d0; meaning unknown. */
};
static_assert(offsetof(Object01f3c5d0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f3c5d0(Object01f3c5d0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f3c680()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f3c6c0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f3c6e0 reads.
 *
 */
struct Object01f3c6e0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f3c6e0; meaning unknown. */
};
static_assert(offsetof(Object01f3c6e0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f3c6e0(Object01f3c6e0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f3c7d0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f3c810()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f3c830 reads.
 *
 */
struct Object01f3c830 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f3c830; meaning unknown. */
};
static_assert(offsetof(Object01f3c830, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f3c830(Object01f3c830 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f3c950()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f3c990()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f3c9b0 reads.
 *
 */
struct Object01f3c9b0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f3c9b0; meaning unknown. */
};
static_assert(offsetof(Object01f3c9b0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f3c9b0(Object01f3c9b0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f3ca60()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f3caa0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f3cac0 reads.
 *
 */
struct Object01f3cac0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f3cac0; meaning unknown. */
};
static_assert(offsetof(Object01f3cac0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f3cac0(Object01f3cac0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f3cb70()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f3cbb0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f3cbd0 reads.
 *
 */
struct Object01f3cbd0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f3cbd0; meaning unknown. */
};
static_assert(offsetof(Object01f3cbd0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f3cbd0(Object01f3cbd0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f3cd90()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f3cdd0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f3cdf0 reads.
 *
 */
struct Object01f3cdf0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f3cdf0; meaning unknown. */
};
static_assert(offsetof(Object01f3cdf0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f3cdf0(Object01f3cdf0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f3cf50()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f3cf90()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f3cfb0 reads.
 *
 */
struct Object01f3cfb0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f3cfb0; meaning unknown. */
};
static_assert(offsetof(Object01f3cfb0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f3cfb0(Object01f3cfb0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f3d050()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f3d090()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f3d0b0 reads.
 *
 */
struct Object01f3d0b0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f3d0b0; meaning unknown. */
};
static_assert(offsetof(Object01f3d0b0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f3d0b0(Object01f3d0b0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f3d180()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f3d1c0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f3d1e0 reads.
 *
 */
struct Object01f3d1e0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f3d1e0; meaning unknown. */
};
static_assert(offsetof(Object01f3d1e0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f3d1e0(Object01f3d1e0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f3d800()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f3d840()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f3d860 reads.
 *
 */
struct Object01f3d860 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f3d860; meaning unknown. */
};
static_assert(offsetof(Object01f3d860, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f3d860(Object01f3d860 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f3d900()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f3d940()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f3d960 reads.
 *
 */
struct Object01f3d960 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f3d960; meaning unknown. */
};
static_assert(offsetof(Object01f3d960, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f3d960(Object01f3d960 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f3da00()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f3da40()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f3da60 reads.
 *
 */
struct Object01f3da60 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f3da60; meaning unknown. */
};
static_assert(offsetof(Object01f3da60, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f3da60(Object01f3da60 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f3dc20()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f3dc60()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f3dc80 reads.
 *
 */
struct Object01f3dc80 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f3dc80; meaning unknown. */
};
static_assert(offsetof(Object01f3dc80, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f3dc80(Object01f3dc80 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f3dd30()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f3dd70()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f3dd90 reads.
 *
 */
struct Object01f3dd90 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f3dd90; meaning unknown. */
};
static_assert(offsetof(Object01f3dd90, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f3dd90(Object01f3dd90 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f3de40()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f3de80()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f3dea0 reads.
 *
 */
struct Object01f3dea0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f3dea0; meaning unknown. */
};
static_assert(offsetof(Object01f3dea0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f3dea0(Object01f3dea0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f3df60()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f3dfa0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f3dfc0 reads.
 *
 */
struct Object01f3dfc0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f3dfc0; meaning unknown. */
};
static_assert(offsetof(Object01f3dfc0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f3dfc0(Object01f3dfc0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f3e220()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f3e260()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f3e280 reads.
 *
 */
struct Object01f3e280 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f3e280; meaning unknown. */
};
static_assert(offsetof(Object01f3e280, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f3e280(Object01f3e280 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f3e3b0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f3e3f0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f3e410 reads.
 *
 */
struct Object01f3e410 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f3e410; meaning unknown. */
};
static_assert(offsetof(Object01f3e410, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f3e410(Object01f3e410 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f3e4f0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f3e530()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f3e550 reads.
 *
 */
struct Object01f3e550 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f3e550; meaning unknown. */
};
static_assert(offsetof(Object01f3e550, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f3e550(Object01f3e550 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f3e6f0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f3e730()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f3e750 reads.
 *
 */
struct Object01f3e750 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f3e750; meaning unknown. */
};
static_assert(offsetof(Object01f3e750, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f3e750(Object01f3e750 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f3e830()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f3e870()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f3e890 reads.
 *
 */
struct Object01f3e890 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f3e890; meaning unknown. */
};
static_assert(offsetof(Object01f3e890, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f3e890(Object01f3e890 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f3e940()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f3e980()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f3e9a0 reads.
 *
 */
struct Object01f3e9a0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f3e9a0; meaning unknown. */
};
static_assert(offsetof(Object01f3e9a0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f3e9a0(Object01f3e9a0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f3ea60()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f3eaa0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f3eac0 reads.
 *
 */
struct Object01f3eac0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f3eac0; meaning unknown. */
};
static_assert(offsetof(Object01f3eac0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f3eac0(Object01f3eac0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f3f0b0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f3f0f0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f3f110 reads.
 *
 */
struct Object01f3f110 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f3f110; meaning unknown. */
};
static_assert(offsetof(Object01f3f110, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f3f110(Object01f3f110 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f3f1e0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f3f220()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f3f240 reads.
 *
 */
struct Object01f3f240 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f3f240; meaning unknown. */
};
static_assert(offsetof(Object01f3f240, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f3f240(Object01f3f240 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f3f2f0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f3f330()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f3f350 reads.
 *
 */
struct Object01f3f350 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f3f350; meaning unknown. */
};
static_assert(offsetof(Object01f3f350, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f3f350(Object01f3f350 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f3f3f0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f3f430()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f3f450 reads.
 *
 */
struct Object01f3f450 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f3f450; meaning unknown. */
};
static_assert(offsetof(Object01f3f450, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f3f450(Object01f3f450 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f3f500()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f3f540()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f3f560 reads.
 *
 */
struct Object01f3f560 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f3f560; meaning unknown. */
};
static_assert(offsetof(Object01f3f560, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f3f560(Object01f3f560 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f3f620()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f3f660()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f3f680 reads.
 *
 */
struct Object01f3f680 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f3f680; meaning unknown. */
};
static_assert(offsetof(Object01f3f680, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f3f680(Object01f3f680 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f3f8e0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f3f920()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f3f940 reads.
 *
 */
struct Object01f3f940 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f3f940; meaning unknown. */
};
static_assert(offsetof(Object01f3f940, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f3f940(Object01f3f940 *self)
{
    return &self->member_0x0008;
}
