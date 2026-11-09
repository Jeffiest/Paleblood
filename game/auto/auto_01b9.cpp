// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b90250()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b902a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b90370()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b915d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b91970()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b919d0()
{
}

/**
 *
 * The part of the object that auto_return_field_01b957e0 reads.
 *
 */
struct Object01b957e0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01b957e0; meaning unknown. */
};
static_assert(offsetof(Object01b957e0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01b957e0(const Object01b957e0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01b957f0 reads.
 *
 */
struct Object01b957f0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01b957f0; meaning unknown. */
};
static_assert(offsetof(Object01b957f0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01b957f0(const Object01b957f0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01b95840()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01b95ac0 = 0x80;

extern "C" uint32_t bb_auto_return_constant_01b95ac0()
{
    return value_01b95ac0;
}

/**
 *
 * The part of the object that auto_return_field_01b97910 reads.
 *
 */
struct Object01b97910 {
    uint8_t unknown_0x0000[0x8];
    uint32_t value_0x0008; /**< Read by auto_return_field_01b97910; meaning unknown. */
};
static_assert(offsetof(Object01b97910, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01b97910(const Object01b97910 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_01b97920 reads.
 *
 */
struct Object01b97920 {
    uint8_t unknown_0x0000[0x20];
    uint32_t value_0x0020; /**< Read by auto_return_field_01b97920; meaning unknown. */
};
static_assert(offsetof(Object01b97920, value_0x0020) == 0x20);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01b97920(const Object01b97920 *self)
{
    return self->value_0x0020;
}

/**
 *
 * The part of the object that auto_return_member_address_01b97950 reads.
 *
 */
struct Object01b97950 {
    uint8_t unknown_0x0000[0x40];
    uint8_t member_0x0040; /**< Read by auto_return_member_address_01b97950; meaning unknown. */
};
static_assert(offsetof(Object01b97950, member_0x0040) == 0x40);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01b97950(Object01b97950 *self)
{
    return &self->member_0x0040;
}

/**
 *
 * The part of the object that auto_return_member_address_01b97960 reads.
 *
 */
struct Object01b97960 {
    uint8_t unknown_0x0000[0x98];
    uint8_t member_0x0098; /**< Read by auto_return_member_address_01b97960; meaning unknown. */
};
static_assert(offsetof(Object01b97960, member_0x0098) == 0x98);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01b97960(Object01b97960 *self)
{
    return &self->member_0x0098;
}

/**
 *
 * The part of the object that auto_return_field_01b98cf0 reads.
 *
 */
struct Object01b98cf0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01b98cf0; meaning unknown. */
};
static_assert(offsetof(Object01b98cf0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01b98cf0(const Object01b98cf0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01b98d00 reads.
 *
 */
struct Object01b98d00 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01b98d00; meaning unknown. */
};
static_assert(offsetof(Object01b98d00, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01b98d00(const Object01b98d00 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01b98d50()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01b98fd0 = 0x28;

extern "C" uint32_t bb_auto_return_constant_01b98fd0()
{
    return value_01b98fd0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b9b990()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b9c5c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b9d210()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b9de70()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b9eac0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b9f6b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b9fa80()
{
}
