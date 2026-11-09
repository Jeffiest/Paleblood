// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_024809d0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_024809e0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02481470 = 0x1;

extern "C" uint32_t bb_auto_return_constant_02481470()
{
    return value_02481470;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02481480 = 0x1;

extern "C" uint32_t bb_auto_return_constant_02481480()
{
    return value_02481480;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02481490()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_024814a0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_024814b0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02481c80 = 0x401;

extern "C" uint32_t bb_auto_return_constant_02481c80()
{
    return value_02481c80;
}

/**
 *
 * The part of the object that auto_return_field_02481c90 reads.
 *
 */
struct Object02481c90 {
    uint8_t unknown_0x0000[0x460];
    uint64_t value_0x0460; /**< Read by auto_return_field_02481c90; meaning unknown. */
};
static_assert(offsetof(Object02481c90, value_0x0460) == 0x460);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02481c90(const Object02481c90 *self)
{
    return self->value_0x0460;
}

/**
 *
 * The part of the object that auto_return_field_02481ca0 reads.
 *
 */
struct Object02481ca0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02481ca0; meaning unknown. */
};
static_assert(offsetof(Object02481ca0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02481ca0(const Object02481ca0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02481d10 reads.
 *
 */
struct Object02481d10 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02481d10; meaning unknown. */
};
static_assert(offsetof(Object02481d10, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02481d10(const Object02481d10 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02482aa0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02482d40()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02482d50()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02482e00()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02482e10()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02482eb0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02482ed0 = 0x401;

extern "C" uint32_t bb_auto_return_constant_02482ed0()
{
    return value_02482ed0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02483080()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02483330()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_024846d0()
{
}

/**
 *
 * The part of the object that auto_return_field_024852c0 reads.
 *
 */
struct Object024852c0 {
    uint8_t unknown_0x0000[0x10];
    uint64_t value_0x0010; /**< Read by auto_return_field_024852c0; meaning unknown. */
};
static_assert(offsetof(Object024852c0, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_024852c0(const Object024852c0 *self)
{
    return self->value_0x0010;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02485320 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02485320()
{
    return value_02485320;
}

/**
 *
 * The part of the object that auto_return_field_02485610 reads.
 *
 */
struct Object02485610 {
    uint8_t unknown_0x0000[0x438];
    uint64_t value_0x0438; /**< Read by auto_return_field_02485610; meaning unknown. */
};
static_assert(offsetof(Object02485610, value_0x0438) == 0x438);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02485610(const Object02485610 *self)
{
    return self->value_0x0438;
}

/**
 *
 * The part of the object that auto_return_field_02485620 reads.
 *
 */
struct Object02485620 {
    uint8_t unknown_0x0000[0x18];
    uint64_t value_0x0018; /**< Read by auto_return_field_02485620; meaning unknown. */
};
static_assert(offsetof(Object02485620, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02485620(const Object02485620 *self)
{
    return self->value_0x0018;
}

/**
 *
 * The part of the object that auto_return_field_024856b0 reads.
 *
 */
struct Object024856b0 {
    uint8_t unknown_0x0000[0x20];
    uint64_t value_0x0020; /**< Read by auto_return_field_024856b0; meaning unknown. */
};
static_assert(offsetof(Object024856b0, value_0x0020) == 0x20);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_024856b0(const Object024856b0 *self)
{
    return self->value_0x0020;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02485d50 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02485d50()
{
    return value_02485d50;
}

/**
 *
 * The part of the object that auto_return_field_02488720 reads.
 *
 */
struct Object02488720 {
    uint8_t unknown_0x0000[0x67];
    uint8_t value_0x0067; /**< Read by auto_return_field_02488720; meaning unknown. */
};
static_assert(offsetof(Object02488720, value_0x0067) == 0x67);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02488720(const Object02488720 *self)
{
    return self->value_0x0067;
}

/**
 *
 * The part of the object that auto_return_field_02488740 reads.
 *
 */
struct Object02488740 {
    uint8_t unknown_0x0000[0xb8];
    uint64_t value_0x00b8; /**< Read by auto_return_field_02488740; meaning unknown. */
};
static_assert(offsetof(Object02488740, value_0x00b8) == 0xb8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02488740(const Object02488740 *self)
{
    return self->value_0x00b8;
}

/**
 *
 * The part of the object that auto_return_field_024887d0 reads.
 *
 */
struct Object024887d0 {
    uint8_t unknown_0x0000[0xb0];
    uint64_t value_0x00b0; /**< Read by auto_return_field_024887d0; meaning unknown. */
};
static_assert(offsetof(Object024887d0, value_0x00b0) == 0xb0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_024887d0(const Object024887d0 *self)
{
    return self->value_0x00b0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02489250()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_0248b9b0 reads.
 *
 */
struct Object0248b9b0 {
    uint8_t unknown_0x0000[0x18];
    uint64_t value_0x0018; /**< Read by auto_return_field_0248b9b0; meaning unknown. */
};
static_assert(offsetof(Object0248b9b0, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0248b9b0(const Object0248b9b0 *self)
{
    return self->value_0x0018;
}

/**
 *
 * The part of the object that auto_return_field_0248bda0 reads.
 *
 */
struct Object0248bda0 {
    uint8_t unknown_0x0000[0x14];
    uint32_t value_0x0014; /**< Read by auto_return_field_0248bda0; meaning unknown. */
};
static_assert(offsetof(Object0248bda0, value_0x0014) == 0x14);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_0248bda0(const Object0248bda0 *self)
{
    return self->value_0x0014;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0248bec0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_0248c520 reads.
 *
 */
struct Object0248c520 {
    uint8_t unknown_0x0000[0x30];
    uint8_t member_0x0030; /**< Read by auto_return_member_address_0248c520; meaning unknown. */
};
static_assert(offsetof(Object0248c520, member_0x0030) == 0x30);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0248c520(Object0248c520 *self)
{
    return &self->member_0x0030;
}

/**
 *
 * The part of the object that auto_return_field_0248c530 reads.
 *
 */
struct Object0248c530 {
    uint8_t unknown_0x0000[0x28];
    uint32_t value_0x0028; /**< Read by auto_return_field_0248c530; meaning unknown. */
};
static_assert(offsetof(Object0248c530, value_0x0028) == 0x28);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_0248c530(const Object0248c530 *self)
{
    return self->value_0x0028;
}

/**
 *
 * The part of the object that auto_return_field_0248c540 reads.
 *
 */
struct Object0248c540 {
    uint8_t unknown_0x0000[0x68];
    uint8_t value_0x0068; /**< Read by auto_return_field_0248c540; meaning unknown. */
};
static_assert(offsetof(Object0248c540, value_0x0068) == 0x68);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_0248c540(const Object0248c540 *self)
{
    return self->value_0x0068;
}

/**
 *
 * The part of the object that auto_return_member_address_0248d000 reads.
 *
 */
struct Object0248d000 {
    uint8_t unknown_0x0000[0x30];
    uint8_t member_0x0030; /**< Read by auto_return_member_address_0248d000; meaning unknown. */
};
static_assert(offsetof(Object0248d000, member_0x0030) == 0x30);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0248d000(Object0248d000 *self)
{
    return &self->member_0x0030;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0248e010()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0248e030()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0248e510()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0248e530()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0248ea20()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0248ea40()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0248f000()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0248f020 = 0x1;

extern "C" uint32_t bb_auto_return_constant_0248f020()
{
    return value_0248f020;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0248f5f0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0248f610 = 0x1;

extern "C" uint32_t bb_auto_return_constant_0248f610()
{
    return value_0248f610;
}

/**
 *
 * The part of the object that auto_return_field_0248f780 reads.
 *
 */
struct Object0248f780 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0248f780; meaning unknown. */
};
static_assert(offsetof(Object0248f780, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0248f780(const Object0248f780 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0248f790 reads.
 *
 */
struct Object0248f790 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0248f790; meaning unknown. */
};
static_assert(offsetof(Object0248f790, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0248f790(const Object0248f790 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0248f7e0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0248fa60 = 0x70;

extern "C" uint32_t bb_auto_return_constant_0248fa60()
{
    return value_0248fa60;
}
