// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02430dc0 = 0xb0;

extern "C" uint32_t bb_auto_return_constant_02430dc0()
{
    return value_02430dc0;
}

/**
 *
 * The part of the object that auto_return_field_02433720 reads.
 *
 */
struct Object02433720 {
    uint8_t unknown_0x0000[0x14];
    uint8_t value_0x0014; /**< Read by auto_return_field_02433720; meaning unknown. */
};
static_assert(offsetof(Object02433720, value_0x0014) == 0x14);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02433720(const Object02433720 *self)
{
    return self->value_0x0014;
}

/**
 *
 * The part of the object that auto_return_field_02433740 reads.
 *
 */
struct Object02433740 {
    uint8_t unknown_0x0000[0x18];
    uint32_t value_0x0018; /**< Read by auto_return_field_02433740; meaning unknown. */
};
static_assert(offsetof(Object02433740, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02433740(const Object02433740 *self)
{
    return self->value_0x0018;
}

/**
 *
 * The part of the object that auto_return_field_02435270 reads.
 *
 */
struct Object02435270 {
    uint8_t unknown_0x0000[0x273];
    uint8_t value_0x0273; /**< Read by auto_return_field_02435270; meaning unknown. */
};
static_assert(offsetof(Object02435270, value_0x0273) == 0x273);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02435270(const Object02435270 *self)
{
    return self->value_0x0273;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02435f50()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02436020()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_024362a0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_024368b0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_024368b0()
{
    return value_024368b0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02438fc0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02438fc0()
{
    return value_02438fc0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02439300()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_024393d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02439fe0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0243a040()
{
}
