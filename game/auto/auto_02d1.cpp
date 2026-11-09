// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_02d10630 reads.
 *
 */
struct Object02d10630 {
    uint8_t unknown_0x0000[0x20];
    uint64_t value_0x0020; /**< Read by auto_return_field_02d10630; meaning unknown. */
};
static_assert(offsetof(Object02d10630, value_0x0020) == 0x20);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d10630(const Object02d10630 *self)
{
    return self->value_0x0020;
}

/**
 *
 * The part of the object that auto_return_field_02d12220 reads.
 *
 */
struct Object02d12220 {
    uint8_t unknown_0x0000[0x20];
    uint64_t value_0x0020; /**< Read by auto_return_field_02d12220; meaning unknown. */
};
static_assert(offsetof(Object02d12220, value_0x0020) == 0x20);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d12220(const Object02d12220 *self)
{
    return self->value_0x0020;
}

/**
 *
 * The part of the object that auto_return_field_02d13e40 reads.
 *
 */
struct Object02d13e40 {
    uint8_t unknown_0x0000[0x20];
    uint64_t value_0x0020; /**< Read by auto_return_field_02d13e40; meaning unknown. */
};
static_assert(offsetof(Object02d13e40, value_0x0020) == 0x20);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d13e40(const Object02d13e40 *self)
{
    return self->value_0x0020;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d15860()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d15dc0()
{
}

/**
 *
 * The part of the object that auto_return_field_02d16580 reads.
 *
 */
struct Object02d16580 {
    uint8_t unknown_0x0000[0x20];
    uint64_t value_0x0020; /**< Read by auto_return_field_02d16580; meaning unknown. */
};
static_assert(offsetof(Object02d16580, value_0x0020) == 0x20);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d16580(const Object02d16580 *self)
{
    return self->value_0x0020;
}

/**
 *
 * The part of the object that auto_return_member_address_02d1a230 reads.
 *
 */
struct Object02d1a230 {
    uint8_t unknown_0x0000[0x1c];
    uint8_t member_0x001c; /**< Read by auto_return_member_address_02d1a230; meaning unknown. */
};
static_assert(offsetof(Object02d1a230, member_0x001c) == 0x1c);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02d1a230(Object02d1a230 *self)
{
    return &self->member_0x001c;
}

/**
 *
 * The part of the object that auto_return_member_address_02d1a240 reads.
 *
 */
struct Object02d1a240 {
    uint8_t unknown_0x0000[0x20];
    uint8_t member_0x0020; /**< Read by auto_return_member_address_02d1a240; meaning unknown. */
};
static_assert(offsetof(Object02d1a240, member_0x0020) == 0x20);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02d1a240(Object02d1a240 *self)
{
    return &self->member_0x0020;
}

/**
 *
 * The part of the object that auto_return_member_address_02d1a250 reads.
 *
 */
struct Object02d1a250 {
    uint8_t unknown_0x0000[0x20];
    uint8_t member_0x0020; /**< Read by auto_return_member_address_02d1a250; meaning unknown. */
};
static_assert(offsetof(Object02d1a250, member_0x0020) == 0x20);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02d1a250(Object02d1a250 *self)
{
    return &self->member_0x0020;
}

/**
 *
 * The part of the object that auto_return_member_address_02d1a260 reads.
 *
 */
struct Object02d1a260 {
    uint8_t unknown_0x0000[0x20];
    uint8_t member_0x0020; /**< Read by auto_return_member_address_02d1a260; meaning unknown. */
};
static_assert(offsetof(Object02d1a260, member_0x0020) == 0x20);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02d1a260(Object02d1a260 *self)
{
    return &self->member_0x0020;
}

/**
 *
 * The part of the object that auto_return_member_address_02d1a270 reads.
 *
 */
struct Object02d1a270 {
    uint8_t unknown_0x0000[0x20];
    uint8_t member_0x0020; /**< Read by auto_return_member_address_02d1a270; meaning unknown. */
};
static_assert(offsetof(Object02d1a270, member_0x0020) == 0x20);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02d1a270(Object02d1a270 *self)
{
    return &self->member_0x0020;
}

/**
 *
 * The part of the object that auto_return_member_address_02d1a280 reads.
 *
 */
struct Object02d1a280 {
    uint8_t unknown_0x0000[0x1c];
    uint8_t member_0x001c; /**< Read by auto_return_member_address_02d1a280; meaning unknown. */
};
static_assert(offsetof(Object02d1a280, member_0x001c) == 0x1c);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02d1a280(Object02d1a280 *self)
{
    return &self->member_0x001c;
}

/**
 *
 * The part of the object that auto_return_member_address_02d1a290 reads.
 *
 */
struct Object02d1a290 {
    uint8_t unknown_0x0000[0x20];
    uint8_t member_0x0020; /**< Read by auto_return_member_address_02d1a290; meaning unknown. */
};
static_assert(offsetof(Object02d1a290, member_0x0020) == 0x20);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02d1a290(Object02d1a290 *self)
{
    return &self->member_0x0020;
}

/**
 *
 * The part of the object that auto_return_member_address_02d1a2a0 reads.
 *
 */
struct Object02d1a2a0 {
    uint8_t unknown_0x0000[0x1c];
    uint8_t member_0x001c; /**< Read by auto_return_member_address_02d1a2a0; meaning unknown. */
};
static_assert(offsetof(Object02d1a2a0, member_0x001c) == 0x1c);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02d1a2a0(Object02d1a2a0 *self)
{
    return &self->member_0x001c;
}

/**
 *
 * The part of the object that auto_return_member_address_02d1a2b0 reads.
 *
 */
struct Object02d1a2b0 {
    uint8_t unknown_0x0000[0x20];
    uint8_t member_0x0020; /**< Read by auto_return_member_address_02d1a2b0; meaning unknown. */
};
static_assert(offsetof(Object02d1a2b0, member_0x0020) == 0x20);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02d1a2b0(Object02d1a2b0 *self)
{
    return &self->member_0x0020;
}

/**
 *
 * The part of the object that auto_return_member_address_02d1a2c0 reads.
 *
 */
struct Object02d1a2c0 {
    uint8_t unknown_0x0000[0x1c];
    uint8_t member_0x001c; /**< Read by auto_return_member_address_02d1a2c0; meaning unknown. */
};
static_assert(offsetof(Object02d1a2c0, member_0x001c) == 0x1c);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02d1a2c0(Object02d1a2c0 *self)
{
    return &self->member_0x001c;
}

/**
 *
 * The part of the object that auto_return_member_address_02d1a2d0 reads.
 *
 */
struct Object02d1a2d0 {
    uint8_t unknown_0x0000[0x1c];
    uint8_t member_0x001c; /**< Read by auto_return_member_address_02d1a2d0; meaning unknown. */
};
static_assert(offsetof(Object02d1a2d0, member_0x001c) == 0x1c);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02d1a2d0(Object02d1a2d0 *self)
{
    return &self->member_0x001c;
}

/**
 *
 * The part of the object that auto_return_member_address_02d1a2e0 reads.
 *
 */
struct Object02d1a2e0 {
    uint8_t unknown_0x0000[0x1c];
    uint8_t member_0x001c; /**< Read by auto_return_member_address_02d1a2e0; meaning unknown. */
};
static_assert(offsetof(Object02d1a2e0, member_0x001c) == 0x1c);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02d1a2e0(Object02d1a2e0 *self)
{
    return &self->member_0x001c;
}

/**
 *
 * The part of the object that auto_return_member_address_02d1a2f0 reads.
 *
 */
struct Object02d1a2f0 {
    uint8_t unknown_0x0000[0x20];
    uint8_t member_0x0020; /**< Read by auto_return_member_address_02d1a2f0; meaning unknown. */
};
static_assert(offsetof(Object02d1a2f0, member_0x0020) == 0x20);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02d1a2f0(Object02d1a2f0 *self)
{
    return &self->member_0x0020;
}

/**
 *
 * The part of the object that auto_return_member_address_02d1a300 reads.
 *
 */
struct Object02d1a300 {
    uint8_t unknown_0x0000[0x1c];
    uint8_t member_0x001c; /**< Read by auto_return_member_address_02d1a300; meaning unknown. */
};
static_assert(offsetof(Object02d1a300, member_0x001c) == 0x1c);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02d1a300(Object02d1a300 *self)
{
    return &self->member_0x001c;
}

/**
 *
 * The part of the object that auto_return_member_address_02d1a310 reads.
 *
 */
struct Object02d1a310 {
    uint8_t unknown_0x0000[0x1c];
    uint8_t member_0x001c; /**< Read by auto_return_member_address_02d1a310; meaning unknown. */
};
static_assert(offsetof(Object02d1a310, member_0x001c) == 0x1c);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02d1a310(Object02d1a310 *self)
{
    return &self->member_0x001c;
}

/**
 *
 * The part of the object that auto_return_member_address_02d1a320 reads.
 *
 */
struct Object02d1a320 {
    uint8_t unknown_0x0000[0x1c];
    uint8_t member_0x001c; /**< Read by auto_return_member_address_02d1a320; meaning unknown. */
};
static_assert(offsetof(Object02d1a320, member_0x001c) == 0x1c);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02d1a320(Object02d1a320 *self)
{
    return &self->member_0x001c;
}

/**
 *
 * The part of the object that auto_return_field_02d1b8c0 reads.
 *
 */
struct Object02d1b8c0 {
    uint8_t unknown_0x0000[0x28];
    uint64_t value_0x0028; /**< Read by auto_return_field_02d1b8c0; meaning unknown. */
};
static_assert(offsetof(Object02d1b8c0, value_0x0028) == 0x28);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d1b8c0(const Object02d1b8c0 *self)
{
    return self->value_0x0028;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02d1b900 = 0x4;

extern "C" uint32_t bb_auto_return_constant_02d1b900()
{
    return value_02d1b900;
}

/**
 *
 * The part of the object that auto_return_field_02d1d720 reads.
 *
 */
struct Object02d1d720 {
    uint8_t unknown_0x0000[0x28];
    uint64_t value_0x0028; /**< Read by auto_return_field_02d1d720; meaning unknown. */
};
static_assert(offsetof(Object02d1d720, value_0x0028) == 0x28);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d1d720(const Object02d1d720 *self)
{
    return self->value_0x0028;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02d1d760 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02d1d760()
{
    return value_02d1d760;
}

/**
 *
 * The part of the object that auto_return_field_02d1e3e0 reads.
 *
 */
struct Object02d1e3e0 {
    uint8_t unknown_0x0000[0x28];
    uint64_t value_0x0028; /**< Read by auto_return_field_02d1e3e0; meaning unknown. */
};
static_assert(offsetof(Object02d1e3e0, value_0x0028) == 0x28);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d1e3e0(const Object02d1e3e0 *self)
{
    return self->value_0x0028;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02d1e420 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02d1e420()
{
    return value_02d1e420;
}

/**
 *
 * The part of the object that auto_return_field_02d1f0a0 reads.
 *
 */
struct Object02d1f0a0 {
    uint8_t unknown_0x0000[0x28];
    uint64_t value_0x0028; /**< Read by auto_return_field_02d1f0a0; meaning unknown. */
};
static_assert(offsetof(Object02d1f0a0, value_0x0028) == 0x28);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d1f0a0(const Object02d1f0a0 *self)
{
    return self->value_0x0028;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02d1f0e0 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02d1f0e0()
{
    return value_02d1f0e0;
}

/**
 *
 * The part of the object that auto_return_field_02d1fe30 reads.
 *
 */
struct Object02d1fe30 {
    uint8_t unknown_0x0000[0x28];
    uint64_t value_0x0028; /**< Read by auto_return_field_02d1fe30; meaning unknown. */
};
static_assert(offsetof(Object02d1fe30, value_0x0028) == 0x28);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d1fe30(const Object02d1fe30 *self)
{
    return self->value_0x0028;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02d1fe70 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02d1fe70()
{
    return value_02d1fe70;
}
