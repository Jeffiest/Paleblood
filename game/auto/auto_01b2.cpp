// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01b239b0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01b239c0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b23c10()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01b24740 = 0x4;

extern "C" uint32_t bb_auto_return_constant_01b24740()
{
    return value_01b24740;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b24a90()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01b24ab0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01b24c00 reads.
 *
 */
struct Object01b24c00 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01b24c00; meaning unknown. */
};
static_assert(offsetof(Object01b24c00, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01b24c00(const Object01b24c00 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01b24c10 reads.
 *
 */
struct Object01b24c10 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01b24c10; meaning unknown. */
};
static_assert(offsetof(Object01b24c10, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01b24c10(const Object01b24c10 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01b24c60()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01b24ee0 = 0x248;

extern "C" uint32_t bb_auto_return_constant_01b24ee0()
{
    return value_01b24ee0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b295c0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01b295e0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01b29730 reads.
 *
 */
struct Object01b29730 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01b29730; meaning unknown. */
};
static_assert(offsetof(Object01b29730, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01b29730(const Object01b29730 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01b29740 reads.
 *
 */
struct Object01b29740 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01b29740; meaning unknown. */
};
static_assert(offsetof(Object01b29740, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01b29740(const Object01b29740 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01b29790()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01b29a10 = 0x190;

extern "C" uint32_t bb_auto_return_constant_01b29a10()
{
    return value_01b29a10;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01b2df60()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01b2eb70 = 0x5;

extern "C" uint32_t bb_auto_return_constant_01b2eb70()
{
    return value_01b2eb70;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01b2eb80 = 0x8;

extern "C" uint32_t bb_auto_return_constant_01b2eb80()
{
    return value_01b2eb80;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b2f020()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01b2f040()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01b2f190 reads.
 *
 */
struct Object01b2f190 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01b2f190; meaning unknown. */
};
static_assert(offsetof(Object01b2f190, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01b2f190(const Object01b2f190 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01b2f1a0 reads.
 *
 */
struct Object01b2f1a0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01b2f1a0; meaning unknown. */
};
static_assert(offsetof(Object01b2f1a0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01b2f1a0(const Object01b2f1a0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01b2f1f0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01b2f470 = 0x220;

extern "C" uint32_t bb_auto_return_constant_01b2f470()
{
    return value_01b2f470;
}
