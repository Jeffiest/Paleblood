// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_02c20000 reads.
 *
 */
struct Object02c20000 {
    uint8_t unknown_0x0000[0x10];
    uint32_t value_0x0010; /**< Read by auto_return_field_02c20000; meaning unknown. */
};
static_assert(offsetof(Object02c20000, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02c20000(const Object02c20000 *self)
{
    return self->value_0x0010;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c20010 = 0x3;

extern "C" uint32_t bb_auto_return_constant_02c20010()
{
    return value_02c20010;
}

/**
 *
 * The part of the object that auto_return_field_02c201c0 reads.
 *
 */
struct Object02c201c0 {
    uint8_t unknown_0x0000[0xc];
    uint32_t value_0x000c; /**< Read by auto_return_field_02c201c0; meaning unknown. */
};
static_assert(offsetof(Object02c201c0, value_0x000c) == 0xc);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02c201c0(const Object02c201c0 *self)
{
    return self->value_0x000c;
}

/**
 *
 * The part of the object that auto_return_field_02c201d0 reads.
 *
 */
struct Object02c201d0 {
    uint8_t unknown_0x0000[0x10];
    uint32_t value_0x0010; /**< Read by auto_return_field_02c201d0; meaning unknown. */
};
static_assert(offsetof(Object02c201d0, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02c201d0(const Object02c201d0 *self)
{
    return self->value_0x0010;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c201e0 = 0x2;

extern "C" uint32_t bb_auto_return_constant_02c201e0()
{
    return value_02c201e0;
}

/**
 *
 * The part of the object that auto_return_field_02c20250 reads.
 *
 */
struct Object02c20250 {
    uint8_t unknown_0x0000[0xc];
    uint32_t value_0x000c; /**< Read by auto_return_field_02c20250; meaning unknown. */
};
static_assert(offsetof(Object02c20250, value_0x000c) == 0xc);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02c20250(const Object02c20250 *self)
{
    return self->value_0x000c;
}

/**
 *
 * The part of the object that auto_return_field_02c20260 reads.
 *
 */
struct Object02c20260 {
    uint8_t unknown_0x0000[0x10];
    uint32_t value_0x0010; /**< Read by auto_return_field_02c20260; meaning unknown. */
};
static_assert(offsetof(Object02c20260, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02c20260(const Object02c20260 *self)
{
    return self->value_0x0010;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c20270 = 0x1;

extern "C" uint32_t bb_auto_return_constant_02c20270()
{
    return value_02c20270;
}

/**
 *
 * The part of the object that auto_return_field_02c202d0 reads.
 *
 */
struct Object02c202d0 {
    uint8_t unknown_0x0000[0xc];
    uint32_t value_0x000c; /**< Read by auto_return_field_02c202d0; meaning unknown. */
};
static_assert(offsetof(Object02c202d0, value_0x000c) == 0xc);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02c202d0(const Object02c202d0 *self)
{
    return self->value_0x000c;
}

/**
 *
 * The part of the object that auto_return_field_02c202e0 reads.
 *
 */
struct Object02c202e0 {
    uint8_t unknown_0x0000[0x10];
    uint32_t value_0x0010; /**< Read by auto_return_field_02c202e0; meaning unknown. */
};
static_assert(offsetof(Object02c202e0, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02c202e0(const Object02c202e0 *self)
{
    return self->value_0x0010;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c202f0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c20340 = 0xffffffff;

extern "C" uint32_t bb_auto_return_constant_02c20340()
{
    return value_02c20340;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c20350()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c20360 = 0xffffffff;

extern "C" uint32_t bb_auto_return_constant_02c20360()
{
    return value_02c20360;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c20370()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c20380()
{
}

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
 * The part of the object that auto_return_field_02c20470 reads.
 *
 */
struct Object02c20470 {
    uint8_t unknown_0x0000[0x14];
    uint32_t value_0x0014; /**< Read by auto_return_field_02c20470; meaning unknown. */
};
static_assert(offsetof(Object02c20470, value_0x0014) == 0x14);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02c20470(const Object02c20470 *self)
{
    return self->value_0x0014;
}

/**
 *
 * The part of the object that auto_return_field_02c20480 reads.
 *
 */
struct Object02c20480 {
    uint8_t unknown_0x0000[0x18];
    uint32_t value_0x0018; /**< Read by auto_return_field_02c20480; meaning unknown. */
};
static_assert(offsetof(Object02c20480, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02c20480(const Object02c20480 *self)
{
    return self->value_0x0018;
}

/**
 *
 * The part of the object that auto_return_field_02c20490 reads.
 *
 */
struct Object02c20490 {
    uint8_t unknown_0x0000[0x24];
    uint32_t value_0x0024; /**< Read by auto_return_field_02c20490; meaning unknown. */
};
static_assert(offsetof(Object02c20490, value_0x0024) == 0x24);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02c20490(const Object02c20490 *self)
{
    return self->value_0x0024;
}

/**
 *
 * The part of the object that auto_return_field_02c204a0 reads.
 *
 */
struct Object02c204a0 {
    uint8_t unknown_0x0000[0x1c];
    uint32_t value_0x001c; /**< Read by auto_return_field_02c204a0; meaning unknown. */
};
static_assert(offsetof(Object02c204a0, value_0x001c) == 0x1c);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02c204a0(const Object02c204a0 *self)
{
    return self->value_0x001c;
}

/**
 *
 * The part of the object that auto_return_field_02c204b0 reads.
 *
 */
struct Object02c204b0 {
    uint8_t unknown_0x0000[0x20];
    uint32_t value_0x0020; /**< Read by auto_return_field_02c204b0; meaning unknown. */
};
static_assert(offsetof(Object02c204b0, value_0x0020) == 0x20);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02c204b0(const Object02c204b0 *self)
{
    return self->value_0x0020;
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
 * The part of the object that auto_return_field_02c20580 reads.
 *
 */
struct Object02c20580 {
    uint8_t unknown_0x0000[0x18];
    uint16_t value_0x0018; /**< Read by auto_return_field_02c20580; meaning unknown. */
};
static_assert(offsetof(Object02c20580, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02c20580(const Object02c20580 *self)
{
    return self->value_0x0018;
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
 * The part of the object that auto_return_field_02c205b0 reads.
 *
 */
struct Object02c205b0 {
    uint8_t unknown_0x0000[0x24];
    uint32_t value_0x0024; /**< Read by auto_return_field_02c205b0; meaning unknown. */
};
static_assert(offsetof(Object02c205b0, value_0x0024) == 0x24);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02c205b0(const Object02c205b0 *self)
{
    return self->value_0x0024;
}

/**
 *
 * The part of the object that auto_return_field_02c205c0 reads.
 *
 */
struct Object02c205c0 {
    uint8_t unknown_0x0000[0x10];
    uint32_t value_0x0010; /**< Read by auto_return_field_02c205c0; meaning unknown. */
};
static_assert(offsetof(Object02c205c0, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02c205c0(const Object02c205c0 *self)
{
    return self->value_0x0010;
}

/**
 *
 * The part of the object that auto_return_field_02c205d0 reads.
 *
 */
struct Object02c205d0 {
    uint8_t unknown_0x0000[0x14];
    uint32_t value_0x0014; /**< Read by auto_return_field_02c205d0; meaning unknown. */
};
static_assert(offsetof(Object02c205d0, value_0x0014) == 0x14);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02c205d0(const Object02c205d0 *self)
{
    return self->value_0x0014;
}

/**
 *
 * The part of the object that auto_return_field_02c205e0 reads.
 *
 */
struct Object02c205e0 {
    uint8_t unknown_0x0000[0x28];
    uint64_t value_0x0028; /**< Read by auto_return_field_02c205e0; meaning unknown. */
};
static_assert(offsetof(Object02c205e0, value_0x0028) == 0x28);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c205e0(const Object02c205e0 *self)
{
    return self->value_0x0028;
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
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c206c0 = 0x73657563;

extern "C" uint32_t bb_auto_return_constant_02c206c0()
{
    return value_02c206c0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c206d0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c206f0 = 0x73657563;

extern "C" uint32_t bb_auto_return_constant_02c206f0()
{
    return value_02c206f0;
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
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c20780 = 0x736d7270;

extern "C" uint32_t bb_auto_return_constant_02c20780()
{
    return value_02c20780;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c20790()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c207b0 = 0x736d7270;

extern "C" uint32_t bb_auto_return_constant_02c207b0()
{
    return value_02c207b0;
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
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c20830 = 0x736e6373;

extern "C" uint32_t bb_auto_return_constant_02c20830()
{
    return value_02c20830;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c20840()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c20860 = 0x736e6373;

extern "C" uint32_t bb_auto_return_constant_02c20860()
{
    return value_02c20860;
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
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c208e0 = 0x736d6874;

extern "C" uint32_t bb_auto_return_constant_02c208e0()
{
    return value_02c208e0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c208f0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c20910 = 0x736d6874;

extern "C" uint32_t bb_auto_return_constant_02c20910()
{
    return value_02c20910;
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
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c20990 = 0x736e6c74;

extern "C" uint32_t bb_auto_return_constant_02c20990()
{
    return value_02c20990;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c209a0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c209c0 = 0x736e6c74;

extern "C" uint32_t bb_auto_return_constant_02c209c0()
{
    return value_02c209c0;
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
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c20a90 = 0x736d6773;

extern "C" uint32_t bb_auto_return_constant_02c20a90()
{
    return value_02c20a90;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c20aa0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c20ac0 = 0x736d6773;

extern "C" uint32_t bb_auto_return_constant_02c20ac0()
{
    return value_02c20ac0;
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
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c20b40 = 0x736b6e6c;

extern "C" uint32_t bb_auto_return_constant_02c20b40()
{
    return value_02c20b40;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c20b50()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c20b70 = 0x736b6e6c;

extern "C" uint32_t bb_auto_return_constant_02c20b70()
{
    return value_02c20b70;
}

/**
 *
 * The part of the object that auto_return_field_02c20c00 reads.
 *
 */
struct Object02c20c00 {
    uint8_t unknown_0x0000[0xc];
    uint32_t value_0x000c; /**< Read by auto_return_field_02c20c00; meaning unknown. */
};
static_assert(offsetof(Object02c20c00, value_0x000c) == 0xc);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02c20c00(const Object02c20c00 *self)
{
    return self->value_0x000c;
}

/**
 *
 * The part of the object that auto_return_member_address_02c20c10 reads.
 *
 */
struct Object02c20c10 {
    uint8_t unknown_0x0000[0x10];
    uint8_t member_0x0010; /**< Read by auto_return_member_address_02c20c10; meaning unknown. */
};
static_assert(offsetof(Object02c20c10, member_0x0010) == 0x10);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02c20c10(Object02c20c10 *self)
{
    return &self->member_0x0010;
}

/**
 *
 * The part of the object that auto_return_field_02c20c20 reads.
 *
 */
struct Object02c20c20 {
    uint8_t unknown_0x0000[0x28];
    uint32_t value_0x0028; /**< Read by auto_return_field_02c20c20; meaning unknown. */
};
static_assert(offsetof(Object02c20c20, value_0x0028) == 0x28);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02c20c20(const Object02c20c20 *self)
{
    return self->value_0x0028;
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
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c216e0()
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
 * The part of the object that auto_return_field_02c21750 reads.
 *
 */
struct Object02c21750 {
    uint8_t unknown_0x0000[0x18];
    uint64_t value_0x0018; /**< Read by auto_return_field_02c21750; meaning unknown. */
};
static_assert(offsetof(Object02c21750, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c21750(const Object02c21750 *self)
{
    return self->value_0x0018;
}

/**
 *
 * The part of the object that auto_return_field_02c21760 reads.
 *
 */
struct Object02c21760 {
    uint8_t unknown_0x0000[0x30];
    uint32_t value_0x0030; /**< Read by auto_return_field_02c21760; meaning unknown. */
};
static_assert(offsetof(Object02c21760, value_0x0030) == 0x30);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02c21760(const Object02c21760 *self)
{
    return self->value_0x0030;
}

/**
 *
 * The part of the object that auto_return_field_02c21770 reads.
 *
 */
struct Object02c21770 {
    uint8_t unknown_0x0000[0x34];
    uint32_t value_0x0034; /**< Read by auto_return_field_02c21770; meaning unknown. */
};
static_assert(offsetof(Object02c21770, value_0x0034) == 0x34);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02c21770(const Object02c21770 *self)
{
    return self->value_0x0034;
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
 * The part of the object that auto_return_field_02c217a0 reads.
 *
 */
struct Object02c217a0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02c217a0; meaning unknown. */
};
static_assert(offsetof(Object02c217a0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c217a0(const Object02c217a0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02c217b0 reads.
 *
 */
struct Object02c217b0 {
    uint8_t unknown_0x0000[0x20];
    uint64_t value_0x0020; /**< Read by auto_return_field_02c217b0; meaning unknown. */
};
static_assert(offsetof(Object02c217b0, value_0x0020) == 0x20);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c217b0(const Object02c217b0 *self)
{
    return self->value_0x0020;
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
constexpr uint32_t value_02c24a80 = 0x3;

extern "C" uint32_t bb_auto_return_constant_02c24a80()
{
    return value_02c24a80;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c24a90()
{
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
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c266c0()
{
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
constexpr uint32_t value_02c269a0 = 0x2;

extern "C" uint32_t bb_auto_return_constant_02c269a0()
{
    return value_02c269a0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c28580 = 0x3;

extern "C" uint32_t bb_auto_return_constant_02c28580()
{
    return value_02c28580;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c28590()
{
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
 * The part of the object that auto_return_field_02c29440 reads.
 *
 */
struct Object02c29440 {
    uint8_t unknown_0x0000[0x58];
    uint32_t value_0x0058; /**< Read by auto_return_field_02c29440; meaning unknown. */
};
static_assert(offsetof(Object02c29440, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02c29440(const Object02c29440 *self)
{
    return self->value_0x0058;
}

/**
 *
 * The part of the object that auto_return_field_02c29450 reads.
 *
 */
struct Object02c29450 {
    uint8_t unknown_0x0000[0x68];
    uint32_t value_0x0068; /**< Read by auto_return_field_02c29450; meaning unknown. */
};
static_assert(offsetof(Object02c29450, value_0x0068) == 0x68);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02c29450(const Object02c29450 *self)
{
    return self->value_0x0068;
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
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c29e50()
{
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
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c2a820()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c2c030()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c2c640()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c2c650()
{
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
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c2d490 = 0xffff;

extern "C" uint32_t bb_auto_return_constant_02c2d490()
{
    return value_02c2d490;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c2d4a0()
{
}

/**
 *
 * The part of the object that auto_return_field_02c2d830 reads.
 *
 */
struct Object02c2d830 {
    uint8_t unknown_0x0000[0x8];
    uint64_t value_0x0008; /**< Read by auto_return_field_02c2d830; meaning unknown. */
};
static_assert(offsetof(Object02c2d830, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c2d830(const Object02c2d830 *self)
{
    return self->value_0x0008;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c2d860 = 0xffff;

extern "C" uint32_t bb_auto_return_constant_02c2d860()
{
    return value_02c2d860;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c2d880()
{
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
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c2e460()
{
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
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c2e780 = 0x1;

extern "C" uint32_t bb_auto_return_constant_02c2e780()
{
    return value_02c2e780;
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
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c2e800 = 0x2;

extern "C" uint32_t bb_auto_return_constant_02c2e800()
{
    return value_02c2e800;
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
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c2e880 = 0x3;

extern "C" uint32_t bb_auto_return_constant_02c2e880()
{
    return value_02c2e880;
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
