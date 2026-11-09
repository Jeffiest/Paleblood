// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_018f0770()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_018f0b10()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_018f0be0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_018f3130 reads.
 *
 */
struct Object018f3130 {
    uint8_t unknown_0x0000[0x4ac];
    uint8_t member_0x04ac; /**< Read by auto_return_member_address_018f3130; meaning unknown. */
};
static_assert(offsetof(Object018f3130, member_0x04ac) == 0x4ac);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_018f3130(Object018f3130 *self)
{
    return &self->member_0x04ac;
}

/**
 *
 * The part of the object that auto_return_field_018f3df0 reads.
 *
 */
struct Object018f3df0 {
    uint8_t unknown_0x0000[0x670];
    uint64_t value_0x0670; /**< Read by auto_return_field_018f3df0; meaning unknown. */
};
static_assert(offsetof(Object018f3df0, value_0x0670) == 0x670);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_018f3df0(const Object018f3df0 *self)
{
    return self->value_0x0670;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_018f5e90()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_018f5f40()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_018f6010()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_018f9950()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_018fc650 = 0x2;

extern "C" uint32_t bb_auto_return_constant_018fc650()
{
    return value_018fc650;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_018fc8f0 = 0x1;

extern "C" uint32_t bb_auto_return_constant_018fc8f0()
{
    return value_018fc8f0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_018fcb90()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_018fddf0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_018fdf60()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_018fe190 = 0x1;

extern "C" uint8_t bb_auto_return_constant_018fe190()
{
    return value_018fe190;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_018fedc0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_018ff030()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_018ff040()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_018ff050()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_018ff200()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_018ff210()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_018ff5b0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_018ffcb0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_018ffcb0()
{
    return value_018ffcb0;
}
