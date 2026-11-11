// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02bc0a10()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02bc0b40()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02bc4fe0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02bc51f0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02bc6cc0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_02bc7d70 reads.
 *
 */
struct Object02bc7d70 {
    uint8_t unknown_0x0000[0x1a];
    int16_t value_0x001a; /**< Read by auto_return_field_02bc7d70; meaning unknown. */
};
static_assert(offsetof(Object02bc7d70, value_0x001a) == 0x1a);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" int32_t bb_auto_return_field_02bc7d70(const Object02bc7d70 *self)
{
    return self->value_0x001a;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02bc7f30()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02bc8040()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02bc8150()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02bc8260()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02bc8370()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02bc8470()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02bc8570()
{
}

/**
 *
 * The part of the object that auto_return_field_02bc85f0 reads.
 *
 */
struct Object02bc85f0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02bc85f0; meaning unknown. */
};
static_assert(offsetof(Object02bc85f0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02bc85f0(const Object02bc85f0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02bc8720()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02bc8780()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02bc8930 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02bc8930()
{
    return value_02bc8930;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02bc8940()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02bc89b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02bc8a00()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02bc8a20()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02bca700 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02bca700()
{
    return value_02bca700;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02bcae90()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02bcaf60()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02bcaf80()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02bcb090()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02bcb0b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02bcb0d0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_02bcc6b0 reads.
 *
 */
struct Object02bcc6b0 {
    uint8_t unknown_0x0000[0x120];
    uint8_t member_0x0120; /**< Read by auto_return_member_address_02bcc6b0; meaning unknown. */
};
static_assert(offsetof(Object02bcc6b0, member_0x0120) == 0x120);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02bcc6b0(Object02bcc6b0 *self)
{
    return &self->member_0x0120;
}

/**
 *
 * The part of the object that auto_return_member_address_02bcc6c0 reads.
 *
 */
struct Object02bcc6c0 {
    uint8_t unknown_0x0000[0x120];
    uint8_t member_0x0120; /**< Read by auto_return_member_address_02bcc6c0; meaning unknown. */
};
static_assert(offsetof(Object02bcc6c0, member_0x0120) == 0x120);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02bcc6c0(Object02bcc6c0 *self)
{
    return &self->member_0x0120;
}

/**
 *
 * The part of the object that auto_return_member_address_02bcc6d0 reads.
 *
 */
struct Object02bcc6d0 {
    uint8_t unknown_0x0000[0x12c];
    uint8_t member_0x012c; /**< Read by auto_return_member_address_02bcc6d0; meaning unknown. */
};
static_assert(offsetof(Object02bcc6d0, member_0x012c) == 0x12c);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02bcc6d0(Object02bcc6d0 *self)
{
    return &self->member_0x012c;
}

/**
 *
 * The part of the object that auto_return_member_address_02bcc6e0 reads.
 *
 */
struct Object02bcc6e0 {
    uint8_t unknown_0x0000[0x138];
    uint8_t member_0x0138; /**< Read by auto_return_member_address_02bcc6e0; meaning unknown. */
};
static_assert(offsetof(Object02bcc6e0, member_0x0138) == 0x138);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02bcc6e0(Object02bcc6e0 *self)
{
    return &self->member_0x0138;
}

/**
 *
 * The part of the object that auto_return_member_address_02bcc6f0 reads.
 *
 */
struct Object02bcc6f0 {
    uint8_t unknown_0x0000[0x144];
    uint8_t member_0x0144; /**< Read by auto_return_member_address_02bcc6f0; meaning unknown. */
};
static_assert(offsetof(Object02bcc6f0, member_0x0144) == 0x144);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02bcc6f0(Object02bcc6f0 *self)
{
    return &self->member_0x0144;
}

/**
 *
 * The part of the object that auto_return_float_field_02bcc700 reads.
 *
 */
struct Object02bcc700 {
    uint8_t unknown_0x0000[0x150];
    float value_0x0150; /**< Read by auto_return_float_field_02bcc700; meaning unknown. */
};
static_assert(offsetof(Object02bcc700, value_0x0150) == 0x150);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_02bcc700(const Object02bcc700 *self)
{
    return self->value_0x0150;
}

/**
 *
 * The part of the object that auto_return_field_02bccb00 reads.
 *
 */
struct Object02bccb00 {
    uint8_t unknown_0x0000[0x155];
    uint8_t value_0x0155; /**< Read by auto_return_field_02bccb00; meaning unknown. */
};
static_assert(offsetof(Object02bccb00, value_0x0155) == 0x155);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02bccb00(const Object02bccb00 *self)
{
    return self->value_0x0155;
}

/**
 *
 * The part of the object that auto_return_member_address_02bcd5d0 reads.
 *
 */
struct Object02bcd5d0 {
    uint8_t unknown_0x0000[0xe0];
    uint8_t member_0x00e0; /**< Read by auto_return_member_address_02bcd5d0; meaning unknown. */
};
static_assert(offsetof(Object02bcd5d0, member_0x00e0) == 0xe0);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02bcd5d0(Object02bcd5d0 *self)
{
    return &self->member_0x00e0;
}

/**
 *
 * The part of the object that auto_return_member_address_02bcd5e0 reads.
 *
 */
struct Object02bcd5e0 {
    uint8_t unknown_0x0000[0xe0];
    uint8_t member_0x00e0; /**< Read by auto_return_member_address_02bcd5e0; meaning unknown. */
};
static_assert(offsetof(Object02bcd5e0, member_0x00e0) == 0xe0);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02bcd5e0(Object02bcd5e0 *self)
{
    return &self->member_0x00e0;
}

/**
 *
 * The part of the object that auto_return_member_address_02bcd5f0 reads.
 *
 */
struct Object02bcd5f0 {
    uint8_t unknown_0x0000[0xec];
    uint8_t member_0x00ec; /**< Read by auto_return_member_address_02bcd5f0; meaning unknown. */
};
static_assert(offsetof(Object02bcd5f0, member_0x00ec) == 0xec);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02bcd5f0(Object02bcd5f0 *self)
{
    return &self->member_0x00ec;
}

/**
 *
 * The part of the object that auto_return_member_address_02bcd600 reads.
 *
 */
struct Object02bcd600 {
    uint8_t unknown_0x0000[0xf8];
    uint8_t member_0x00f8; /**< Read by auto_return_member_address_02bcd600; meaning unknown. */
};
static_assert(offsetof(Object02bcd600, member_0x00f8) == 0xf8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02bcd600(Object02bcd600 *self)
{
    return &self->member_0x00f8;
}

/**
 *
 * The part of the object that auto_return_member_address_02bcd610 reads.
 *
 */
struct Object02bcd610 {
    uint8_t unknown_0x0000[0x104];
    uint8_t member_0x0104; /**< Read by auto_return_member_address_02bcd610; meaning unknown. */
};
static_assert(offsetof(Object02bcd610, member_0x0104) == 0x104);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02bcd610(Object02bcd610 *self)
{
    return &self->member_0x0104;
}

/**
 *
 * The part of the object that auto_return_float_field_02bcd620 reads.
 *
 */
struct Object02bcd620 {
    uint8_t unknown_0x0000[0x110];
    float value_0x0110; /**< Read by auto_return_float_field_02bcd620; meaning unknown. */
};
static_assert(offsetof(Object02bcd620, value_0x0110) == 0x110);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_02bcd620(const Object02bcd620 *self)
{
    return self->value_0x0110;
}

/**
 *
 * The part of the object that auto_return_field_02bcdb20 reads.
 *
 */
struct Object02bcdb20 {
    uint8_t unknown_0x0000[0x115];
    uint8_t value_0x0115; /**< Read by auto_return_field_02bcdb20; meaning unknown. */
};
static_assert(offsetof(Object02bcdb20, value_0x0115) == 0x115);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02bcdb20(const Object02bcdb20 *self)
{
    return self->value_0x0115;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02bce3c0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02bce3c0()
{
    return value_02bce3c0;
}
