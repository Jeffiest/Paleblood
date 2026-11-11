// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01633fc0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01634020()
{
}

/**
 *
 * The part of the object that auto_return_field_016361c0 reads.
 *
 */
struct Object016361c0 {
    uint8_t unknown_0x0000[0xf8];
    uint64_t value_0x00f8; /**< Read by auto_return_field_016361c0; meaning unknown. */
};
static_assert(offsetof(Object016361c0, value_0x00f8) == 0xf8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_016361c0(const Object016361c0 *self)
{
    return self->value_0x00f8;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01636f60()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01636fc0()
{
}

/**
 *
 * The part of the object that auto_return_field_0163a870 reads.
 *
 */
struct Object0163a870 {
    uint8_t unknown_0x0000[0xc0];
    uint32_t value_0x00c0; /**< Read by auto_return_field_0163a870; meaning unknown. */
};
static_assert(offsetof(Object0163a870, value_0x00c0) == 0xc0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_0163a870(const Object0163a870 *self)
{
    return self->value_0x00c0;
}

/**
 *
 * The part of the object that auto_return_field_0163b330 reads.
 *
 */
struct Object0163b330 {
    uint8_t unknown_0x0000[0x1b0];
    uint64_t value_0x01b0; /**< Read by auto_return_field_0163b330; meaning unknown. */
};
static_assert(offsetof(Object0163b330, value_0x01b0) == 0x1b0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0163b330(const Object0163b330 *self)
{
    return self->value_0x01b0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0163c7a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0163c800()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0163f3e0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0163f8e0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0163f8e0()
{
    return value_0163f8e0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0163f910()
{
    return 0;
}
