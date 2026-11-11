// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01860100()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01860130()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01860200()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_018605f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_018606c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01860900()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01860c20()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01860cd0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01863600()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_018636d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01863730()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_018678f0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_018678f0()
{
    return value_018678f0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_01867cb0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_01867cb0()
{
    return value_01867cb0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_018685b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01868610()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_018687c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_018687f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_018688c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01868ae0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0186b0a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0186b170()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0186b1d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0186f2a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0186f370()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0186f5d0()
{
}

/**
 *
 * The part of the object that auto_return_field_0186f800 reads.
 *
 */
struct Object0186f800 {
    uint8_t unknown_0x0000[0x58];
    uint8_t value_0x0058; /**< Read by auto_return_field_0186f800; meaning unknown. */
};
static_assert(offsetof(Object0186f800, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_0186f800(const Object0186f800 *self)
{
    return self->value_0x0058;
}
