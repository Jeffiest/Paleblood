// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_020d2690()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_020d26a0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_020d26e0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_020d2700 reads.
 *
 */
struct Object020d2700 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_020d2700; meaning unknown. */
};
static_assert(offsetof(Object020d2700, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_020d2700(Object020d2700 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_020d2850 reads.
 *
 */
struct Object020d2850 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_020d2850; meaning unknown. */
};
static_assert(offsetof(Object020d2850, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_020d2850(const Object020d2850 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_020d2860 reads.
 *
 */
struct Object020d2860 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_020d2860; meaning unknown. */
};
static_assert(offsetof(Object020d2860, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_020d2860(const Object020d2860 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_020d28b0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_020d2b30 = 0x100;

extern "C" uint32_t bb_auto_return_constant_020d2b30()
{
    return value_020d2b30;
}

/**
 *
 * The part of the object that auto_return_field_020d2b70 reads.
 *
 */
struct Object020d2b70 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_020d2b70; meaning unknown. */
};
static_assert(offsetof(Object020d2b70, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_020d2b70(const Object020d2b70 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_020d2b80 reads.
 *
 */
struct Object020d2b80 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_020d2b80; meaning unknown. */
};
static_assert(offsetof(Object020d2b80, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_020d2b80(const Object020d2b80 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_020d2bd0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_020d2e50 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_020d2e50()
{
    return value_020d2e50;
}

/**
 *
 * The part of the object that auto_return_field_020d2e90 reads.
 *
 */
struct Object020d2e90 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_020d2e90; meaning unknown. */
};
static_assert(offsetof(Object020d2e90, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_020d2e90(const Object020d2e90 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_020d2ea0 reads.
 *
 */
struct Object020d2ea0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_020d2ea0; meaning unknown. */
};
static_assert(offsetof(Object020d2ea0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_020d2ea0(const Object020d2ea0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_020d2ef0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_020d3170 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_020d3170()
{
    return value_020d3170;
}

/**
 *
 * The part of the object that auto_return_field_020d31b0 reads.
 *
 */
struct Object020d31b0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_020d31b0; meaning unknown. */
};
static_assert(offsetof(Object020d31b0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_020d31b0(const Object020d31b0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_020d31c0 reads.
 *
 */
struct Object020d31c0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_020d31c0; meaning unknown. */
};
static_assert(offsetof(Object020d31c0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_020d31c0(const Object020d31c0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_020d3210()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_020d3490 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_020d3490()
{
    return value_020d3490;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_020d3a50()
{
}

/**
 *
 * The part of the object that auto_return_field_020d3ac0 reads.
 *
 */
struct Object020d3ac0 {
    uint8_t unknown_0x0000[0x94];
    uint32_t value_0x0094; /**< Read by auto_return_field_020d3ac0; meaning unknown. */
};
static_assert(offsetof(Object020d3ac0, value_0x0094) == 0x94);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_020d3ac0(const Object020d3ac0 *self)
{
    return self->value_0x0094;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_020d3b90()
{
}

/**
 *
 * The part of the object that auto_return_field_020d3f60 reads.
 *
 */
struct Object020d3f60 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_020d3f60; meaning unknown. */
};
static_assert(offsetof(Object020d3f60, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_020d3f60(const Object020d3f60 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_020d3f70 reads.
 *
 */
struct Object020d3f70 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_020d3f70; meaning unknown. */
};
static_assert(offsetof(Object020d3f70, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_020d3f70(const Object020d3f70 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_020d3fc0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_020d4240 = 0x98;

extern "C" uint32_t bb_auto_return_constant_020d4240()
{
    return value_020d4240;
}

/**
 *
 * The part of the object that auto_return_field_020d4610 reads.
 *
 */
struct Object020d4610 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_020d4610; meaning unknown. */
};
static_assert(offsetof(Object020d4610, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_020d4610(const Object020d4610 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_020d4620 reads.
 *
 */
struct Object020d4620 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_020d4620; meaning unknown. */
};
static_assert(offsetof(Object020d4620, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_020d4620(const Object020d4620 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_020d4670()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_020d48f0 = 0x8;

extern "C" uint32_t bb_auto_return_constant_020d48f0()
{
    return value_020d48f0;
}

/**
 *
 * The part of the object that auto_return_field_020d6980 reads.
 *
 */
struct Object020d6980 {
    uint8_t unknown_0x0000[0x58];
    uint8_t value_0x0058; /**< Read by auto_return_field_020d6980; meaning unknown. */
};
static_assert(offsetof(Object020d6980, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_020d6980(const Object020d6980 *self)
{
    return self->value_0x0058;
}

/**
 *
 * The part of the object that auto_return_field_020d7540 reads.
 *
 */
struct Object020d7540 {
    uint8_t unknown_0x0000[0x50];
    uint32_t value_0x0050; /**< Read by auto_return_field_020d7540; meaning unknown. */
};
static_assert(offsetof(Object020d7540, value_0x0050) == 0x50);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_020d7540(const Object020d7540 *self)
{
    return self->value_0x0050;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_020d7610()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_020d7620()
{
}

/**
 *
 * The part of the object that auto_return_field_020d7910 reads.
 *
 */
struct Object020d7910 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_020d7910; meaning unknown. */
};
static_assert(offsetof(Object020d7910, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_020d7910(const Object020d7910 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_020d7920 reads.
 *
 */
struct Object020d7920 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_020d7920; meaning unknown. */
};
static_assert(offsetof(Object020d7920, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_020d7920(const Object020d7920 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_020d7970()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_020d7bf0 = 0xe0;

extern "C" uint32_t bb_auto_return_constant_020d7bf0()
{
    return value_020d7bf0;
}

/**
 *
 * The part of the object that auto_return_field_020d7c30 reads.
 *
 */
struct Object020d7c30 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_020d7c30; meaning unknown. */
};
static_assert(offsetof(Object020d7c30, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_020d7c30(const Object020d7c30 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_020d7c40 reads.
 *
 */
struct Object020d7c40 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_020d7c40; meaning unknown. */
};
static_assert(offsetof(Object020d7c40, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_020d7c40(const Object020d7c40 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_020d7c90()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_020d7f10 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_020d7f10()
{
    return value_020d7f10;
}

/**
 *
 * The part of the object that auto_return_field_020d7f50 reads.
 *
 */
struct Object020d7f50 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_020d7f50; meaning unknown. */
};
static_assert(offsetof(Object020d7f50, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_020d7f50(const Object020d7f50 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_020d7f60 reads.
 *
 */
struct Object020d7f60 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_020d7f60; meaning unknown. */
};
static_assert(offsetof(Object020d7f60, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_020d7f60(const Object020d7f60 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_020d7fb0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_020d8230 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_020d8230()
{
    return value_020d8230;
}

/**
 *
 * The part of the object that auto_return_field_020d8270 reads.
 *
 */
struct Object020d8270 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_020d8270; meaning unknown. */
};
static_assert(offsetof(Object020d8270, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_020d8270(const Object020d8270 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_020d8280 reads.
 *
 */
struct Object020d8280 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_020d8280; meaning unknown. */
};
static_assert(offsetof(Object020d8280, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_020d8280(const Object020d8280 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_020d82d0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_020d8550 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_020d8550()
{
    return value_020d8550;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_020d89c0()
{
}

/**
 *
 * The part of the object that auto_return_field_020d8e70 reads.
 *
 */
struct Object020d8e70 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_020d8e70; meaning unknown. */
};
static_assert(offsetof(Object020d8e70, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_020d8e70(const Object020d8e70 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_020d8e80 reads.
 *
 */
struct Object020d8e80 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_020d8e80; meaning unknown. */
};
static_assert(offsetof(Object020d8e80, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_020d8e80(const Object020d8e80 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_020d8ed0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_020d9150 = 0x48;

extern "C" uint32_t bb_auto_return_constant_020d9150()
{
    return value_020d9150;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_020da4b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_020dac80()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_020dad50()
{
}

/**
 *
 * The part of the object that auto_return_field_020dec90 reads.
 *
 */
struct Object020dec90 {
    uint8_t unknown_0x0000[0x170];
    uint64_t value_0x0170; /**< Read by auto_return_field_020dec90; meaning unknown. */
};
static_assert(offsetof(Object020dec90, value_0x0170) == 0x170);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_020dec90(const Object020dec90 *self)
{
    return self->value_0x0170;
}

/**
 *
 * The part of the object that auto_return_field_020deca0 reads.
 *
 */
struct Object020deca0 {
    uint8_t unknown_0x0000[0x170];
    uint64_t value_0x0170; /**< Read by auto_return_field_020deca0; meaning unknown. */
};
static_assert(offsetof(Object020deca0, value_0x0170) == 0x170);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_020deca0(const Object020deca0 *self)
{
    return self->value_0x0170;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_020ded60()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_020ded70()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_020ded80()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_020ded90()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_020dfe30 reads.
 *
 */
struct Object020dfe30 {
    uint8_t unknown_0x0000[0x190];
    uint64_t value_0x0190; /**< Read by auto_return_field_020dfe30; meaning unknown. */
};
static_assert(offsetof(Object020dfe30, value_0x0190) == 0x190);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_020dfe30(const Object020dfe30 *self)
{
    return self->value_0x0190;
}

/**
 *
 * The part of the object that auto_return_member_address_020dfe60 reads.
 *
 */
struct Object020dfe60 {
    uint8_t unknown_0x0000[0x258];
    uint8_t member_0x0258; /**< Read by auto_return_member_address_020dfe60; meaning unknown. */
};
static_assert(offsetof(Object020dfe60, member_0x0258) == 0x258);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_020dfe60(Object020dfe60 *self)
{
    return &self->member_0x0258;
}

/**
 *
 * The part of the object that auto_return_member_address_020dfe70 reads.
 *
 */
struct Object020dfe70 {
    uint8_t unknown_0x0000[0x258];
    uint8_t member_0x0258; /**< Read by auto_return_member_address_020dfe70; meaning unknown. */
};
static_assert(offsetof(Object020dfe70, member_0x0258) == 0x258);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_020dfe70(Object020dfe70 *self)
{
    return &self->member_0x0258;
}
