// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01745a20()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01745f40()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_017460f0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01745a00()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01745f20()
{
}

/**
 *
 * The part of the object that auto_return_field_01746090 reads.
 *
 */
struct Object01746090 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01746090; meaning unknown. */
};
static_assert(offsetof(Object01746090, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01746090(const Object01746090 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_017460a0 reads.
 *
 */
struct Object017460a0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_017460a0; meaning unknown. */
};
static_assert(offsetof(Object017460a0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_017460a0(const Object017460a0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01746370 = 0x20;

extern "C" uint32_t bb_auto_return_constant_01746370()
{
    return value_01746370;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01746620()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01746640 = 0x1;

extern "C" uint32_t bb_auto_return_constant_01746640()
{
    return value_01746640;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01746e30()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01746e50 = 0x5;

extern "C" uint32_t bb_auto_return_constant_01746e50()
{
    return value_01746e50;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01747420()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01747440 = 0x3;

extern "C" uint32_t bb_auto_return_constant_01747440()
{
    return value_01747440;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01747840()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01747860 = 0x1;

extern "C" uint32_t bb_auto_return_constant_01747860()
{
    return value_01747860;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01747d10()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01747d30 = 0x2;

extern "C" uint32_t bb_auto_return_constant_01747d30()
{
    return value_01747d30;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_017480f0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01748110 = 0x1;

extern "C" uint32_t bb_auto_return_constant_01748110()
{
    return value_01748110;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_017488d0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_017488f0 = 0x5;

extern "C" uint32_t bb_auto_return_constant_017488f0()
{
    return value_017488f0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01748ec0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01748ee0 = 0x3;

extern "C" uint32_t bb_auto_return_constant_01748ee0()
{
    return value_01748ee0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01749680()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_017496a0 = 0x5;

extern "C" uint32_t bb_auto_return_constant_017496a0()
{
    return value_017496a0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01749f20()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01749f40 = 0x6;

extern "C" uint32_t bb_auto_return_constant_01749f40()
{
    return value_01749f40;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0174a330()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0174a350 = 0x1;

extern "C" uint32_t bb_auto_return_constant_0174a350()
{
    return value_0174a350;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0174a770()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0174a790 = 0x1;

extern "C" uint32_t bb_auto_return_constant_0174a790()
{
    return value_0174a790;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0174abb0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0174abd0 = 0x1;

extern "C" uint32_t bb_auto_return_constant_0174abd0()
{
    return value_0174abd0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0174b1b0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0174b1d0 = 0x3;

extern "C" uint32_t bb_auto_return_constant_0174b1d0()
{
    return value_0174b1d0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0174b6c0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0174b6e0 = 0x2;

extern "C" uint32_t bb_auto_return_constant_0174b6e0()
{
    return value_0174b6e0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0174c0a0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0174c0c0 = 0x7;

extern "C" uint32_t bb_auto_return_constant_0174c0c0()
{
    return value_0174c0c0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0174c590()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0174c5b0 = 0x2;

extern "C" uint32_t bb_auto_return_constant_0174c5b0()
{
    return value_0174c5b0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0174ccc0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0174cce0 = 0x4;

extern "C" uint32_t bb_auto_return_constant_0174cce0()
{
    return value_0174cce0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0174d1c0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0174d1e0 = 0x2;

extern "C" uint32_t bb_auto_return_constant_0174d1e0()
{
    return value_0174d1e0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0174d8a0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0174d8c0 = 0x4;

extern "C" uint32_t bb_auto_return_constant_0174d8c0()
{
    return value_0174d8c0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0174df70()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0174df90 = 0x4;

extern "C" uint32_t bb_auto_return_constant_0174df90()
{
    return value_0174df90;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0174e550()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0174e570 = 0x3;

extern "C" uint32_t bb_auto_return_constant_0174e570()
{
    return value_0174e570;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0174ea20()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0174ea40 = 0x2;

extern "C" uint32_t bb_auto_return_constant_0174ea40()
{
    return value_0174ea40;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0174f010()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0174f030 = 0x3;

extern "C" uint32_t bb_auto_return_constant_0174f030()
{
    return value_0174f030;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0174f710()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0174f730 = 0x4;

extern "C" uint32_t bb_auto_return_constant_0174f730()
{
    return value_0174f730;
}
