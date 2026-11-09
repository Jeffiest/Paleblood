// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_008511f0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_00851a00()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_00851a10 = 0x1;

extern "C" uint32_t bb_auto_return_constant_00851a10()
{
    return value_00851a10;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_00851a20 = 0xffffffff;

extern "C" uint32_t bb_auto_return_constant_00851a20()
{
    return value_00851a20;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_00851a30()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_00852fb0 reads.
 *
 */
struct Object00852fb0 {
    uint8_t unknown_0x0000[0x8];
    uint32_t value_0x0008; /**< Read by auto_return_field_00852fb0; meaning unknown. */
};
static_assert(offsetof(Object00852fb0, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_00852fb0(const Object00852fb0 *self)
{
    return self->value_0x0008;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_00857cc0 = 0x5f2642d8;

extern "C" uint32_t bb_auto_return_constant_00857cc0()
{
    return value_00857cc0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_00857fa0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_00857fa0()
{
    return value_00857fa0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0085c500 = 0x8;

extern "C" uint32_t bb_auto_return_constant_0085c500()
{
    return value_0085c500;
}

/**
 *
 * The part of the object that auto_return_field_0085cae0 reads.
 *
 */
struct Object0085cae0 {
    uint8_t unknown_0x0000[0x58];
    uint32_t value_0x0058; /**< Read by auto_return_field_0085cae0; meaning unknown. */
};
static_assert(offsetof(Object0085cae0, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_0085cae0(const Object0085cae0 *self)
{
    return self->value_0x0058;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0085cd90 = 0x18;

extern "C" uint32_t bb_auto_return_constant_0085cd90()
{
    return value_0085cd90;
}

/**
 *
 * The part of the object that auto_return_field_0085cff0 reads.
 *
 */
struct Object0085cff0 {
    uint8_t unknown_0x0000[0x10];
    uint8_t value_0x0010; /**< Read by auto_return_field_0085cff0; meaning unknown. */
};
static_assert(offsetof(Object0085cff0, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_0085cff0(const Object0085cff0 *self)
{
    return self->value_0x0010;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0085d320 = 0x8;

extern "C" uint32_t bb_auto_return_constant_0085d320()
{
    return value_0085d320;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0085e8a0()
{
}
