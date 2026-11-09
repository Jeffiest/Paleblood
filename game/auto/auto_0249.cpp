// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02493d40()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_02493d70 reads.
 *
 */
struct Object02493d70 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_02493d70; meaning unknown. */
};
static_assert(offsetof(Object02493d70, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02493d70(Object02493d70 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02494770()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02494790 = 0x1;

extern "C" uint32_t bb_auto_return_constant_02494790()
{
    return value_02494790;
}

/**
 *
 * The part of the object that auto_return_field_02494900 reads.
 *
 */
struct Object02494900 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02494900; meaning unknown. */
};
static_assert(offsetof(Object02494900, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02494900(const Object02494900 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02494910 reads.
 *
 */
struct Object02494910 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02494910; meaning unknown. */
};
static_assert(offsetof(Object02494910, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02494910(const Object02494910 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02494960()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02494be0 = 0x48;

extern "C" uint32_t bb_auto_return_constant_02494be0()
{
    return value_02494be0;
}

/**
 *
 * The part of the object that auto_return_field_024965f0 reads.
 *
 */
struct Object024965f0 {
    uint8_t unknown_0x0000[0x28];
    uint32_t value_0x0028; /**< Read by auto_return_field_024965f0; meaning unknown. */
};
static_assert(offsetof(Object024965f0, value_0x0028) == 0x28);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_024965f0(const Object024965f0 *self)
{
    return self->value_0x0028;
}

/**
 *
 * The part of the object that auto_return_field_02496600 reads.
 *
 */
struct Object02496600 {
    uint8_t unknown_0x0000[0x2c];
    uint32_t value_0x002c; /**< Read by auto_return_field_02496600; meaning unknown. */
};
static_assert(offsetof(Object02496600, value_0x002c) == 0x2c);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02496600(const Object02496600 *self)
{
    return self->value_0x002c;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02496e00 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02496e00()
{
    return value_02496e00;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02496e10 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02496e10()
{
    return value_02496e10;
}

/**
 *
 * The part of the object that auto_return_field_02496e20 reads.
 *
 */
struct Object02496e20 {
    uint8_t unknown_0x0000[0x8];
    uint64_t value_0x0008; /**< Read by auto_return_field_02496e20; meaning unknown. */
};
static_assert(offsetof(Object02496e20, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02496e20(const Object02496e20 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_member_address_02496e30 reads.
 *
 */
struct Object02496e30 {
    uint8_t unknown_0x0000[0x10];
    uint8_t member_0x0010; /**< Read by auto_return_member_address_02496e30; meaning unknown. */
};
static_assert(offsetof(Object02496e30, member_0x0010) == 0x10);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02496e30(Object02496e30 *self)
{
    return &self->member_0x0010;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02497f00()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02497f20()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02498410()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02498430()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02498a00()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02498a20 = 0x1;

extern "C" uint32_t bb_auto_return_constant_02498a20()
{
    return value_02498a20;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02499000()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02499020 = 0x1;

extern "C" uint32_t bb_auto_return_constant_02499020()
{
    return value_02499020;
}

/**
 *
 * The part of the object that auto_return_field_02499190 reads.
 *
 */
struct Object02499190 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02499190; meaning unknown. */
};
static_assert(offsetof(Object02499190, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02499190(const Object02499190 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_024991a0 reads.
 *
 */
struct Object024991a0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_024991a0; meaning unknown. */
};
static_assert(offsetof(Object024991a0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_024991a0(const Object024991a0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_024991f0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02499470 = 0x48;

extern "C" uint32_t bb_auto_return_constant_02499470()
{
    return value_02499470;
}

/**
 *
 * The part of the object that auto_return_field_024996d0 reads.
 *
 */
struct Object024996d0 {
    uint8_t unknown_0x0000[0x58];
    uint64_t value_0x0058; /**< Read by auto_return_field_024996d0; meaning unknown. */
};
static_assert(offsetof(Object024996d0, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_024996d0(const Object024996d0 *self)
{
    return self->value_0x0058;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0249af70()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0249af90 = 0x1;

extern "C" uint32_t bb_auto_return_constant_0249af90()
{
    return value_0249af90;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0249b4a0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0249b4c0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0249ba80()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0249baa0 = 0x1;

extern "C" uint32_t bb_auto_return_constant_0249baa0()
{
    return value_0249baa0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0249c160()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0249c180 = 0x2;

extern "C" uint32_t bb_auto_return_constant_0249c180()
{
    return value_0249c180;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0249c740()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0249c760 = 0x1;

extern "C" uint32_t bb_auto_return_constant_0249c760()
{
    return value_0249c760;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0249cbc0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0249cbe0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_0249cd30 reads.
 *
 */
struct Object0249cd30 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0249cd30; meaning unknown. */
};
static_assert(offsetof(Object0249cd30, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0249cd30(const Object0249cd30 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0249cd40 reads.
 *
 */
struct Object0249cd40 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0249cd40; meaning unknown. */
};
static_assert(offsetof(Object0249cd40, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0249cd40(const Object0249cd40 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0249cd90()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0249d010 = 0x68;

extern "C" uint32_t bb_auto_return_constant_0249d010()
{
    return value_0249d010;
}

/**
 *
 * The part of the object that auto_return_field_0249d210 reads.
 *
 */
struct Object0249d210 {
    uint8_t unknown_0x0000[0x468];
    uint32_t value_0x0468; /**< Read by auto_return_field_0249d210; meaning unknown. */
};
static_assert(offsetof(Object0249d210, value_0x0468) == 0x468);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_0249d210(const Object0249d210 *self)
{
    return self->value_0x0468;
}

/**
 *
 * The part of the object that auto_return_field_0249d4d0 reads.
 *
 */
struct Object0249d4d0 {
    uint8_t unknown_0x0000[0x408];
    uint8_t value_0x0408; /**< Read by auto_return_field_0249d4d0; meaning unknown. */
};
static_assert(offsetof(Object0249d4d0, value_0x0408) == 0x408);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_0249d4d0(const Object0249d4d0 *self)
{
    return self->value_0x0408;
}

/**
 *
 * The part of the object that auto_return_member_address_0249d5d0 reads.
 *
 */
struct Object0249d5d0 {
    uint8_t unknown_0x0000[0x50];
    uint8_t member_0x0050; /**< Read by auto_return_member_address_0249d5d0; meaning unknown. */
};
static_assert(offsetof(Object0249d5d0, member_0x0050) == 0x50);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0249d5d0(Object0249d5d0 *self)
{
    return &self->member_0x0050;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0249e7e0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0249e800()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0249edc0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0249ede0 = 0x1;

extern "C" uint32_t bb_auto_return_constant_0249ede0()
{
    return value_0249ede0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0249f250()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0249f270()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_0249f3c0 reads.
 *
 */
struct Object0249f3c0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0249f3c0; meaning unknown. */
};
static_assert(offsetof(Object0249f3c0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0249f3c0(const Object0249f3c0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0249f3d0 reads.
 *
 */
struct Object0249f3d0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0249f3d0; meaning unknown. */
};
static_assert(offsetof(Object0249f3d0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0249f3d0(const Object0249f3d0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0249f420()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0249f6a0 = 0x470;

extern "C" uint32_t bb_auto_return_constant_0249f6a0()
{
    return value_0249f6a0;
}
