// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02a24950 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02a24950()
{
    return value_02a24950;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a24ee0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a250d0()
{
}

/**
 *
 * The part of the object that auto_return_field_02a25260 reads.
 *
 */
struct Object02a25260 {
    uint8_t unknown_0x0000[0x100];
    uint64_t value_0x0100; /**< Read by auto_return_field_02a25260; meaning unknown. */
};
static_assert(offsetof(Object02a25260, value_0x0100) == 0x100);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02a25260(const Object02a25260 *self)
{
    return self->value_0x0100;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02a25270 = 0xc;

extern "C" uint32_t bb_auto_return_constant_02a25270()
{
    return value_02a25270;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02a25280 = 0x20;

extern "C" uint32_t bb_auto_return_constant_02a25280()
{
    return value_02a25280;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a25660()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a25f50()
{
}

/**
 *
 * The part of the object that auto_return_field_02a26ee0 reads.
 *
 */
struct Object02a26ee0 {
    uint8_t unknown_0x0000[0xb0];
    uint64_t value_0x00b0; /**< Read by auto_return_field_02a26ee0; meaning unknown. */
};
static_assert(offsetof(Object02a26ee0, value_0x00b0) == 0xb0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02a26ee0(const Object02a26ee0 *self)
{
    return self->value_0x00b0;
}

/**
 *
 * The part of the object that auto_return_field_02a26ef0 reads.
 *
 */
struct Object02a26ef0 {
    uint8_t unknown_0x0000[0x79];
    uint8_t value_0x0079; /**< Read by auto_return_field_02a26ef0; meaning unknown. */
};
static_assert(offsetof(Object02a26ef0, value_0x0079) == 0x79);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02a26ef0(const Object02a26ef0 *self)
{
    return self->value_0x0079;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02a26f00 = 0x1;

extern "C" uint32_t bb_auto_return_constant_02a26f00()
{
    return value_02a26f00;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02a26f10 = 0x1;

extern "C" uint32_t bb_auto_return_constant_02a26f10()
{
    return value_02a26f10;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a272e0()
{
}

/**
 *
 * The part of the object that auto_return_field_02a27820 reads.
 *
 */
struct Object02a27820 {
    uint8_t unknown_0x0000[0x28];
    uint64_t value_0x0028; /**< Read by auto_return_field_02a27820; meaning unknown. */
};
static_assert(offsetof(Object02a27820, value_0x0028) == 0x28);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02a27820(const Object02a27820 *self)
{
    return self->value_0x0028;
}

/**
 *
 * The part of the object that auto_return_member_address_02a27860 reads.
 *
 */
struct Object02a27860 {
    uint8_t unknown_0x0000[0x30];
    uint8_t member_0x0030; /**< Read by auto_return_member_address_02a27860; meaning unknown. */
};
static_assert(offsetof(Object02a27860, member_0x0030) == 0x30);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02a27860(Object02a27860 *self)
{
    return &self->member_0x0030;
}

/**
 *
 * The part of the object that auto_return_member_address_02a27870 reads.
 *
 */
struct Object02a27870 {
    uint8_t unknown_0x0000[0x30];
    uint8_t member_0x0030; /**< Read by auto_return_member_address_02a27870; meaning unknown. */
};
static_assert(offsetof(Object02a27870, member_0x0030) == 0x30);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02a27870(Object02a27870 *self)
{
    return &self->member_0x0030;
}

/**
 *
 * The part of the object that auto_return_field_02a27880 reads.
 *
 */
struct Object02a27880 {
    uint8_t unknown_0x0000[0x10];
    uint32_t value_0x0010; /**< Read by auto_return_field_02a27880; meaning unknown. */
};
static_assert(offsetof(Object02a27880, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02a27880(const Object02a27880 *self)
{
    return self->value_0x0010;
}

/**
 *
 * The part of the object that auto_return_field_02a27890 reads.
 *
 */
struct Object02a27890 {
    uint8_t unknown_0x0000[0x8];
    uint64_t value_0x0008; /**< Read by auto_return_field_02a27890; meaning unknown. */
};
static_assert(offsetof(Object02a27890, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02a27890(const Object02a27890 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_02a278c0 reads.
 *
 */
struct Object02a278c0 {
    uint8_t unknown_0x0000[0x18];
    uint64_t value_0x0018; /**< Read by auto_return_field_02a278c0; meaning unknown. */
};
static_assert(offsetof(Object02a278c0, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02a278c0(const Object02a278c0 *self)
{
    return self->value_0x0018;
}

/**
 *
 * The part of the object that auto_return_field_02a278d0 reads.
 *
 */
struct Object02a278d0 {
    uint8_t unknown_0x0000[0x28];
    uint64_t value_0x0028; /**< Read by auto_return_field_02a278d0; meaning unknown. */
};
static_assert(offsetof(Object02a278d0, value_0x0028) == 0x28);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02a278d0(const Object02a278d0 *self)
{
    return self->value_0x0028;
}

/**
 *
 * The part of the object that auto_return_field_02a278e0 reads.
 *
 */
struct Object02a278e0 {
    uint8_t unknown_0x0000[0x28];
    uint64_t value_0x0028; /**< Read by auto_return_field_02a278e0; meaning unknown. */
};
static_assert(offsetof(Object02a278e0, value_0x0028) == 0x28);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02a278e0(const Object02a278e0 *self)
{
    return self->value_0x0028;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a27e40()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a27f20()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a27f60()
{
}

/**
 *
 * The part of the object that auto_return_field_02a29ee0 reads.
 *
 */
struct Object02a29ee0 {
    uint8_t unknown_0x0000[0xa0];
    uint64_t value_0x00a0; /**< Read by auto_return_field_02a29ee0; meaning unknown. */
};
static_assert(offsetof(Object02a29ee0, value_0x00a0) == 0xa0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02a29ee0(const Object02a29ee0 *self)
{
    return self->value_0x00a0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a29f80()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a2a930()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02a2c030()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_02a2c870 reads.
 *
 */
struct Object02a2c870 {
    uint8_t unknown_0x0000[0x78];
    uint32_t value_0x0078; /**< Read by auto_return_field_02a2c870; meaning unknown. */
};
static_assert(offsetof(Object02a2c870, value_0x0078) == 0x78);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02a2c870(const Object02a2c870 *self)
{
    return self->value_0x0078;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a2dc30()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a2dc80()
{
}

/**
 *
 * The part of the object that auto_return_field_02a2fe40 reads.
 *
 */
struct Object02a2fe40 {
    uint8_t unknown_0x0000[0xe0];
    uint64_t value_0x00e0; /**< Read by auto_return_field_02a2fe40; meaning unknown. */
};
static_assert(offsetof(Object02a2fe40, value_0x00e0) == 0xe0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02a2fe40(const Object02a2fe40 *self)
{
    return self->value_0x00e0;
}
