// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_01e20170 reads.
 *
 */
struct Object01e20170 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01e20170; meaning unknown. */
};
static_assert(offsetof(Object01e20170, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e20170(const Object01e20170 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01e20180 reads.
 *
 */
struct Object01e20180 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01e20180; meaning unknown. */
};
static_assert(offsetof(Object01e20180, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e20180(const Object01e20180 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01e201d0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01e20450 = 0x20;

extern "C" uint32_t bb_auto_return_constant_01e20450()
{
    return value_01e20450;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e210f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e28860()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e288c0()
{
}

/**
 *
 * The part of the object that auto_return_field_01e28950 reads.
 *
 */
struct Object01e28950 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01e28950; meaning unknown. */
};
static_assert(offsetof(Object01e28950, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e28950(const Object01e28950 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01e28960 reads.
 *
 */
struct Object01e28960 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01e28960; meaning unknown. */
};
static_assert(offsetof(Object01e28960, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e28960(const Object01e28960 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01e289b0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01e28c30 = 0xd8;

extern "C" uint32_t bb_auto_return_constant_01e28c30()
{
    return value_01e28c30;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e29300()
{
}
