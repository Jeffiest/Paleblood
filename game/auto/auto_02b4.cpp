// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

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
extern "C" void bb_auto_empty_02b4eb10()
{
}
