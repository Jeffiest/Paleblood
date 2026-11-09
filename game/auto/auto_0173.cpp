// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_017328f0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01732b90()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01732ba0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01732e00()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_017333d0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01734e10()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01734e20()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01735030()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_017350d0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_017350e0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_017350f0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01739240()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_01732860 = 0x1;

extern "C" uint8_t bb_auto_return_constant_01732860()
{
    return value_01732860;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_01732870 = 0x1;

extern "C" uint8_t bb_auto_return_constant_01732870()
{
    return value_01732870;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01734e30()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01735100()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01735250()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01735260()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_017358e0()
{
}

/**
 *
 * The part of the object that auto_return_field_01735900 reads.
 *
 */
struct Object01735900 {
    uint8_t unknown_0x0000[0x8d];
    uint8_t value_0x008d; /**< Read by auto_return_field_01735900; meaning unknown. */
};
static_assert(offsetof(Object01735900, value_0x008d) == 0x8d);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_01735900(const Object01735900 *self)
{
    return self->value_0x008d;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01738330()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01738e90()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01739340()
{
}
