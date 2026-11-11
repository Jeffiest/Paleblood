// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d294c0()
{
}

/**
 *
 * The part of the object that auto_return_field_02d2a900 reads.
 *
 */
struct Object02d2a900 {
    uint8_t unknown_0x0000[0x60];
    uint8_t value_0x0060; /**< Read by auto_return_field_02d2a900; meaning unknown. */
};
static_assert(offsetof(Object02d2a900, value_0x0060) == 0x60);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02d2a900(const Object02d2a900 *self)
{
    return self->value_0x0060;
}

/**
 *
 * The part of the object that auto_return_field_02d2f670 reads.
 *
 */
struct Object02d2f670 {
    uint8_t unknown_0x0000[0x80];
    uint64_t value_0x0080; /**< Read by auto_return_field_02d2f670; meaning unknown. */
};
static_assert(offsetof(Object02d2f670, value_0x0080) == 0x80);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d2f670(const Object02d2f670 *self)
{
    return self->value_0x0080;
}

/**
 *
 * The part of the object that auto_return_field_02d2f680 reads.
 *
 */
struct Object02d2f680 {
    uint8_t unknown_0x0000[0x88];
    uint64_t value_0x0088; /**< Read by auto_return_field_02d2f680; meaning unknown. */
};
static_assert(offsetof(Object02d2f680, value_0x0088) == 0x88);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d2f680(const Object02d2f680 *self)
{
    return self->value_0x0088;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d2f7c0()
{
}
