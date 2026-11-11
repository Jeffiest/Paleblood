// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d609e0 = 0x258;

extern "C" uint32_t bb_auto_return_constant_01d609e0()
{
    return value_01d609e0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d60d00 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01d60d00()
{
    return value_01d60d00;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d61020 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01d61020()
{
    return value_01d61020;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d61f50()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d61fb0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d65320 = 0x248;

extern "C" uint32_t bb_auto_return_constant_01d65320()
{
    return value_01d65320;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d65640 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01d65640()
{
    return value_01d65640;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d65960 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01d65960()
{
    return value_01d65960;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d68790 = 0xf0;

extern "C" uint32_t bb_auto_return_constant_01d68790()
{
    return value_01d68790;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d68ab0 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01d68ab0()
{
    return value_01d68ab0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d68dd0 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01d68dd0()
{
    return value_01d68dd0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d6a0a0 = 0x80;

extern "C" uint32_t bb_auto_return_constant_01d6a0a0()
{
    return value_01d6a0a0;
}

/**
 *
 * The part of the object that auto_return_field_01d6ae00 reads.
 *
 */
struct Object01d6ae00 {
    uint8_t unknown_0x0000[0x134];
    uint8_t value_0x0134; /**< Read by auto_return_field_01d6ae00; meaning unknown. */
};
static_assert(offsetof(Object01d6ae00, value_0x0134) == 0x134);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_01d6ae00(const Object01d6ae00 *self)
{
    return self->value_0x0134;
}

/**
 *
 * The part of the object that auto_return_field_01d6ae10 reads.
 *
 */
struct Object01d6ae10 {
    uint8_t unknown_0x0000[0x135];
    uint8_t value_0x0135; /**< Read by auto_return_field_01d6ae10; meaning unknown. */
};
static_assert(offsetof(Object01d6ae10, value_0x0135) == 0x135);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_01d6ae10(const Object01d6ae10 *self)
{
    return self->value_0x0135;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d6e700 = 0x138;

extern "C" uint32_t bb_auto_return_constant_01d6e700()
{
    return value_01d6e700;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d6ea20 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01d6ea20()
{
    return value_01d6ea20;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d6ed40 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01d6ed40()
{
    return value_01d6ed40;
}
