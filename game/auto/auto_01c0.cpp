// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_01c009c0 reads.
 *
 */
struct Object01c009c0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01c009c0; meaning unknown. */
};
static_assert(offsetof(Object01c009c0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01c009c0(const Object01c009c0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01c009d0 reads.
 *
 */
struct Object01c009d0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01c009d0; meaning unknown. */
};
static_assert(offsetof(Object01c009d0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01c009d0(const Object01c009d0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01c00a20()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01c00ca0 = 0x20;

extern "C" uint32_t bb_auto_return_constant_01c00ca0()
{
    return value_01c00ca0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01c00d10()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01c06c70()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01c06c80()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01c06c90()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01c06ca0()
{
}

/**
 *
 * The part of the object that auto_return_float_field_01c0b2c0 reads.
 *
 */
struct Object01c0b2c0 {
    uint8_t unknown_0x0000[0x20];
    float value_0x0020; /**< Read by auto_return_float_field_01c0b2c0; meaning unknown. */
};
static_assert(offsetof(Object01c0b2c0, value_0x0020) == 0x20);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_01c0b2c0(const Object01c0b2c0 *self)
{
    return self->value_0x0020;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01c0b460()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01c0bac0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01c0bb20()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01c0bb80()
{
}
