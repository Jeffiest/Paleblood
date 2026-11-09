// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00e015b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00e015c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00e03bd0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_00e03eb0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_00e03f30 = 0xffffffff;

extern "C" uint32_t bb_auto_return_constant_00e03f30()
{
    return value_00e03f30;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_00e040f0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_00e057f0 reads.
 *
 */
struct Object00e057f0 {
    uint8_t unknown_0x0000[0x358];
    uint64_t value_0x0358; /**< Read by auto_return_field_00e057f0; meaning unknown. */
};
static_assert(offsetof(Object00e057f0, value_0x0358) == 0x358);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_00e057f0(const Object00e057f0 *self)
{
    return self->value_0x0358;
}

/**
 *
 * The part of the object that auto_return_field_00e05800 reads.
 *
 */
struct Object00e05800 {
    uint8_t unknown_0x0000[0x360];
    uint64_t value_0x0360; /**< Read by auto_return_field_00e05800; meaning unknown. */
};
static_assert(offsetof(Object00e05800, value_0x0360) == 0x360);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_00e05800(const Object00e05800 *self)
{
    return self->value_0x0360;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_00e058b0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00e058c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00e063c0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_00e07ee0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_00e0d920 reads.
 *
 */
struct Object00e0d920 {
    uint8_t unknown_0x0000[0x78];
    uint64_t value_0x0078; /**< Read by auto_return_field_00e0d920; meaning unknown. */
};
static_assert(offsetof(Object00e0d920, value_0x0078) == 0x78);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_00e0d920(const Object00e0d920 *self)
{
    return self->value_0x0078;
}

/**
 *
 * The part of the object that auto_return_field_00e0f7e0 reads.
 *
 */
struct Object00e0f7e0 {
    uint8_t unknown_0x0000[0x28];
    uint64_t value_0x0028; /**< Read by auto_return_field_00e0f7e0; meaning unknown. */
};
static_assert(offsetof(Object00e0f7e0, value_0x0028) == 0x28);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_00e0f7e0(const Object00e0f7e0 *self)
{
    return self->value_0x0028;
}

/**
 *
 * The part of the object that auto_return_field_00e0f7f0 reads.
 *
 */
struct Object00e0f7f0 {
    uint8_t unknown_0x0000[0x38];
    uint64_t value_0x0038; /**< Read by auto_return_field_00e0f7f0; meaning unknown. */
};
static_assert(offsetof(Object00e0f7f0, value_0x0038) == 0x38);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_00e0f7f0(const Object00e0f7f0 *self)
{
    return self->value_0x0038;
}
