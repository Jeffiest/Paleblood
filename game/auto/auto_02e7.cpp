// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_02e71330 reads.
 *
 */
struct Object02e71330 {
    uint8_t unknown_0x0000[0x90];
    uint64_t value_0x0090; /**< Read by auto_return_field_02e71330; meaning unknown. */
};
static_assert(offsetof(Object02e71330, value_0x0090) == 0x90);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02e71330(const Object02e71330 *self)
{
    return self->value_0x0090;
}

/**
 *
 * The part of the object that auto_return_field_02e735e0 reads.
 *
 */
struct Object02e735e0 {
    uint8_t unknown_0x0000[0xd8];
    uint64_t value_0x00d8; /**< Read by auto_return_field_02e735e0; meaning unknown. */
};
static_assert(offsetof(Object02e735e0, value_0x00d8) == 0xd8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02e735e0(const Object02e735e0 *self)
{
    return self->value_0x00d8;
}

/**
 *
 * The part of the object that auto_return_field_02e735f0 reads.
 *
 */
struct Object02e735f0 {
    uint8_t unknown_0x0000[0xe0];
    uint64_t value_0x00e0; /**< Read by auto_return_field_02e735f0; meaning unknown. */
};
static_assert(offsetof(Object02e735f0, value_0x00e0) == 0xe0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02e735f0(const Object02e735f0 *self)
{
    return self->value_0x00e0;
}

/**
 *
 * The part of the object that auto_return_field_02e73600 reads.
 *
 */
struct Object02e73600 {
    uint8_t unknown_0x0000[0xe8];
    uint64_t value_0x00e8; /**< Read by auto_return_field_02e73600; meaning unknown. */
};
static_assert(offsetof(Object02e73600, value_0x00e8) == 0xe8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02e73600(const Object02e73600 *self)
{
    return self->value_0x00e8;
}

/**
 *
 * The part of the object that auto_return_field_02e73610 reads.
 *
 */
struct Object02e73610 {
    uint8_t unknown_0x0000[0xf0];
    uint64_t value_0x00f0; /**< Read by auto_return_field_02e73610; meaning unknown. */
};
static_assert(offsetof(Object02e73610, value_0x00f0) == 0xf0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02e73610(const Object02e73610 *self)
{
    return self->value_0x00f0;
}

/**
 *
 * The part of the object that auto_return_field_02e73620 reads.
 *
 */
struct Object02e73620 {
    uint8_t unknown_0x0000[0xf8];
    uint64_t value_0x00f8; /**< Read by auto_return_field_02e73620; meaning unknown. */
};
static_assert(offsetof(Object02e73620, value_0x00f8) == 0xf8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02e73620(const Object02e73620 *self)
{
    return self->value_0x00f8;
}

/**
 *
 * The part of the object that auto_return_field_02e73630 reads.
 *
 */
struct Object02e73630 {
    uint8_t unknown_0x0000[0x100];
    uint64_t value_0x0100; /**< Read by auto_return_field_02e73630; meaning unknown. */
};
static_assert(offsetof(Object02e73630, value_0x0100) == 0x100);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02e73630(const Object02e73630 *self)
{
    return self->value_0x0100;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02e73da0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02e73dc0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02e73de0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02e78f60()
{
}

/**
 *
 * The part of the object that auto_return_member_address_02e78fb0 reads.
 *
 */
struct Object02e78fb0 {
    uint8_t unknown_0x0000[0x60];
    uint8_t member_0x0060; /**< Read by auto_return_member_address_02e78fb0; meaning unknown. */
};
static_assert(offsetof(Object02e78fb0, member_0x0060) == 0x60);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02e78fb0(Object02e78fb0 *self)
{
    return &self->member_0x0060;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02e7aab0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_02e7add0 reads.
 *
 */
struct Object02e7add0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_02e7add0; meaning unknown. */
};
static_assert(offsetof(Object02e7add0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02e7add0(Object02e7add0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_02e7ade0 reads.
 *
 */
struct Object02e7ade0 {
    uint8_t unknown_0x0000[0x12a];
    uint8_t value_0x012a; /**< Read by auto_return_field_02e7ade0; meaning unknown. */
};
static_assert(offsetof(Object02e7ade0, value_0x012a) == 0x12a);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02e7ade0(const Object02e7ade0 *self)
{
    return self->value_0x012a;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02e7d990()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02e7dc20()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02e7dd10()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02e7de00()
{
}

/**
 *
 * The part of the object that auto_return_field_02e7de20 reads.
 *
 */
struct Object02e7de20 {
    uint8_t unknown_0x0000[0x8];
    uint64_t value_0x0008; /**< Read by auto_return_field_02e7de20; meaning unknown. */
};
static_assert(offsetof(Object02e7de20, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02e7de20(const Object02e7de20 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_02e7de30 reads.
 *
 */
struct Object02e7de30 {
    uint8_t unknown_0x0000[0x20];
    uint8_t value_0x0020; /**< Read by auto_return_field_02e7de30; meaning unknown. */
};
static_assert(offsetof(Object02e7de30, value_0x0020) == 0x20);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02e7de30(const Object02e7de30 *self)
{
    return self->value_0x0020;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02e7e5b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02e7e5c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02e7e5d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02e7e5e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02e7f070()
{
}
