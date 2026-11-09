// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f10ba0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f123d0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f12410()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f12430 reads.
 *
 */
struct Object01f12430 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f12430; meaning unknown. */
};
static_assert(offsetof(Object01f12430, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f12430(Object01f12430 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f12800()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f12840()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f12860 reads.
 *
 */
struct Object01f12860 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f12860; meaning unknown. */
};
static_assert(offsetof(Object01f12860, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f12860(Object01f12860 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f12910()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f12950()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f12970 reads.
 *
 */
struct Object01f12970 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f12970; meaning unknown. */
};
static_assert(offsetof(Object01f12970, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f12970(Object01f12970 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f15a50()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f16950()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f16990()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f169b0 reads.
 *
 */
struct Object01f169b0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f169b0; meaning unknown. */
};
static_assert(offsetof(Object01f169b0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f169b0(Object01f169b0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f16ca0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f16ce0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f16d00 reads.
 *
 */
struct Object01f16d00 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f16d00; meaning unknown. */
};
static_assert(offsetof(Object01f16d00, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f16d00(Object01f16d00 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * The part of the object that auto_return_member_address_01f1b330 reads.
 *
 */
struct Object01f1b330 {
    uint8_t unknown_0x0000[0xe50];
    uint8_t member_0x0e50; /**< Read by auto_return_member_address_01f1b330; meaning unknown. */
};
static_assert(offsetof(Object01f1b330, member_0x0e50) == 0xe50);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f1b330(Object01f1b330 *self)
{
    return &self->member_0x0e50;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_01f1b340 = 0x1;

extern "C" uint8_t bb_auto_return_constant_01f1b340()
{
    return value_01f1b340;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f1b350()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f1e070 reads.
 *
 */
struct Object01f1e070 {
    uint8_t unknown_0x0000[0xdf0];
    uint8_t member_0x0df0; /**< Read by auto_return_member_address_01f1e070; meaning unknown. */
};
static_assert(offsetof(Object01f1e070, member_0x0df0) == 0xdf0);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f1e070(Object01f1e070 *self)
{
    return &self->member_0x0df0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_01f1e080 = 0x1;

extern "C" uint8_t bb_auto_return_constant_01f1e080()
{
    return value_01f1e080;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f1e160()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f1e1a0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f1e1c0 reads.
 *
 */
struct Object01f1e1c0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f1e1c0; meaning unknown. */
};
static_assert(offsetof(Object01f1e1c0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f1e1c0(Object01f1e1c0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f1e280()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f1e2c0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f1e2e0 reads.
 *
 */
struct Object01f1e2e0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f1e2e0; meaning unknown. */
};
static_assert(offsetof(Object01f1e2e0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f1e2e0(Object01f1e2e0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f1e390()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f1e3d0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f1e3f0 reads.
 *
 */
struct Object01f1e3f0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f1e3f0; meaning unknown. */
};
static_assert(offsetof(Object01f1e3f0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f1e3f0(Object01f1e3f0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f1e4b0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f1e4f0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f1e510 reads.
 *
 */
struct Object01f1e510 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f1e510; meaning unknown. */
};
static_assert(offsetof(Object01f1e510, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f1e510(Object01f1e510 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f1e5d0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f1e610()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f1e630 reads.
 *
 */
struct Object01f1e630 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f1e630; meaning unknown. */
};
static_assert(offsetof(Object01f1e630, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f1e630(Object01f1e630 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f1e6f0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f1e730()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f1e750 reads.
 *
 */
struct Object01f1e750 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f1e750; meaning unknown. */
};
static_assert(offsetof(Object01f1e750, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f1e750(Object01f1e750 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f1e810()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f1e850()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f1e870 reads.
 *
 */
struct Object01f1e870 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f1e870; meaning unknown. */
};
static_assert(offsetof(Object01f1e870, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f1e870(Object01f1e870 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f1ee80()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f1eec0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f1eee0 reads.
 *
 */
struct Object01f1eee0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f1eee0; meaning unknown. */
};
static_assert(offsetof(Object01f1eee0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f1eee0(Object01f1eee0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f1f1b0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f1f1f0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f1f210 reads.
 *
 */
struct Object01f1f210 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f1f210; meaning unknown. */
};
static_assert(offsetof(Object01f1f210, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f1f210(Object01f1f210 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f1f300()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f1f340()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f1f360 reads.
 *
 */
struct Object01f1f360 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f1f360; meaning unknown. */
};
static_assert(offsetof(Object01f1f360, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f1f360(Object01f1f360 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f1f690()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f1f6d0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f1f6f0 reads.
 *
 */
struct Object01f1f6f0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f1f6f0; meaning unknown. */
};
static_assert(offsetof(Object01f1f6f0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f1f6f0(Object01f1f6f0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f1fb80()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f1fbc0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f1fbe0 reads.
 *
 */
struct Object01f1fbe0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f1fbe0; meaning unknown. */
};
static_assert(offsetof(Object01f1fbe0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f1fbe0(Object01f1fbe0 *self)
{
    return &self->member_0x0008;
}
