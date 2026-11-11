// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d50500()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d524c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d52810()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02d52e20 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02d52e20()
{
    return value_02d52e20;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d54fb0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d55000()
{
}

/**
 *
 * The part of the object that auto_return_float_field_02d55510 reads.
 *
 */
struct Object02d55510 {
    uint8_t unknown_0x0000[0x68];
    float value_0x0068; /**< Read by auto_return_float_field_02d55510; meaning unknown. */
};
static_assert(offsetof(Object02d55510, value_0x0068) == 0x68);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_02d55510(const Object02d55510 *self)
{
    return self->value_0x0068;
}

/**
 *
 * The part of the object that auto_return_float_field_02d55540 reads.
 *
 */
struct Object02d55540 {
    uint8_t unknown_0x0000[0x1a8];
    float value_0x01a8; /**< Read by auto_return_float_field_02d55540; meaning unknown. */
};
static_assert(offsetof(Object02d55540, value_0x01a8) == 0x1a8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_02d55540(const Object02d55540 *self)
{
    return self->value_0x01a8;
}

/**
 *
 * The part of the object that auto_return_float_field_02d555c0 reads.
 *
 */
struct Object02d555c0 {
    uint8_t unknown_0x0000[0x1f4];
    float value_0x01f4; /**< Read by auto_return_float_field_02d555c0; meaning unknown. */
};
static_assert(offsetof(Object02d555c0, value_0x01f4) == 0x1f4);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_02d555c0(const Object02d555c0 *self)
{
    return self->value_0x01f4;
}

/**
 *
 * The part of the object that auto_return_field_02d555d0 reads.
 *
 */
struct Object02d555d0 {
    uint8_t unknown_0x0000[0x230];
    uint8_t value_0x0230; /**< Read by auto_return_field_02d555d0; meaning unknown. */
};
static_assert(offsetof(Object02d555d0, value_0x0230) == 0x230);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02d555d0(const Object02d555d0 *self)
{
    return self->value_0x0230;
}

/**
 *
 * The part of the object that auto_return_float_field_02d555e0 reads.
 *
 */
struct Object02d555e0 {
    uint8_t unknown_0x0000[0x1ec];
    float value_0x01ec; /**< Read by auto_return_float_field_02d555e0; meaning unknown. */
};
static_assert(offsetof(Object02d555e0, value_0x01ec) == 0x1ec);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_02d555e0(const Object02d555e0 *self)
{
    return self->value_0x01ec;
}

/**
 *
 * The part of the object that auto_return_field_02d555f0 reads.
 *
 */
struct Object02d555f0 {
    uint8_t unknown_0x0000[0x1f0];
    uint32_t value_0x01f0; /**< Read by auto_return_field_02d555f0; meaning unknown. */
};
static_assert(offsetof(Object02d555f0, value_0x01f0) == 0x1f0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02d555f0(const Object02d555f0 *self)
{
    return self->value_0x01f0;
}

/**
 *
 * The part of the object that auto_return_float_field_02d55610 reads.
 *
 */
struct Object02d55610 {
    uint8_t unknown_0x0000[0x1fc];
    float value_0x01fc; /**< Read by auto_return_float_field_02d55610; meaning unknown. */
};
static_assert(offsetof(Object02d55610, value_0x01fc) == 0x1fc);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_02d55610(const Object02d55610 *self)
{
    return self->value_0x01fc;
}

/**
 *
 * The part of the object that auto_return_float_field_02d55620 reads.
 *
 */
struct Object02d55620 {
    uint8_t unknown_0x0000[0x200];
    float value_0x0200; /**< Read by auto_return_float_field_02d55620; meaning unknown. */
};
static_assert(offsetof(Object02d55620, value_0x0200) == 0x200);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_02d55620(const Object02d55620 *self)
{
    return self->value_0x0200;
}

/**
 *
 * The part of the object that auto_return_float_field_02d55650 reads.
 *
 */
struct Object02d55650 {
    uint8_t unknown_0x0000[0x20c];
    float value_0x020c; /**< Read by auto_return_float_field_02d55650; meaning unknown. */
};
static_assert(offsetof(Object02d55650, value_0x020c) == 0x20c);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_02d55650(const Object02d55650 *self)
{
    return self->value_0x020c;
}

/**
 *
 * The part of the object that auto_return_float_field_02d55660 reads.
 *
 */
struct Object02d55660 {
    uint8_t unknown_0x0000[0x210];
    float value_0x0210; /**< Read by auto_return_float_field_02d55660; meaning unknown. */
};
static_assert(offsetof(Object02d55660, value_0x0210) == 0x210);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_02d55660(const Object02d55660 *self)
{
    return self->value_0x0210;
}

/**
 *
 * The part of the object that auto_return_float_field_02d55670 reads.
 *
 */
struct Object02d55670 {
    uint8_t unknown_0x0000[0x214];
    float value_0x0214; /**< Read by auto_return_float_field_02d55670; meaning unknown. */
};
static_assert(offsetof(Object02d55670, value_0x0214) == 0x214);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_02d55670(const Object02d55670 *self)
{
    return self->value_0x0214;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d55c00()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d56df0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d59310()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d5d170()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d5fc00()
{
}
