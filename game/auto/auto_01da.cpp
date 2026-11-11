// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01da41b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01da4280()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01da48c0 = 0x530;

extern "C" uint32_t bb_auto_return_constant_01da48c0()
{
    return value_01da48c0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01da4be0 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01da4be0()
{
    return value_01da4be0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01da4f00 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01da4f00()
{
    return value_01da4f00;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01da9aa0 = 0x160;

extern "C" uint32_t bb_auto_return_constant_01da9aa0()
{
    return value_01da9aa0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01da9dc0 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01da9dc0()
{
    return value_01da9dc0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01daa0e0 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01daa0e0()
{
    return value_01daa0e0;
}

/**
 *
 * The part of the object that auto_return_field_01dab860 reads.
 *
 */
struct Object01dab860 {
    uint8_t unknown_0x0000[0xc0];
    uint64_t value_0x00c0; /**< Read by auto_return_field_01dab860; meaning unknown. */
};
static_assert(offsetof(Object01dab860, value_0x00c0) == 0xc0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01dab860(const Object01dab860 *self)
{
    return self->value_0x00c0;
}

/**
 *
 * The part of the object that auto_return_field_01dabcb0 reads.
 *
 */
struct Object01dabcb0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t value_0x0008; /**< Read by auto_return_field_01dabcb0; meaning unknown. */
};
static_assert(offsetof(Object01dabcb0, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_01dabcb0(const Object01dabcb0 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_01dabe30 reads.
 *
 */
struct Object01dabe30 {
    uint8_t unknown_0x0000[0xe8];
    uint64_t value_0x00e8; /**< Read by auto_return_field_01dabe30; meaning unknown. */
};
static_assert(offsetof(Object01dabe30, value_0x00e8) == 0xe8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01dabe30(const Object01dabe30 *self)
{
    return self->value_0x00e8;
}

/**
 *
 * The part of the object that auto_return_field_01dabeb0 reads.
 *
 */
struct Object01dabeb0 {
    uint8_t unknown_0x0000[0xe0];
    uint64_t value_0x00e0; /**< Read by auto_return_field_01dabeb0; meaning unknown. */
};
static_assert(offsetof(Object01dabeb0, value_0x00e0) == 0xe0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01dabeb0(const Object01dabeb0 *self)
{
    return self->value_0x00e0;
}

/**
 *
 * The part of the object that auto_return_member_address_01dabed0 reads.
 *
 */
struct Object01dabed0 {
    uint8_t unknown_0x0000[0xc0];
    uint8_t member_0x00c0; /**< Read by auto_return_member_address_01dabed0; meaning unknown. */
};
static_assert(offsetof(Object01dabed0, member_0x00c0) == 0xc0);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01dabed0(Object01dabed0 *self)
{
    return &self->member_0x00c0;
}

/**
 *
 * The part of the object that auto_return_field_01dabf00 reads.
 *
 */
struct Object01dabf00 {
    uint8_t unknown_0x0000[0xf0];
    uint64_t value_0x00f0; /**< Read by auto_return_field_01dabf00; meaning unknown. */
};
static_assert(offsetof(Object01dabf00, value_0x00f0) == 0xf0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01dabf00(const Object01dabf00 *self)
{
    return self->value_0x00f0;
}

/**
 *
 * The part of the object that auto_return_field_01dabf10 reads.
 *
 */
struct Object01dabf10 {
    uint8_t unknown_0x0000[0x100];
    uint64_t value_0x0100; /**< Read by auto_return_field_01dabf10; meaning unknown. */
};
static_assert(offsetof(Object01dabf10, value_0x0100) == 0x100);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01dabf10(const Object01dabf10 *self)
{
    return self->value_0x0100;
}

/**
 *
 * The part of the object that auto_return_field_01dabf40 reads.
 *
 */
struct Object01dabf40 {
    uint8_t unknown_0x0000[0xf8];
    uint64_t value_0x00f8; /**< Read by auto_return_field_01dabf40; meaning unknown. */
};
static_assert(offsetof(Object01dabf40, value_0x00f8) == 0xf8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01dabf40(const Object01dabf40 *self)
{
    return self->value_0x00f8;
}

/**
 *
 * The part of the object that auto_return_field_01dabf50 reads.
 *
 */
struct Object01dabf50 {
    uint8_t unknown_0x0000[0x108];
    uint64_t value_0x0108; /**< Read by auto_return_field_01dabf50; meaning unknown. */
};
static_assert(offsetof(Object01dabf50, value_0x0108) == 0x108);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01dabf50(const Object01dabf50 *self)
{
    return self->value_0x0108;
}

/**
 *
 * The part of the object that auto_return_field_01dacab0 reads.
 *
 */
struct Object01dacab0 {
    uint8_t unknown_0x0000[0x101];
    uint8_t value_0x0101; /**< Read by auto_return_field_01dacab0; meaning unknown. */
};
static_assert(offsetof(Object01dacab0, value_0x0101) == 0x101);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_01dacab0(const Object01dacab0 *self)
{
    return self->value_0x0101;
}

/**
 *
 * The part of the object that auto_return_field_01dacac0 reads.
 *
 */
struct Object01dacac0 {
    uint8_t unknown_0x0000[0x102];
    uint8_t value_0x0102; /**< Read by auto_return_field_01dacac0; meaning unknown. */
};
static_assert(offsetof(Object01dacac0, value_0x0102) == 0x102);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_01dacac0(const Object01dacac0 *self)
{
    return self->value_0x0102;
}
