// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e109c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e10a20()
{
}

/**
 *
 * The part of the object that auto_return_field_01e10ab0 reads.
 *
 */
struct Object01e10ab0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01e10ab0; meaning unknown. */
};
static_assert(offsetof(Object01e10ab0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e10ab0(const Object01e10ab0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01e10ac0 reads.
 *
 */
struct Object01e10ac0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01e10ac0; meaning unknown. */
};
static_assert(offsetof(Object01e10ac0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e10ac0(const Object01e10ac0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01e10b10()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01e10d90 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01e10d90()
{
    return value_01e10d90;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e10fc0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e133e0()
{
}

/**
 *
 * The part of the object that auto_return_field_01e19dd0 reads.
 *
 */
struct Object01e19dd0 {
    uint8_t unknown_0x0000[0x28];
    uint64_t value_0x0028; /**< Read by auto_return_field_01e19dd0; meaning unknown. */
};
static_assert(offsetof(Object01e19dd0, value_0x0028) == 0x28);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e19dd0(const Object01e19dd0 *self)
{
    return self->value_0x0028;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e1c930()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e1c990()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e1c9f0()
{
}

/**
 *
 * The part of the object that auto_return_field_01e1ca70 reads.
 *
 */
struct Object01e1ca70 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01e1ca70; meaning unknown. */
};
static_assert(offsetof(Object01e1ca70, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e1ca70(const Object01e1ca70 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01e1ca80 reads.
 *
 */
struct Object01e1ca80 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01e1ca80; meaning unknown. */
};
static_assert(offsetof(Object01e1ca80, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e1ca80(const Object01e1ca80 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01e1cad0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01e1cd50 = 0x390;

extern "C" uint32_t bb_auto_return_constant_01e1cd50()
{
    return value_01e1cd50;
}

/**
 *
 * The part of the object that auto_return_field_01e1da00 reads.
 *
 */
struct Object01e1da00 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01e1da00; meaning unknown. */
};
static_assert(offsetof(Object01e1da00, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e1da00(const Object01e1da00 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01e1da10 reads.
 *
 */
struct Object01e1da10 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01e1da10; meaning unknown. */
};
static_assert(offsetof(Object01e1da10, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e1da10(const Object01e1da10 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01e1da60()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01e1dce0 = 0x20;

extern "C" uint32_t bb_auto_return_constant_01e1dce0()
{
    return value_01e1dce0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e1df00()
{
}
