// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00d90330()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00d904b0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_00d91d00 = 0x1;

extern "C" uint8_t bb_auto_return_constant_00d91d00()
{
    return value_00d91d00;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00d92570()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_00d939c0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_float_field_00d93a00 reads.
 *
 */
struct Object00d93a00 {
    uint8_t unknown_0x0000[0xa0];
    float value_0x00a0; /**< Read by auto_return_float_field_00d93a00; meaning unknown. */
};
static_assert(offsetof(Object00d93a00, value_0x00a0) == 0xa0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_00d93a00(const Object00d93a00 *self)
{
    return self->value_0x00a0;
}

/**
 *
 * The part of the object that auto_return_float_field_00d93f30 reads.
 *
 */
struct Object00d93f30 {
    uint8_t unknown_0x0000[0xa0];
    float value_0x00a0; /**< Read by auto_return_float_field_00d93f30; meaning unknown. */
};
static_assert(offsetof(Object00d93f30, value_0x00a0) == 0xa0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_00d93f30(const Object00d93f30 *self)
{
    return self->value_0x00a0;
}

/**
 *
 * The part of the object that auto_return_float_field_00d93f40 reads.
 *
 */
struct Object00d93f40 {
    uint8_t unknown_0x0000[0xa0];
    float value_0x00a0; /**< Read by auto_return_float_field_00d93f40; meaning unknown. */
};
static_assert(offsetof(Object00d93f40, value_0x00a0) == 0xa0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_00d93f40(const Object00d93f40 *self)
{
    return self->value_0x00a0;
}

/**
 *
 * The part of the object that auto_return_field_00d96520 reads.
 *
 */
struct Object00d96520 {
    uint8_t unknown_0x0000[0xa0];
    uint32_t value_0x00a0; /**< Read by auto_return_field_00d96520; meaning unknown. */
};
static_assert(offsetof(Object00d96520, value_0x00a0) == 0xa0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_00d96520(const Object00d96520 *self)
{
    return self->value_0x00a0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00d96910()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00d96930()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00d96940()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00d96970()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_00d99f90 = 0x1;

extern "C" uint8_t bb_auto_return_constant_00d99f90()
{
    return value_00d99f90;
}

/**
 *
 * The part of the object that auto_return_field_00d9c3c0 reads.
 *
 */
struct Object00d9c3c0 {
    uint8_t unknown_0x0000[0xe0];
    uint64_t value_0x00e0; /**< Read by auto_return_field_00d9c3c0; meaning unknown. */
};
static_assert(offsetof(Object00d9c3c0, value_0x00e0) == 0xe0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_00d9c3c0(const Object00d9c3c0 *self)
{
    return self->value_0x00e0;
}
