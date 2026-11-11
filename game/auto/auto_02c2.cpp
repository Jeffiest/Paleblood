// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c203e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c20450()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c204c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c204f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c20560()
{
}

/**
 *
 * The part of the object that auto_return_float_field_02c20590 reads.
 *
 */
struct Object02c20590 {
    uint8_t unknown_0x0000[0x1c];
    float value_0x001c; /**< Read by auto_return_float_field_02c20590; meaning unknown. */
};
static_assert(offsetof(Object02c20590, value_0x001c) == 0x1c);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_02c20590(const Object02c20590 *self)
{
    return self->value_0x001c;
}

/**
 *
 * The part of the object that auto_return_float_field_02c205a0 reads.
 *
 */
struct Object02c205a0 {
    uint8_t unknown_0x0000[0x20];
    float value_0x0020; /**< Read by auto_return_float_field_02c205a0; meaning unknown. */
};
static_assert(offsetof(Object02c205a0, value_0x0020) == 0x20);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_02c205a0(const Object02c205a0 *self)
{
    return self->value_0x0020;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c20690()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c20750()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c20810()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c208c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c20970()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c20a70()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c20b20()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c20c30()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c20c50()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c20c70()
{
}

/**
 *
 * The part of the object that auto_return_float_field_02c20ca0 reads.
 *
 */
struct Object02c20ca0 {
    uint8_t unknown_0x0000[0xc];
    float value_0x000c; /**< Read by auto_return_float_field_02c20ca0; meaning unknown. */
};
static_assert(offsetof(Object02c20ca0, value_0x000c) == 0xc);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_02c20ca0(const Object02c20ca0 *self)
{
    return self->value_0x000c;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c20cb0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c20e10()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c210c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c212c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c21330()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c213f0()
{
}

/**
 *
 * The part of the object that auto_return_field_02c21740 reads.
 *
 */
struct Object02c21740 {
    uint8_t unknown_0x0000[0x10];
    uint8_t value_0x0010; /**< Read by auto_return_field_02c21740; meaning unknown. */
};
static_assert(offsetof(Object02c21740, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02c21740(const Object02c21740 *self)
{
    return self->value_0x0010;
}

/**
 *
 * The part of the object that auto_return_field_02c21780 reads.
 *
 */
struct Object02c21780 {
    uint8_t unknown_0x0000[0x39];
    uint8_t value_0x0039; /**< Read by auto_return_field_02c21780; meaning unknown. */
};
static_assert(offsetof(Object02c21780, value_0x0039) == 0x39);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02c21780(const Object02c21780 *self)
{
    return self->value_0x0039;
}

/**
 *
 * The part of the object that auto_return_field_02c21790 reads.
 *
 */
struct Object02c21790 {
    uint8_t unknown_0x0000[0x38];
    uint8_t value_0x0038; /**< Read by auto_return_field_02c21790; meaning unknown. */
};
static_assert(offsetof(Object02c21790, value_0x0038) == 0x38);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02c21790(const Object02c21790 *self)
{
    return self->value_0x0038;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02c21850 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02c21850()
{
    return value_02c21850;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02c25cd0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02c25cd0()
{
    return value_02c25cd0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02c25ce0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02c25ce0()
{
    return value_02c25ce0;
}

/**
 *
 * The part of the object that auto_return_member_address_02c266d0 reads.
 *
 */
struct Object02c266d0 {
    uint8_t unknown_0x0000[0xa8];
    uint8_t member_0x00a8; /**< Read by auto_return_member_address_02c266d0; meaning unknown. */
};
static_assert(offsetof(Object02c266d0, member_0x00a8) == 0xa8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02c266d0(Object02c266d0 *self)
{
    return &self->member_0x00a8;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02c29290 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02c29290()
{
    return value_02c29290;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02c292a0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02c292a0()
{
    return value_02c292a0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c295a0 = 0x2;

extern "C" uint32_t bb_auto_return_constant_02c295a0()
{
    return value_02c295a0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02c29ef0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02c29ef0()
{
    return value_02c29ef0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02c2d250 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02c2d250()
{
    return value_02c2d250;
}

/**
 *
 * The part of the object that auto_return_field_02c2d9a0 reads.
 *
 */
struct Object02c2d9a0 {
    uint16_t value_0x0000; /**< Read by auto_return_field_02c2d9a0; meaning unknown. */
};
static_assert(offsetof(Object02c2d9a0, value_0x0000) == 0x0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02c2d9a0(const Object02c2d9a0 *self)
{
    return self->value_0x0000;
}

/**
 *
 * The part of the object that auto_return_field_02c2d9b0 reads.
 *
 */
struct Object02c2d9b0 {
    uint8_t unknown_0x0000[0x2];
    uint16_t value_0x0002; /**< Read by auto_return_field_02c2d9b0; meaning unknown. */
};
static_assert(offsetof(Object02c2d9b0, value_0x0002) == 0x2);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02c2d9b0(const Object02c2d9b0 *self)
{
    return self->value_0x0002;
}

/**
 *
 * The part of the object that auto_return_field_02c2e390 reads.
 *
 */
struct Object02c2e390 {
    uint8_t unknown_0x0000[0x4];
    uint32_t value_0x0004; /**< Read by auto_return_field_02c2e390; meaning unknown. */
};
static_assert(offsetof(Object02c2e390, value_0x0004) == 0x4);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02c2e390(const Object02c2e390 *self)
{
    return self->value_0x0004;
}

/**
 *
 * The part of the object that auto_return_field_02c2e490 reads.
 *
 */
struct Object02c2e490 {
    uint8_t unknown_0x0000[0x8];
    uint32_t value_0x0008; /**< Read by auto_return_field_02c2e490; meaning unknown. */
};
static_assert(offsetof(Object02c2e490, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02c2e490(const Object02c2e490 *self)
{
    return self->value_0x0008;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c2e530()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c2e550()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c2e5c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c2e630()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c2e6f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c2e760()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c2e7e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c2e860()
{
}

/**
 *
 * The part of the object that auto_return_field_02c2edb0 reads.
 *
 */
struct Object02c2edb0 {
    uint8_t unknown_0x0000[0x1c];
    uint8_t value_0x001c; /**< Read by auto_return_field_02c2edb0; meaning unknown. */
};
static_assert(offsetof(Object02c2edb0, value_0x001c) == 0x1c);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02c2edb0(const Object02c2edb0 *self)
{
    return self->value_0x001c;
}

/**
 *
 * The part of the object that auto_return_float_field_02c2fce0 reads.
 *
 */
struct Object02c2fce0 {
    uint8_t unknown_0x0000[0xa4];
    float value_0x00a4; /**< Read by auto_return_float_field_02c2fce0; meaning unknown. */
};
static_assert(offsetof(Object02c2fce0, value_0x00a4) == 0xa4);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_02c2fce0(const Object02c2fce0 *self)
{
    return self->value_0x00a4;
}
