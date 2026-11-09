// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02b50930()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_02b50b10 reads.
 *
 */
struct Object02b50b10 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02b50b10; meaning unknown. */
};
static_assert(offsetof(Object02b50b10, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02b50b10(const Object02b50b10 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02b50b20 reads.
 *
 */
struct Object02b50b20 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02b50b20; meaning unknown. */
};
static_assert(offsetof(Object02b50b20, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02b50b20(const Object02b50b20 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02b50b70()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b50cc0 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02b50cc0()
{
    return value_02b50cc0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b50fe0 = 0x1;

extern "C" uint32_t bb_auto_return_constant_02b50fe0()
{
    return value_02b50fe0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b512e0 = 0x2;

extern "C" uint32_t bb_auto_return_constant_02b512e0()
{
    return value_02b512e0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b51700 = 0x2;

extern "C" uint32_t bb_auto_return_constant_02b51700()
{
    return value_02b51700;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02b53570()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_02b536c0 reads.
 *
 */
struct Object02b536c0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02b536c0; meaning unknown. */
};
static_assert(offsetof(Object02b536c0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02b536c0(const Object02b536c0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02b536d0 reads.
 *
 */
struct Object02b536d0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02b536d0; meaning unknown. */
};
static_assert(offsetof(Object02b536d0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02b536d0(const Object02b536d0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02b53720()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b53870 = 0x48;

extern "C" uint32_t bb_auto_return_constant_02b53870()
{
    return value_02b53870;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02b5f2d0()
{
}
