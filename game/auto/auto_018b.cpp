// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_018b2310()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_018b3140()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_018ba080()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_018badb0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_018badb0()
{
    return value_018badb0;
}

/**
 *
 * The part of the object that auto_return_field_018bcef0 reads.
 *
 */
struct Object018bcef0 {
    uint8_t unknown_0x0000[0x58];
    uint8_t value_0x0058; /**< Read by auto_return_field_018bcef0; meaning unknown. */
};
static_assert(offsetof(Object018bcef0, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_018bcef0(const Object018bcef0 *self)
{
    return self->value_0x0058;
}

/**
 *
 * The part of the object that auto_return_field_018bd9e0 reads.
 *
 */
struct Object018bd9e0 {
    uint8_t unknown_0x0000[0x50];
    uint32_t value_0x0050; /**< Read by auto_return_field_018bd9e0; meaning unknown. */
};
static_assert(offsetof(Object018bd9e0, value_0x0050) == 0x50);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_018bd9e0(const Object018bd9e0 *self)
{
    return self->value_0x0050;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_018bdab0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_018bdac0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_018bdb80()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_018bdc50()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_018bde60()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_018bdea0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_018bdec0 reads.
 *
 */
struct Object018bdec0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_018bdec0; meaning unknown. */
};
static_assert(offsetof(Object018bdec0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_018bdec0(Object018bdec0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_018bdf90()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_018bdfd0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_018bdff0 reads.
 *
 */
struct Object018bdff0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_018bdff0; meaning unknown. */
};
static_assert(offsetof(Object018bdff0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_018bdff0(Object018bdff0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_018be0a0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_018be0e0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_018be100 reads.
 *
 */
struct Object018be100 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_018be100; meaning unknown. */
};
static_assert(offsetof(Object018be100, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_018be100(Object018be100 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_018be340 reads.
 *
 */
struct Object018be340 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_018be340; meaning unknown. */
};
static_assert(offsetof(Object018be340, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_018be340(const Object018be340 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_018be350 reads.
 *
 */
struct Object018be350 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_018be350; meaning unknown. */
};
static_assert(offsetof(Object018be350, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_018be350(const Object018be350 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_018be3a0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_018be620 = 0xf8;

extern "C" uint32_t bb_auto_return_constant_018be620()
{
    return value_018be620;
}

/**
 *
 * The part of the object that auto_return_field_018be660 reads.
 *
 */
struct Object018be660 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_018be660; meaning unknown. */
};
static_assert(offsetof(Object018be660, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_018be660(const Object018be660 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_018be670 reads.
 *
 */
struct Object018be670 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_018be670; meaning unknown. */
};
static_assert(offsetof(Object018be670, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_018be670(const Object018be670 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_018be6c0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_018be940 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_018be940()
{
    return value_018be940;
}

/**
 *
 * The part of the object that auto_return_field_018be980 reads.
 *
 */
struct Object018be980 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_018be980; meaning unknown. */
};
static_assert(offsetof(Object018be980, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_018be980(const Object018be980 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_018be990 reads.
 *
 */
struct Object018be990 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_018be990; meaning unknown. */
};
static_assert(offsetof(Object018be990, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_018be990(const Object018be990 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_018be9e0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_018bec60 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_018bec60()
{
    return value_018bec60;
}

/**
 *
 * The part of the object that auto_return_field_018beca0 reads.
 *
 */
struct Object018beca0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_018beca0; meaning unknown. */
};
static_assert(offsetof(Object018beca0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_018beca0(const Object018beca0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_018becb0 reads.
 *
 */
struct Object018becb0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_018becb0; meaning unknown. */
};
static_assert(offsetof(Object018becb0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_018becb0(const Object018becb0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_018bed00()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_018bef80 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_018bef80()
{
    return value_018bef80;
}
