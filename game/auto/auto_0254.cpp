// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02541c40()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02541c60 = 0x1;

extern "C" uint32_t bb_auto_return_constant_02541c60()
{
    return value_02541c60;
}

/**
 *
 * The part of the object that auto_return_field_02541dd0 reads.
 *
 */
struct Object02541dd0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02541dd0; meaning unknown. */
};
static_assert(offsetof(Object02541dd0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02541dd0(const Object02541dd0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02541de0 reads.
 *
 */
struct Object02541de0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02541de0; meaning unknown. */
};
static_assert(offsetof(Object02541de0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02541de0(const Object02541de0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02541e30()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_025420b0 = 0x30;

extern "C" uint32_t bb_auto_return_constant_025420b0()
{
    return value_025420b0;
}

/**
 *
 * The part of the object that auto_return_field_025434c0 reads.
 *
 */
struct Object025434c0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_025434c0; meaning unknown. */
};
static_assert(offsetof(Object025434c0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_025434c0(const Object025434c0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_025434d0 reads.
 *
 */
struct Object025434d0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_025434d0; meaning unknown. */
};
static_assert(offsetof(Object025434d0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_025434d0(const Object025434d0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02543520()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_025437a0 = 0x30;

extern "C" uint32_t bb_auto_return_constant_025437a0()
{
    return value_025437a0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02544960()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02544980 = 0x1;

extern "C" uint32_t bb_auto_return_constant_02544980()
{
    return value_02544980;
}

/**
 *
 * The part of the object that auto_return_field_02544af0 reads.
 *
 */
struct Object02544af0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02544af0; meaning unknown. */
};
static_assert(offsetof(Object02544af0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02544af0(const Object02544af0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02544b00 reads.
 *
 */
struct Object02544b00 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02544b00; meaning unknown. */
};
static_assert(offsetof(Object02544b00, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02544b00(const Object02544b00 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02544b50()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02544dd0 = 0x38;

extern "C" uint32_t bb_auto_return_constant_02544dd0()
{
    return value_02544dd0;
}

/**
 *
 * The part of the object that auto_return_field_02545a00 reads.
 *
 */
struct Object02545a00 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02545a00; meaning unknown. */
};
static_assert(offsetof(Object02545a00, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02545a00(const Object02545a00 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02545a10 reads.
 *
 */
struct Object02545a10 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02545a10; meaning unknown. */
};
static_assert(offsetof(Object02545a10, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02545a10(const Object02545a10 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02545a60()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02545ce0 = 0x30;

extern "C" uint32_t bb_auto_return_constant_02545ce0()
{
    return value_02545ce0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02546d40()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02546d60 = 0x1;

extern "C" uint32_t bb_auto_return_constant_02546d60()
{
    return value_02546d60;
}

/**
 *
 * The part of the object that auto_return_field_02546ed0 reads.
 *
 */
struct Object02546ed0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02546ed0; meaning unknown. */
};
static_assert(offsetof(Object02546ed0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02546ed0(const Object02546ed0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02546ee0 reads.
 *
 */
struct Object02546ee0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02546ee0; meaning unknown. */
};
static_assert(offsetof(Object02546ee0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02546ee0(const Object02546ee0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02546f30()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_025471b0 = 0xc0;

extern "C" uint32_t bb_auto_return_constant_025471b0()
{
    return value_025471b0;
}

/**
 *
 * The part of the object that auto_return_field_02547fe0 reads.
 *
 */
struct Object02547fe0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02547fe0; meaning unknown. */
};
static_assert(offsetof(Object02547fe0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02547fe0(const Object02547fe0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02547ff0 reads.
 *
 */
struct Object02547ff0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02547ff0; meaning unknown. */
};
static_assert(offsetof(Object02547ff0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02547ff0(const Object02547ff0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02548040()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_025482c0 = 0x58;

extern "C" uint32_t bb_auto_return_constant_025482c0()
{
    return value_025482c0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02549480()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_025494a0 = 0x1;

extern "C" uint32_t bb_auto_return_constant_025494a0()
{
    return value_025494a0;
}

/**
 *
 * The part of the object that auto_return_field_02549610 reads.
 *
 */
struct Object02549610 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02549610; meaning unknown. */
};
static_assert(offsetof(Object02549610, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02549610(const Object02549610 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02549620 reads.
 *
 */
struct Object02549620 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02549620; meaning unknown. */
};
static_assert(offsetof(Object02549620, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02549620(const Object02549620 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02549670()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_025498f0 = 0x38;

extern "C" uint32_t bb_auto_return_constant_025498f0()
{
    return value_025498f0;
}

/**
 *
 * The part of the object that auto_return_field_0254a810 reads.
 *
 */
struct Object0254a810 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0254a810; meaning unknown. */
};
static_assert(offsetof(Object0254a810, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0254a810(const Object0254a810 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0254a820 reads.
 *
 */
struct Object0254a820 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0254a820; meaning unknown. */
};
static_assert(offsetof(Object0254a820, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0254a820(const Object0254a820 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0254a870()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0254aaf0 = 0x30;

extern "C" uint32_t bb_auto_return_constant_0254aaf0()
{
    return value_0254aaf0;
}

/**
 *
 * The part of the object that auto_return_field_0254d290 reads.
 *
 */
struct Object0254d290 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0254d290; meaning unknown. */
};
static_assert(offsetof(Object0254d290, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0254d290(const Object0254d290 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0254d2a0 reads.
 *
 */
struct Object0254d2a0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0254d2a0; meaning unknown. */
};
static_assert(offsetof(Object0254d2a0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0254d2a0(const Object0254d2a0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0254d2f0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0254d570 = 0xa8;

extern "C" uint32_t bb_auto_return_constant_0254d570()
{
    return value_0254d570;
}

/**
 *
 * The part of the object that auto_return_field_0254ebb0 reads.
 *
 */
struct Object0254ebb0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0254ebb0; meaning unknown. */
};
static_assert(offsetof(Object0254ebb0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0254ebb0(const Object0254ebb0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0254ebc0 reads.
 *
 */
struct Object0254ebc0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0254ebc0; meaning unknown. */
};
static_assert(offsetof(Object0254ebc0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0254ebc0(const Object0254ebc0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0254ec10()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0254ee90 = 0x58;

extern "C" uint32_t bb_auto_return_constant_0254ee90()
{
    return value_0254ee90;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0254fda0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0254fdc0 = 0x1;

extern "C" uint32_t bb_auto_return_constant_0254fdc0()
{
    return value_0254fdc0;
}

/**
 *
 * The part of the object that auto_return_field_0254ff30 reads.
 *
 */
struct Object0254ff30 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0254ff30; meaning unknown. */
};
static_assert(offsetof(Object0254ff30, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0254ff30(const Object0254ff30 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0254ff40 reads.
 *
 */
struct Object0254ff40 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0254ff40; meaning unknown. */
};
static_assert(offsetof(Object0254ff40, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0254ff40(const Object0254ff40 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0254ff90()
{
    return 0;
}
