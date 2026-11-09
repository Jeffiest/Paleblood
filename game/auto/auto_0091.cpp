// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_member_address_009112b0 reads.
 *
 */
struct Object009112b0 {
    uint8_t unknown_0x0000[0x18];
    uint8_t member_0x0018; /**< Read by auto_return_member_address_009112b0; meaning unknown. */
};
static_assert(offsetof(Object009112b0, member_0x0018) == 0x18);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_009112b0(Object009112b0 *self)
{
    return &self->member_0x0018;
}

/**
 *
 * The part of the object that auto_return_field_00911610 reads.
 *
 */
struct Object00911610 {
    uint8_t unknown_0x0000[0x18];
    uint32_t value_0x0018; /**< Read by auto_return_field_00911610; meaning unknown. */
};
static_assert(offsetof(Object00911610, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_00911610(const Object00911610 *self)
{
    return self->value_0x0018;
}

/**
 *
 * The part of the object that auto_return_member_address_00912750 reads.
 *
 */
struct Object00912750 {
    uint8_t unknown_0x0000[0x18];
    uint8_t member_0x0018; /**< Read by auto_return_member_address_00912750; meaning unknown. */
};
static_assert(offsetof(Object00912750, member_0x0018) == 0x18);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_00912750(Object00912750 *self)
{
    return &self->member_0x0018;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009154c0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_009181a0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009181b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00918790()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00919f80()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0091a2c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0091a2d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0091a2e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0091a2f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0091a300()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0091a310()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0091a320()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0091a330()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0091a340()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0091a350()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0091a360()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0091a370()
{
}
