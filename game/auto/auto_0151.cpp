// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01511d40()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01511d50()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01511d60()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01511d70()
{
}

/**
 *
 * The part of the object that auto_return_field_0151b490 reads.
 *
 */
struct Object0151b490 {
    uint8_t unknown_0x0000[0x18];
    uint64_t value_0x0018; /**< Read by auto_return_field_0151b490; meaning unknown. */
};
static_assert(offsetof(Object0151b490, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0151b490(const Object0151b490 *self)
{
    return self->value_0x0018;
}

/**
 *
 * The part of the object that auto_return_field_0151b4a0 reads.
 *
 */
struct Object0151b4a0 {
    uint8_t unknown_0x0000[0x18];
    uint64_t value_0x0018; /**< Read by auto_return_field_0151b4a0; meaning unknown. */
};
static_assert(offsetof(Object0151b4a0, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0151b4a0(const Object0151b4a0 *self)
{
    return self->value_0x0018;
}

/**
 *
 * The part of the object that auto_return_member_address_0151cb00 reads.
 *
 */
struct Object0151cb00 {
    uint8_t unknown_0x0000[0x20];
    uint8_t member_0x0020; /**< Read by auto_return_member_address_0151cb00; meaning unknown. */
};
static_assert(offsetof(Object0151cb00, member_0x0020) == 0x20);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0151cb00(Object0151cb00 *self)
{
    return &self->member_0x0020;
}

/**
 *
 * The part of the object that auto_return_member_address_0151cb10 reads.
 *
 */
struct Object0151cb10 {
    uint8_t unknown_0x0000[0x20];
    uint8_t member_0x0020; /**< Read by auto_return_member_address_0151cb10; meaning unknown. */
};
static_assert(offsetof(Object0151cb10, member_0x0020) == 0x20);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0151cb10(Object0151cb10 *self)
{
    return &self->member_0x0020;
}

/**
 *
 * The part of the object that auto_return_member_address_0151cb20 reads.
 *
 */
struct Object0151cb20 {
    uint8_t unknown_0x0000[0x20];
    uint8_t member_0x0020; /**< Read by auto_return_member_address_0151cb20; meaning unknown. */
};
static_assert(offsetof(Object0151cb20, member_0x0020) == 0x20);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0151cb20(Object0151cb20 *self)
{
    return &self->member_0x0020;
}

/**
 *
 * The part of the object that auto_return_member_address_0151cb30 reads.
 *
 */
struct Object0151cb30 {
    uint8_t unknown_0x0000[0x20];
    uint8_t member_0x0020; /**< Read by auto_return_member_address_0151cb30; meaning unknown. */
};
static_assert(offsetof(Object0151cb30, member_0x0020) == 0x20);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0151cb30(Object0151cb30 *self)
{
    return &self->member_0x0020;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0151f2f0()
{
}
