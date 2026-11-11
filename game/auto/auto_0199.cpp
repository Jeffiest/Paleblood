// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01990170 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_01990170()
{
    return value_01990170;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01990490 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_01990490()
{
    return value_01990490;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_019945d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01998dc0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_01998ee0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_01998ee0()
{
    return value_01998ee0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01998ef0()
{
}

/**
 *
 * The part of the object that auto_return_field_0199a260 reads.
 *
 */
struct Object0199a260 {
    uint8_t unknown_0x0000[0x110];
    uint64_t value_0x0110; /**< Read by auto_return_field_0199a260; meaning unknown. */
};
static_assert(offsetof(Object0199a260, value_0x0110) == 0x110);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0199a260(const Object0199a260 *self)
{
    return self->value_0x0110;
}

/**
 *
 * The part of the object that auto_return_field_0199cae0 reads.
 *
 */
struct Object0199cae0 {
    uint8_t unknown_0x0000[0x58];
    uint8_t value_0x0058; /**< Read by auto_return_field_0199cae0; meaning unknown. */
};
static_assert(offsetof(Object0199cae0, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_0199cae0(const Object0199cae0 *self)
{
    return self->value_0x0058;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0199d7a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0199d860()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0199dee0 = 0x160;

extern "C" uint32_t bb_auto_return_constant_0199dee0()
{
    return value_0199dee0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0199e200 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_0199e200()
{
    return value_0199e200;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0199e520 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_0199e520()
{
    return value_0199e520;
}
