// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01470260()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_014711d0 reads.
 *
 */
struct Object014711d0 {
    uint8_t unknown_0x0000[0x8];
    uint32_t value_0x0008; /**< Read by auto_return_field_014711d0; meaning unknown. */
};
static_assert(offsetof(Object014711d0, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_014711d0(const Object014711d0 *self)
{
    return self->value_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_014712b0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_014712c0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01472770 reads.
 *
 */
struct Object01472770 {
    uint8_t unknown_0x0000[0x8];
    uint32_t value_0x0008; /**< Read by auto_return_field_01472770; meaning unknown. */
};
static_assert(offsetof(Object01472770, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01472770(const Object01472770 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_01472780 reads.
 *
 */
struct Object01472780 {
    uint8_t unknown_0x0000[0x10];
    uint32_t value_0x0010; /**< Read by auto_return_field_01472780; meaning unknown. */
};
static_assert(offsetof(Object01472780, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01472780(const Object01472780 *self)
{
    return self->value_0x0010;
}

/**
 *
 * The part of the object that auto_return_field_01472790 reads.
 *
 */
struct Object01472790 {
    uint8_t unknown_0x0000[0xc];
    uint32_t value_0x000c; /**< Read by auto_return_field_01472790; meaning unknown. */
};
static_assert(offsetof(Object01472790, value_0x000c) == 0xc);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01472790(const Object01472790 *self)
{
    return self->value_0x000c;
}

/**
 *
 * The part of the object that auto_return_field_014727a0 reads.
 *
 */
struct Object014727a0 {
    uint8_t unknown_0x0000[0x14];
    uint32_t value_0x0014; /**< Read by auto_return_field_014727a0; meaning unknown. */
};
static_assert(offsetof(Object014727a0, value_0x0014) == 0x14);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_014727a0(const Object014727a0 *self)
{
    return self->value_0x0014;
}

/**
 *
 * The part of the object that auto_return_field_01472830 reads.
 *
 */
struct Object01472830 {
    uint8_t unknown_0x0000[0x24];
    uint32_t value_0x0024; /**< Read by auto_return_field_01472830; meaning unknown. */
};
static_assert(offsetof(Object01472830, value_0x0024) == 0x24);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01472830(const Object01472830 *self)
{
    return self->value_0x0024;
}
