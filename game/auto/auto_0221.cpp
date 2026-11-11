// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02211240()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02213d10 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_02213d10()
{
    return value_02213d10;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02214030 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_02214030()
{
    return value_02214030;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02214350 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_02214350()
{
    return value_02214350;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02217150()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02217300()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02217360()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_022175a0()
{
}

/**
 *
 * The part of the object that auto_return_field_0221bb60 reads.
 *
 */
struct Object0221bb60 {
    uint8_t unknown_0x0000[0x58];
    uint8_t value_0x0058; /**< Read by auto_return_field_0221bb60; meaning unknown. */
};
static_assert(offsetof(Object0221bb60, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_0221bb60(const Object0221bb60 *self)
{
    return self->value_0x0058;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0221c810()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0221cde0 = 0x170;

extern "C" uint32_t bb_auto_return_constant_0221cde0()
{
    return value_0221cde0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0221d100 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_0221d100()
{
    return value_0221d100;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0221d420 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_0221d420()
{
    return value_0221d420;
}

/**
 *
 * The part of the object that auto_return_field_0221fcd0 reads.
 *
 */
struct Object0221fcd0 {
    uint8_t unknown_0x0000[0x128];
    uint32_t value_0x0128; /**< Read by auto_return_field_0221fcd0; meaning unknown. */
};
static_assert(offsetof(Object0221fcd0, value_0x0128) == 0x128);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_0221fcd0(const Object0221fcd0 *self)
{
    return self->value_0x0128;
}

/**
 *
 * The part of the object that auto_return_field_0221fce0 reads.
 *
 */
struct Object0221fce0 {
    uint8_t unknown_0x0000[0x12c];
    uint32_t value_0x012c; /**< Read by auto_return_field_0221fce0; meaning unknown. */
};
static_assert(offsetof(Object0221fce0, value_0x012c) == 0x12c);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_0221fce0(const Object0221fce0 *self)
{
    return self->value_0x012c;
}
