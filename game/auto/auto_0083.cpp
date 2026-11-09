// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_00835bc0 = 0xffffffff;

extern "C" uint32_t bb_auto_return_constant_00835bc0()
{
    return value_00835bc0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_00835bd0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00835d00()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00835d10()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00835d20()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_00835d30()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00835d40()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00835d50()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00835f00()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00836570()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00836830()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00837840()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00837860()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00837880()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_008378a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_008378c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_008378e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00837900()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00837920()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00837940()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00837960()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00837980()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_008379a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_008379c0()
{
}

/**
 *
 * The part of the object that auto_return_field_00838910 reads.
 *
 */
struct Object00838910 {
    uint8_t unknown_0x0000[0x8];
    uint32_t value_0x0008; /**< Read by auto_return_field_00838910; meaning unknown. */
};
static_assert(offsetof(Object00838910, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_00838910(const Object00838910 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_00838920 reads.
 *
 */
struct Object00838920 {
    uint64_t value_0x0000; /**< Read by auto_return_field_00838920; meaning unknown. */
};
static_assert(offsetof(Object00838920, value_0x0000) == 0x0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_00838920(const Object00838920 *self)
{
    return self->value_0x0000;
}

/**
 *
 * The part of the object that auto_return_field_00838930 reads.
 *
 */
struct Object00838930 {
    uint64_t value_0x0000; /**< Read by auto_return_field_00838930; meaning unknown. */
};
static_assert(offsetof(Object00838930, value_0x0000) == 0x0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_00838930(const Object00838930 *self)
{
    return self->value_0x0000;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0083b220()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0083cf50()
{
}
