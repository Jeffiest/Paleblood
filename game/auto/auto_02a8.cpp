// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a837b0()
{
}

/**
 *
 * The part of the object that auto_return_field_02a841a0 reads.
 *
 */
struct Object02a841a0 {
    uint8_t unknown_0x0000[0x8];
    uint32_t value_0x0008; /**< Read by auto_return_field_02a841a0; meaning unknown. */
};
static_assert(offsetof(Object02a841a0, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02a841a0(const Object02a841a0 *self)
{
    return self->value_0x0008;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a85930()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a85940()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a86060()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a86260()
{
}

/**
 *
 * The part of the object that auto_return_field_02a868d0 reads.
 *
 */
struct Object02a868d0 {
    uint8_t unknown_0x0000[0x8];
    uint64_t value_0x0008; /**< Read by auto_return_field_02a868d0; meaning unknown. */
};
static_assert(offsetof(Object02a868d0, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02a868d0(const Object02a868d0 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_02a868e0 reads.
 *
 */
struct Object02a868e0 {
    uint8_t unknown_0x0000[0x10];
    uint64_t value_0x0010; /**< Read by auto_return_field_02a868e0; meaning unknown. */
};
static_assert(offsetof(Object02a868e0, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02a868e0(const Object02a868e0 *self)
{
    return self->value_0x0010;
}

/**
 *
 * The part of the object that auto_return_field_02a8ae80 reads.
 *
 */
struct Object02a8ae80 {
    uint8_t unknown_0x0000[0x10];
    uint64_t value_0x0010; /**< Read by auto_return_field_02a8ae80; meaning unknown. */
};
static_assert(offsetof(Object02a8ae80, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02a8ae80(const Object02a8ae80 *self)
{
    return self->value_0x0010;
}

/**
 *
 * The part of the object that auto_return_field_02a8b2c0 reads.
 *
 */
struct Object02a8b2c0 {
    uint8_t unknown_0x0000[0x10];
    uint64_t value_0x0010; /**< Read by auto_return_field_02a8b2c0; meaning unknown. */
};
static_assert(offsetof(Object02a8b2c0, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02a8b2c0(const Object02a8b2c0 *self)
{
    return self->value_0x0010;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02a8b2d0 = 0x2;

extern "C" uint32_t bb_auto_return_constant_02a8b2d0()
{
    return value_02a8b2d0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a8b5b0()
{
}

/**
 *
 * The part of the object that auto_return_field_02a8b5c0 reads.
 *
 */
struct Object02a8b5c0 {
    uint8_t unknown_0x0000[0x10];
    uint64_t value_0x0010; /**< Read by auto_return_field_02a8b5c0; meaning unknown. */
};
static_assert(offsetof(Object02a8b5c0, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02a8b5c0(const Object02a8b5c0 *self)
{
    return self->value_0x0010;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a8b7b0()
{
}

/**
 *
 * The part of the object that auto_return_field_02a8b7c0 reads.
 *
 */
struct Object02a8b7c0 {
    uint8_t unknown_0x0000[0x10];
    uint64_t value_0x0010; /**< Read by auto_return_field_02a8b7c0; meaning unknown. */
};
static_assert(offsetof(Object02a8b7c0, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02a8b7c0(const Object02a8b7c0 *self)
{
    return self->value_0x0010;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02a8bfc0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02a8bfc0()
{
    return value_02a8bfc0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02a8c010 = 0xffffffff;

extern "C" uint32_t bb_auto_return_constant_02a8c010()
{
    return value_02a8c010;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02a8c040 = 0x2;

extern "C" uint32_t bb_auto_return_constant_02a8c040()
{
    return value_02a8c040;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02a8c050 = 0xffffffff;

extern "C" uint32_t bb_auto_return_constant_02a8c050()
{
    return value_02a8c050;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02a8c4b0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02a8c4b0()
{
    return value_02a8c4b0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02a8c500 = 0xffffffff;

extern "C" uint32_t bb_auto_return_constant_02a8c500()
{
    return value_02a8c500;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02a8c530 = 0x2;

extern "C" uint32_t bb_auto_return_constant_02a8c530()
{
    return value_02a8c530;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02a8c540 = 0xffffffff;

extern "C" uint32_t bb_auto_return_constant_02a8c540()
{
    return value_02a8c540;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a8c700()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a8ce90()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a8cea0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a8ceb0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a8cec0()
{
}

/**
 *
 * The part of the object that auto_return_field_02a8cf40 reads.
 *
 */
struct Object02a8cf40 {
    uint8_t unknown_0x0000[0x98];
    uint64_t value_0x0098; /**< Read by auto_return_field_02a8cf40; meaning unknown. */
};
static_assert(offsetof(Object02a8cf40, value_0x0098) == 0x98);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02a8cf40(const Object02a8cf40 *self)
{
    return self->value_0x0098;
}

/**
 *
 * The part of the object that auto_return_field_02a8cf50 reads.
 *
 */
struct Object02a8cf50 {
    uint8_t unknown_0x0000[0x90];
    uint64_t value_0x0090; /**< Read by auto_return_field_02a8cf50; meaning unknown. */
};
static_assert(offsetof(Object02a8cf50, value_0x0090) == 0x90);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02a8cf50(const Object02a8cf50 *self)
{
    return self->value_0x0090;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02a8d100()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02a8d110()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02a8d210()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02a8d220 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02a8d220()
{
    return value_02a8d220;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02a8d230 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02a8d230()
{
    return value_02a8d230;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02a8d240 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02a8d240()
{
    return value_02a8d240;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02a8d280()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a8d290()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02a8d2a0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a8d760()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a8d770()
{
}

/**
 *
 * The part of the object that auto_return_field_02a8d7f0 reads.
 *
 */
struct Object02a8d7f0 {
    uint8_t unknown_0x0000[0x98];
    uint64_t value_0x0098; /**< Read by auto_return_field_02a8d7f0; meaning unknown. */
};
static_assert(offsetof(Object02a8d7f0, value_0x0098) == 0x98);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02a8d7f0(const Object02a8d7f0 *self)
{
    return self->value_0x0098;
}

/**
 *
 * The part of the object that auto_return_field_02a8d800 reads.
 *
 */
struct Object02a8d800 {
    uint8_t unknown_0x0000[0x90];
    uint64_t value_0x0090; /**< Read by auto_return_field_02a8d800; meaning unknown. */
};
static_assert(offsetof(Object02a8d800, value_0x0090) == 0x90);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02a8d800(const Object02a8d800 *self)
{
    return self->value_0x0090;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02a8db30()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02a8db40()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02a8dd10()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02a8dd20 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02a8dd20()
{
    return value_02a8dd20;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02a8dd30 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02a8dd30()
{
    return value_02a8dd30;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02a8dd40 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02a8dd40()
{
    return value_02a8dd40;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02a8dd80()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a8dd90()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02a8dda0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a8ec40()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02a8ec50()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02a8ec60 = 0xffffffff;

extern "C" uint32_t bb_auto_return_constant_02a8ec60()
{
    return value_02a8ec60;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02a8ec70 = 0xfffffffe;

extern "C" uint32_t bb_auto_return_constant_02a8ec70()
{
    return value_02a8ec70;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02a8ec80 = 0xffffffff;

extern "C" uint32_t bb_auto_return_constant_02a8ec80()
{
    return value_02a8ec80;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02a8ec90 = 0xffffffff;

extern "C" uint32_t bb_auto_return_constant_02a8ec90()
{
    return value_02a8ec90;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02a8eca0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02a8ecc0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02a8ecc0()
{
    return value_02a8ecc0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a8ecd0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02a8ece0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a8ecf0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a8eda0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02a8edb0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02a8edc0 = 0xffffffff;

extern "C" uint32_t bb_auto_return_constant_02a8edc0()
{
    return value_02a8edc0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02a8edd0 = 0xfffffffe;

extern "C" uint32_t bb_auto_return_constant_02a8edd0()
{
    return value_02a8edd0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02a8ede0 = 0xffffffff;

extern "C" uint32_t bb_auto_return_constant_02a8ede0()
{
    return value_02a8ede0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02a8edf0 = 0xffffffff;

extern "C" uint32_t bb_auto_return_constant_02a8edf0()
{
    return value_02a8edf0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02a8ee00()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02a8ee20 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02a8ee20()
{
    return value_02a8ee20;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a8ee30()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02a8ee40()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a8ee50()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a8ff90()
{
}
