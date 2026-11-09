// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02741b00()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_02742050 reads.
 *
 */
struct Object02742050 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02742050; meaning unknown. */
};
static_assert(offsetof(Object02742050, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02742050(const Object02742050 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02742060 reads.
 *
 */
struct Object02742060 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02742060; meaning unknown. */
};
static_assert(offsetof(Object02742060, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02742060(const Object02742060 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_027420b0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02742330 = 0x38;

extern "C" uint32_t bb_auto_return_constant_02742330()
{
    return value_02742330;
}

/**
 *
 * The part of the object that auto_return_field_02743ae0 reads.
 *
 */
struct Object02743ae0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02743ae0; meaning unknown. */
};
static_assert(offsetof(Object02743ae0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02743ae0(const Object02743ae0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02743af0 reads.
 *
 */
struct Object02743af0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02743af0; meaning unknown. */
};
static_assert(offsetof(Object02743af0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02743af0(const Object02743af0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02743b40()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02743dc0 = 0x40;

extern "C" uint32_t bb_auto_return_constant_02743dc0()
{
    return value_02743dc0;
}

/**
 *
 * The part of the object that auto_return_field_02743e00 reads.
 *
 */
struct Object02743e00 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02743e00; meaning unknown. */
};
static_assert(offsetof(Object02743e00, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02743e00(const Object02743e00 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02743e10 reads.
 *
 */
struct Object02743e10 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02743e10; meaning unknown. */
};
static_assert(offsetof(Object02743e10, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02743e10(const Object02743e10 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02743e60()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_027440e0 = 0x188;

extern "C" uint32_t bb_auto_return_constant_027440e0()
{
    return value_027440e0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02746db0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02746dd0 = 0x1;

extern "C" uint32_t bb_auto_return_constant_02746dd0()
{
    return value_02746dd0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02747580()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_027475a0 = 0x2;

extern "C" uint32_t bb_auto_return_constant_027475a0()
{
    return value_027475a0;
}

/**
 *
 * The part of the object that auto_return_field_02747710 reads.
 *
 */
struct Object02747710 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02747710; meaning unknown. */
};
static_assert(offsetof(Object02747710, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02747710(const Object02747710 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02747720 reads.
 *
 */
struct Object02747720 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02747720; meaning unknown. */
};
static_assert(offsetof(Object02747720, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02747720(const Object02747720 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02747770()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_027479f0 = 0x120;

extern "C" uint32_t bb_auto_return_constant_027479f0()
{
    return value_027479f0;
}

/**
 *
 * The part of the object that auto_return_field_0274a2f0 reads.
 *
 */
struct Object0274a2f0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0274a2f0; meaning unknown. */
};
static_assert(offsetof(Object0274a2f0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0274a2f0(const Object0274a2f0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0274a300 reads.
 *
 */
struct Object0274a300 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0274a300; meaning unknown. */
};
static_assert(offsetof(Object0274a300, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0274a300(const Object0274a300 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0274a350()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0274a5d0 = 0x140;

extern "C" uint32_t bb_auto_return_constant_0274a5d0()
{
    return value_0274a5d0;
}

/**
 *
 * The part of the object that auto_return_field_0274aca0 reads.
 *
 */
struct Object0274aca0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0274aca0; meaning unknown. */
};
static_assert(offsetof(Object0274aca0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0274aca0(const Object0274aca0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0274acb0 reads.
 *
 */
struct Object0274acb0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0274acb0; meaning unknown. */
};
static_assert(offsetof(Object0274acb0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0274acb0(const Object0274acb0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0274ad00()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0274af80 = 0x10;

extern "C" uint32_t bb_auto_return_constant_0274af80()
{
    return value_0274af80;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0274d930()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0274d950 = 0x2;

extern "C" uint32_t bb_auto_return_constant_0274d950()
{
    return value_0274d950;
}

/**
 *
 * The part of the object that auto_return_field_0274daa0 reads.
 *
 */
struct Object0274daa0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0274daa0; meaning unknown. */
};
static_assert(offsetof(Object0274daa0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0274daa0(const Object0274daa0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0274dab0 reads.
 *
 */
struct Object0274dab0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0274dab0; meaning unknown. */
};
static_assert(offsetof(Object0274dab0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0274dab0(const Object0274dab0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0274db00()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0274dd80 = 0x160;

extern "C" uint32_t bb_auto_return_constant_0274dd80()
{
    return value_0274dd80;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0274f770 = 0x1;

extern "C" uint32_t bb_auto_return_constant_0274f770()
{
    return value_0274f770;
}

/**
 *
 * The part of the object that auto_return_field_0274f7b0 reads.
 *
 */
struct Object0274f7b0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0274f7b0; meaning unknown. */
};
static_assert(offsetof(Object0274f7b0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0274f7b0(const Object0274f7b0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0274f7c0 reads.
 *
 */
struct Object0274f7c0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0274f7c0; meaning unknown. */
};
static_assert(offsetof(Object0274f7c0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0274f7c0(const Object0274f7c0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0274f810()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0274fa90 = 0x60;

extern "C" uint32_t bb_auto_return_constant_0274fa90()
{
    return value_0274fa90;
}
