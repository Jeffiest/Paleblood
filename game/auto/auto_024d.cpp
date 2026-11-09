// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_024d7b00()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_024daf50 reads.
 *
 */
struct Object024daf50 {
    uint8_t unknown_0x0000[0x4c0];
    uint32_t value_0x04c0; /**< Read by auto_return_field_024daf50; meaning unknown. */
};
static_assert(offsetof(Object024daf50, value_0x04c0) == 0x4c0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_024daf50(const Object024daf50 *self)
{
    return self->value_0x04c0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_024dc2e0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_024dc660 = 0x1;

extern "C" uint8_t bb_auto_return_constant_024dc660()
{
    return value_024dc660;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_024dc970()
{
}

/**
 *
 * The part of the object that auto_return_field_024de370 reads.
 *
 */
struct Object024de370 {
    uint8_t unknown_0x0000[0x30];
    uint32_t value_0x0030; /**< Read by auto_return_field_024de370; meaning unknown. */
};
static_assert(offsetof(Object024de370, value_0x0030) == 0x30);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_024de370(const Object024de370 *self)
{
    return self->value_0x0030;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_024de410()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_024de520()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_024de540()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_024deec0()
{
}

/**
 *
 * The part of the object that auto_return_field_024df580 reads.
 *
 */
struct Object024df580 {
    uint8_t unknown_0x0000[0x8];
    uint64_t value_0x0008; /**< Read by auto_return_field_024df580; meaning unknown. */
};
static_assert(offsetof(Object024df580, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_024df580(const Object024df580 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_024df600 reads.
 *
 */
struct Object024df600 {
    uint64_t value_0x0000; /**< Read by auto_return_field_024df600; meaning unknown. */
};
static_assert(offsetof(Object024df600, value_0x0000) == 0x0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_024df600(const Object024df600 *self)
{
    return self->value_0x0000;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_024df6d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_024df6e0()
{
}
