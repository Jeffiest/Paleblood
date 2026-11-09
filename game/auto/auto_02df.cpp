// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02df2f10()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02df36c0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02df3ea0()
{
}

/**
 *
 * The part of the object that auto_return_field_02df72a0 reads.
 *
 */
struct Object02df72a0 {
    uint8_t unknown_0x0000[0xd8];
    uint64_t value_0x00d8; /**< Read by auto_return_field_02df72a0; meaning unknown. */
};
static_assert(offsetof(Object02df72a0, value_0x00d8) == 0xd8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02df72a0(const Object02df72a0 *self)
{
    return self->value_0x00d8;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02df72b0 = 0x6;

extern "C" uint32_t bb_auto_return_constant_02df72b0()
{
    return value_02df72b0;
}

/**
 *
 * The part of the object that auto_return_field_02df7390 reads.
 *
 */
struct Object02df7390 {
    uint8_t unknown_0x0000[0x60];
    uint64_t value_0x0060; /**< Read by auto_return_field_02df7390; meaning unknown. */
};
static_assert(offsetof(Object02df7390, value_0x0060) == 0x60);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02df7390(const Object02df7390 *self)
{
    return self->value_0x0060;
}

/**
 *
 * The part of the object that auto_return_field_02df73a0 reads.
 *
 */
struct Object02df73a0 {
    uint8_t unknown_0x0000[0x68];
    uint32_t value_0x0068; /**< Read by auto_return_field_02df73a0; meaning unknown. */
};
static_assert(offsetof(Object02df73a0, value_0x0068) == 0x68);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02df73a0(const Object02df73a0 *self)
{
    return self->value_0x0068;
}

/**
 *
 * The part of the object that auto_return_field_02df7480 reads.
 *
 */
struct Object02df7480 {
    uint8_t unknown_0x0000[0x28];
    uint64_t value_0x0028; /**< Read by auto_return_field_02df7480; meaning unknown. */
};
static_assert(offsetof(Object02df7480, value_0x0028) == 0x28);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02df7480(const Object02df7480 *self)
{
    return self->value_0x0028;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02df7930()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02df79a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02df79f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02df7a00()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02df7a10()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02df7a70()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02df7a90()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02df7aa0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02df7af0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02df7b00()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02df7b10()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02df7b20()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02df7b30()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02df7b40()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02df7d70()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02df8500()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02df8550()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02df85a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dfbd90()
{
}
