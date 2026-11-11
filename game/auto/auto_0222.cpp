// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_02220310 reads.
 *
 */
struct Object02220310 {
    uint8_t unknown_0x0000[0x138];
    uint32_t value_0x0138; /**< Read by auto_return_field_02220310; meaning unknown. */
};
static_assert(offsetof(Object02220310, value_0x0138) == 0x138);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02220310(const Object02220310 *self)
{
    return self->value_0x0138;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02222100()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02222160()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_022221c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02228060()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_022280c0()
{
}

/**
 *
 * The part of the object that auto_return_field_02229790 reads.
 *
 */
struct Object02229790 {
    uint8_t unknown_0x0000[0x58];
    uint8_t value_0x0058; /**< Read by auto_return_field_02229790; meaning unknown. */
};
static_assert(offsetof(Object02229790, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02229790(const Object02229790 *self)
{
    return self->value_0x0058;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0222a440()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0222aa00 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_0222aa00()
{
    return value_0222aa00;
}
