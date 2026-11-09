// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01940260 = 0x2;

extern "C" uint32_t bb_auto_return_constant_01940260()
{
    return value_01940260;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01942bc0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01942c10()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01942c70()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01942fc0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01943ec0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01944eb0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_019470a0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_019470b0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_019470c0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_019470d0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_019470e0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01947540 reads.
 *
 */
struct Object01947540 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01947540; meaning unknown. */
};
static_assert(offsetof(Object01947540, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01947540(const Object01947540 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01947550 reads.
 *
 */
struct Object01947550 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01947550; meaning unknown. */
};
static_assert(offsetof(Object01947550, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01947550(const Object01947550 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_019475a0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01947640 = 0x10;

extern "C" uint32_t bb_auto_return_constant_01947640()
{
    return value_01947640;
}
