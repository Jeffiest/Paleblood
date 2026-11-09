// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a105f0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a10610()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01a10760 reads.
 *
 */
struct Object01a10760 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01a10760; meaning unknown. */
};
static_assert(offsetof(Object01a10760, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a10760(const Object01a10760 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01a10770 reads.
 *
 */
struct Object01a10770 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01a10770; meaning unknown. */
};
static_assert(offsetof(Object01a10770, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a10770(const Object01a10770 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a107c0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01a10a40 = 0x188;

extern "C" uint32_t bb_auto_return_constant_01a10a40()
{
    return value_01a10a40;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a11ea0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_01a11eb0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_01a11eb0()
{
    return value_01a11eb0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a12190()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a121b0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01a12300 reads.
 *
 */
struct Object01a12300 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01a12300; meaning unknown. */
};
static_assert(offsetof(Object01a12300, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a12300(const Object01a12300 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01a12310 reads.
 *
 */
struct Object01a12310 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01a12310; meaning unknown. */
};
static_assert(offsetof(Object01a12310, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a12310(const Object01a12310 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a12360()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01a125e0 = 0x188;

extern "C" uint32_t bb_auto_return_constant_01a125e0()
{
    return value_01a125e0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_01a127d0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_01a127d0()
{
    return value_01a127d0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a14ea0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a14ec0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01a15010 reads.
 *
 */
struct Object01a15010 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01a15010; meaning unknown. */
};
static_assert(offsetof(Object01a15010, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a15010(const Object01a15010 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01a15020 reads.
 *
 */
struct Object01a15020 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01a15020; meaning unknown. */
};
static_assert(offsetof(Object01a15020, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a15020(const Object01a15020 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a15070()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01a152f0 = 0x188;

extern "C" uint32_t bb_auto_return_constant_01a152f0()
{
    return value_01a152f0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_01a154e0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_01a154e0()
{
    return value_01a154e0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a1cb10()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a1cb30()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01a1cc80 reads.
 *
 */
struct Object01a1cc80 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01a1cc80; meaning unknown. */
};
static_assert(offsetof(Object01a1cc80, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a1cc80(const Object01a1cc80 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01a1cc90 reads.
 *
 */
struct Object01a1cc90 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01a1cc90; meaning unknown. */
};
static_assert(offsetof(Object01a1cc90, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a1cc90(const Object01a1cc90 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a1cce0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01a1cf60 = 0x188;

extern "C" uint32_t bb_auto_return_constant_01a1cf60()
{
    return value_01a1cf60;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a1f2e0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a1f300()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01a1f450 reads.
 *
 */
struct Object01a1f450 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01a1f450; meaning unknown. */
};
static_assert(offsetof(Object01a1f450, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a1f450(const Object01a1f450 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01a1f460 reads.
 *
 */
struct Object01a1f460 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01a1f460; meaning unknown. */
};
static_assert(offsetof(Object01a1f460, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a1f460(const Object01a1f460 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a1f4b0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01a1f730 = 0x1d8;

extern "C" uint32_t bb_auto_return_constant_01a1f730()
{
    return value_01a1f730;
}
