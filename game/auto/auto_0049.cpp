// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_00491d50 reads.
 *
 */
struct Object00491d50 {
    uint8_t unknown_0x0000[0x18];
    uint32_t value_0x0018; /**< Read by auto_return_field_00491d50; meaning unknown. */
};
static_assert(offsetof(Object00491d50, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_00491d50(const Object00491d50 *self)
{
    return self->value_0x0018;
}

/**
 *
 * The part of the object that auto_return_field_004921c0 reads.
 *
 */
struct Object004921c0 {
    uint8_t unknown_0x0000[0x29];
    uint8_t value_0x0029; /**< Read by auto_return_field_004921c0; meaning unknown. */
};
static_assert(offsetof(Object004921c0, value_0x0029) == 0x29);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_004921c0(const Object004921c0 *self)
{
    return self->value_0x0029;
}

/**
 *
 * The part of the object that auto_return_member_address_00494b80 reads.
 *
 */
struct Object00494b80 {
    uint8_t unknown_0x0000[0x64];
    uint8_t member_0x0064; /**< Read by auto_return_member_address_00494b80; meaning unknown. */
};
static_assert(offsetof(Object00494b80, member_0x0064) == 0x64);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_00494b80(Object00494b80 *self)
{
    return &self->member_0x0064;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00498070()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00498080()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00498090()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_004980a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_004980b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_004980c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_004980d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_004980e0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_004987f0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00498ad0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00498ae0()
{
}
