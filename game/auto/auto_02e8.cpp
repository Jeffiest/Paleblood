// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02e809b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02e809c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02e82080()
{
}

/**
 *
 * The part of the object that auto_return_member_address_02e82ea0 reads.
 *
 */
struct Object02e82ea0 {
    uint8_t unknown_0x0000[0x18];
    uint8_t member_0x0018; /**< Read by auto_return_member_address_02e82ea0; meaning unknown. */
};
static_assert(offsetof(Object02e82ea0, member_0x0018) == 0x18);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02e82ea0(Object02e82ea0 *self)
{
    return &self->member_0x0018;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02e83870()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02e83bc0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02e83bd0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02e83be0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02e83bf0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02e83c00()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02e83c10()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02e83c20()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02e848e0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02e848e0()
{
    return value_02e848e0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02e848f0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02e84900()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02e84910()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02e84a50 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02e84a50()
{
    return value_02e84a50;
}

/**
 *
 * The part of the object that auto_return_field_02e84a60 reads.
 *
 */
struct Object02e84a60 {
    uint8_t unknown_0x0000[0x18];
    uint32_t value_0x0018; /**< Read by auto_return_field_02e84a60; meaning unknown. */
};
static_assert(offsetof(Object02e84a60, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02e84a60(const Object02e84a60 *self)
{
    return self->value_0x0018;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02e857a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02e85b20()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02e86120()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02e86300()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02e87810()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02e879f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02e87a00()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02e88370()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02e884c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02e884f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02e88500()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02e88ce0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02e89b90 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02e89b90()
{
    return value_02e89b90;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02e8a3c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02e8acd0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02e8ace0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02e8ace0()
{
    return value_02e8ace0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02e8b0f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02e8ba60()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02e8bb70()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02e8c8b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02e8cc40()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02e8cc50()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02e8d390()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02e8d720()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02e8d730()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02e8e2b0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02e8e2b0()
{
    return value_02e8e2b0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02e8eab0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02e8ec70()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02e8fa90()
{
}
