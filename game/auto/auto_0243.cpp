// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_02430ae0 reads.
 *
 */
struct Object02430ae0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02430ae0; meaning unknown. */
};
static_assert(offsetof(Object02430ae0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02430ae0(const Object02430ae0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02430af0 reads.
 *
 */
struct Object02430af0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02430af0; meaning unknown. */
};
static_assert(offsetof(Object02430af0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02430af0(const Object02430af0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02430b40()
{
    return 0;
}

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
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02430ff0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02433220()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_024336b0()
{
}

/**
 *
 * The part of the object that auto_return_field_02433700 reads.
 *
 */
struct Object02433700 {
    uint8_t unknown_0x0000[0x10];
    uint32_t value_0x0010; /**< Read by auto_return_field_02433700; meaning unknown. */
};
static_assert(offsetof(Object02433700, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02433700(const Object02433700 *self)
{
    return self->value_0x0010;
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
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02434760()
{
}

/**
 *
 * The part of the object that auto_return_field_02435200 reads.
 *
 */
struct Object02435200 {
    uint8_t unknown_0x0000[0x10];
    uint32_t value_0x0010; /**< Read by auto_return_field_02435200; meaning unknown. */
};
static_assert(offsetof(Object02435200, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02435200(const Object02435200 *self)
{
    return self->value_0x0010;
}

/**
 *
 * The part of the object that auto_return_field_02435210 reads.
 *
 */
struct Object02435210 {
    uint8_t unknown_0x0000[0x14];
    uint8_t value_0x0014; /**< Read by auto_return_field_02435210; meaning unknown. */
};
static_assert(offsetof(Object02435210, value_0x0014) == 0x14);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02435210(const Object02435210 *self)
{
    return self->value_0x0014;
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
extern "C" void bb_auto_empty_02435890()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02435c10()
{
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
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02436890()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_024368a0()
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
extern "C" void bb_auto_empty_02438ff0()
{
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
extern "C" void bb_auto_empty_02439890()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02439d10()
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
