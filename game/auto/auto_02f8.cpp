// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_02f81200 reads.
 *
 */
struct Object02f81200 {
    uint8_t unknown_0x0000[0x830];
    uint32_t value_0x0830; /**< Read by auto_return_field_02f81200; meaning unknown. */
};
static_assert(offsetof(Object02f81200, value_0x0830) == 0x830);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02f81200(const Object02f81200 *self)
{
    return self->value_0x0830;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02f81360 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02f81360()
{
    return value_02f81360;
}

/**
 *
 * The part of the object that auto_return_field_02f81370 reads.
 *
 */
struct Object02f81370 {
    uint8_t unknown_0x0000[0x828];
    uint64_t value_0x0828; /**< Read by auto_return_field_02f81370; meaning unknown. */
};
static_assert(offsetof(Object02f81370, value_0x0828) == 0x828);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f81370(const Object02f81370 *self)
{
    return self->value_0x0828;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f81740()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02f82220 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02f82220()
{
    return value_02f82220;
}

/**
 *
 * The part of the object that auto_return_field_02f829b0 reads.
 *
 */
struct Object02f829b0 {
    uint8_t unknown_0x0000[0x2c0];
    uint64_t value_0x02c0; /**< Read by auto_return_field_02f829b0; meaning unknown. */
};
static_assert(offsetof(Object02f829b0, value_0x02c0) == 0x2c0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f829b0(const Object02f829b0 *self)
{
    return self->value_0x02c0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02f829c0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02f829c0()
{
    return value_02f829c0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f82a00 = 0x3;

extern "C" uint32_t bb_auto_return_constant_02f82a00()
{
    return value_02f82a00;
}

/**
 *
 * The part of the object that auto_return_field_02f8a7b0 reads.
 *
 */
struct Object02f8a7b0 {
    uint8_t unknown_0x0000[0xa0];
    uint8_t value_0x00a0; /**< Read by auto_return_field_02f8a7b0; meaning unknown. */
};
static_assert(offsetof(Object02f8a7b0, value_0x00a0) == 0xa0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02f8a7b0(const Object02f8a7b0 *self)
{
    return self->value_0x00a0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02f8d440 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02f8d440()
{
    return value_02f8d440;
}
