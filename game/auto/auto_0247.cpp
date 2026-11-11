// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_02473260 reads.
 *
 */
struct Object02473260 {
    uint8_t unknown_0x0000[0x110];
    uint64_t value_0x0110; /**< Read by auto_return_field_02473260; meaning unknown. */
};
static_assert(offsetof(Object02473260, value_0x0110) == 0x110);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02473260(const Object02473260 *self)
{
    return self->value_0x0110;
}

/**
 *
 * The part of the object that auto_return_field_02473270 reads.
 *
 */
struct Object02473270 {
    uint8_t unknown_0x0000[0x118];
    uint32_t value_0x0118; /**< Read by auto_return_field_02473270; meaning unknown. */
};
static_assert(offsetof(Object02473270, value_0x0118) == 0x118);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02473270(const Object02473270 *self)
{
    return self->value_0x0118;
}

/**
 *
 * The part of the object that auto_return_field_02474e10 reads.
 *
 */
struct Object02474e10 {
    uint8_t unknown_0x0000[0x88];
    uint64_t value_0x0088; /**< Read by auto_return_field_02474e10; meaning unknown. */
};
static_assert(offsetof(Object02474e10, value_0x0088) == 0x88);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02474e10(const Object02474e10 *self)
{
    return self->value_0x0088;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02474e20 = 0x1;

extern "C" uint32_t bb_auto_return_constant_02474e20()
{
    return value_02474e20;
}

/**
 *
 * The part of the object that auto_return_field_02476c10 reads.
 *
 */
struct Object02476c10 {
    uint8_t unknown_0x0000[0x10];
    uint32_t value_0x0010; /**< Read by auto_return_field_02476c10; meaning unknown. */
};
static_assert(offsetof(Object02476c10, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02476c10(const Object02476c10 *self)
{
    return self->value_0x0010;
}

/**
 *
 * The part of the object that auto_return_field_02478530 reads.
 *
 */
struct Object02478530 {
    uint8_t unknown_0x0000[0x24];
    uint8_t value_0x0024; /**< Read by auto_return_field_02478530; meaning unknown. */
};
static_assert(offsetof(Object02478530, value_0x0024) == 0x24);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02478530(const Object02478530 *self)
{
    return self->value_0x0024;
}

/**
 *
 * The part of the object that auto_return_field_024785d0 reads.
 *
 */
struct Object024785d0 {
    uint8_t unknown_0x0000[0x28];
    uint32_t value_0x0028; /**< Read by auto_return_field_024785d0; meaning unknown. */
};
static_assert(offsetof(Object024785d0, value_0x0028) == 0x28);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_024785d0(const Object024785d0 *self)
{
    return self->value_0x0028;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02478670()
{
}

/**
 *
 * The part of the object that auto_return_field_02478a70 reads.
 *
 */
struct Object02478a70 {
    uint8_t unknown_0x0000[0x50];
    uint32_t value_0x0050; /**< Read by auto_return_field_02478a70; meaning unknown. */
};
static_assert(offsetof(Object02478a70, value_0x0050) == 0x50);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02478a70(const Object02478a70 *self)
{
    return self->value_0x0050;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02478cf0()
{
}

/**
 *
 * The part of the object that auto_return_field_0247c760 reads.
 *
 */
struct Object0247c760 {
    uint8_t unknown_0x0000[0x438];
    uint64_t value_0x0438; /**< Read by auto_return_field_0247c760; meaning unknown. */
};
static_assert(offsetof(Object0247c760, value_0x0438) == 0x438);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0247c760(const Object0247c760 *self)
{
    return self->value_0x0438;
}

/**
 *
 * The part of the object that auto_return_member_address_0247c910 reads.
 *
 */
struct Object0247c910 {
    uint8_t unknown_0x0000[0x458];
    uint8_t member_0x0458; /**< Read by auto_return_member_address_0247c910; meaning unknown. */
};
static_assert(offsetof(Object0247c910, member_0x0458) == 0x458);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0247c910(Object0247c910 *self)
{
    return &self->member_0x0458;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0247caa0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0247cb40()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0247d870()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0247e250 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0247e250()
{
    return value_0247e250;
}

/**
 *
 * The part of the object that auto_return_field_0247ee80 reads.
 *
 */
struct Object0247ee80 {
    uint8_t unknown_0x0000[0x10];
    uint8_t value_0x0010; /**< Read by auto_return_field_0247ee80; meaning unknown. */
};
static_assert(offsetof(Object0247ee80, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_0247ee80(const Object0247ee80 *self)
{
    return self->value_0x0010;
}

/**
 *
 * The part of the object that auto_return_field_0247f3b0 reads.
 *
 */
struct Object0247f3b0 {
    uint8_t unknown_0x0000[0x10];
    uint8_t value_0x0010; /**< Read by auto_return_field_0247f3b0; meaning unknown. */
};
static_assert(offsetof(Object0247f3b0, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_0247f3b0(const Object0247f3b0 *self)
{
    return self->value_0x0010;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0247f870 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0247f870()
{
    return value_0247f870;
}
