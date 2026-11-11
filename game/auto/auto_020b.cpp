// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_member_address_020b3e30 reads.
 *
 */
struct Object020b3e30 {
    uint8_t unknown_0x0000[0x50];
    uint8_t member_0x0050; /**< Read by auto_return_member_address_020b3e30; meaning unknown. */
};
static_assert(offsetof(Object020b3e30, member_0x0050) == 0x50);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_020b3e30(Object020b3e30 *self)
{
    return &self->member_0x0050;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_020b5a00()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_020b5a60()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_020b5ac0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_020b5b20()
{
}

/**
 *
 * The part of the object that auto_return_field_020b6aa0 reads.
 *
 */
struct Object020b6aa0 {
    uint8_t unknown_0x0000[0x98];
    uint64_t value_0x0098; /**< Read by auto_return_field_020b6aa0; meaning unknown. */
};
static_assert(offsetof(Object020b6aa0, value_0x0098) == 0x98);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_020b6aa0(const Object020b6aa0 *self)
{
    return self->value_0x0098;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_020b7960 = 0x8;

extern "C" uint32_t bb_auto_return_constant_020b7960()
{
    return value_020b7960;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_020b8170()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_020b9100 = 0x28;

extern "C" uint32_t bb_auto_return_constant_020b9100()
{
    return value_020b9100;
}

/**
 *
 * The part of the object that auto_return_field_020bdb10 reads.
 *
 */
struct Object020bdb10 {
    uint8_t unknown_0x0000[0x58];
    uint8_t value_0x0058; /**< Read by auto_return_field_020bdb10; meaning unknown. */
};
static_assert(offsetof(Object020bdb10, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_020bdb10(const Object020bdb10 *self)
{
    return self->value_0x0058;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_020be900()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_020be960()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_020be9c0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_020bef30 = 0x250;

extern "C" uint32_t bb_auto_return_constant_020bef30()
{
    return value_020bef30;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_020bf250 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_020bf250()
{
    return value_020bf250;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_020bf570 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_020bf570()
{
    return value_020bf570;
}
