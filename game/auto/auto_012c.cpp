// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_012c2720 = 0x1;

extern "C" uint8_t bb_auto_return_constant_012c2720()
{
    return value_012c2720;
}

/**
 *
 * The part of the object that auto_return_field_012c4e40 reads.
 *
 */
struct Object012c4e40 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_012c4e40; meaning unknown. */
};
static_assert(offsetof(Object012c4e40, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_012c4e40(const Object012c4e40 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_012c4e50 reads.
 *
 */
struct Object012c4e50 {
    uint8_t unknown_0x0000[0x38];
    uint64_t value_0x0038; /**< Read by auto_return_field_012c4e50; meaning unknown. */
};
static_assert(offsetof(Object012c4e50, value_0x0038) == 0x38);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_012c4e50(const Object012c4e50 *self)
{
    return self->value_0x0038;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_012c6580()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_012c6f70()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_012c7ad0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_012c7ae0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_012c86a0()
{
}
