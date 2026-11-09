// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_024a1590()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_024a15b0 = 0x1;

extern "C" uint32_t bb_auto_return_constant_024a15b0()
{
    return value_024a15b0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_024a1ba0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_024a1bc0 = 0x1;

extern "C" uint32_t bb_auto_return_constant_024a1bc0()
{
    return value_024a1bc0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_024a20b0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_024a20d0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_024a2220 reads.
 *
 */
struct Object024a2220 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_024a2220; meaning unknown. */
};
static_assert(offsetof(Object024a2220, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_024a2220(const Object024a2220 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_024a2230 reads.
 *
 */
struct Object024a2230 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_024a2230; meaning unknown. */
};
static_assert(offsetof(Object024a2230, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_024a2230(const Object024a2230 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_024a2280()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_024a2500 = 0xa0;

extern "C" uint32_t bb_auto_return_constant_024a2500()
{
    return value_024a2500;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_024a34d0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_024a34f0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_024a3640 reads.
 *
 */
struct Object024a3640 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_024a3640; meaning unknown. */
};
static_assert(offsetof(Object024a3640, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_024a3640(const Object024a3640 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_024a3650 reads.
 *
 */
struct Object024a3650 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_024a3650; meaning unknown. */
};
static_assert(offsetof(Object024a3650, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_024a3650(const Object024a3650 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_024a36a0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_024a3920 = 0x50;

extern "C" uint32_t bb_auto_return_constant_024a3920()
{
    return value_024a3920;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_024a45d0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_024a45e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_024a4900()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_024a4920()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_024a4a70 reads.
 *
 */
struct Object024a4a70 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_024a4a70; meaning unknown. */
};
static_assert(offsetof(Object024a4a70, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_024a4a70(const Object024a4a70 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_024a4a80 reads.
 *
 */
struct Object024a4a80 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_024a4a80; meaning unknown. */
};
static_assert(offsetof(Object024a4a80, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_024a4a80(const Object024a4a80 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_024a4ad0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_024a4d50 = 0x50;

extern "C" uint32_t bb_auto_return_constant_024a4d50()
{
    return value_024a4d50;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_024a7210()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_024a7230()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_024a77f0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_024a7810 = 0x1;

extern "C" uint32_t bb_auto_return_constant_024a7810()
{
    return value_024a7810;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_024a7be0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_024a7c00()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_024a7d50 reads.
 *
 */
struct Object024a7d50 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_024a7d50; meaning unknown. */
};
static_assert(offsetof(Object024a7d50, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_024a7d50(const Object024a7d50 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_024a7d60 reads.
 *
 */
struct Object024a7d60 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_024a7d60; meaning unknown. */
};
static_assert(offsetof(Object024a7d60, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_024a7d60(const Object024a7d60 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_024a7db0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_024a8030 = 0x38;

extern "C" uint32_t bb_auto_return_constant_024a8030()
{
    return value_024a8030;
}

/**
 *
 * The part of the object that auto_return_field_024a8070 reads.
 *
 */
struct Object024a8070 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_024a8070; meaning unknown. */
};
static_assert(offsetof(Object024a8070, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_024a8070(const Object024a8070 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_024a8080 reads.
 *
 */
struct Object024a8080 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_024a8080; meaning unknown. */
};
static_assert(offsetof(Object024a8080, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_024a8080(const Object024a8080 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_024a80d0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_024a8350 = 0x8;

extern "C" uint32_t bb_auto_return_constant_024a8350()
{
    return value_024a8350;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_024a8820 = 0xffff0000;

extern "C" uint32_t bb_auto_return_constant_024a8820()
{
    return value_024a8820;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_024a8830 = 0xffa9a9a9;

extern "C" uint32_t bb_auto_return_constant_024a8830()
{
    return value_024a8830;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_024a8840 = 0xff008000;

extern "C" uint32_t bb_auto_return_constant_024a8840()
{
    return value_024a8840;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_024a8850 = 0xff0000ff;

extern "C" uint32_t bb_auto_return_constant_024a8850()
{
    return value_024a8850;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_024a8860 = 0xff4763ff;

extern "C" uint32_t bb_auto_return_constant_024a8860()
{
    return value_024a8860;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_024a8870 = 0xffee82ee;

extern "C" uint32_t bb_auto_return_constant_024a8870()
{
    return value_024a8870;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_024a8880 = 0xffffffff;

extern "C" uint32_t bb_auto_return_constant_024a8880()
{
    return value_024a8880;
}
