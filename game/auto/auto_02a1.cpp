// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a129b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a17f50()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a17f90()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a17fd0()
{
}

/**
 *
 * The part of the object that auto_return_field_02a18f40 reads.
 *
 */
struct Object02a18f40 {
    uint8_t unknown_0x0000[0x18];
    uint64_t value_0x0018; /**< Read by auto_return_field_02a18f40; meaning unknown. */
};
static_assert(offsetof(Object02a18f40, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02a18f40(const Object02a18f40 *self)
{
    return self->value_0x0018;
}

/**
 *
 * The part of the object that auto_return_field_02a18fd0 reads.
 *
 */
struct Object02a18fd0 {
    uint8_t unknown_0x0000[0x38];
    uint32_t value_0x0038; /**< Read by auto_return_field_02a18fd0; meaning unknown. */
};
static_assert(offsetof(Object02a18fd0, value_0x0038) == 0x38);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02a18fd0(const Object02a18fd0 *self)
{
    return self->value_0x0038;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a1bb00()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02a1c270()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_02a1d980 reads.
 *
 */
struct Object02a1d980 {
    uint8_t unknown_0x0000[0x108];
    uint64_t value_0x0108; /**< Read by auto_return_field_02a1d980; meaning unknown. */
};
static_assert(offsetof(Object02a1d980, value_0x0108) == 0x108);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02a1d980(const Object02a1d980 *self)
{
    return self->value_0x0108;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02a1d990 = 0xc;

extern "C" uint32_t bb_auto_return_constant_02a1d990()
{
    return value_02a1d990;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02a1d9a0 = 0x20;

extern "C" uint32_t bb_auto_return_constant_02a1d9a0()
{
    return value_02a1d9a0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a1de20()
{
}
