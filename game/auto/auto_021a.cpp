// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_021a0610()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_021a0620()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_021a0630()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_021a0640()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_021a0810()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_021a0820()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_021a0830()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_021a0ae0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_021a1200()
{
}

/**
 *
 * The part of the object that auto_return_field_021a3990 reads.
 *
 */
struct Object021a3990 {
    uint8_t unknown_0x0000[0x58];
    uint8_t value_0x0058; /**< Read by auto_return_field_021a3990; meaning unknown. */
};
static_assert(offsetof(Object021a3990, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_021a3990(const Object021a3990 *self)
{
    return self->value_0x0058;
}

/**
 *
 * The part of the object that auto_return_field_021a4550 reads.
 *
 */
struct Object021a4550 {
    uint8_t unknown_0x0000[0x50];
    uint32_t value_0x0050; /**< Read by auto_return_field_021a4550; meaning unknown. */
};
static_assert(offsetof(Object021a4550, value_0x0050) == 0x50);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_021a4550(const Object021a4550 *self)
{
    return self->value_0x0050;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_021a4620()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_021a4630()
{
}

/**
 *
 * The part of the object that auto_return_field_021a4910 reads.
 *
 */
struct Object021a4910 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_021a4910; meaning unknown. */
};
static_assert(offsetof(Object021a4910, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_021a4910(const Object021a4910 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_021a4920 reads.
 *
 */
struct Object021a4920 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_021a4920; meaning unknown. */
};
static_assert(offsetof(Object021a4920, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_021a4920(const Object021a4920 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_021a4970()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_021a4bf0 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_021a4bf0()
{
    return value_021a4bf0;
}

/**
 *
 * The part of the object that auto_return_field_021a4c30 reads.
 *
 */
struct Object021a4c30 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_021a4c30; meaning unknown. */
};
static_assert(offsetof(Object021a4c30, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_021a4c30(const Object021a4c30 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_021a4c40 reads.
 *
 */
struct Object021a4c40 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_021a4c40; meaning unknown. */
};
static_assert(offsetof(Object021a4c40, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_021a4c40(const Object021a4c40 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_021a4c90()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_021a4f10 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_021a4f10()
{
    return value_021a4f10;
}

/**
 *
 * The part of the object that auto_return_field_021a87a0 reads.
 *
 */
struct Object021a87a0 {
    uint8_t unknown_0x0000[0x58];
    uint8_t value_0x0058; /**< Read by auto_return_field_021a87a0; meaning unknown. */
};
static_assert(offsetof(Object021a87a0, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_021a87a0(const Object021a87a0 *self)
{
    return self->value_0x0058;
}

/**
 *
 * The part of the object that auto_return_field_021a8870 reads.
 *
 */
struct Object021a8870 {
    uint8_t unknown_0x0000[0x8];
    uint64_t value_0x0008; /**< Read by auto_return_field_021a8870; meaning unknown. */
};
static_assert(offsetof(Object021a8870, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_021a8870(const Object021a8870 *self)
{
    return self->value_0x0008;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_021a8960()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_021a8dc0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_021a8e20()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_021aae40()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_021ab010 reads.
 *
 */
struct Object021ab010 {
    uint8_t unknown_0x0000[0x138];
    uint8_t member_0x0138; /**< Read by auto_return_member_address_021ab010; meaning unknown. */
};
static_assert(offsetof(Object021ab010, member_0x0138) == 0x138);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_021ab010(Object021ab010 *self)
{
    return &self->member_0x0138;
}

/**
 *
 * The part of the object that auto_return_member_address_021ab020 reads.
 *
 */
struct Object021ab020 {
    uint8_t unknown_0x0000[0x4a8];
    uint8_t member_0x04a8; /**< Read by auto_return_member_address_021ab020; meaning unknown. */
};
static_assert(offsetof(Object021ab020, member_0x04a8) == 0x4a8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_021ab020(Object021ab020 *self)
{
    return &self->member_0x04a8;
}

/**
 *
 * The part of the object that auto_return_field_021adf20 reads.
 *
 */
struct Object021adf20 {
    uint8_t unknown_0x0000[0x58];
    uint8_t value_0x0058; /**< Read by auto_return_field_021adf20; meaning unknown. */
};
static_assert(offsetof(Object021adf20, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_021adf20(const Object021adf20 *self)
{
    return self->value_0x0058;
}

/**
 *
 * The part of the object that auto_return_field_021aeb00 reads.
 *
 */
struct Object021aeb00 {
    uint8_t unknown_0x0000[0x50];
    uint32_t value_0x0050; /**< Read by auto_return_field_021aeb00; meaning unknown. */
};
static_assert(offsetof(Object021aeb00, value_0x0050) == 0x50);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_021aeb00(const Object021aeb00 *self)
{
    return self->value_0x0050;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_021aebd0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_021aebe0()
{
}

/**
 *
 * The part of the object that auto_return_field_021aef70 reads.
 *
 */
struct Object021aef70 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_021aef70; meaning unknown. */
};
static_assert(offsetof(Object021aef70, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_021aef70(const Object021aef70 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_021aef80 reads.
 *
 */
struct Object021aef80 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_021aef80; meaning unknown. */
};
static_assert(offsetof(Object021aef80, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_021aef80(const Object021aef80 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_021aefd0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_021af250 = 0x800;

extern "C" uint32_t bb_auto_return_constant_021af250()
{
    return value_021af250;
}

/**
 *
 * The part of the object that auto_return_field_021af290 reads.
 *
 */
struct Object021af290 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_021af290; meaning unknown. */
};
static_assert(offsetof(Object021af290, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_021af290(const Object021af290 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_021af2a0 reads.
 *
 */
struct Object021af2a0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_021af2a0; meaning unknown. */
};
static_assert(offsetof(Object021af2a0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_021af2a0(const Object021af2a0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_021af2f0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_021af570 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_021af570()
{
    return value_021af570;
}

/**
 *
 * The part of the object that auto_return_field_021af5b0 reads.
 *
 */
struct Object021af5b0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_021af5b0; meaning unknown. */
};
static_assert(offsetof(Object021af5b0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_021af5b0(const Object021af5b0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_021af5c0 reads.
 *
 */
struct Object021af5c0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_021af5c0; meaning unknown. */
};
static_assert(offsetof(Object021af5c0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_021af5c0(const Object021af5c0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_021af610()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_021af890 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_021af890()
{
    return value_021af890;
}

/**
 *
 * The part of the object that auto_return_field_021af8d0 reads.
 *
 */
struct Object021af8d0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_021af8d0; meaning unknown. */
};
static_assert(offsetof(Object021af8d0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_021af8d0(const Object021af8d0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_021af8e0 reads.
 *
 */
struct Object021af8e0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_021af8e0; meaning unknown. */
};
static_assert(offsetof(Object021af8e0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_021af8e0(const Object021af8e0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_021af930()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_021afbb0 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_021afbb0()
{
    return value_021afbb0;
}
