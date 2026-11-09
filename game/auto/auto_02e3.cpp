// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02e308e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02e309c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02e34070()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02e340c0 = 0x1;

extern "C" uint32_t bb_auto_return_constant_02e340c0()
{
    return value_02e340c0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02e340d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02e34140()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02e342c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02e34340()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02e34350()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02e34610()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02e34620()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02e34630()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02e34640()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02e34670()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02e34680()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02e34760()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02e34770()
{
}

/**
 *
 * The part of the object that auto_return_field_02e35050 reads.
 *
 */
struct Object02e35050 {
    uint8_t unknown_0x0000[0x50];
    uint32_t value_0x0050; /**< Read by auto_return_field_02e35050; meaning unknown. */
};
static_assert(offsetof(Object02e35050, value_0x0050) == 0x50);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02e35050(const Object02e35050 *self)
{
    return self->value_0x0050;
}

/**
 *
 * The part of the object that auto_return_field_02e38aa0 reads.
 *
 */
struct Object02e38aa0 {
    uint8_t unknown_0x0000[0x8];
    uint32_t value_0x0008; /**< Read by auto_return_field_02e38aa0; meaning unknown. */
};
static_assert(offsetof(Object02e38aa0, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02e38aa0(const Object02e38aa0 *self)
{
    return self->value_0x0008;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02e38ab0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02e38ab0()
{
    return value_02e38ab0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02e38ac0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02e393f0 = 0x80000001;

extern "C" uint32_t bb_auto_return_constant_02e393f0()
{
    return value_02e393f0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02e39440 = 0x80000001;

extern "C" uint32_t bb_auto_return_constant_02e39440()
{
    return value_02e39440;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02e394a0 = 0x80000001;

extern "C" uint32_t bb_auto_return_constant_02e394a0()
{
    return value_02e394a0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02e394b0 = 0x80000001;

extern "C" uint32_t bb_auto_return_constant_02e394b0()
{
    return value_02e394b0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02e39530 = 0x80000001;

extern "C" uint32_t bb_auto_return_constant_02e39530()
{
    return value_02e39530;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02e395e0 = 0x80000001;

extern "C" uint32_t bb_auto_return_constant_02e395e0()
{
    return value_02e395e0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02e395f0 = 0x80000001;

extern "C" uint32_t bb_auto_return_constant_02e395f0()
{
    return value_02e395f0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02e39780 = 0x80000001;

extern "C" uint32_t bb_auto_return_constant_02e39780()
{
    return value_02e39780;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02e39790 = 0xb000;

extern "C" uint32_t bb_auto_return_constant_02e39790()
{
    return value_02e39790;
}

/**
 *
 * The part of the object that auto_return_field_02e397a0 reads.
 *
 */
struct Object02e397a0 {
    uint8_t unknown_0x0000[0x58];
    uint32_t value_0x0058; /**< Read by auto_return_field_02e397a0; meaning unknown. */
};
static_assert(offsetof(Object02e397a0, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02e397a0(const Object02e397a0 *self)
{
    return self->value_0x0058;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02e397b0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02e39840 = 0x80000001;

extern "C" uint32_t bb_auto_return_constant_02e39840()
{
    return value_02e39840;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02e39850()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_02e39c30 reads.
 *
 */
struct Object02e39c30 {
    uint8_t unknown_0x0000[0x20];
    uint64_t value_0x0020; /**< Read by auto_return_field_02e39c30; meaning unknown. */
};
static_assert(offsetof(Object02e39c30, value_0x0020) == 0x20);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02e39c30(const Object02e39c30 *self)
{
    return self->value_0x0020;
}

/**
 *
 * The part of the object that auto_return_field_02e39c40 reads.
 *
 */
struct Object02e39c40 {
    uint8_t unknown_0x0000[0x28];
    uint64_t value_0x0028; /**< Read by auto_return_field_02e39c40; meaning unknown. */
};
static_assert(offsetof(Object02e39c40, value_0x0028) == 0x28);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02e39c40(const Object02e39c40 *self)
{
    return self->value_0x0028;
}
