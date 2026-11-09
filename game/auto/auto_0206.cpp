// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02062300()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02062340()
{
}

/**
 *
 * The part of the object that auto_return_member_address_02062360 reads.
 *
 */
struct Object02062360 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_02062360; meaning unknown. */
};
static_assert(offsetof(Object02062360, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02062360(Object02062360 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02062630()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02062670()
{
}

/**
 *
 * The part of the object that auto_return_member_address_02062690 reads.
 *
 */
struct Object02062690 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_02062690; meaning unknown. */
};
static_assert(offsetof(Object02062690, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02062690(Object02062690 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_020626e0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0206c150()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0206c190()
{
}

/**
 *
 * The part of the object that auto_return_member_address_0206c1b0 reads.
 *
 */
struct Object0206c1b0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_0206c1b0; meaning unknown. */
};
static_assert(offsetof(Object0206c1b0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0206c1b0(Object0206c1b0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0206c330()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_0206c3c0 reads.
 *
 */
struct Object0206c3c0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_0206c3c0; meaning unknown. */
};
static_assert(offsetof(Object0206c3c0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0206c3c0(Object0206c3c0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0206c7c0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_0206c850 reads.
 *
 */
struct Object0206c850 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_0206c850; meaning unknown. */
};
static_assert(offsetof(Object0206c850, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0206c850(Object0206c850 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0206caf0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_0206cb80 reads.
 *
 */
struct Object0206cb80 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_0206cb80; meaning unknown. */
};
static_assert(offsetof(Object0206cb80, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0206cb80(Object0206cb80 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0206cdd0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_0206ce60 reads.
 *
 */
struct Object0206ce60 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_0206ce60; meaning unknown. */
};
static_assert(offsetof(Object0206ce60, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0206ce60(Object0206ce60 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0206d070()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0206d0b0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_0206d0d0 reads.
 *
 */
struct Object0206d0d0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_0206d0d0; meaning unknown. */
};
static_assert(offsetof(Object0206d0d0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0206d0d0(Object0206d0d0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0206d480()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0206d4c0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_0206d4e0 reads.
 *
 */
struct Object0206d4e0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_0206d4e0; meaning unknown. */
};
static_assert(offsetof(Object0206d4e0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0206d4e0(Object0206d4e0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0206d580()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0206d5c0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_0206d5e0 reads.
 *
 */
struct Object0206d5e0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_0206d5e0; meaning unknown. */
};
static_assert(offsetof(Object0206d5e0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0206d5e0(Object0206d5e0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0206d680()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0206d6c0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_0206d6e0 reads.
 *
 */
struct Object0206d6e0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_0206d6e0; meaning unknown. */
};
static_assert(offsetof(Object0206d6e0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0206d6e0(Object0206d6e0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0206d780()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0206d7c0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_0206d7e0 reads.
 *
 */
struct Object0206d7e0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_0206d7e0; meaning unknown. */
};
static_assert(offsetof(Object0206d7e0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0206d7e0(Object0206d7e0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0206d880()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0206d8c0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_0206d8e0 reads.
 *
 */
struct Object0206d8e0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_0206d8e0; meaning unknown. */
};
static_assert(offsetof(Object0206d8e0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0206d8e0(Object0206d8e0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0206d980()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0206d9c0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_0206d9e0 reads.
 *
 */
struct Object0206d9e0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_0206d9e0; meaning unknown. */
};
static_assert(offsetof(Object0206d9e0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0206d9e0(Object0206d9e0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0206da80()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0206dac0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_0206dae0 reads.
 *
 */
struct Object0206dae0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_0206dae0; meaning unknown. */
};
static_assert(offsetof(Object0206dae0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0206dae0(Object0206dae0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0206db80()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0206dbc0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_0206dbe0 reads.
 *
 */
struct Object0206dbe0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_0206dbe0; meaning unknown. */
};
static_assert(offsetof(Object0206dbe0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0206dbe0(Object0206dbe0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0206e020 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0206e020()
{
    return value_0206e020;
}
