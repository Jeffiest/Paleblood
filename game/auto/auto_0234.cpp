// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_023411a0()
{
}

/**
 *
 * The part of the object that auto_return_field_02343860 reads.
 *
 */
struct Object02343860 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02343860; meaning unknown. */
};
static_assert(offsetof(Object02343860, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02343860(const Object02343860 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02343870 reads.
 *
 */
struct Object02343870 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02343870; meaning unknown. */
};
static_assert(offsetof(Object02343870, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02343870(const Object02343870 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_023438c0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02343b40 = 0x110;

extern "C" uint32_t bb_auto_return_constant_02343b40()
{
    return value_02343b40;
}

/**
 *
 * The part of the object that auto_return_field_02343b80 reads.
 *
 */
struct Object02343b80 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02343b80; meaning unknown. */
};
static_assert(offsetof(Object02343b80, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02343b80(const Object02343b80 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02343b90 reads.
 *
 */
struct Object02343b90 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02343b90; meaning unknown. */
};
static_assert(offsetof(Object02343b90, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02343b90(const Object02343b90 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02343be0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02343e60 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_02343e60()
{
    return value_02343e60;
}

/**
 *
 * The part of the object that auto_return_field_02343ea0 reads.
 *
 */
struct Object02343ea0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02343ea0; meaning unknown. */
};
static_assert(offsetof(Object02343ea0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02343ea0(const Object02343ea0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02343eb0 reads.
 *
 */
struct Object02343eb0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02343eb0; meaning unknown. */
};
static_assert(offsetof(Object02343eb0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02343eb0(const Object02343eb0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02343f00()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02344180 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_02344180()
{
    return value_02344180;
}

/**
 *
 * The part of the object that auto_return_field_023441c0 reads.
 *
 */
struct Object023441c0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_023441c0; meaning unknown. */
};
static_assert(offsetof(Object023441c0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023441c0(const Object023441c0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_023441d0 reads.
 *
 */
struct Object023441d0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_023441d0; meaning unknown. */
};
static_assert(offsetof(Object023441d0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023441d0(const Object023441d0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02344220()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_023444a0 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_023444a0()
{
    return value_023444a0;
}

/**
 *
 * The part of the object that auto_return_field_02348080 reads.
 *
 */
struct Object02348080 {
    uint8_t unknown_0x0000[0x58];
    uint8_t value_0x0058; /**< Read by auto_return_field_02348080; meaning unknown. */
};
static_assert(offsetof(Object02348080, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02348080(const Object02348080 *self)
{
    return self->value_0x0058;
}

/**
 *
 * The part of the object that auto_return_field_02348c40 reads.
 *
 */
struct Object02348c40 {
    uint8_t unknown_0x0000[0x50];
    uint32_t value_0x0050; /**< Read by auto_return_field_02348c40; meaning unknown. */
};
static_assert(offsetof(Object02348c40, value_0x0050) == 0x50);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02348c40(const Object02348c40 *self)
{
    return self->value_0x0050;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02348d10()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02348d20()
{
}

/**
 *
 * The part of the object that auto_return_field_02349010 reads.
 *
 */
struct Object02349010 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02349010; meaning unknown. */
};
static_assert(offsetof(Object02349010, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02349010(const Object02349010 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02349020 reads.
 *
 */
struct Object02349020 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02349020; meaning unknown. */
};
static_assert(offsetof(Object02349020, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02349020(const Object02349020 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02349070()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_023492f0 = 0x2a8;

extern "C" uint32_t bb_auto_return_constant_023492f0()
{
    return value_023492f0;
}

/**
 *
 * The part of the object that auto_return_field_02349330 reads.
 *
 */
struct Object02349330 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02349330; meaning unknown. */
};
static_assert(offsetof(Object02349330, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02349330(const Object02349330 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02349340 reads.
 *
 */
struct Object02349340 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02349340; meaning unknown. */
};
static_assert(offsetof(Object02349340, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02349340(const Object02349340 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02349390()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02349610 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_02349610()
{
    return value_02349610;
}

/**
 *
 * The part of the object that auto_return_field_02349650 reads.
 *
 */
struct Object02349650 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02349650; meaning unknown. */
};
static_assert(offsetof(Object02349650, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02349650(const Object02349650 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02349660 reads.
 *
 */
struct Object02349660 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02349660; meaning unknown. */
};
static_assert(offsetof(Object02349660, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02349660(const Object02349660 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_023496b0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02349930 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_02349930()
{
    return value_02349930;
}

/**
 *
 * The part of the object that auto_return_field_02349970 reads.
 *
 */
struct Object02349970 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02349970; meaning unknown. */
};
static_assert(offsetof(Object02349970, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02349970(const Object02349970 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02349980 reads.
 *
 */
struct Object02349980 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02349980; meaning unknown. */
};
static_assert(offsetof(Object02349980, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02349980(const Object02349980 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_023499d0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02349c50 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_02349c50()
{
    return value_02349c50;
}

/**
 *
 * The part of the object that auto_return_field_0234dd60 reads.
 *
 */
struct Object0234dd60 {
    uint8_t unknown_0x0000[0x58];
    uint8_t value_0x0058; /**< Read by auto_return_field_0234dd60; meaning unknown. */
};
static_assert(offsetof(Object0234dd60, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_0234dd60(const Object0234dd60 *self)
{
    return self->value_0x0058;
}

/**
 *
 * The part of the object that auto_return_field_0234e920 reads.
 *
 */
struct Object0234e920 {
    uint8_t unknown_0x0000[0x50];
    uint32_t value_0x0050; /**< Read by auto_return_field_0234e920; meaning unknown. */
};
static_assert(offsetof(Object0234e920, value_0x0050) == 0x50);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_0234e920(const Object0234e920 *self)
{
    return self->value_0x0050;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0234e9f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0234ea00()
{
}

/**
 *
 * The part of the object that auto_return_field_0234ecf0 reads.
 *
 */
struct Object0234ecf0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0234ecf0; meaning unknown. */
};
static_assert(offsetof(Object0234ecf0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0234ecf0(const Object0234ecf0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0234ed00 reads.
 *
 */
struct Object0234ed00 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0234ed00; meaning unknown. */
};
static_assert(offsetof(Object0234ed00, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0234ed00(const Object0234ed00 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0234ed50()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0234efd0 = 0x258;

extern "C" uint32_t bb_auto_return_constant_0234efd0()
{
    return value_0234efd0;
}

/**
 *
 * The part of the object that auto_return_field_0234f010 reads.
 *
 */
struct Object0234f010 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0234f010; meaning unknown. */
};
static_assert(offsetof(Object0234f010, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0234f010(const Object0234f010 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0234f020 reads.
 *
 */
struct Object0234f020 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0234f020; meaning unknown. */
};
static_assert(offsetof(Object0234f020, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0234f020(const Object0234f020 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0234f070()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0234f2f0 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_0234f2f0()
{
    return value_0234f2f0;
}

/**
 *
 * The part of the object that auto_return_field_0234f330 reads.
 *
 */
struct Object0234f330 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0234f330; meaning unknown. */
};
static_assert(offsetof(Object0234f330, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0234f330(const Object0234f330 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0234f340 reads.
 *
 */
struct Object0234f340 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0234f340; meaning unknown. */
};
static_assert(offsetof(Object0234f340, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0234f340(const Object0234f340 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0234f390()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0234f610 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_0234f610()
{
    return value_0234f610;
}

/**
 *
 * The part of the object that auto_return_field_0234f650 reads.
 *
 */
struct Object0234f650 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0234f650; meaning unknown. */
};
static_assert(offsetof(Object0234f650, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0234f650(const Object0234f650 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0234f660 reads.
 *
 */
struct Object0234f660 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0234f660; meaning unknown. */
};
static_assert(offsetof(Object0234f660, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0234f660(const Object0234f660 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0234f6b0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0234f930 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_0234f930()
{
    return value_0234f930;
}
