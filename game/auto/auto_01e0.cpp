// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e04d60()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e04e30()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e07480()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e074a0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_01e074c0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_01e074c0()
{
    return value_01e074c0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_01e074d0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_01e074d0()
{
    return value_01e074d0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_01e074e0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_01e074e0()
{
    return value_01e074e0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e07500()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_01e07530 = 0x1;

extern "C" uint8_t bb_auto_return_constant_01e07530()
{
    return value_01e07530;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_01e07940 = 0x1;

extern "C" uint8_t bb_auto_return_constant_01e07940()
{
    return value_01e07940;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e07e60()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01e0bc40 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01e0bc40()
{
    return value_01e0bc40;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01e0bf60 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01e0bf60()
{
    return value_01e0bf60;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01e0c280 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01e0c280()
{
    return value_01e0c280;
}

/**
 *
 * The part of the object that auto_return_float_field_01e0d3b0 reads.
 *
 */
struct Object01e0d3b0 {
    uint8_t unknown_0x0000[0x18];
    float value_0x0018; /**< Read by auto_return_float_field_01e0d3b0; meaning unknown. */
};
static_assert(offsetof(Object01e0d3b0, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_01e0d3b0(const Object01e0d3b0 *self)
{
    return self->value_0x0018;
}

/**
 *
 * The part of the object that auto_return_float_field_01e0d3c0 reads.
 *
 */
struct Object01e0d3c0 {
    uint8_t unknown_0x0000[0x1c];
    float value_0x001c; /**< Read by auto_return_float_field_01e0d3c0; meaning unknown. */
};
static_assert(offsetof(Object01e0d3c0, value_0x001c) == 0x1c);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_01e0d3c0(const Object01e0d3c0 *self)
{
    return self->value_0x001c;
}

/**
 *
 * The part of the object that auto_return_float_field_01e0e6b0 reads.
 *
 */
struct Object01e0e6b0 {
    uint8_t unknown_0x0000[0x1a4];
    float value_0x01a4; /**< Read by auto_return_float_field_01e0e6b0; meaning unknown. */
};
static_assert(offsetof(Object01e0e6b0, value_0x01a4) == 0x1a4);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_01e0e6b0(const Object01e0e6b0 *self)
{
    return self->value_0x01a4;
}

/**
 *
 * The part of the object that auto_return_field_01e0e810 reads.
 *
 */
struct Object01e0e810 {
    uint8_t unknown_0x0000[0x1f4];
    uint32_t value_0x01f4; /**< Read by auto_return_field_01e0e810; meaning unknown. */
};
static_assert(offsetof(Object01e0e810, value_0x01f4) == 0x1f4);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01e0e810(const Object01e0e810 *self)
{
    return self->value_0x01f4;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e0f000()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e0f060()
{
}

/**
 *
 * The part of the object that auto_return_float_field_01e0fc80 reads.
 *
 */
struct Object01e0fc80 {
    uint8_t unknown_0x0000[0x90];
    float value_0x0090; /**< Read by auto_return_float_field_01e0fc80; meaning unknown. */
};
static_assert(offsetof(Object01e0fc80, value_0x0090) == 0x90);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_01e0fc80(const Object01e0fc80 *self)
{
    return self->value_0x0090;
}
