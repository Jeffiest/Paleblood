// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_026f2860 reads.
 *
 */
struct Object026f2860 {
    uint8_t unknown_0x0000[0x13b0];
    uint64_t value_0x13b0; /**< Read by auto_return_field_026f2860; meaning unknown. */
};
static_assert(offsetof(Object026f2860, value_0x13b0) == 0x13b0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_026f2860(const Object026f2860 *self)
{
    return self->value_0x13b0;
}

/**
 *
 * The part of the object that auto_return_field_026f2870 reads.
 *
 */
struct Object026f2870 {
    uint8_t unknown_0x0000[0x13b8];
    uint64_t value_0x13b8; /**< Read by auto_return_field_026f2870; meaning unknown. */
};
static_assert(offsetof(Object026f2870, value_0x13b8) == 0x13b8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_026f2870(const Object026f2870 *self)
{
    return self->value_0x13b8;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_026f3990()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_026f3a90()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_026f3ab0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_026f3ba0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_026f7810()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_026f7840 reads.
 *
 */
struct Object026f7840 {
    uint8_t unknown_0x0000[0x28];
    uint32_t value_0x0028; /**< Read by auto_return_field_026f7840; meaning unknown. */
};
static_assert(offsetof(Object026f7840, value_0x0028) == 0x28);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_026f7840(const Object026f7840 *self)
{
    return self->value_0x0028;
}

/**
 *
 * The part of the object that auto_return_member_address_026f7850 reads.
 *
 */
struct Object026f7850 {
    uint8_t unknown_0x0000[0x2c];
    uint8_t member_0x002c; /**< Read by auto_return_member_address_026f7850; meaning unknown. */
};
static_assert(offsetof(Object026f7850, member_0x002c) == 0x2c);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_026f7850(Object026f7850 *self)
{
    return &self->member_0x002c;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_026f78a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_026f7970()
{
}

/**
 *
 * The part of the object that auto_return_field_026f7ec0 reads.
 *
 */
struct Object026f7ec0 {
    uint8_t unknown_0x0000[0x10];
    uint32_t value_0x0010; /**< Read by auto_return_field_026f7ec0; meaning unknown. */
};
static_assert(offsetof(Object026f7ec0, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_026f7ec0(const Object026f7ec0 *self)
{
    return self->value_0x0010;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_026f83f0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_026f8420()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_026f8430 = 0x1;

extern "C" uint32_t bb_auto_return_constant_026f8430()
{
    return value_026f8430;
}

/**
 *
 * The part of the object that auto_return_member_address_026f8440 reads.
 *
 */
struct Object026f8440 {
    uint8_t unknown_0x0000[0x10];
    uint8_t member_0x0010; /**< Read by auto_return_member_address_026f8440; meaning unknown. */
};
static_assert(offsetof(Object026f8440, member_0x0010) == 0x10);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_026f8440(Object026f8440 *self)
{
    return &self->member_0x0010;
}

/**
 *
 * The part of the object that auto_return_member_address_026f8450 reads.
 *
 */
struct Object026f8450 {
    uint8_t unknown_0x0000[0x10];
    uint8_t member_0x0010; /**< Read by auto_return_member_address_026f8450; meaning unknown. */
};
static_assert(offsetof(Object026f8450, member_0x0010) == 0x10);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_026f8450(Object026f8450 *self)
{
    return &self->member_0x0010;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_026f86a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_026f8930()
{
}

/**
 *
 * The part of the object that auto_return_field_026f8a70 reads.
 *
 */
struct Object026f8a70 {
    uint8_t unknown_0x0000[0xf0];
    uint64_t value_0x00f0; /**< Read by auto_return_field_026f8a70; meaning unknown. */
};
static_assert(offsetof(Object026f8a70, value_0x00f0) == 0xf0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_026f8a70(const Object026f8a70 *self)
{
    return self->value_0x00f0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_026f9d00()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_026f9d40()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_026fa8e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_026fb020()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_026fb030()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_026fc280()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_026fcec0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_026fd190()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_026fd1a0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_026fd1a0()
{
    return value_026fd1a0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_026fd1b0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_026fd1b0()
{
    return value_026fd1b0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_026fd1c0()
{
    return 0;
}
