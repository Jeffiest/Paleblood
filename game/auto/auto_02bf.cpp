// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02bf4dd0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02bfbba0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_02bfbbd0 reads.
 *
 */
struct Object02bfbbd0 {
    uint8_t unknown_0x0000[0xb98];
    uint32_t value_0x0b98; /**< Read by auto_return_field_02bfbbd0; meaning unknown. */
};
static_assert(offsetof(Object02bfbbd0, value_0x0b98) == 0xb98);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02bfbbd0(const Object02bfbbd0 *self)
{
    return self->value_0x0b98;
}

/**
 *
 * The part of the object that auto_return_field_02bfd030 reads.
 *
 */
struct Object02bfd030 {
    uint8_t unknown_0x0000[0x8a0];
    uint32_t value_0x08a0; /**< Read by auto_return_field_02bfd030; meaning unknown. */
};
static_assert(offsetof(Object02bfd030, value_0x08a0) == 0x8a0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02bfd030(const Object02bfd030 *self)
{
    return self->value_0x08a0;
}

/**
 *
 * The part of the object that auto_return_field_02bffd60 reads.
 *
 */
struct Object02bffd60 {
    uint8_t unknown_0x0000[0xc34];
    uint8_t value_0x0c34; /**< Read by auto_return_field_02bffd60; meaning unknown. */
};
static_assert(offsetof(Object02bffd60, value_0x0c34) == 0xc34);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02bffd60(const Object02bffd60 *self)
{
    return self->value_0x0c34;
}

/**
 *
 * The part of the object that auto_return_field_02bffd70 reads.
 *
 */
struct Object02bffd70 {
    uint8_t unknown_0x0000[0x8d4];
    uint32_t value_0x08d4; /**< Read by auto_return_field_02bffd70; meaning unknown. */
};
static_assert(offsetof(Object02bffd70, value_0x08d4) == 0x8d4);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02bffd70(const Object02bffd70 *self)
{
    return self->value_0x08d4;
}
