// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_01e61930 reads.
 *
 */
struct Object01e61930 {
    uint8_t unknown_0x0000[0x65];
    uint8_t value_0x0065; /**< Read by auto_return_field_01e61930; meaning unknown. */
};
static_assert(offsetof(Object01e61930, value_0x0065) == 0x65);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_01e61930(const Object01e61930 *self)
{
    return self->value_0x0065;
}

/**
 *
 * The part of the object that auto_return_field_01e61940 reads.
 *
 */
struct Object01e61940 {
    uint8_t unknown_0x0000[0x66];
    uint8_t value_0x0066; /**< Read by auto_return_field_01e61940; meaning unknown. */
};
static_assert(offsetof(Object01e61940, value_0x0066) == 0x66);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_01e61940(const Object01e61940 *self)
{
    return self->value_0x0066;
}

/**
 *
 * The part of the object that auto_return_field_01e61f60 reads.
 *
 */
struct Object01e61f60 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01e61f60; meaning unknown. */
};
static_assert(offsetof(Object01e61f60, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e61f60(const Object01e61f60 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01e61f70 reads.
 *
 */
struct Object01e61f70 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01e61f70; meaning unknown. */
};
static_assert(offsetof(Object01e61f70, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e61f70(const Object01e61f70 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01e61fc0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01e62240 = 0x70;

extern "C" uint32_t bb_auto_return_constant_01e62240()
{
    return value_01e62240;
}

/**
 *
 * The part of the object that auto_return_field_01e62d90 reads.
 *
 */
struct Object01e62d90 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01e62d90; meaning unknown. */
};
static_assert(offsetof(Object01e62d90, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e62d90(const Object01e62d90 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01e62da0 reads.
 *
 */
struct Object01e62da0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01e62da0; meaning unknown. */
};
static_assert(offsetof(Object01e62da0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e62da0(const Object01e62da0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01e62df0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01e63070 = 0x90;

extern "C" uint32_t bb_auto_return_constant_01e63070()
{
    return value_01e63070;
}

/**
 *
 * The part of the object that auto_return_field_01e63ba0 reads.
 *
 */
struct Object01e63ba0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01e63ba0; meaning unknown. */
};
static_assert(offsetof(Object01e63ba0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e63ba0(const Object01e63ba0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01e63bb0 reads.
 *
 */
struct Object01e63bb0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01e63bb0; meaning unknown. */
};
static_assert(offsetof(Object01e63bb0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e63bb0(const Object01e63bb0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01e63c00()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01e63e80 = 0x80;

extern "C" uint32_t bb_auto_return_constant_01e63e80()
{
    return value_01e63e80;
}

/**
 *
 * The part of the object that auto_return_field_01e64590 reads.
 *
 */
struct Object01e64590 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01e64590; meaning unknown. */
};
static_assert(offsetof(Object01e64590, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e64590(const Object01e64590 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01e645a0 reads.
 *
 */
struct Object01e645a0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01e645a0; meaning unknown. */
};
static_assert(offsetof(Object01e645a0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e645a0(const Object01e645a0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01e645f0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01e64870 = 0x18;

extern "C" uint32_t bb_auto_return_constant_01e64870()
{
    return value_01e64870;
}

/**
 *
 * The part of the object that auto_return_field_01e65fd0 reads.
 *
 */
struct Object01e65fd0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01e65fd0; meaning unknown. */
};
static_assert(offsetof(Object01e65fd0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e65fd0(const Object01e65fd0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01e65fe0 reads.
 *
 */
struct Object01e65fe0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01e65fe0; meaning unknown. */
};
static_assert(offsetof(Object01e65fe0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e65fe0(const Object01e65fe0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01e66030()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01e662b0 = 0x28;

extern "C" uint32_t bb_auto_return_constant_01e662b0()
{
    return value_01e662b0;
}

/**
 *
 * The part of the object that auto_return_field_01e66880 reads.
 *
 */
struct Object01e66880 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01e66880; meaning unknown. */
};
static_assert(offsetof(Object01e66880, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e66880(const Object01e66880 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01e66890 reads.
 *
 */
struct Object01e66890 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01e66890; meaning unknown. */
};
static_assert(offsetof(Object01e66890, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e66890(const Object01e66890 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01e668e0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01e66b60 = 0x20;

extern "C" uint32_t bb_auto_return_constant_01e66b60()
{
    return value_01e66b60;
}

/**
 *
 * The part of the object that auto_return_field_01e66f90 reads.
 *
 */
struct Object01e66f90 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01e66f90; meaning unknown. */
};
static_assert(offsetof(Object01e66f90, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e66f90(const Object01e66f90 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01e66fa0 reads.
 *
 */
struct Object01e66fa0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01e66fa0; meaning unknown. */
};
static_assert(offsetof(Object01e66fa0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e66fa0(const Object01e66fa0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01e66ff0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01e67270 = 0x20;

extern "C" uint32_t bb_auto_return_constant_01e67270()
{
    return value_01e67270;
}

/**
 *
 * The part of the object that auto_return_field_01e6a210 reads.
 *
 */
struct Object01e6a210 {
    uint8_t unknown_0x0000[0x58];
    uint8_t value_0x0058; /**< Read by auto_return_field_01e6a210; meaning unknown. */
};
static_assert(offsetof(Object01e6a210, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_01e6a210(const Object01e6a210 *self)
{
    return self->value_0x0058;
}

/**
 *
 * The part of the object that auto_return_field_01e6adf0 reads.
 *
 */
struct Object01e6adf0 {
    uint8_t unknown_0x0000[0x50];
    uint32_t value_0x0050; /**< Read by auto_return_field_01e6adf0; meaning unknown. */
};
static_assert(offsetof(Object01e6adf0, value_0x0050) == 0x50);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01e6adf0(const Object01e6adf0 *self)
{
    return self->value_0x0050;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e6aec0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e6aed0()
{
}

/**
 *
 * The part of the object that auto_return_field_01e6b1d0 reads.
 *
 */
struct Object01e6b1d0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01e6b1d0; meaning unknown. */
};
static_assert(offsetof(Object01e6b1d0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e6b1d0(const Object01e6b1d0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01e6b1e0 reads.
 *
 */
struct Object01e6b1e0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01e6b1e0; meaning unknown. */
};
static_assert(offsetof(Object01e6b1e0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e6b1e0(const Object01e6b1e0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01e6b230()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01e6b4b0 = 0x130;

extern "C" uint32_t bb_auto_return_constant_01e6b4b0()
{
    return value_01e6b4b0;
}

/**
 *
 * The part of the object that auto_return_field_01e6b4f0 reads.
 *
 */
struct Object01e6b4f0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01e6b4f0; meaning unknown. */
};
static_assert(offsetof(Object01e6b4f0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e6b4f0(const Object01e6b4f0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01e6b500 reads.
 *
 */
struct Object01e6b500 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01e6b500; meaning unknown. */
};
static_assert(offsetof(Object01e6b500, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e6b500(const Object01e6b500 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01e6b550()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01e6b7d0 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_01e6b7d0()
{
    return value_01e6b7d0;
}

/**
 *
 * The part of the object that auto_return_field_01e6b810 reads.
 *
 */
struct Object01e6b810 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01e6b810; meaning unknown. */
};
static_assert(offsetof(Object01e6b810, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e6b810(const Object01e6b810 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01e6b820 reads.
 *
 */
struct Object01e6b820 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01e6b820; meaning unknown. */
};
static_assert(offsetof(Object01e6b820, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e6b820(const Object01e6b820 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01e6b870()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01e6baf0 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_01e6baf0()
{
    return value_01e6baf0;
}

/**
 *
 * The part of the object that auto_return_field_01e6bb30 reads.
 *
 */
struct Object01e6bb30 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01e6bb30; meaning unknown. */
};
static_assert(offsetof(Object01e6bb30, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e6bb30(const Object01e6bb30 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01e6bb40 reads.
 *
 */
struct Object01e6bb40 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01e6bb40; meaning unknown. */
};
static_assert(offsetof(Object01e6bb40, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e6bb40(const Object01e6bb40 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01e6bb90()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01e6be10 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_01e6be10()
{
    return value_01e6be10;
}

/**
 *
 * The part of the object that auto_return_field_01e6c580 reads.
 *
 */
struct Object01e6c580 {
    uint32_t value_0x0000; /**< Read by auto_return_field_01e6c580; meaning unknown. */
};
static_assert(offsetof(Object01e6c580, value_0x0000) == 0x0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01e6c580(const Object01e6c580 *self)
{
    return self->value_0x0000;
}

/**
 *
 * The part of the object that auto_return_field_01e6c6f0 reads.
 *
 */
struct Object01e6c6f0 {
    uint8_t unknown_0x0000[0x18];
    uint32_t value_0x0018; /**< Read by auto_return_field_01e6c6f0; meaning unknown. */
};
static_assert(offsetof(Object01e6c6f0, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01e6c6f0(const Object01e6c6f0 *self)
{
    return self->value_0x0018;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e6ca90()
{
}

/**
 *
 * The part of the object that auto_return_field_01e6cdf0 reads.
 *
 */
struct Object01e6cdf0 {
    uint8_t unknown_0x0000[0x95];
    uint8_t value_0x0095; /**< Read by auto_return_field_01e6cdf0; meaning unknown. */
};
static_assert(offsetof(Object01e6cdf0, value_0x0095) == 0x95);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_01e6cdf0(const Object01e6cdf0 *self)
{
    return self->value_0x0095;
}

/**
 *
 * The part of the object that auto_return_field_01e6f650 reads.
 *
 */
struct Object01e6f650 {
    uint8_t unknown_0x0000[0x58];
    uint8_t value_0x0058; /**< Read by auto_return_field_01e6f650; meaning unknown. */
};
static_assert(offsetof(Object01e6f650, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_01e6f650(const Object01e6f650 *self)
{
    return self->value_0x0058;
}

/**
 *
 * The part of the object that auto_return_member_address_01e6f7e0 reads.
 *
 */
struct Object01e6f7e0 {
    uint8_t unknown_0x0000[0x60];
    uint8_t member_0x0060; /**< Read by auto_return_member_address_01e6f7e0; meaning unknown. */
};
static_assert(offsetof(Object01e6f7e0, member_0x0060) == 0x60);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01e6f7e0(Object01e6f7e0 *self)
{
    return &self->member_0x0060;
}

/**
 *
 * The part of the object that auto_return_member_address_01e6f7f0 reads.
 *
 */
struct Object01e6f7f0 {
    uint8_t unknown_0x0000[0xb0];
    uint8_t member_0x00b0; /**< Read by auto_return_member_address_01e6f7f0; meaning unknown. */
};
static_assert(offsetof(Object01e6f7f0, member_0x00b0) == 0xb0);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01e6f7f0(Object01e6f7f0 *self)
{
    return &self->member_0x00b0;
}

/**
 *
 * The part of the object that auto_return_member_address_01e6f800 reads.
 *
 */
struct Object01e6f800 {
    uint8_t unknown_0x0000[0x88];
    uint8_t member_0x0088; /**< Read by auto_return_member_address_01e6f800; meaning unknown. */
};
static_assert(offsetof(Object01e6f800, member_0x0088) == 0x88);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01e6f800(Object01e6f800 *self)
{
    return &self->member_0x0088;
}

/**
 *
 * The part of the object that auto_return_field_01e6f810 reads.
 *
 */
struct Object01e6f810 {
    uint8_t unknown_0x0000[0x1f0];
    uint8_t value_0x01f0; /**< Read by auto_return_field_01e6f810; meaning unknown. */
};
static_assert(offsetof(Object01e6f810, value_0x01f0) == 0x1f0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_01e6f810(const Object01e6f810 *self)
{
    return self->value_0x01f0;
}
