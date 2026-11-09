// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02030080()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_020300c0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_020300e0 reads.
 *
 */
struct Object020300e0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_020300e0; meaning unknown. */
};
static_assert(offsetof(Object020300e0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_020300e0(Object020300e0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_020301a0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_020301e0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_02030200 reads.
 *
 */
struct Object02030200 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_02030200; meaning unknown. */
};
static_assert(offsetof(Object02030200, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02030200(Object02030200 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_020306b0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_020306f0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_02030710 reads.
 *
 */
struct Object02030710 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_02030710; meaning unknown. */
};
static_assert(offsetof(Object02030710, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02030710(Object02030710 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02030890()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_020308d0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_020308f0 reads.
 *
 */
struct Object020308f0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_020308f0; meaning unknown. */
};
static_assert(offsetof(Object020308f0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_020308f0(Object020308f0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02030c70()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_02030de0 reads.
 *
 */
struct Object02030de0 {
    uint8_t unknown_0x0000[0x10];
    uint8_t member_0x0010; /**< Read by auto_return_member_address_02030de0; meaning unknown. */
};
static_assert(offsetof(Object02030de0, member_0x0010) == 0x10);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02030de0(Object02030de0 *self)
{
    return &self->member_0x0010;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02031040()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02031080()
{
}

/**
 *
 * The part of the object that auto_return_member_address_020310a0 reads.
 *
 */
struct Object020310a0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_020310a0; meaning unknown. */
};
static_assert(offsetof(Object020310a0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_020310a0(Object020310a0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_020311f0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_020312b0 reads.
 *
 */
struct Object020312b0 {
    uint8_t unknown_0x0000[0x10];
    uint8_t member_0x0010; /**< Read by auto_return_member_address_020312b0; meaning unknown. */
};
static_assert(offsetof(Object020312b0, member_0x0010) == 0x10);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_020312b0(Object020312b0 *self)
{
    return &self->member_0x0010;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_020313f0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_020314b0 reads.
 *
 */
struct Object020314b0 {
    uint8_t unknown_0x0000[0x10];
    uint8_t member_0x0010; /**< Read by auto_return_member_address_020314b0; meaning unknown. */
};
static_assert(offsetof(Object020314b0, member_0x0010) == 0x10);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_020314b0(Object020314b0 *self)
{
    return &self->member_0x0010;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_020315f0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_020316b0 reads.
 *
 */
struct Object020316b0 {
    uint8_t unknown_0x0000[0x10];
    uint8_t member_0x0010; /**< Read by auto_return_member_address_020316b0; meaning unknown. */
};
static_assert(offsetof(Object020316b0, member_0x0010) == 0x10);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_020316b0(Object020316b0 *self)
{
    return &self->member_0x0010;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02031a70()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02031ab0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_02031ad0 reads.
 *
 */
struct Object02031ad0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_02031ad0; meaning unknown. */
};
static_assert(offsetof(Object02031ad0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02031ad0(Object02031ad0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02031bc0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02031c00()
{
}

/**
 *
 * The part of the object that auto_return_member_address_02031c20 reads.
 *
 */
struct Object02031c20 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_02031c20; meaning unknown. */
};
static_assert(offsetof(Object02031c20, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02031c20(Object02031c20 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02031d40()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02031d80()
{
}

/**
 *
 * The part of the object that auto_return_member_address_02031da0 reads.
 *
 */
struct Object02031da0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_02031da0; meaning unknown. */
};
static_assert(offsetof(Object02031da0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02031da0(Object02031da0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02031f90()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_02032060 reads.
 *
 */
struct Object02032060 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_02032060; meaning unknown. */
};
static_assert(offsetof(Object02032060, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02032060(Object02032060 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02032540()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_02032660 reads.
 *
 */
struct Object02032660 {
    uint8_t unknown_0x0000[0x10];
    uint8_t member_0x0010; /**< Read by auto_return_member_address_02032660; meaning unknown. */
};
static_assert(offsetof(Object02032660, member_0x0010) == 0x10);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02032660(Object02032660 *self)
{
    return &self->member_0x0010;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_020327c0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02032800()
{
}

/**
 *
 * The part of the object that auto_return_member_address_02032820 reads.
 *
 */
struct Object02032820 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_02032820; meaning unknown. */
};
static_assert(offsetof(Object02032820, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02032820(Object02032820 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02032b10()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02032b50()
{
}

/**
 *
 * The part of the object that auto_return_member_address_02032b70 reads.
 *
 */
struct Object02032b70 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_02032b70; meaning unknown. */
};
static_assert(offsetof(Object02032b70, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02032b70(Object02032b70 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_020347c0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_02034880 reads.
 *
 */
struct Object02034880 {
    uint8_t unknown_0x0000[0x10];
    uint8_t member_0x0010; /**< Read by auto_return_member_address_02034880; meaning unknown. */
};
static_assert(offsetof(Object02034880, member_0x0010) == 0x10);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02034880(Object02034880 *self)
{
    return &self->member_0x0010;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02034a00()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_02034ac0 reads.
 *
 */
struct Object02034ac0 {
    uint8_t unknown_0x0000[0x10];
    uint8_t member_0x0010; /**< Read by auto_return_member_address_02034ac0; meaning unknown. */
};
static_assert(offsetof(Object02034ac0, member_0x0010) == 0x10);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02034ac0(Object02034ac0 *self)
{
    return &self->member_0x0010;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02034b80()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02034bc0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_02034be0 reads.
 *
 */
struct Object02034be0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_02034be0; meaning unknown. */
};
static_assert(offsetof(Object02034be0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02034be0(Object02034be0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02034d10()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02034d50()
{
}

/**
 *
 * The part of the object that auto_return_member_address_02034d70 reads.
 *
 */
struct Object02034d70 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_02034d70; meaning unknown. */
};
static_assert(offsetof(Object02034d70, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02034d70(Object02034d70 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02034e50()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02034e90()
{
}

/**
 *
 * The part of the object that auto_return_member_address_02034eb0 reads.
 *
 */
struct Object02034eb0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_02034eb0; meaning unknown. */
};
static_assert(offsetof(Object02034eb0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02034eb0(Object02034eb0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02034f60()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02034fa0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_02034fc0 reads.
 *
 */
struct Object02034fc0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_02034fc0; meaning unknown. */
};
static_assert(offsetof(Object02034fc0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02034fc0(Object02034fc0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02035060()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_020350a0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_020350c0 reads.
 *
 */
struct Object020350c0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_020350c0; meaning unknown. */
};
static_assert(offsetof(Object020350c0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_020350c0(Object020350c0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0203d960()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0203d9a0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_0203d9c0 reads.
 *
 */
struct Object0203d9c0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_0203d9c0; meaning unknown. */
};
static_assert(offsetof(Object0203d9c0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0203d9c0(Object0203d9c0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0203dec0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_0203df80 reads.
 *
 */
struct Object0203df80 {
    uint8_t unknown_0x0000[0x10];
    uint8_t member_0x0010; /**< Read by auto_return_member_address_0203df80; meaning unknown. */
};
static_assert(offsetof(Object0203df80, member_0x0010) == 0x10);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0203df80(Object0203df80 *self)
{
    return &self->member_0x0010;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0203e310()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0203e350()
{
}

/**
 *
 * The part of the object that auto_return_member_address_0203e370 reads.
 *
 */
struct Object0203e370 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_0203e370; meaning unknown. */
};
static_assert(offsetof(Object0203e370, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0203e370(Object0203e370 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0203e8a0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0203e8e0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_0203e900 reads.
 *
 */
struct Object0203e900 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_0203e900; meaning unknown. */
};
static_assert(offsetof(Object0203e900, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0203e900(Object0203e900 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0203ea90()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0203ead0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_0203eaf0 reads.
 *
 */
struct Object0203eaf0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_0203eaf0; meaning unknown. */
};
static_assert(offsetof(Object0203eaf0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0203eaf0(Object0203eaf0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0203ec50()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0203ec90()
{
}

/**
 *
 * The part of the object that auto_return_member_address_0203ecb0 reads.
 *
 */
struct Object0203ecb0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_0203ecb0; meaning unknown. */
};
static_assert(offsetof(Object0203ecb0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0203ecb0(Object0203ecb0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0203ed70()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0203edb0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_0203edd0 reads.
 *
 */
struct Object0203edd0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_0203edd0; meaning unknown. */
};
static_assert(offsetof(Object0203edd0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0203edd0(Object0203edd0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0203f0e0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0203f120()
{
}

/**
 *
 * The part of the object that auto_return_member_address_0203f140 reads.
 *
 */
struct Object0203f140 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_0203f140; meaning unknown. */
};
static_assert(offsetof(Object0203f140, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0203f140(Object0203f140 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0203f220()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0203f260()
{
}

/**
 *
 * The part of the object that auto_return_member_address_0203f280 reads.
 *
 */
struct Object0203f280 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_0203f280; meaning unknown. */
};
static_assert(offsetof(Object0203f280, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0203f280(Object0203f280 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0203f840()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0203f880()
{
}

/**
 *
 * The part of the object that auto_return_member_address_0203f8a0 reads.
 *
 */
struct Object0203f8a0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_0203f8a0; meaning unknown. */
};
static_assert(offsetof(Object0203f8a0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0203f8a0(Object0203f8a0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0203f980()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0203f9c0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_0203f9e0 reads.
 *
 */
struct Object0203f9e0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_0203f9e0; meaning unknown. */
};
static_assert(offsetof(Object0203f9e0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0203f9e0(Object0203f9e0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0203fad0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0203fb10()
{
}

/**
 *
 * The part of the object that auto_return_member_address_0203fb30 reads.
 *
 */
struct Object0203fb30 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_0203fb30; meaning unknown. */
};
static_assert(offsetof(Object0203fb30, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0203fb30(Object0203fb30 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0203fda0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0203fde0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_0203fe00 reads.
 *
 */
struct Object0203fe00 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_0203fe00; meaning unknown. */
};
static_assert(offsetof(Object0203fe00, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0203fe00(Object0203fe00 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0203ff40()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0203ff80()
{
}

/**
 *
 * The part of the object that auto_return_member_address_0203ffa0 reads.
 *
 */
struct Object0203ffa0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_0203ffa0; meaning unknown. */
};
static_assert(offsetof(Object0203ffa0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0203ffa0(Object0203ffa0 *self)
{
    return &self->member_0x0008;
}
