// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02150790()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02150b00()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02150b60()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02150bd0 = 0x1;

extern "C" uint32_t bb_auto_return_constant_02150bd0()
{
    return value_02150bd0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_021522b0 = 0x7;

extern "C" uint32_t bb_auto_return_constant_021522b0()
{
    return value_021522b0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_021524e0()
{
}

/**
 *
 * The part of the object that auto_return_float_field_02152790 reads.
 *
 */
struct Object02152790 {
    uint8_t unknown_0x0000[0x18];
    float value_0x0018; /**< Read by auto_return_float_field_02152790; meaning unknown. */
};
static_assert(offsetof(Object02152790, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_02152790(const Object02152790 *self)
{
    return self->value_0x0018;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02153360()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02153370()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02154030()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02155230()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02155300()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02156310()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02157c60()
{
}

/**
 *
 * The part of the object that auto_return_field_0215b4b0 reads.
 *
 */
struct Object0215b4b0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0215b4b0; meaning unknown. */
};
static_assert(offsetof(Object0215b4b0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0215b4b0(const Object0215b4b0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0215b4c0 reads.
 *
 */
struct Object0215b4c0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0215b4c0; meaning unknown. */
};
static_assert(offsetof(Object0215b4c0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0215b4c0(const Object0215b4c0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0215b510()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0215b790 = 0x128;

extern "C" uint32_t bb_auto_return_constant_0215b790()
{
    return value_0215b790;
}
