// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02118e30()
{
}

/**
 *
 * The part of the object that auto_return_member_address_0211b520 reads.
 *
 */
struct Object0211b520 {
    uint8_t unknown_0x0000[0xc0];
    uint8_t member_0x00c0; /**< Read by auto_return_member_address_0211b520; meaning unknown. */
};
static_assert(offsetof(Object0211b520, member_0x00c0) == 0xc0);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0211b520(Object0211b520 *self)
{
    return &self->member_0x00c0;
}

/**
 *
 * The part of the object that auto_return_member_address_0211b530 reads.
 *
 */
struct Object0211b530 {
    uint8_t unknown_0x0000[0xd0];
    uint8_t member_0x00d0; /**< Read by auto_return_member_address_0211b530; meaning unknown. */
};
static_assert(offsetof(Object0211b530, member_0x00d0) == 0xd0);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0211b530(Object0211b530 *self)
{
    return &self->member_0x00d0;
}

/**
 *
 * The part of the object that auto_return_member_address_0211b550 reads.
 *
 */
struct Object0211b550 {
    uint8_t unknown_0x0000[0x730];
    uint8_t member_0x0730; /**< Read by auto_return_member_address_0211b550; meaning unknown. */
};
static_assert(offsetof(Object0211b550, member_0x0730) == 0x730);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0211b550(Object0211b550 *self)
{
    return &self->member_0x0730;
}

/**
 *
 * The part of the object that auto_return_member_address_0211e370 reads.
 *
 */
struct Object0211e370 {
    uint8_t unknown_0x0000[0xa0];
    uint8_t member_0x00a0; /**< Read by auto_return_member_address_0211e370; meaning unknown. */
};
static_assert(offsetof(Object0211e370, member_0x00a0) == 0xa0);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0211e370(Object0211e370 *self)
{
    return &self->member_0x00a0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0211e380()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0211ee00()
{
}
