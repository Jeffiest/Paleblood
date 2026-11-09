// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02b21be0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02b21bf0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b21c80 = 0x2000;

extern "C" uint32_t bb_auto_return_constant_02b21c80()
{
    return value_02b21c80;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02b21c90 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02b21c90()
{
    return value_02b21c90;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02b21ce0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b21cf0 = 0x32;

extern "C" uint32_t bb_auto_return_constant_02b21cf0()
{
    return value_02b21cf0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b21d00 = 0x64;

extern "C" uint32_t bb_auto_return_constant_02b21d00()
{
    return value_02b21d00;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b21d10 = 0x96;

extern "C" uint32_t bb_auto_return_constant_02b21d10()
{
    return value_02b21d10;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b21d20 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_02b21d20()
{
    return value_02b21d20;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02b21d30()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02b21d40()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02b21d50()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b21d60 = 0x32;

extern "C" uint32_t bb_auto_return_constant_02b21d60()
{
    return value_02b21d60;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02b21d70()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02b21d80()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02b21d90()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02b21da0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02b21db0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02b21db0()
{
    return value_02b21db0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02b21dc0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02b26460()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02b26470()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02b289c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02b289e0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02b28e50()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_02b29120 reads.
 *
 */
struct Object02b29120 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02b29120; meaning unknown. */
};
static_assert(offsetof(Object02b29120, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02b29120(const Object02b29120 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02b29130 reads.
 *
 */
struct Object02b29130 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02b29130; meaning unknown. */
};
static_assert(offsetof(Object02b29130, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02b29130(const Object02b29130 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02b29180()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b292d0 = 0x60;

extern "C" uint32_t bb_auto_return_constant_02b292d0()
{
    return value_02b292d0;
}

/**
 *
 * The part of the object that auto_return_field_02b29590 reads.
 *
 */
struct Object02b29590 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02b29590; meaning unknown. */
};
static_assert(offsetof(Object02b29590, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02b29590(const Object02b29590 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02b295a0 reads.
 *
 */
struct Object02b295a0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02b295a0; meaning unknown. */
};
static_assert(offsetof(Object02b295a0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02b295a0(const Object02b295a0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02b295f0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b29740 = 0x30;

extern "C" uint32_t bb_auto_return_constant_02b29740()
{
    return value_02b29740;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02b2def0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02b2e470()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02b2f120()
{
}
