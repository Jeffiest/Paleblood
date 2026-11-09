// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02401930 = 0x1;

extern "C" uint32_t bb_auto_return_constant_02401930()
{
    return value_02401930;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02401e10()
{
}

/**
 *
 * The part of the object that auto_return_field_02401fc0 reads.
 *
 */
struct Object02401fc0 {
    uint8_t unknown_0x0000[0x8];
    uint64_t value_0x0008; /**< Read by auto_return_field_02401fc0; meaning unknown. */
};
static_assert(offsetof(Object02401fc0, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02401fc0(const Object02401fc0 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_02401fd0 reads.
 *
 */
struct Object02401fd0 {
    uint8_t unknown_0x0000[0x10];
    uint64_t value_0x0010; /**< Read by auto_return_field_02401fd0; meaning unknown. */
};
static_assert(offsetof(Object02401fd0, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02401fd0(const Object02401fd0 *self)
{
    return self->value_0x0010;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_024057d0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_024057f0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_02405940 reads.
 *
 */
struct Object02405940 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02405940; meaning unknown. */
};
static_assert(offsetof(Object02405940, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02405940(const Object02405940 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02405950 reads.
 *
 */
struct Object02405950 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02405950; meaning unknown. */
};
static_assert(offsetof(Object02405950, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02405950(const Object02405950 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_024059a0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02405c20 = 0xa0;

extern "C" uint32_t bb_auto_return_constant_02405c20()
{
    return value_02405c20;
}

/**
 *
 * The part of the object that auto_return_field_02406990 reads.
 *
 */
struct Object02406990 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02406990; meaning unknown. */
};
static_assert(offsetof(Object02406990, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02406990(const Object02406990 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_024069a0 reads.
 *
 */
struct Object024069a0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_024069a0; meaning unknown. */
};
static_assert(offsetof(Object024069a0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_024069a0(const Object024069a0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_024069f0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02406c70 = 0x70;

extern "C" uint32_t bb_auto_return_constant_02406c70()
{
    return value_02406c70;
}

/**
 *
 * The part of the object that auto_return_field_02407550 reads.
 *
 */
struct Object02407550 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02407550; meaning unknown. */
};
static_assert(offsetof(Object02407550, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02407550(const Object02407550 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02407560 reads.
 *
 */
struct Object02407560 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02407560; meaning unknown. */
};
static_assert(offsetof(Object02407560, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02407560(const Object02407560 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_024075b0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02407830 = 0x30;

extern "C" uint32_t bb_auto_return_constant_02407830()
{
    return value_02407830;
}
