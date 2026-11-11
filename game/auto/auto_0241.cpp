// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02411b70 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_02411b70()
{
    return value_02411b70;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02411e90 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_02411e90()
{
    return value_02411e90;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_024121b0 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_024121b0()
{
    return value_024121b0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_024132a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02413300()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02413400()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02415590()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_024158b0 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_024158b0()
{
    return value_024158b0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02415d80()
{
}

/**
 *
 * The part of the object that auto_return_field_02416510 reads.
 *
 */
struct Object02416510 {
    uint8_t unknown_0x0000[0xd0];
    uint32_t value_0x00d0; /**< Read by auto_return_field_02416510; meaning unknown. */
};
static_assert(offsetof(Object02416510, value_0x00d0) == 0xd0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02416510(const Object02416510 *self)
{
    return self->value_0x00d0;
}

/**
 *
 * The part of the object that auto_return_field_02416520 reads.
 *
 */
struct Object02416520 {
    uint8_t unknown_0x0000[0xd4];
    uint32_t value_0x00d4; /**< Read by auto_return_field_02416520; meaning unknown. */
};
static_assert(offsetof(Object02416520, value_0x00d4) == 0xd4);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02416520(const Object02416520 *self)
{
    return self->value_0x00d4;
}

/**
 *
 * The part of the object that auto_return_member_address_02416530 reads.
 *
 */
struct Object02416530 {
    uint8_t unknown_0x0000[0xd8];
    uint8_t member_0x00d8; /**< Read by auto_return_member_address_02416530; meaning unknown. */
};
static_assert(offsetof(Object02416530, member_0x00d8) == 0xd8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02416530(Object02416530 *self)
{
    return &self->member_0x00d8;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0241f150 = 0x2c8;

extern "C" uint32_t bb_auto_return_constant_0241f150()
{
    return value_0241f150;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0241f470 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_0241f470()
{
    return value_0241f470;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0241f790 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_0241f790()
{
    return value_0241f790;
}
