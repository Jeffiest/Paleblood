// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_02d85590 reads.
 *
 */
struct Object02d85590 {
    uint8_t unknown_0x0000[0x30];
    uint64_t value_0x0030; /**< Read by auto_return_field_02d85590; meaning unknown. */
};
static_assert(offsetof(Object02d85590, value_0x0030) == 0x30);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d85590(const Object02d85590 *self)
{
    return self->value_0x0030;
}

/**
 *
 * The part of the object that auto_return_field_02d855a0 reads.
 *
 */
struct Object02d855a0 {
    uint8_t unknown_0x0000[0x10];
    uint64_t value_0x0010; /**< Read by auto_return_field_02d855a0; meaning unknown. */
};
static_assert(offsetof(Object02d855a0, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d855a0(const Object02d855a0 *self)
{
    return self->value_0x0010;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d855c0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02d855d0 = 0x1;

extern "C" uint32_t bb_auto_return_constant_02d855d0()
{
    return value_02d855d0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d855e0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d855f0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_02d86630 reads.
 *
 */
struct Object02d86630 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02d86630; meaning unknown. */
};
static_assert(offsetof(Object02d86630, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d86630(const Object02d86630 *self)
{
    return self->value_0x0040;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d893c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d893d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d893e0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02d893f0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02d893f0()
{
    return value_02d893f0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d89400()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d89410()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d89c70()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d8e650()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d8f060()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d8f0c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d8f120()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d8f270()
{
}
