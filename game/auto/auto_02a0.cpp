// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02a024f0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02a024f0()
{
    return value_02a024f0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02a037c0 = 0x1;

extern "C" uint32_t bb_auto_return_constant_02a037c0()
{
    return value_02a037c0;
}

/**
 *
 * The part of the object that auto_return_field_02a03930 reads.
 *
 */
struct Object02a03930 {
    uint8_t unknown_0x0000[0x30];
    uint16_t value_0x0030; /**< Read by auto_return_field_02a03930; meaning unknown. */
};
static_assert(offsetof(Object02a03930, value_0x0030) == 0x30);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02a03930(const Object02a03930 *self)
{
    return self->value_0x0030;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a03c90()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02a03ce0 = 0xc;

extern "C" uint32_t bb_auto_return_constant_02a03ce0()
{
    return value_02a03ce0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a03eb0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a03ec0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a03ff0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a04000()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a04010()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a04020()
{
}

/**
 *
 * The part of the object that auto_return_field_02a04790 reads.
 *
 */
struct Object02a04790 {
    uint64_t value_0x0000; /**< Read by auto_return_field_02a04790; meaning unknown. */
};
static_assert(offsetof(Object02a04790, value_0x0000) == 0x0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02a04790(const Object02a04790 *self)
{
    return self->value_0x0000;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02a04b80()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a04d20()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02a04f30 = 0x6;

extern "C" uint32_t bb_auto_return_constant_02a04f30()
{
    return value_02a04f30;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a04fd0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a04fe0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a05140()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a05150()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a05160()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a05170()
{
}

/**
 *
 * The part of the object that auto_return_field_02a05ba0 reads.
 *
 */
struct Object02a05ba0 {
    uint64_t value_0x0000; /**< Read by auto_return_field_02a05ba0; meaning unknown. */
};
static_assert(offsetof(Object02a05ba0, value_0x0000) == 0x0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02a05ba0(const Object02a05ba0 *self)
{
    return self->value_0x0000;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a05f60()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02a06120 = 0x2;

extern "C" uint32_t bb_auto_return_constant_02a06120()
{
    return value_02a06120;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02a06130()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02a06360 = 0xb;

extern "C" uint32_t bb_auto_return_constant_02a06360()
{
    return value_02a06360;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02a06370()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a063e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a06400()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a06410()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a06420()
{
}

/**
 *
 * The part of the object that auto_return_member_address_02a06430 reads.
 *
 */
struct Object02a06430 {
    uint8_t unknown_0x0000[0x10];
    uint8_t member_0x0010; /**< Read by auto_return_member_address_02a06430; meaning unknown. */
};
static_assert(offsetof(Object02a06430, member_0x0010) == 0x10);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02a06430(Object02a06430 *self)
{
    return &self->member_0x0010;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a064e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a06560()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a06570()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02a06590 = 0xf;

extern "C" uint32_t bb_auto_return_constant_02a06590()
{
    return value_02a06590;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02a065a0 = 0x60;

extern "C" uint32_t bb_auto_return_constant_02a065a0()
{
    return value_02a065a0;
}

/**
 *
 * The part of the object that auto_return_member_address_02a065b0 reads.
 *
 */
struct Object02a065b0 {
    uint8_t unknown_0x0000[0x50];
    uint8_t member_0x0050; /**< Read by auto_return_member_address_02a065b0; meaning unknown. */
};
static_assert(offsetof(Object02a065b0, member_0x0050) == 0x50);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02a065b0(Object02a065b0 *self)
{
    return &self->member_0x0050;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a065c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a065d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a065e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a065f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a06600()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a06610()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a06620()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a06dd0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02a07280()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02a07360 = 0x8;

extern "C" uint32_t bb_auto_return_constant_02a07360()
{
    return value_02a07360;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a07b00()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a07c80()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a07d00()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a07d80()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a083a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a085f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a08600()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a08760()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a08770()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a08780()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a08790()
{
}

/**
 *
 * The part of the object that auto_return_field_02a08f80 reads.
 *
 */
struct Object02a08f80 {
    uint64_t value_0x0000; /**< Read by auto_return_field_02a08f80; meaning unknown. */
};
static_assert(offsetof(Object02a08f80, value_0x0000) == 0x0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02a08f80(const Object02a08f80 *self)
{
    return self->value_0x0000;
}

/**
 *
 * The part of the object that auto_return_field_02a09290 reads.
 *
 */
struct Object02a09290 {
    uint8_t unknown_0x0000[0x88];
    uint32_t value_0x0088; /**< Read by auto_return_field_02a09290; meaning unknown. */
};
static_assert(offsetof(Object02a09290, value_0x0088) == 0x88);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02a09290(const Object02a09290 *self)
{
    return self->value_0x0088;
}

/**
 *
 * The part of the object that auto_return_field_02a092a0 reads.
 *
 */
struct Object02a092a0 {
    uint8_t unknown_0x0000[0x78];
    uint32_t value_0x0078; /**< Read by auto_return_field_02a092a0; meaning unknown. */
};
static_assert(offsetof(Object02a092a0, value_0x0078) == 0x78);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02a092a0(const Object02a092a0 *self)
{
    return self->value_0x0078;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a0a9e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a0b240()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02a0b290 = 0x2;

extern "C" uint32_t bb_auto_return_constant_02a0b290()
{
    return value_02a0b290;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a0b2a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a0b2b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a0b2c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a0b2d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a0b2e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a0b2f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a0b300()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a0b320()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a0b330()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a0b340()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a0b350()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a0b500()
{
}

/**
 *
 * The part of the object that auto_return_member_address_02a0b600 reads.
 *
 */
struct Object02a0b600 {
    uint8_t unknown_0x0000[0x20];
    uint8_t member_0x0020; /**< Read by auto_return_member_address_02a0b600; meaning unknown. */
};
static_assert(offsetof(Object02a0b600, member_0x0020) == 0x20);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02a0b600(Object02a0b600 *self)
{
    return &self->member_0x0020;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a0b710()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a0b760()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a0b7b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a0bf70()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a0bf80()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a0c050()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a0c0a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a0c440()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a0c490()
{
}

/**
 *
 * The part of the object that auto_return_field_02a0c5d0 reads.
 *
 */
struct Object02a0c5d0 {
    uint8_t unknown_0x0000[0x28];
    uint32_t value_0x0028; /**< Read by auto_return_field_02a0c5d0; meaning unknown. */
};
static_assert(offsetof(Object02a0c5d0, value_0x0028) == 0x28);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02a0c5d0(const Object02a0c5d0 *self)
{
    return self->value_0x0028;
}

/**
 *
 * The part of the object that auto_return_field_02a0c5e0 reads.
 *
 */
struct Object02a0c5e0 {
    uint8_t unknown_0x0000[0x20];
    uint64_t value_0x0020; /**< Read by auto_return_field_02a0c5e0; meaning unknown. */
};
static_assert(offsetof(Object02a0c5e0, value_0x0020) == 0x20);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02a0c5e0(const Object02a0c5e0 *self)
{
    return self->value_0x0020;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a0c8f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a0c940()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a0c990()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02a0ca00 = 0x3;

extern "C" uint32_t bb_auto_return_constant_02a0ca00()
{
    return value_02a0ca00;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a0ca10()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a0ca30()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a0ca40()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02a0d150 = 0x4;

extern "C" uint32_t bb_auto_return_constant_02a0d150()
{
    return value_02a0d150;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a0d8a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a0d8f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a0d940()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02a0d990 = 0xb;

extern "C" uint32_t bb_auto_return_constant_02a0d990()
{
    return value_02a0d990;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a0d9a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a0d9f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a0da40()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a0da90()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a0dae0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a0db00()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a0db20()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a0dca0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a0dcb0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a0dcc0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a0dcd0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a0dce0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02a0dd30 = 0xf;

extern "C" uint32_t bb_auto_return_constant_02a0dd30()
{
    return value_02a0dd30;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a0e2d0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02a0e320 = 0x5;

extern "C" uint32_t bb_auto_return_constant_02a0e320()
{
    return value_02a0e320;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a0e340()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a0e350()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a0e410()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a0e460()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a0e4b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a0e500()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a0e550()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02a0e5a0 = 0x5;

extern "C" uint32_t bb_auto_return_constant_02a0e5a0()
{
    return value_02a0e5a0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a0e5b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a0e5c0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02a0e610 = 0x21;

extern "C" uint32_t bb_auto_return_constant_02a0e610()
{
    return value_02a0e610;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02a0ef90 = 0xa;

extern "C" uint32_t bb_auto_return_constant_02a0ef90()
{
    return value_02a0ef90;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a0efa0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02a0eff0 = 0x11;

extern "C" uint32_t bb_auto_return_constant_02a0eff0()
{
    return value_02a0eff0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a0f000()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02a0f050 = 0x17;

extern "C" uint32_t bb_auto_return_constant_02a0f050()
{
    return value_02a0f050;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a0f080()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a0f380()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02a0f3d0 = 0x4;

extern "C" uint32_t bb_auto_return_constant_02a0f3d0()
{
    return value_02a0f3d0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a0f3e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a0f520()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02a0f570 = 0x40;

extern "C" uint32_t bb_auto_return_constant_02a0f570()
{
    return value_02a0f570;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a0f580()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a0f5d0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02a0f620 = 0x40;

extern "C" uint32_t bb_auto_return_constant_02a0f620()
{
    return value_02a0f620;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a0f630()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a0f680()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a0f6d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a0f720()
{
}
