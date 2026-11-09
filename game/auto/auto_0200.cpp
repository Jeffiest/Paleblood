// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02000be0 = 0x8;

extern "C" uint32_t bb_auto_return_constant_02000be0()
{
    return value_02000be0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02000d70 = 0x8;

extern "C" uint32_t bb_auto_return_constant_02000d70()
{
    return value_02000d70;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02000f80 = 0x8;

extern "C" uint32_t bb_auto_return_constant_02000f80()
{
    return value_02000f80;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_020019f0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02001a30()
{
}

/**
 *
 * The part of the object that auto_return_member_address_02001a50 reads.
 *
 */
struct Object02001a50 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_02001a50; meaning unknown. */
};
static_assert(offsetof(Object02001a50, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02001a50(Object02001a50 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02001f50()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02001f90()
{
}

/**
 *
 * The part of the object that auto_return_member_address_02001fb0 reads.
 *
 */
struct Object02001fb0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_02001fb0; meaning unknown. */
};
static_assert(offsetof(Object02001fb0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02001fb0(Object02001fb0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_020021a0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_020021e0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_02002200 reads.
 *
 */
struct Object02002200 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_02002200; meaning unknown. */
};
static_assert(offsetof(Object02002200, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02002200(Object02002200 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02002770()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_020027b0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_020027d0 reads.
 *
 */
struct Object020027d0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_020027d0; meaning unknown. */
};
static_assert(offsetof(Object020027d0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_020027d0(Object020027d0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0200cf60()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0200cfa0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_0200cfc0 reads.
 *
 */
struct Object0200cfc0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_0200cfc0; meaning unknown. */
};
static_assert(offsetof(Object0200cfc0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0200cfc0(Object0200cfc0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0200d0d0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0200d110()
{
}

/**
 *
 * The part of the object that auto_return_member_address_0200d130 reads.
 *
 */
struct Object0200d130 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_0200d130; meaning unknown. */
};
static_assert(offsetof(Object0200d130, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0200d130(Object0200d130 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0200d2c0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0200d300()
{
}

/**
 *
 * The part of the object that auto_return_member_address_0200d320 reads.
 *
 */
struct Object0200d320 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_0200d320; meaning unknown. */
};
static_assert(offsetof(Object0200d320, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0200d320(Object0200d320 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0200d4b0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0200d4f0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_0200d510 reads.
 *
 */
struct Object0200d510 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_0200d510; meaning unknown. */
};
static_assert(offsetof(Object0200d510, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0200d510(Object0200d510 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0200d790()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0200d7d0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_0200d7f0 reads.
 *
 */
struct Object0200d7f0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_0200d7f0; meaning unknown. */
};
static_assert(offsetof(Object0200d7f0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0200d7f0(Object0200d7f0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0200d930()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0200d970()
{
}

/**
 *
 * The part of the object that auto_return_member_address_0200d990 reads.
 *
 */
struct Object0200d990 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_0200d990; meaning unknown. */
};
static_assert(offsetof(Object0200d990, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0200d990(Object0200d990 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0200da60()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0200daa0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_0200dac0 reads.
 *
 */
struct Object0200dac0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_0200dac0; meaning unknown. */
};
static_assert(offsetof(Object0200dac0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0200dac0(Object0200dac0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0200e010()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0200e050()
{
}

/**
 *
 * The part of the object that auto_return_member_address_0200e070 reads.
 *
 */
struct Object0200e070 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_0200e070; meaning unknown. */
};
static_assert(offsetof(Object0200e070, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0200e070(Object0200e070 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0200e180()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0200e1c0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_0200e1e0 reads.
 *
 */
struct Object0200e1e0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_0200e1e0; meaning unknown. */
};
static_assert(offsetof(Object0200e1e0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0200e1e0(Object0200e1e0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0200e310()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0200e350()
{
}

/**
 *
 * The part of the object that auto_return_member_address_0200e370 reads.
 *
 */
struct Object0200e370 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_0200e370; meaning unknown. */
};
static_assert(offsetof(Object0200e370, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0200e370(Object0200e370 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0200f700()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_0200f7c0 reads.
 *
 */
struct Object0200f7c0 {
    uint8_t unknown_0x0000[0x10];
    uint8_t member_0x0010; /**< Read by auto_return_member_address_0200f7c0; meaning unknown. */
};
static_assert(offsetof(Object0200f7c0, member_0x0010) == 0x10);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0200f7c0(Object0200f7c0 *self)
{
    return &self->member_0x0010;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0200f880()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0200f8c0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_0200f8e0 reads.
 *
 */
struct Object0200f8e0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_0200f8e0; meaning unknown. */
};
static_assert(offsetof(Object0200f8e0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0200f8e0(Object0200f8e0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0200faa0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0200fae0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_0200fb00 reads.
 *
 */
struct Object0200fb00 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_0200fb00; meaning unknown. */
};
static_assert(offsetof(Object0200fb00, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0200fb00(Object0200fb00 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0200fc70()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0200fcb0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_0200fcd0 reads.
 *
 */
struct Object0200fcd0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_0200fcd0; meaning unknown. */
};
static_assert(offsetof(Object0200fcd0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0200fcd0(Object0200fcd0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0200ff80()
{
    return 0;
}
