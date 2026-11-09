// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_01d07790 reads.
 *
 */
struct Object01d07790 {
    uint8_t unknown_0x0000[0x3c8];
    uint64_t value_0x03c8; /**< Read by auto_return_field_01d07790; meaning unknown. */
};
static_assert(offsetof(Object01d07790, value_0x03c8) == 0x3c8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d07790(const Object01d07790 *self)
{
    return self->value_0x03c8;
}

/**
 *
 * The part of the object that auto_return_field_01d077a0 reads.
 *
 */
struct Object01d077a0 {
    uint8_t unknown_0x0000[0x440];
    uint64_t value_0x0440; /**< Read by auto_return_field_01d077a0; meaning unknown. */
};
static_assert(offsetof(Object01d077a0, value_0x0440) == 0x440);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d077a0(const Object01d077a0 *self)
{
    return self->value_0x0440;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_01d077b0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_01d077b0()
{
    return value_01d077b0;
}

/**
 *
 * The part of the object that auto_return_field_01d077d0 reads.
 *
 */
struct Object01d077d0 {
    uint8_t unknown_0x0000[0x4b8];
    uint64_t value_0x04b8; /**< Read by auto_return_field_01d077d0; meaning unknown. */
};
static_assert(offsetof(Object01d077d0, value_0x04b8) == 0x4b8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d077d0(const Object01d077d0 *self)
{
    return self->value_0x04b8;
}

/**
 *
 * The part of the object that auto_return_field_01d077e0 reads.
 *
 */
struct Object01d077e0 {
    uint8_t unknown_0x0000[0x4b8];
    uint64_t value_0x04b8; /**< Read by auto_return_field_01d077e0; meaning unknown. */
};
static_assert(offsetof(Object01d077e0, value_0x04b8) == 0x4b8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d077e0(const Object01d077e0 *self)
{
    return self->value_0x04b8;
}

/**
 *
 * The part of the object that auto_return_field_01d07930 reads.
 *
 */
struct Object01d07930 {
    uint8_t unknown_0x0000[0x530];
    uint32_t value_0x0530; /**< Read by auto_return_field_01d07930; meaning unknown. */
};
static_assert(offsetof(Object01d07930, value_0x0530) == 0x530);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01d07930(const Object01d07930 *self)
{
    return self->value_0x0530;
}

/**
 *
 * The part of the object that auto_return_field_01d07980 reads.
 *
 */
struct Object01d07980 {
    uint8_t unknown_0x0000[0x498];
    uint64_t value_0x0498; /**< Read by auto_return_field_01d07980; meaning unknown. */
};
static_assert(offsetof(Object01d07980, value_0x0498) == 0x498);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d07980(const Object01d07980 *self)
{
    return self->value_0x0498;
}

/**
 *
 * The part of the object that auto_return_field_01d07990 reads.
 *
 */
struct Object01d07990 {
    uint8_t unknown_0x0000[0x4a0];
    uint32_t value_0x04a0; /**< Read by auto_return_field_01d07990; meaning unknown. */
};
static_assert(offsetof(Object01d07990, value_0x04a0) == 0x4a0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01d07990(const Object01d07990 *self)
{
    return self->value_0x04a0;
}

/**
 *
 * The part of the object that auto_return_field_01d079a0 reads.
 *
 */
struct Object01d079a0 {
    uint8_t unknown_0x0000[0x528];
    uint32_t value_0x0528; /**< Read by auto_return_field_01d079a0; meaning unknown. */
};
static_assert(offsetof(Object01d079a0, value_0x0528) == 0x528);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01d079a0(const Object01d079a0 *self)
{
    return self->value_0x0528;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d079b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d07a10()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d07a70()
{
}

/**
 *
 * The part of the object that auto_return_field_01d07af0 reads.
 *
 */
struct Object01d07af0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d07af0; meaning unknown. */
};
static_assert(offsetof(Object01d07af0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d07af0(const Object01d07af0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d07b00 reads.
 *
 */
struct Object01d07b00 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d07b00; meaning unknown. */
};
static_assert(offsetof(Object01d07b00, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d07b00(const Object01d07b00 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d07b50()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d07bf0 = 0x570;

extern "C" uint32_t bb_auto_return_constant_01d07bf0()
{
    return value_01d07bf0;
}

/**
 *
 * The part of the object that auto_return_field_01d086a0 reads.
 *
 */
struct Object01d086a0 {
    uint8_t unknown_0x0000[0x570];
    uint8_t value_0x0570; /**< Read by auto_return_field_01d086a0; meaning unknown. */
};
static_assert(offsetof(Object01d086a0, value_0x0570) == 0x570);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_01d086a0(const Object01d086a0 *self)
{
    return self->value_0x0570;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_01d086c0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_01d086c0()
{
    return value_01d086c0;
}

/**
 *
 * The part of the object that auto_return_field_01d08e60 reads.
 *
 */
struct Object01d08e60 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d08e60; meaning unknown. */
};
static_assert(offsetof(Object01d08e60, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d08e60(const Object01d08e60 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d08e70 reads.
 *
 */
struct Object01d08e70 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d08e70; meaning unknown. */
};
static_assert(offsetof(Object01d08e70, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d08e70(const Object01d08e70 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d08ec0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d09140 = 0x580;

extern "C" uint32_t bb_auto_return_constant_01d09140()
{
    return value_01d09140;
}

/**
 *
 * The part of the object that auto_return_field_01d0a720 reads.
 *
 */
struct Object01d0a720 {
    uint8_t unknown_0x0000[0x18];
    uint32_t value_0x0018; /**< Read by auto_return_field_01d0a720; meaning unknown. */
};
static_assert(offsetof(Object01d0a720, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01d0a720(const Object01d0a720 *self)
{
    return self->value_0x0018;
}

/**
 *
 * The part of the object that auto_return_member_address_01d0a820 reads.
 *
 */
struct Object01d0a820 {
    uint8_t unknown_0x0000[0x30];
    uint8_t member_0x0030; /**< Read by auto_return_member_address_01d0a820; meaning unknown. */
};
static_assert(offsetof(Object01d0a820, member_0x0030) == 0x30);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01d0a820(Object01d0a820 *self)
{
    return &self->member_0x0030;
}

/**
 *
 * The part of the object that auto_return_member_address_01d0a830 reads.
 *
 */
struct Object01d0a830 {
    uint8_t unknown_0x0000[0x3c];
    uint8_t member_0x003c; /**< Read by auto_return_member_address_01d0a830; meaning unknown. */
};
static_assert(offsetof(Object01d0a830, member_0x003c) == 0x3c);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01d0a830(Object01d0a830 *self)
{
    return &self->member_0x003c;
}

/**
 *
 * The part of the object that auto_return_member_address_01d0a840 reads.
 *
 */
struct Object01d0a840 {
    uint8_t unknown_0x0000[0x48];
    uint8_t member_0x0048; /**< Read by auto_return_member_address_01d0a840; meaning unknown. */
};
static_assert(offsetof(Object01d0a840, member_0x0048) == 0x48);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01d0a840(Object01d0a840 *self)
{
    return &self->member_0x0048;
}

/**
 *
 * The part of the object that auto_return_field_01d0a850 reads.
 *
 */
struct Object01d0a850 {
    uint8_t unknown_0x0000[0xd0];
    uint8_t value_0x00d0; /**< Read by auto_return_field_01d0a850; meaning unknown. */
};
static_assert(offsetof(Object01d0a850, value_0x00d0) == 0xd0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_01d0a850(const Object01d0a850 *self)
{
    return self->value_0x00d0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d0b0d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d0b130()
{
}

/**
 *
 * The part of the object that auto_return_field_01d0b1c0 reads.
 *
 */
struct Object01d0b1c0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d0b1c0; meaning unknown. */
};
static_assert(offsetof(Object01d0b1c0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d0b1c0(const Object01d0b1c0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d0b1d0 reads.
 *
 */
struct Object01d0b1d0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d0b1d0; meaning unknown. */
};
static_assert(offsetof(Object01d0b1d0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d0b1d0(const Object01d0b1d0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d0b220()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d0b4a0 = 0xe8;

extern "C" uint32_t bb_auto_return_constant_01d0b4a0()
{
    return value_01d0b4a0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d0bc80 = 0xffffffff;

extern "C" uint32_t bb_auto_return_constant_01d0bc80()
{
    return value_01d0bc80;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d0bca0 = 0xffffffff;

extern "C" uint32_t bb_auto_return_constant_01d0bca0()
{
    return value_01d0bca0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d0bf80()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d0bf90()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d0e660()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d0e670()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_01d0e680 = 0x1;

extern "C" uint8_t bb_auto_return_constant_01d0e680()
{
    return value_01d0e680;
}
