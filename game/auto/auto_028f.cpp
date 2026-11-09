// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_028f01a0 reads.
 *
 */
struct Object028f01a0 {
    uint8_t unknown_0x0000[0x28];
    uint64_t value_0x0028; /**< Read by auto_return_field_028f01a0; meaning unknown. */
};
static_assert(offsetof(Object028f01a0, value_0x0028) == 0x28);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_028f01a0(const Object028f01a0 *self)
{
    return self->value_0x0028;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028f01b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028f0200()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028f0250()
{
}

/**
 *
 * The part of the object that auto_return_field_028f05c0 reads.
 *
 */
struct Object028f05c0 {
    uint8_t unknown_0x0000[0x10];
    uint64_t value_0x0010; /**< Read by auto_return_field_028f05c0; meaning unknown. */
};
static_assert(offsetof(Object028f05c0, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_028f05c0(const Object028f05c0 *self)
{
    return self->value_0x0010;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028f08d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028f09a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028f0db0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028f0e00()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028f0e50()
{
}

/**
 *
 * The part of the object that auto_return_member_address_028f1030 reads.
 *
 */
struct Object028f1030 {
    uint8_t unknown_0x0000[0x58];
    uint8_t member_0x0058; /**< Read by auto_return_member_address_028f1030; meaning unknown. */
};
static_assert(offsetof(Object028f1030, member_0x0058) == 0x58);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_028f1030(Object028f1030 *self)
{
    return &self->member_0x0058;
}

/**
 *
 * The part of the object that auto_return_field_028f10a0 reads.
 *
 */
struct Object028f10a0 {
    uint8_t unknown_0x0000[0x38];
    uint64_t value_0x0038; /**< Read by auto_return_field_028f10a0; meaning unknown. */
};
static_assert(offsetof(Object028f10a0, value_0x0038) == 0x38);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_028f10a0(const Object028f10a0 *self)
{
    return self->value_0x0038;
}

/**
 *
 * The part of the object that auto_return_field_028f11a0 reads.
 *
 */
struct Object028f11a0 {
    uint8_t unknown_0x0000[0x10];
    uint64_t value_0x0010; /**< Read by auto_return_field_028f11a0; meaning unknown. */
};
static_assert(offsetof(Object028f11a0, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_028f11a0(const Object028f11a0 *self)
{
    return self->value_0x0010;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028f1720()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028f1730()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028f1ec0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028f26d0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028f2a50()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028f2a60()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028f2a70()
{
}

/**
 *
 * The part of the object that auto_return_field_028f2cd0 reads.
 *
 */
struct Object028f2cd0 {
    uint8_t unknown_0x0000[0x18];
    uint64_t value_0x0018; /**< Read by auto_return_field_028f2cd0; meaning unknown. */
};
static_assert(offsetof(Object028f2cd0, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_028f2cd0(const Object028f2cd0 *self)
{
    return self->value_0x0018;
}

/**
 *
 * The part of the object that auto_return_member_address_028f3cb0 reads.
 *
 */
struct Object028f3cb0 {
    uint8_t unknown_0x0000[0x20];
    uint8_t member_0x0020; /**< Read by auto_return_member_address_028f3cb0; meaning unknown. */
};
static_assert(offsetof(Object028f3cb0, member_0x0020) == 0x20);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_028f3cb0(Object028f3cb0 *self)
{
    return &self->member_0x0020;
}

/**
 *
 * The part of the object that auto_return_field_028f49e0 reads.
 *
 */
struct Object028f49e0 {
    uint8_t unknown_0x0000[0x28];
    uint64_t value_0x0028; /**< Read by auto_return_field_028f49e0; meaning unknown. */
};
static_assert(offsetof(Object028f49e0, value_0x0028) == 0x28);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_028f49e0(const Object028f49e0 *self)
{
    return self->value_0x0028;
}

/**
 *
 * The part of the object that auto_return_field_028f4af0 reads.
 *
 */
struct Object028f4af0 {
    uint8_t unknown_0x0000[0x30];
    uint32_t value_0x0030; /**< Read by auto_return_field_028f4af0; meaning unknown. */
};
static_assert(offsetof(Object028f4af0, value_0x0030) == 0x30);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_028f4af0(const Object028f4af0 *self)
{
    return self->value_0x0030;
}

/**
 *
 * The part of the object that auto_return_field_028f4b00 reads.
 *
 */
struct Object028f4b00 {
    uint8_t unknown_0x0000[0x20];
    uint64_t value_0x0020; /**< Read by auto_return_field_028f4b00; meaning unknown. */
};
static_assert(offsetof(Object028f4b00, value_0x0020) == 0x20);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_028f4b00(const Object028f4b00 *self)
{
    return self->value_0x0020;
}

/**
 *
 * The part of the object that auto_return_field_028f4b10 reads.
 *
 */
struct Object028f4b10 {
    uint8_t unknown_0x0000[0x38];
    uint64_t value_0x0038; /**< Read by auto_return_field_028f4b10; meaning unknown. */
};
static_assert(offsetof(Object028f4b10, value_0x0038) == 0x38);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_028f4b10(const Object028f4b10 *self)
{
    return self->value_0x0038;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_028f4b20 = 0x1;

extern "C" uint32_t bb_auto_return_constant_028f4b20()
{
    return value_028f4b20;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028f4b30()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028f4bf0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028f4c00()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028f4c10()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028f4c20()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028f4c40()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028f4c50()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028f4c60()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028f4c70()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028f4c80()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028f4dc0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028f4dd0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028f4de0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028f4df0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028f4e00()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028f4e10()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028f4e20()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028f4e30()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028f4e40()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028f4e50()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028f4e60()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028f4e70()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028f4e80()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028f4e90()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028f4ea0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028f5080()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028f5990()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028f59a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028f59b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028f5b20()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028f5de0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028f5df0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028f5e00()
{
}

/**
 *
 * The part of the object that auto_return_field_028f5fa0 reads.
 *
 */
struct Object028f5fa0 {
    uint8_t unknown_0x0000[0x28];
    uint64_t value_0x0028; /**< Read by auto_return_field_028f5fa0; meaning unknown. */
};
static_assert(offsetof(Object028f5fa0, value_0x0028) == 0x28);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_028f5fa0(const Object028f5fa0 *self)
{
    return self->value_0x0028;
}

/**
 *
 * The part of the object that auto_return_field_028f6070 reads.
 *
 */
struct Object028f6070 {
    uint8_t unknown_0x0000[0x18];
    uint32_t value_0x0018; /**< Read by auto_return_field_028f6070; meaning unknown. */
};
static_assert(offsetof(Object028f6070, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_028f6070(const Object028f6070 *self)
{
    return self->value_0x0018;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028f6080()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_028f6090 reads.
 *
 */
struct Object028f6090 {
    uint8_t unknown_0x0000[0x20];
    uint64_t value_0x0020; /**< Read by auto_return_field_028f6090; meaning unknown. */
};
static_assert(offsetof(Object028f6090, value_0x0020) == 0x20);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_028f6090(const Object028f6090 *self)
{
    return self->value_0x0020;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_028f60a0 = 0x1;

extern "C" uint32_t bb_auto_return_constant_028f60a0()
{
    return value_028f60a0;
}

/**
 *
 * The part of the object that auto_return_field_028f6320 reads.
 *
 */
struct Object028f6320 {
    uint8_t unknown_0x0000[0x28];
    uint64_t value_0x0028; /**< Read by auto_return_field_028f6320; meaning unknown. */
};
static_assert(offsetof(Object028f6320, value_0x0028) == 0x28);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_028f6320(const Object028f6320 *self)
{
    return self->value_0x0028;
}

/**
 *
 * The part of the object that auto_return_field_028f63e0 reads.
 *
 */
struct Object028f63e0 {
    uint8_t unknown_0x0000[0x18];
    uint32_t value_0x0018; /**< Read by auto_return_field_028f63e0; meaning unknown. */
};
static_assert(offsetof(Object028f63e0, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_028f63e0(const Object028f63e0 *self)
{
    return self->value_0x0018;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028f63f0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_028f6400 reads.
 *
 */
struct Object028f6400 {
    uint8_t unknown_0x0000[0x20];
    uint64_t value_0x0020; /**< Read by auto_return_field_028f6400; meaning unknown. */
};
static_assert(offsetof(Object028f6400, value_0x0020) == 0x20);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_028f6400(const Object028f6400 *self)
{
    return self->value_0x0020;
}

/**
 *
 * The part of the object that auto_return_field_028f66f0 reads.
 *
 */
struct Object028f66f0 {
    uint8_t unknown_0x0000[0x28];
    uint64_t value_0x0028; /**< Read by auto_return_field_028f66f0; meaning unknown. */
};
static_assert(offsetof(Object028f66f0, value_0x0028) == 0x28);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_028f66f0(const Object028f66f0 *self)
{
    return self->value_0x0028;
}

/**
 *
 * The part of the object that auto_return_field_028f67c0 reads.
 *
 */
struct Object028f67c0 {
    uint8_t unknown_0x0000[0x18];
    uint32_t value_0x0018; /**< Read by auto_return_field_028f67c0; meaning unknown. */
};
static_assert(offsetof(Object028f67c0, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_028f67c0(const Object028f67c0 *self)
{
    return self->value_0x0018;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028f67d0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_028f67e0 reads.
 *
 */
struct Object028f67e0 {
    uint8_t unknown_0x0000[0x20];
    uint64_t value_0x0020; /**< Read by auto_return_field_028f67e0; meaning unknown. */
};
static_assert(offsetof(Object028f67e0, value_0x0020) == 0x20);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_028f67e0(const Object028f67e0 *self)
{
    return self->value_0x0020;
}

/**
 *
 * The part of the object that auto_return_field_028f6b20 reads.
 *
 */
struct Object028f6b20 {
    uint8_t unknown_0x0000[0x28];
    uint64_t value_0x0028; /**< Read by auto_return_field_028f6b20; meaning unknown. */
};
static_assert(offsetof(Object028f6b20, value_0x0028) == 0x28);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_028f6b20(const Object028f6b20 *self)
{
    return self->value_0x0028;
}

/**
 *
 * The part of the object that auto_return_field_028f6bf0 reads.
 *
 */
struct Object028f6bf0 {
    uint8_t unknown_0x0000[0x18];
    uint32_t value_0x0018; /**< Read by auto_return_field_028f6bf0; meaning unknown. */
};
static_assert(offsetof(Object028f6bf0, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_028f6bf0(const Object028f6bf0 *self)
{
    return self->value_0x0018;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028f6c00()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_028f6c10 reads.
 *
 */
struct Object028f6c10 {
    uint8_t unknown_0x0000[0x20];
    uint64_t value_0x0020; /**< Read by auto_return_field_028f6c10; meaning unknown. */
};
static_assert(offsetof(Object028f6c10, value_0x0020) == 0x20);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_028f6c10(const Object028f6c10 *self)
{
    return self->value_0x0020;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_028f6c20 = 0x1;

extern "C" uint32_t bb_auto_return_constant_028f6c20()
{
    return value_028f6c20;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028f70e0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_028f70f0 reads.
 *
 */
struct Object028f70f0 {
    uint8_t unknown_0x0000[0x10];
    uint64_t value_0x0010; /**< Read by auto_return_field_028f70f0; meaning unknown. */
};
static_assert(offsetof(Object028f70f0, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_028f70f0(const Object028f70f0 *self)
{
    return self->value_0x0010;
}

/**
 *
 * The part of the object that auto_return_field_028f75c0 reads.
 *
 */
struct Object028f75c0 {
    uint8_t unknown_0x0000[0x18];
    uint32_t value_0x0018; /**< Read by auto_return_field_028f75c0; meaning unknown. */
};
static_assert(offsetof(Object028f75c0, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_028f75c0(const Object028f75c0 *self)
{
    return self->value_0x0018;
}

/**
 *
 * The part of the object that auto_return_field_028f78f0 reads.
 *
 */
struct Object028f78f0 {
    uint8_t unknown_0x0000[0x10];
    uint64_t value_0x0010; /**< Read by auto_return_field_028f78f0; meaning unknown. */
};
static_assert(offsetof(Object028f78f0, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_028f78f0(const Object028f78f0 *self)
{
    return self->value_0x0010;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_028f7900 = 0x1;

extern "C" uint32_t bb_auto_return_constant_028f7900()
{
    return value_028f7900;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028f7d90()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028f7da0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_028f7e30 = 0x1;

extern "C" uint32_t bb_auto_return_constant_028f7e30()
{
    return value_028f7e30;
}

/**
 *
 * The part of the object that auto_return_field_028f81c0 reads.
 *
 */
struct Object028f81c0 {
    uint8_t unknown_0x0000[0x28];
    uint64_t value_0x0028; /**< Read by auto_return_field_028f81c0; meaning unknown. */
};
static_assert(offsetof(Object028f81c0, value_0x0028) == 0x28);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_028f81c0(const Object028f81c0 *self)
{
    return self->value_0x0028;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028f8300()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_028f8310 reads.
 *
 */
struct Object028f8310 {
    uint8_t unknown_0x0000[0x20];
    uint64_t value_0x0020; /**< Read by auto_return_field_028f8310; meaning unknown. */
};
static_assert(offsetof(Object028f8310, value_0x0020) == 0x20);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_028f8310(const Object028f8310 *self)
{
    return self->value_0x0020;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028f84b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028f84c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028f84d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028f84e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028f84f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028f8500()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028f8510()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028f8520()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028f8530()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028f8540()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028f85f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028f8680()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028f8690()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028f86a0()
{
}

/**
 *
 * The part of the object that auto_return_field_028f86b0 reads.
 *
 */
struct Object028f86b0 {
    uint8_t unknown_0x0000[0x20];
    uint32_t value_0x0020; /**< Read by auto_return_field_028f86b0; meaning unknown. */
};
static_assert(offsetof(Object028f86b0, value_0x0020) == 0x20);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_028f86b0(const Object028f86b0 *self)
{
    return self->value_0x0020;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028f86c0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_028f86d0 reads.
 *
 */
struct Object028f86d0 {
    uint8_t unknown_0x0000[0x10];
    uint64_t value_0x0010; /**< Read by auto_return_field_028f86d0; meaning unknown. */
};
static_assert(offsetof(Object028f86d0, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_028f86d0(const Object028f86d0 *self)
{
    return self->value_0x0010;
}

/**
 *
 * The part of the object that auto_return_field_028f88d0 reads.
 *
 */
struct Object028f88d0 {
    uint8_t unknown_0x0000[0x28];
    uint64_t value_0x0028; /**< Read by auto_return_field_028f88d0; meaning unknown. */
};
static_assert(offsetof(Object028f88d0, value_0x0028) == 0x28);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_028f88d0(const Object028f88d0 *self)
{
    return self->value_0x0028;
}

/**
 *
 * The part of the object that auto_return_field_028f8a30 reads.
 *
 */
struct Object028f8a30 {
    uint8_t unknown_0x0000[0x18];
    uint32_t value_0x0018; /**< Read by auto_return_field_028f8a30; meaning unknown. */
};
static_assert(offsetof(Object028f8a30, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_028f8a30(const Object028f8a30 *self)
{
    return self->value_0x0018;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028f8a40()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_028f8a50 reads.
 *
 */
struct Object028f8a50 {
    uint8_t unknown_0x0000[0x20];
    uint64_t value_0x0020; /**< Read by auto_return_field_028f8a50; meaning unknown. */
};
static_assert(offsetof(Object028f8a50, value_0x0020) == 0x20);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_028f8a50(const Object028f8a50 *self)
{
    return self->value_0x0020;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_028f8a60 = 0x1;

extern "C" uint32_t bb_auto_return_constant_028f8a60()
{
    return value_028f8a60;
}

/**
 *
 * The part of the object that auto_return_field_028f90c0 reads.
 *
 */
struct Object028f90c0 {
    uint8_t unknown_0x0000[0x10];
    uint64_t value_0x0010; /**< Read by auto_return_field_028f90c0; meaning unknown. */
};
static_assert(offsetof(Object028f90c0, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_028f90c0(const Object028f90c0 *self)
{
    return self->value_0x0010;
}

/**
 *
 * The part of the object that auto_return_field_028f90e0 reads.
 *
 */
struct Object028f90e0 {
    uint8_t unknown_0x0000[0x20];
    uint32_t value_0x0020; /**< Read by auto_return_field_028f90e0; meaning unknown. */
};
static_assert(offsetof(Object028f90e0, value_0x0020) == 0x20);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_028f90e0(const Object028f90e0 *self)
{
    return self->value_0x0020;
}

/**
 *
 * The part of the object that auto_return_field_028f90f0 reads.
 *
 */
struct Object028f90f0 {
    uint8_t unknown_0x0000[0x28];
    uint64_t value_0x0028; /**< Read by auto_return_field_028f90f0; meaning unknown. */
};
static_assert(offsetof(Object028f90f0, value_0x0028) == 0x28);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_028f90f0(const Object028f90f0 *self)
{
    return self->value_0x0028;
}

/**
 *
 * The part of the object that auto_return_field_028f91b0 reads.
 *
 */
struct Object028f91b0 {
    uint8_t unknown_0x0000[0x48];
    uint32_t value_0x0048; /**< Read by auto_return_field_028f91b0; meaning unknown. */
};
static_assert(offsetof(Object028f91b0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_028f91b0(const Object028f91b0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * The part of the object that auto_return_field_028f9570 reads.
 *
 */
struct Object028f9570 {
    uint8_t unknown_0x0000[0x10];
    uint64_t value_0x0010; /**< Read by auto_return_field_028f9570; meaning unknown. */
};
static_assert(offsetof(Object028f9570, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_028f9570(const Object028f9570 *self)
{
    return self->value_0x0010;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028f9760()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_028f9d40 reads.
 *
 */
struct Object028f9d40 {
    uint8_t unknown_0x0000[0x28];
    uint32_t value_0x0028; /**< Read by auto_return_field_028f9d40; meaning unknown. */
};
static_assert(offsetof(Object028f9d40, value_0x0028) == 0x28);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_028f9d40(const Object028f9d40 *self)
{
    return self->value_0x0028;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028fa9a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028fa9b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028faae0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028faaf0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028fab00()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028fab10()
{
}

/**
 *
 * The part of the object that auto_return_field_028fb3b0 reads.
 *
 */
struct Object028fb3b0 {
    uint64_t value_0x0000; /**< Read by auto_return_field_028fb3b0; meaning unknown. */
};
static_assert(offsetof(Object028fb3b0, value_0x0000) == 0x0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_028fb3b0(const Object028fb3b0 *self)
{
    return self->value_0x0000;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028fb5f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028fb600()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028fb760()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028fb770()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028fd140()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028fd190()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028fd1a0()
{
}

/**
 *
 * The part of the object that auto_return_field_028fd1f0 reads.
 *
 */
struct Object028fd1f0 {
    uint8_t unknown_0x0000[0x18];
    uint64_t value_0x0018; /**< Read by auto_return_field_028fd1f0; meaning unknown. */
};
static_assert(offsetof(Object028fd1f0, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_028fd1f0(const Object028fd1f0 *self)
{
    return self->value_0x0018;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028fd200()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028fd250()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028fd260()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028fd2b0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_028fd2c0 reads.
 *
 */
struct Object028fd2c0 {
    uint8_t unknown_0x0000[0x28];
    uint32_t value_0x0028; /**< Read by auto_return_field_028fd2c0; meaning unknown. */
};
static_assert(offsetof(Object028fd2c0, value_0x0028) == 0x28);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_028fd2c0(const Object028fd2c0 *self)
{
    return self->value_0x0028;
}

/**
 *
 * The part of the object that auto_return_field_028fd2d0 reads.
 *
 */
struct Object028fd2d0 {
    uint8_t unknown_0x0000[0x18];
    uint64_t value_0x0018; /**< Read by auto_return_field_028fd2d0; meaning unknown. */
};
static_assert(offsetof(Object028fd2d0, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_028fd2d0(const Object028fd2d0 *self)
{
    return self->value_0x0018;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028fe660()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028fe670()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028fe7d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028fe7e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028fe7f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028fe800()
{
}

/**
 *
 * The part of the object that auto_return_field_028fed30 reads.
 *
 */
struct Object028fed30 {
    uint64_t value_0x0000; /**< Read by auto_return_field_028fed30; meaning unknown. */
};
static_assert(offsetof(Object028fed30, value_0x0000) == 0x0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_028fed30(const Object028fed30 *self)
{
    return self->value_0x0000;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028fef70()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028fef80()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028ff100()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028ff110()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_028ff460 = 0xffffffff;

extern "C" uint32_t bb_auto_return_constant_028ff460()
{
    return value_028ff460;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028ff490()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_028ff560 = 0x1;

extern "C" uint32_t bb_auto_return_constant_028ff560()
{
    return value_028ff560;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_028ff570 = 0xffffffff;

extern "C" uint32_t bb_auto_return_constant_028ff570()
{
    return value_028ff570;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_028ff580 = 0xffffffff;

extern "C" uint32_t bb_auto_return_constant_028ff580()
{
    return value_028ff580;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_028ff590 = 0x1;

extern "C" uint32_t bb_auto_return_constant_028ff590()
{
    return value_028ff590;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028ff5a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028ff5b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028ff5c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028ff5d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028ff640()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028ff660()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028ff670()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028ff680()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_028ff690 = 0x1;

extern "C" uint32_t bb_auto_return_constant_028ff690()
{
    return value_028ff690;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028ff6a0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028ff6d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028ff710()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028ffdb0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028ffe20()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028fff70()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028fffd0()
{
}
