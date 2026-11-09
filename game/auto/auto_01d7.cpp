// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_01d72190 reads.
 *
 */
struct Object01d72190 {
    uint8_t unknown_0x0000[0x58];
    uint32_t value_0x0058; /**< Read by auto_return_field_01d72190; meaning unknown. */
};
static_assert(offsetof(Object01d72190, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01d72190(const Object01d72190 *self)
{
    return self->value_0x0058;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d72260()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d72270()
{
}

/**
 *
 * The part of the object that auto_return_field_01d72510 reads.
 *
 */
struct Object01d72510 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d72510; meaning unknown. */
};
static_assert(offsetof(Object01d72510, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d72510(const Object01d72510 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d72520 reads.
 *
 */
struct Object01d72520 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d72520; meaning unknown. */
};
static_assert(offsetof(Object01d72520, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d72520(const Object01d72520 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d72570()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d727f0 = 0x108;

extern "C" uint32_t bb_auto_return_constant_01d727f0()
{
    return value_01d727f0;
}

/**
 *
 * The part of the object that auto_return_field_01d72830 reads.
 *
 */
struct Object01d72830 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d72830; meaning unknown. */
};
static_assert(offsetof(Object01d72830, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d72830(const Object01d72830 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d72840 reads.
 *
 */
struct Object01d72840 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d72840; meaning unknown. */
};
static_assert(offsetof(Object01d72840, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d72840(const Object01d72840 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d72890()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d72b10 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01d72b10()
{
    return value_01d72b10;
}

/**
 *
 * The part of the object that auto_return_field_01d72b50 reads.
 *
 */
struct Object01d72b50 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d72b50; meaning unknown. */
};
static_assert(offsetof(Object01d72b50, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d72b50(const Object01d72b50 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d72b60 reads.
 *
 */
struct Object01d72b60 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d72b60; meaning unknown. */
};
static_assert(offsetof(Object01d72b60, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d72b60(const Object01d72b60 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d72bb0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d72e30 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01d72e30()
{
    return value_01d72e30;
}

/**
 *
 * The part of the object that auto_return_field_01d72e70 reads.
 *
 */
struct Object01d72e70 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d72e70; meaning unknown. */
};
static_assert(offsetof(Object01d72e70, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d72e70(const Object01d72e70 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d72e80 reads.
 *
 */
struct Object01d72e80 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d72e80; meaning unknown. */
};
static_assert(offsetof(Object01d72e80, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d72e80(const Object01d72e80 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d72ed0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d73150 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01d73150()
{
    return value_01d73150;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d75cd0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d75da0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01d77fa0 reads.
 *
 */
struct Object01d77fa0 {
    uint8_t unknown_0x0000[0xd0];
    uint8_t member_0x00d0; /**< Read by auto_return_member_address_01d77fa0; meaning unknown. */
};
static_assert(offsetof(Object01d77fa0, member_0x00d0) == 0xd0);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01d77fa0(Object01d77fa0 *self)
{
    return &self->member_0x00d0;
}

/**
 *
 * The part of the object that auto_return_member_address_01d77fb0 reads.
 *
 */
struct Object01d77fb0 {
    uint8_t unknown_0x0000[0xd0];
    uint8_t member_0x00d0; /**< Read by auto_return_member_address_01d77fb0; meaning unknown. */
};
static_assert(offsetof(Object01d77fb0, member_0x00d0) == 0xd0);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01d77fb0(Object01d77fb0 *self)
{
    return &self->member_0x00d0;
}

/**
 *
 * The part of the object that auto_return_field_01d7a2a0 reads.
 *
 */
struct Object01d7a2a0 {
    uint8_t unknown_0x0000[0x58];
    uint32_t value_0x0058; /**< Read by auto_return_field_01d7a2a0; meaning unknown. */
};
static_assert(offsetof(Object01d7a2a0, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01d7a2a0(const Object01d7a2a0 *self)
{
    return self->value_0x0058;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d7a370()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d7a380()
{
}

/**
 *
 * The part of the object that auto_return_field_01d7a5f0 reads.
 *
 */
struct Object01d7a5f0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d7a5f0; meaning unknown. */
};
static_assert(offsetof(Object01d7a5f0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d7a5f0(const Object01d7a5f0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d7a600 reads.
 *
 */
struct Object01d7a600 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d7a600; meaning unknown. */
};
static_assert(offsetof(Object01d7a600, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d7a600(const Object01d7a600 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d7a650()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d7a8d0 = 0x210;

extern "C" uint32_t bb_auto_return_constant_01d7a8d0()
{
    return value_01d7a8d0;
}

/**
 *
 * The part of the object that auto_return_field_01d7a910 reads.
 *
 */
struct Object01d7a910 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d7a910; meaning unknown. */
};
static_assert(offsetof(Object01d7a910, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d7a910(const Object01d7a910 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d7a920 reads.
 *
 */
struct Object01d7a920 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d7a920; meaning unknown. */
};
static_assert(offsetof(Object01d7a920, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d7a920(const Object01d7a920 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d7a970()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d7abf0 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01d7abf0()
{
    return value_01d7abf0;
}

/**
 *
 * The part of the object that auto_return_field_01d7ac30 reads.
 *
 */
struct Object01d7ac30 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d7ac30; meaning unknown. */
};
static_assert(offsetof(Object01d7ac30, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d7ac30(const Object01d7ac30 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d7ac40 reads.
 *
 */
struct Object01d7ac40 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d7ac40; meaning unknown. */
};
static_assert(offsetof(Object01d7ac40, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d7ac40(const Object01d7ac40 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d7ac90()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d7af10 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01d7af10()
{
    return value_01d7af10;
}

/**
 *
 * The part of the object that auto_return_field_01d7af50 reads.
 *
 */
struct Object01d7af50 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d7af50; meaning unknown. */
};
static_assert(offsetof(Object01d7af50, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d7af50(const Object01d7af50 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d7af60 reads.
 *
 */
struct Object01d7af60 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d7af60; meaning unknown. */
};
static_assert(offsetof(Object01d7af60, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d7af60(const Object01d7af60 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d7afb0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d7b230 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01d7b230()
{
    return value_01d7b230;
}

/**
 *
 * The part of the object that auto_return_member_address_01d7c420 reads.
 *
 */
struct Object01d7c420 {
    uint8_t unknown_0x0000[0xd0];
    uint8_t member_0x00d0; /**< Read by auto_return_member_address_01d7c420; meaning unknown. */
};
static_assert(offsetof(Object01d7c420, member_0x00d0) == 0xd0);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01d7c420(Object01d7c420 *self)
{
    return &self->member_0x00d0;
}

/**
 *
 * The part of the object that auto_return_member_address_01d7c430 reads.
 *
 */
struct Object01d7c430 {
    uint8_t unknown_0x0000[0xd0];
    uint8_t member_0x00d0; /**< Read by auto_return_member_address_01d7c430; meaning unknown. */
};
static_assert(offsetof(Object01d7c430, member_0x00d0) == 0xd0);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01d7c430(Object01d7c430 *self)
{
    return &self->member_0x00d0;
}

/**
 *
 * The part of the object that auto_return_field_01d7f4c0 reads.
 *
 */
struct Object01d7f4c0 {
    uint8_t unknown_0x0000[0x58];
    uint32_t value_0x0058; /**< Read by auto_return_field_01d7f4c0; meaning unknown. */
};
static_assert(offsetof(Object01d7f4c0, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01d7f4c0(const Object01d7f4c0 *self)
{
    return self->value_0x0058;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d7f590()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d7f5a0()
{
}

/**
 *
 * The part of the object that auto_return_field_01d7f810 reads.
 *
 */
struct Object01d7f810 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d7f810; meaning unknown. */
};
static_assert(offsetof(Object01d7f810, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d7f810(const Object01d7f810 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d7f820 reads.
 *
 */
struct Object01d7f820 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d7f820; meaning unknown. */
};
static_assert(offsetof(Object01d7f820, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d7f820(const Object01d7f820 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d7f870()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d7faf0 = 0x3d0;

extern "C" uint32_t bb_auto_return_constant_01d7faf0()
{
    return value_01d7faf0;
}

/**
 *
 * The part of the object that auto_return_field_01d7fb30 reads.
 *
 */
struct Object01d7fb30 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d7fb30; meaning unknown. */
};
static_assert(offsetof(Object01d7fb30, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d7fb30(const Object01d7fb30 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d7fb40 reads.
 *
 */
struct Object01d7fb40 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d7fb40; meaning unknown. */
};
static_assert(offsetof(Object01d7fb40, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d7fb40(const Object01d7fb40 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d7fb90()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d7fe10 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01d7fe10()
{
    return value_01d7fe10;
}

/**
 *
 * The part of the object that auto_return_field_01d7fe50 reads.
 *
 */
struct Object01d7fe50 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d7fe50; meaning unknown. */
};
static_assert(offsetof(Object01d7fe50, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d7fe50(const Object01d7fe50 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d7fe60 reads.
 *
 */
struct Object01d7fe60 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d7fe60; meaning unknown. */
};
static_assert(offsetof(Object01d7fe60, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d7fe60(const Object01d7fe60 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d7feb0()
{
    return 0;
}
