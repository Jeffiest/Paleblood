// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_025c0000()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_025c0010()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_025c0020()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_025c0030()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_025c0040 = 0xc;

extern "C" uint32_t bb_auto_return_constant_025c0040()
{
    return value_025c0040;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_025c0050()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_025c0610 reads.
 *
 */
struct Object025c0610 {
    uint8_t unknown_0x0000[0x14];
    uint32_t value_0x0014; /**< Read by auto_return_field_025c0610; meaning unknown. */
};
static_assert(offsetof(Object025c0610, value_0x0014) == 0x14);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_025c0610(const Object025c0610 *self)
{
    return self->value_0x0014;
}

/**
 *
 * The part of the object that auto_return_field_025c0660 reads.
 *
 */
struct Object025c0660 {
    uint8_t unknown_0x0000[0x8];
    uint64_t value_0x0008; /**< Read by auto_return_field_025c0660; meaning unknown. */
};
static_assert(offsetof(Object025c0660, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_025c0660(const Object025c0660 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_025c4250 reads.
 *
 */
struct Object025c4250 {
    uint8_t unknown_0x0000[0x148];
    uint8_t value_0x0148; /**< Read by auto_return_field_025c4250; meaning unknown. */
};
static_assert(offsetof(Object025c4250, value_0x0148) == 0x148);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_025c4250(const Object025c4250 *self)
{
    return self->value_0x0148;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_025c7450()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_025cca10()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_025cca30()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_025cfa40()
{
}
