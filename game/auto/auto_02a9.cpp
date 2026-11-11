// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02a90010 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02a90010()
{
    return value_02a90010;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02a917f0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02a917f0()
{
    return value_02a917f0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a924c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a92f30()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a99dd0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a9bf90()
{
}

/**
 *
 * The part of the object that auto_return_field_02a9c870 reads.
 *
 */
struct Object02a9c870 {
    uint8_t unknown_0x0000[0xc];
    uint8_t value_0x000c; /**< Read by auto_return_field_02a9c870; meaning unknown. */
};
static_assert(offsetof(Object02a9c870, value_0x000c) == 0xc);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02a9c870(const Object02a9c870 *self)
{
    return self->value_0x000c;
}

/**
 *
 * The part of the object that auto_return_field_02a9eec0 reads.
 *
 */
struct Object02a9eec0 {
    uint8_t unknown_0x0000[0x20];
    uint8_t value_0x0020; /**< Read by auto_return_field_02a9eec0; meaning unknown. */
};
static_assert(offsetof(Object02a9eec0, value_0x0020) == 0x20);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02a9eec0(const Object02a9eec0 *self)
{
    return self->value_0x0020;
}

/**
 *
 * The part of the object that auto_return_field_02a9fd50 reads.
 *
 */
struct Object02a9fd50 {
    uint8_t unknown_0x0000[0x20];
    uint8_t value_0x0020; /**< Read by auto_return_field_02a9fd50; meaning unknown. */
};
static_assert(offsetof(Object02a9fd50, value_0x0020) == 0x20);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02a9fd50(const Object02a9fd50 *self)
{
    return self->value_0x0020;
}
