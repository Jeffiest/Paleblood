// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_00431870()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00433a50()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00433cd0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00436ff0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_00438080()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_004381d0 reads.
 *
 */
struct Object004381d0 {
    uint8_t unknown_0x0000[0x58];
    uint64_t value_0x0058; /**< Read by auto_return_field_004381d0; meaning unknown. */
};
static_assert(offsetof(Object004381d0, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_004381d0(const Object004381d0 *self)
{
    return self->value_0x0058;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_004393f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00439530()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00439610()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00439930()
{
}

/**
 *
 * The part of the object that auto_return_field_00439e20 reads.
 *
 */
struct __attribute__((packed)) Object00439e20 {
    uint8_t unknown_0x0000[0x1];
    uint64_t value_0x0001; /**< Read by auto_return_field_00439e20; meaning unknown. */
};
static_assert(offsetof(Object00439e20, value_0x0001) == 0x1);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_00439e20(const Object00439e20 *self)
{
    return self->value_0x0001;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0043a9e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0043ad40()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0043b0d0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_0043cc30 reads.
 *
 */
struct Object0043cc30 {
    uint8_t unknown_0x0000[0xa0];
    uint8_t member_0x00a0; /**< Read by auto_return_member_address_0043cc30; meaning unknown. */
};
static_assert(offsetof(Object0043cc30, member_0x00a0) == 0xa0);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0043cc30(Object0043cc30 *self)
{
    return &self->member_0x00a0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0043fed0()
{
}
