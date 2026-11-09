// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02bd7fd0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02bd8900()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02bd8b20()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02bd8d40()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02bd8dd0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02bd8de0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02bd8df0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02bd8e00()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02bd8e10()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02bdad80()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02bde1e0()
{
}

/**
 *
 * The part of the object that auto_return_field_02bdf320 reads.
 *
 */
struct Object02bdf320 {
    uint32_t value_0x0000; /**< Read by auto_return_field_02bdf320; meaning unknown. */
};
static_assert(offsetof(Object02bdf320, value_0x0000) == 0x0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02bdf320(const Object02bdf320 *self)
{
    return self->value_0x0000;
}

/**
 *
 * The part of the object that auto_return_field_02bdf350 reads.
 *
 */
struct Object02bdf350 {
    uint64_t value_0x0000; /**< Read by auto_return_field_02bdf350; meaning unknown. */
};
static_assert(offsetof(Object02bdf350, value_0x0000) == 0x0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02bdf350(const Object02bdf350 *self)
{
    return self->value_0x0000;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02bdf430()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02bdfba0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_02bdfd00 reads.
 *
 */
struct Object02bdfd00 {
    uint8_t unknown_0x0000[0x40];
    uint8_t member_0x0040; /**< Read by auto_return_member_address_02bdfd00; meaning unknown. */
};
static_assert(offsetof(Object02bdfd00, member_0x0040) == 0x40);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02bdfd00(Object02bdfd00 *self)
{
    return &self->member_0x0040;
}

/**
 *
 * The part of the object that auto_return_member_address_02bdfd10 reads.
 *
 */
struct Object02bdfd10 {
    uint8_t unknown_0x0000[0x4c];
    uint8_t member_0x004c; /**< Read by auto_return_member_address_02bdfd10; meaning unknown. */
};
static_assert(offsetof(Object02bdfd10, member_0x004c) == 0x4c);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02bdfd10(Object02bdfd10 *self)
{
    return &self->member_0x004c;
}
