// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02de00b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02de1940()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02de1b70()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02de1bd0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02de1e10()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02de2630()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02de26b0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_02de2880 reads.
 *
 */
struct Object02de2880 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02de2880; meaning unknown. */
};
static_assert(offsetof(Object02de2880, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02de2880(const Object02de2880 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02de2890 reads.
 *
 */
struct Object02de2890 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02de2890; meaning unknown. */
};
static_assert(offsetof(Object02de2890, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02de2890(const Object02de2890 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02de28e0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02de2900 = 0x470;

extern "C" uint32_t bb_auto_return_constant_02de2900()
{
    return value_02de2900;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02de2a50()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02de2a60()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02de2a70()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02de2a80()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02de2b20 = 0x1;

extern "C" uint32_t bb_auto_return_constant_02de2b20()
{
    return value_02de2b20;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02de2e40()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02de30b0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02de32f0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_02de34e0 reads.
 *
 */
struct Object02de34e0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02de34e0; meaning unknown. */
};
static_assert(offsetof(Object02de34e0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02de34e0(const Object02de34e0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02de34f0 reads.
 *
 */
struct Object02de34f0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02de34f0; meaning unknown. */
};
static_assert(offsetof(Object02de34f0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02de34f0(const Object02de34f0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02de3540()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02de3560 = 0x48;

extern "C" uint32_t bb_auto_return_constant_02de3560()
{
    return value_02de3560;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02de3810()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02de38e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02de3b90()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02de45c0()
{
}

/**
 *
 * The part of the object that auto_return_float_field_02de4670 reads.
 *
 */
struct Object02de4670 {
    uint8_t unknown_0x0000[0x60];
    float value_0x0060; /**< Read by auto_return_float_field_02de4670; meaning unknown. */
};
static_assert(offsetof(Object02de4670, value_0x0060) == 0x60);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_02de4670(const Object02de4670 *self)
{
    return self->value_0x0060;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02de4680()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02de56d0()
{
}
