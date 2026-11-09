// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02b400c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02b403b0()
{
}

/**
 *
 * The part of the object that auto_return_field_02b40580 reads.
 *
 */
struct Object02b40580 {
    uint8_t unknown_0x0000[0x130];
    uint32_t value_0x0130; /**< Read by auto_return_field_02b40580; meaning unknown. */
};
static_assert(offsetof(Object02b40580, value_0x0130) == 0x130);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02b40580(const Object02b40580 *self)
{
    return self->value_0x0130;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02b405c0()
{
}

/**
 *
 * The part of the object that auto_return_field_02b405d0 reads.
 *
 */
struct Object02b405d0 {
    uint8_t unknown_0x0000[0x120];
    uint32_t value_0x0120; /**< Read by auto_return_field_02b405d0; meaning unknown. */
};
static_assert(offsetof(Object02b405d0, value_0x0120) == 0x120);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02b405d0(const Object02b405d0 *self)
{
    return self->value_0x0120;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02b40660()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b40670 = 0x1;

extern "C" uint32_t bb_auto_return_constant_02b40670()
{
    return value_02b40670;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02b41260()
{
}

/**
 *
 * The part of the object that auto_return_field_02b41790 reads.
 *
 */
struct Object02b41790 {
    uint8_t unknown_0x0000[0x8];
    uint64_t value_0x0008; /**< Read by auto_return_field_02b41790; meaning unknown. */
};
static_assert(offsetof(Object02b41790, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02b41790(const Object02b41790 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_02b417a0 reads.
 *
 */
struct Object02b417a0 {
    uint8_t unknown_0x0000[0x10];
    uint64_t value_0x0010; /**< Read by auto_return_field_02b417a0; meaning unknown. */
};
static_assert(offsetof(Object02b417a0, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02b417a0(const Object02b417a0 *self)
{
    return self->value_0x0010;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02b418b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02b41c50()
{
}

/**
 *
 * The part of the object that auto_return_field_02b41d10 reads.
 *
 */
struct Object02b41d10 {
    uint8_t unknown_0x0000[0x8];
    uint64_t value_0x0008; /**< Read by auto_return_field_02b41d10; meaning unknown. */
};
static_assert(offsetof(Object02b41d10, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02b41d10(const Object02b41d10 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_02b41d20 reads.
 *
 */
struct Object02b41d20 {
    uint8_t unknown_0x0000[0x10];
    uint64_t value_0x0010; /**< Read by auto_return_field_02b41d20; meaning unknown. */
};
static_assert(offsetof(Object02b41d20, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02b41d20(const Object02b41d20 *self)
{
    return self->value_0x0010;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02b43530()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02b43540()
{
}

/**
 *
 * The part of the object that auto_return_field_02b43890 reads.
 *
 */
struct Object02b43890 {
    uint32_t value_0x0000; /**< Read by auto_return_field_02b43890; meaning unknown. */
};
static_assert(offsetof(Object02b43890, value_0x0000) == 0x0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02b43890(const Object02b43890 *self)
{
    return self->value_0x0000;
}

/**
 *
 * The part of the object that auto_return_field_02b43920 reads.
 *
 */
struct Object02b43920 {
    uint8_t unknown_0x0000[0x30];
    uint32_t value_0x0030; /**< Read by auto_return_field_02b43920; meaning unknown. */
};
static_assert(offsetof(Object02b43920, value_0x0030) == 0x30);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02b43920(const Object02b43920 *self)
{
    return self->value_0x0030;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02b44e60()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02b44e70()
{
}

/**
 *
 * The part of the object that auto_return_field_02b46550 reads.
 *
 */
struct Object02b46550 {
    uint8_t unknown_0x0000[0x10];
    uint64_t value_0x0010; /**< Read by auto_return_field_02b46550; meaning unknown. */
};
static_assert(offsetof(Object02b46550, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02b46550(const Object02b46550 *self)
{
    return self->value_0x0010;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02b46af0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02b46b20()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02b46b30()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02b46b40()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02b49170()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b4a2e0 = 0x1;

extern "C" uint32_t bb_auto_return_constant_02b4a2e0()
{
    return value_02b4a2e0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b4a4c0 = 0x2;

extern "C" uint32_t bb_auto_return_constant_02b4a4c0()
{
    return value_02b4a4c0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b4a8e0 = 0x2;

extern "C" uint32_t bb_auto_return_constant_02b4a8e0()
{
    return value_02b4a8e0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02b4af80()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_02b4b0d0 reads.
 *
 */
struct Object02b4b0d0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02b4b0d0; meaning unknown. */
};
static_assert(offsetof(Object02b4b0d0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02b4b0d0(const Object02b4b0d0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02b4b0e0 reads.
 *
 */
struct Object02b4b0e0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02b4b0e0; meaning unknown. */
};
static_assert(offsetof(Object02b4b0e0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02b4b0e0(const Object02b4b0e0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02b4b130()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b4b280 = 0x88;

extern "C" uint32_t bb_auto_return_constant_02b4b280()
{
    return value_02b4b280;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02b4b690()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02b4b930()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02b4b940()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02b4b950()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b4c060 = 0x1;

extern "C" uint32_t bb_auto_return_constant_02b4c060()
{
    return value_02b4c060;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b4c2f0 = 0x2;

extern "C" uint32_t bb_auto_return_constant_02b4c2f0()
{
    return value_02b4c2f0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b4c710 = 0x2;

extern "C" uint32_t bb_auto_return_constant_02b4c710()
{
    return value_02b4c710;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02b4cd50()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_02b4cf40 reads.
 *
 */
struct Object02b4cf40 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02b4cf40; meaning unknown. */
};
static_assert(offsetof(Object02b4cf40, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02b4cf40(const Object02b4cf40 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02b4cf50 reads.
 *
 */
struct Object02b4cf50 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02b4cf50; meaning unknown. */
};
static_assert(offsetof(Object02b4cf50, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02b4cf50(const Object02b4cf50 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02b4cfa0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b4d0f0 = 0x78;

extern "C" uint32_t bb_auto_return_constant_02b4d0f0()
{
    return value_02b4d0f0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02b4d6e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02b4d730()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02b4d740()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02b4d7d0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b4d920 = 0x2;

extern "C" uint32_t bb_auto_return_constant_02b4d920()
{
    return value_02b4d920;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b4dd40 = 0x2;

extern "C" uint32_t bb_auto_return_constant_02b4dd40()
{
    return value_02b4dd40;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02b4e380()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_02b4e560 reads.
 *
 */
struct Object02b4e560 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02b4e560; meaning unknown. */
};
static_assert(offsetof(Object02b4e560, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02b4e560(const Object02b4e560 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02b4e570 reads.
 *
 */
struct Object02b4e570 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02b4e570; meaning unknown. */
};
static_assert(offsetof(Object02b4e570, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02b4e570(const Object02b4e570 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02b4e5c0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b4e710 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02b4e710()
{
    return value_02b4e710;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02b4eb10()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02b4ef70()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02b4ef80()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02b4ef90()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02b4f100()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02b4f130()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02b4f140()
{
}

/**
 *
 * The part of the object that auto_return_field_02b4f400 reads.
 *
 */
struct Object02b4f400 {
    uint8_t unknown_0x0000[0x18];
    uint64_t value_0x0018; /**< Read by auto_return_field_02b4f400; meaning unknown. */
};
static_assert(offsetof(Object02b4f400, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02b4f400(const Object02b4f400 *self)
{
    return self->value_0x0018;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b4f950 = 0x2;

extern "C" uint32_t bb_auto_return_constant_02b4f950()
{
    return value_02b4f950;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b4fd70 = 0x2;

extern "C" uint32_t bb_auto_return_constant_02b4fd70()
{
    return value_02b4fd70;
}
