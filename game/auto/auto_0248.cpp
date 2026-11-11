// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_02481c90 reads.
 *
 */
struct Object02481c90 {
    uint8_t unknown_0x0000[0x460];
    uint64_t value_0x0460; /**< Read by auto_return_field_02481c90; meaning unknown. */
};
static_assert(offsetof(Object02481c90, value_0x0460) == 0x460);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02481c90(const Object02481c90 *self)
{
    return self->value_0x0460;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02482e10()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02482eb0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_024846d0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02485320 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02485320()
{
    return value_02485320;
}

/**
 *
 * The part of the object that auto_return_field_02485610 reads.
 *
 */
struct Object02485610 {
    uint8_t unknown_0x0000[0x438];
    uint64_t value_0x0438; /**< Read by auto_return_field_02485610; meaning unknown. */
};
static_assert(offsetof(Object02485610, value_0x0438) == 0x438);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02485610(const Object02485610 *self)
{
    return self->value_0x0438;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02485d50 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02485d50()
{
    return value_02485d50;
}

/**
 *
 * The part of the object that auto_return_field_02488720 reads.
 *
 */
struct Object02488720 {
    uint8_t unknown_0x0000[0x67];
    uint8_t value_0x0067; /**< Read by auto_return_field_02488720; meaning unknown. */
};
static_assert(offsetof(Object02488720, value_0x0067) == 0x67);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02488720(const Object02488720 *self)
{
    return self->value_0x0067;
}

/**
 *
 * The part of the object that auto_return_field_02488740 reads.
 *
 */
struct Object02488740 {
    uint8_t unknown_0x0000[0xb8];
    uint64_t value_0x00b8; /**< Read by auto_return_field_02488740; meaning unknown. */
};
static_assert(offsetof(Object02488740, value_0x00b8) == 0xb8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02488740(const Object02488740 *self)
{
    return self->value_0x00b8;
}

/**
 *
 * The part of the object that auto_return_field_024887d0 reads.
 *
 */
struct Object024887d0 {
    uint8_t unknown_0x0000[0xb0];
    uint64_t value_0x00b0; /**< Read by auto_return_field_024887d0; meaning unknown. */
};
static_assert(offsetof(Object024887d0, value_0x00b0) == 0xb0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_024887d0(const Object024887d0 *self)
{
    return self->value_0x00b0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02489250()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_0248c540 reads.
 *
 */
struct Object0248c540 {
    uint8_t unknown_0x0000[0x68];
    uint8_t value_0x0068; /**< Read by auto_return_field_0248c540; meaning unknown. */
};
static_assert(offsetof(Object0248c540, value_0x0068) == 0x68);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_0248c540(const Object0248c540 *self)
{
    return self->value_0x0068;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0248e010()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0248e510()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0248ea20()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0248f000()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0248f5f0()
{
}
