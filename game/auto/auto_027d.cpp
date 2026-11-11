// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_027d36b0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_027d36b0()
{
    return value_027d36b0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_027d8030 = 0x200;

extern "C" uint32_t bb_auto_return_constant_027d8030()
{
    return value_027d8030;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_027dc8b0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_027dc8b0()
{
    return value_027dc8b0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_027dc9d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_027dda80()
{
}

/**
 *
 * The part of the object that auto_return_field_027ddae0 reads.
 *
 */
struct Object027ddae0 {
    uint8_t unknown_0x0000[0x50];
    uint64_t value_0x0050; /**< Read by auto_return_field_027ddae0; meaning unknown. */
};
static_assert(offsetof(Object027ddae0, value_0x0050) == 0x50);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_027ddae0(const Object027ddae0 *self)
{
    return self->value_0x0050;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_027ddb50 = 0x1;

extern "C" uint8_t bb_auto_return_constant_027ddb50()
{
    return value_027ddb50;
}

/**
 *
 * The part of the object that auto_return_field_027ddbb0 reads.
 *
 */
struct Object027ddbb0 {
    uint8_t unknown_0x0000[0x60];
    uint64_t value_0x0060; /**< Read by auto_return_field_027ddbb0; meaning unknown. */
};
static_assert(offsetof(Object027ddbb0, value_0x0060) == 0x60);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_027ddbb0(const Object027ddbb0 *self)
{
    return self->value_0x0060;
}

/**
 *
 * The part of the object that auto_return_field_027ddc10 reads.
 *
 */
struct Object027ddc10 {
    uint8_t unknown_0x0000[0x50];
    uint64_t value_0x0050; /**< Read by auto_return_field_027ddc10; meaning unknown. */
};
static_assert(offsetof(Object027ddc10, value_0x0050) == 0x50);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_027ddc10(const Object027ddc10 *self)
{
    return self->value_0x0050;
}

/**
 *
 * The part of the object that auto_return_field_027ddc70 reads.
 *
 */
struct Object027ddc70 {
    uint8_t unknown_0x0000[0x50];
    uint64_t value_0x0050; /**< Read by auto_return_field_027ddc70; meaning unknown. */
};
static_assert(offsetof(Object027ddc70, value_0x0050) == 0x50);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_027ddc70(const Object027ddc70 *self)
{
    return self->value_0x0050;
}
