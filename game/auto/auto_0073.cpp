// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00732ec0()
{
}

/**
 *
 * The part of the object that auto_return_field_007371e0 reads.
 *
 */
struct Object007371e0 {
    uint8_t unknown_0x0000[0x30];
    uint64_t value_0x0030; /**< Read by auto_return_field_007371e0; meaning unknown. */
};
static_assert(offsetof(Object007371e0, value_0x0030) == 0x30);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_007371e0(const Object007371e0 *self)
{
    return self->value_0x0030;
}

/**
 *
 * The part of the object that auto_return_field_00737200 reads.
 *
 */
struct Object00737200 {
    uint8_t unknown_0x0000[0x38];
    uint64_t value_0x0038; /**< Read by auto_return_field_00737200; meaning unknown. */
};
static_assert(offsetof(Object00737200, value_0x0038) == 0x38);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_00737200(const Object00737200 *self)
{
    return self->value_0x0038;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00738900()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00739550()
{
}

/**
 *
 * The part of the object that auto_return_field_0073acb0 reads.
 *
 */
struct Object0073acb0 {
    uint8_t unknown_0x0000[0x18];
    uint32_t value_0x0018; /**< Read by auto_return_field_0073acb0; meaning unknown. */
};
static_assert(offsetof(Object0073acb0, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_0073acb0(const Object0073acb0 *self)
{
    return self->value_0x0018;
}

/**
 *
 * The part of the object that auto_return_field_0073acf0 reads.
 *
 */
struct Object0073acf0 {
    uint8_t unknown_0x0000[0x1c];
    uint32_t value_0x001c; /**< Read by auto_return_field_0073acf0; meaning unknown. */
};
static_assert(offsetof(Object0073acf0, value_0x001c) == 0x1c);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_0073acf0(const Object0073acf0 *self)
{
    return self->value_0x001c;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0073c0d0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0073d910 = 0x1;

extern "C" uint32_t bb_auto_return_constant_0073d910()
{
    return value_0073d910;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0073f1c0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0073f1c0()
{
    return value_0073f1c0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0073f420()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0073feb0()
{
    return 0;
}
