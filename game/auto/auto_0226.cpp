// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_022603b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02260410()
{
}

/**
 *
 * The part of the object that auto_return_field_02261de0 reads.
 *
 */
struct Object02261de0 {
    uint8_t unknown_0x0000[0x58];
    uint8_t value_0x0058; /**< Read by auto_return_field_02261de0; meaning unknown. */
};
static_assert(offsetof(Object02261de0, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02261de0(const Object02261de0 *self)
{
    return self->value_0x0058;
}

/**
 *
 * The part of the object that auto_return_field_022629b0 reads.
 *
 */
struct Object022629b0 {
    uint8_t unknown_0x0000[0x50];
    uint32_t value_0x0050; /**< Read by auto_return_field_022629b0; meaning unknown. */
};
static_assert(offsetof(Object022629b0, value_0x0050) == 0x50);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_022629b0(const Object022629b0 *self)
{
    return self->value_0x0050;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02262a80()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02262a90()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02262c00()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02262c40()
{
}

/**
 *
 * The part of the object that auto_return_member_address_02262c60 reads.
 *
 */
struct Object02262c60 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_02262c60; meaning unknown. */
};
static_assert(offsetof(Object02262c60, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02262c60(Object02262c60 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_02262eb0 reads.
 *
 */
struct Object02262eb0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02262eb0; meaning unknown. */
};
static_assert(offsetof(Object02262eb0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02262eb0(const Object02262eb0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02262ec0 reads.
 *
 */
struct Object02262ec0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02262ec0; meaning unknown. */
};
static_assert(offsetof(Object02262ec0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02262ec0(const Object02262ec0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02262f10()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02263190 = 0x130;

extern "C" uint32_t bb_auto_return_constant_02263190()
{
    return value_02263190;
}

/**
 *
 * The part of the object that auto_return_field_022631d0 reads.
 *
 */
struct Object022631d0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_022631d0; meaning unknown. */
};
static_assert(offsetof(Object022631d0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_022631d0(const Object022631d0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_022631e0 reads.
 *
 */
struct Object022631e0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_022631e0; meaning unknown. */
};
static_assert(offsetof(Object022631e0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_022631e0(const Object022631e0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02263230()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_022634b0 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_022634b0()
{
    return value_022634b0;
}

/**
 *
 * The part of the object that auto_return_field_022634f0 reads.
 *
 */
struct Object022634f0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_022634f0; meaning unknown. */
};
static_assert(offsetof(Object022634f0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_022634f0(const Object022634f0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02263500 reads.
 *
 */
struct Object02263500 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02263500; meaning unknown. */
};
static_assert(offsetof(Object02263500, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02263500(const Object02263500 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02263550()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_022637d0 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_022637d0()
{
    return value_022637d0;
}

/**
 *
 * The part of the object that auto_return_field_02263810 reads.
 *
 */
struct Object02263810 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02263810; meaning unknown. */
};
static_assert(offsetof(Object02263810, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02263810(const Object02263810 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02263820 reads.
 *
 */
struct Object02263820 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02263820; meaning unknown. */
};
static_assert(offsetof(Object02263820, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02263820(const Object02263820 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02263870()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02263af0 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_02263af0()
{
    return value_02263af0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02265c70 = 0x1;

extern "C" uint32_t bb_auto_return_constant_02265c70()
{
    return value_02265c70;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_022667a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02266800()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02268b60()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02268bc0()
{
}
