// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02494770()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02496e00 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02496e00()
{
    return value_02496e00;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02496e10 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02496e10()
{
    return value_02496e10;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02497f00()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02498410()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02498a00()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02499000()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0249af70()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0249b4a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0249ba80()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0249c160()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0249c740()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0249cbc0()
{
}

/**
 *
 * The part of the object that auto_return_field_0249d210 reads.
 *
 */
struct Object0249d210 {
    uint8_t unknown_0x0000[0x468];
    uint32_t value_0x0468; /**< Read by auto_return_field_0249d210; meaning unknown. */
};
static_assert(offsetof(Object0249d210, value_0x0468) == 0x468);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_0249d210(const Object0249d210 *self)
{
    return self->value_0x0468;
}

/**
 *
 * The part of the object that auto_return_field_0249d4d0 reads.
 *
 */
struct Object0249d4d0 {
    uint8_t unknown_0x0000[0x408];
    uint8_t value_0x0408; /**< Read by auto_return_field_0249d4d0; meaning unknown. */
};
static_assert(offsetof(Object0249d4d0, value_0x0408) == 0x408);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_0249d4d0(const Object0249d4d0 *self)
{
    return self->value_0x0408;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0249e7e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0249edc0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0249f250()
{
}
