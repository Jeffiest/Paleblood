// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_024507e0 reads.
 *
 */
struct Object024507e0 {
    uint8_t unknown_0x0000[0x18];
    uint32_t value_0x0018; /**< Read by auto_return_field_024507e0; meaning unknown. */
};
static_assert(offsetof(Object024507e0, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_024507e0(const Object024507e0 *self)
{
    return self->value_0x0018;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02450a10 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02450a10()
{
    return value_02450a10;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02450a20 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02450a20()
{
    return value_02450a20;
}

/**
 *
 * The part of the object that auto_return_field_0245a0d0 reads.
 *
 */
struct Object0245a0d0 {
    uint8_t unknown_0x0000[0x58];
    uint32_t value_0x0058; /**< Read by auto_return_field_0245a0d0; meaning unknown. */
};
static_assert(offsetof(Object0245a0d0, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_0245a0d0(const Object0245a0d0 *self)
{
    return self->value_0x0058;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0245a1a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0245a1b0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0245a520()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0245a560()
{
}

/**
 *
 * The part of the object that auto_return_member_address_0245a580 reads.
 *
 */
struct Object0245a580 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_0245a580; meaning unknown. */
};
static_assert(offsetof(Object0245a580, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0245a580(Object0245a580 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0245a780()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0245a7c0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_0245a7e0 reads.
 *
 */
struct Object0245a7e0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_0245a7e0; meaning unknown. */
};
static_assert(offsetof(Object0245a7e0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0245a7e0(Object0245a7e0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0245a880()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0245a8c0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_0245a8e0 reads.
 *
 */
struct Object0245a8e0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_0245a8e0; meaning unknown. */
};
static_assert(offsetof(Object0245a8e0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0245a8e0(Object0245a8e0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0245aa00()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_0245aac0 reads.
 *
 */
struct Object0245aac0 {
    uint8_t unknown_0x0000[0x10];
    uint8_t member_0x0010; /**< Read by auto_return_member_address_0245aac0; meaning unknown. */
};
static_assert(offsetof(Object0245aac0, member_0x0010) == 0x10);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0245aac0(Object0245aac0 *self)
{
    return &self->member_0x0010;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0245ab70()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0245abb0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_0245abd0 reads.
 *
 */
struct Object0245abd0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_0245abd0; meaning unknown. */
};
static_assert(offsetof(Object0245abd0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0245abd0(Object0245abd0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0245ad50()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0245ad90()
{
}

/**
 *
 * The part of the object that auto_return_member_address_0245adb0 reads.
 *
 */
struct Object0245adb0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_0245adb0; meaning unknown. */
};
static_assert(offsetof(Object0245adb0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0245adb0(Object0245adb0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_0245b020 reads.
 *
 */
struct Object0245b020 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0245b020; meaning unknown. */
};
static_assert(offsetof(Object0245b020, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0245b020(const Object0245b020 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0245b030 reads.
 *
 */
struct Object0245b030 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0245b030; meaning unknown. */
};
static_assert(offsetof(Object0245b030, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0245b030(const Object0245b030 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0245b080()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0245b300 = 0x140;

extern "C" uint32_t bb_auto_return_constant_0245b300()
{
    return value_0245b300;
}

/**
 *
 * The part of the object that auto_return_field_0245b340 reads.
 *
 */
struct Object0245b340 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0245b340; meaning unknown. */
};
static_assert(offsetof(Object0245b340, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0245b340(const Object0245b340 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0245b350 reads.
 *
 */
struct Object0245b350 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0245b350; meaning unknown. */
};
static_assert(offsetof(Object0245b350, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0245b350(const Object0245b350 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0245b3a0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0245b620 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_0245b620()
{
    return value_0245b620;
}

/**
 *
 * The part of the object that auto_return_field_0245b660 reads.
 *
 */
struct Object0245b660 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0245b660; meaning unknown. */
};
static_assert(offsetof(Object0245b660, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0245b660(const Object0245b660 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0245b670 reads.
 *
 */
struct Object0245b670 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0245b670; meaning unknown. */
};
static_assert(offsetof(Object0245b670, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0245b670(const Object0245b670 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0245b6c0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0245b940 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_0245b940()
{
    return value_0245b940;
}

/**
 *
 * The part of the object that auto_return_field_0245b980 reads.
 *
 */
struct Object0245b980 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0245b980; meaning unknown. */
};
static_assert(offsetof(Object0245b980, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0245b980(const Object0245b980 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0245b990 reads.
 *
 */
struct Object0245b990 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0245b990; meaning unknown. */
};
static_assert(offsetof(Object0245b990, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0245b990(const Object0245b990 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0245b9e0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0245bc60 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_0245bc60()
{
    return value_0245bc60;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0245c710()
{
}
