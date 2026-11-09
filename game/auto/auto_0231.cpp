// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_02310ca0 reads.
 *
 */
struct Object02310ca0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02310ca0; meaning unknown. */
};
static_assert(offsetof(Object02310ca0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02310ca0(const Object02310ca0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02310cb0 reads.
 *
 */
struct Object02310cb0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02310cb0; meaning unknown. */
};
static_assert(offsetof(Object02310cb0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02310cb0(const Object02310cb0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02310d00()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02310f80 = 0x98;

extern "C" uint32_t bb_auto_return_constant_02310f80()
{
    return value_02310f80;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02310f90()
{
}

/**
 *
 * The part of the object that auto_return_field_02311990 reads.
 *
 */
struct Object02311990 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02311990; meaning unknown. */
};
static_assert(offsetof(Object02311990, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02311990(const Object02311990 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_023119a0 reads.
 *
 */
struct Object023119a0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_023119a0; meaning unknown. */
};
static_assert(offsetof(Object023119a0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023119a0(const Object023119a0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_023119f0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02311c70 = 0x78;

extern "C" uint32_t bb_auto_return_constant_02311c70()
{
    return value_02311c70;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0231fa90 = 0xf;

extern "C" uint32_t bb_auto_return_constant_0231fa90()
{
    return value_0231fa90;
}
