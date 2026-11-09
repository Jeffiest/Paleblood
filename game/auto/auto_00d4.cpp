// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00d440b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00d440c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00d440d0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_00d480f0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_00d480f0()
{
    return value_00d480f0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00d48250()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00d48260()
{
}

/**
 *
 * The part of the object that auto_return_member_address_00d49de0 reads.
 *
 */
struct Object00d49de0 {
    uint8_t unknown_0x0000[0xe0];
    uint8_t member_0x00e0; /**< Read by auto_return_member_address_00d49de0; meaning unknown. */
};
static_assert(offsetof(Object00d49de0, member_0x00e0) == 0xe0);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_00d49de0(Object00d49de0 *self)
{
    return &self->member_0x00e0;
}

/**
 *
 * The part of the object that auto_return_member_address_00d49fd0 reads.
 *
 */
struct Object00d49fd0 {
    uint8_t unknown_0x0000[0x20];
    uint8_t member_0x0020; /**< Read by auto_return_member_address_00d49fd0; meaning unknown. */
};
static_assert(offsetof(Object00d49fd0, member_0x0020) == 0x20);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_00d49fd0(Object00d49fd0 *self)
{
    return &self->member_0x0020;
}

/**
 *
 * The part of the object that auto_return_member_address_00d4a110 reads.
 *
 */
struct Object00d4a110 {
    uint8_t unknown_0x0000[0x30];
    uint8_t member_0x0030; /**< Read by auto_return_member_address_00d4a110; meaning unknown. */
};
static_assert(offsetof(Object00d4a110, member_0x0030) == 0x30);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_00d4a110(Object00d4a110 *self)
{
    return &self->member_0x0030;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00d4d340()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00d4d390()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00d4d3a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00d4d3f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00d4d440()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00d4d450()
{
}

/**
 *
 * The part of the object that auto_return_member_address_00d4f060 reads.
 *
 */
struct Object00d4f060 {
    uint8_t unknown_0x0000[0x50];
    uint8_t member_0x0050; /**< Read by auto_return_member_address_00d4f060; meaning unknown. */
};
static_assert(offsetof(Object00d4f060, member_0x0050) == 0x50);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_00d4f060(Object00d4f060 *self)
{
    return &self->member_0x0050;
}

/**
 *
 * The part of the object that auto_return_field_00d4f0f0 reads.
 *
 */
struct Object00d4f0f0 {
    uint8_t unknown_0x0000[0x10];
    uint64_t value_0x0010; /**< Read by auto_return_field_00d4f0f0; meaning unknown. */
};
static_assert(offsetof(Object00d4f0f0, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_00d4f0f0(const Object00d4f0f0 *self)
{
    return self->value_0x0010;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00d4f220()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00d4f230()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00d4f250()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00d4f260()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_00d4f9d0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00d4fb60()
{
}
