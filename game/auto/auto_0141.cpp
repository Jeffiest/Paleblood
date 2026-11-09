// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_014118f0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01412520()
{
}

/**
 *
 * The part of the object that auto_return_field_01413810 reads.
 *
 */
struct Object01413810 {
    uint64_t value_0x0000; /**< Read by auto_return_field_01413810; meaning unknown. */
};
static_assert(offsetof(Object01413810, value_0x0000) == 0x0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01413810(const Object01413810 *self)
{
    return self->value_0x0000;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01415ff0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01416ee0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01418150()
{
}

/**
 *
 * The part of the object that auto_return_field_014181c0 reads.
 *
 */
struct Object014181c0 {
    uint8_t unknown_0x0000[0x28];
    uint8_t value_0x0028; /**< Read by auto_return_field_014181c0; meaning unknown. */
};
static_assert(offsetof(Object014181c0, value_0x0028) == 0x28);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_014181c0(const Object014181c0 *self)
{
    return self->value_0x0028;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01419310()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01419a60 = 0x1;

extern "C" uint32_t bb_auto_return_constant_01419a60()
{
    return value_01419a60;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01419b20()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0141be10()
{
}

/**
 *
 * The part of the object that auto_return_field_0141c4e0 reads.
 *
 */
struct Object0141c4e0 {
    uint8_t unknown_0x0000[0x8];
    uint64_t value_0x0008; /**< Read by auto_return_field_0141c4e0; meaning unknown. */
};
static_assert(offsetof(Object0141c4e0, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0141c4e0(const Object0141c4e0 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_0141cb10 reads.
 *
 */
struct Object0141cb10 {
    uint8_t unknown_0x0000[0x8];
    uint64_t value_0x0008; /**< Read by auto_return_field_0141cb10; meaning unknown. */
};
static_assert(offsetof(Object0141cb10, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0141cb10(const Object0141cb10 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_0141cf70 reads.
 *
 */
struct Object0141cf70 {
    uint8_t unknown_0x0000[0x50];
    uint32_t value_0x0050; /**< Read by auto_return_field_0141cf70; meaning unknown. */
};
static_assert(offsetof(Object0141cf70, value_0x0050) == 0x50);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_0141cf70(const Object0141cf70 *self)
{
    return self->value_0x0050;
}

/**
 *
 * The part of the object that auto_return_field_0141d4c0 reads.
 *
 */
struct Object0141d4c0 {
    uint8_t unknown_0x0000[0x8];
    uint64_t value_0x0008; /**< Read by auto_return_field_0141d4c0; meaning unknown. */
};
static_assert(offsetof(Object0141d4c0, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0141d4c0(const Object0141d4c0 *self)
{
    return self->value_0x0008;
}
