// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_01d914e0 reads.
 *
 */
struct Object01d914e0 {
    uint8_t unknown_0x0000[0x58];
    uint32_t value_0x0058; /**< Read by auto_return_field_01d914e0; meaning unknown. */
};
static_assert(offsetof(Object01d914e0, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01d914e0(const Object01d914e0 *self)
{
    return self->value_0x0058;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d915b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d915c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d915d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d916a0()
{
}

/**
 *
 * The part of the object that auto_return_field_01d91a00 reads.
 *
 */
struct Object01d91a00 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d91a00; meaning unknown. */
};
static_assert(offsetof(Object01d91a00, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d91a00(const Object01d91a00 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d91a10 reads.
 *
 */
struct Object01d91a10 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d91a10; meaning unknown. */
};
static_assert(offsetof(Object01d91a10, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d91a10(const Object01d91a10 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d91a60()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d91ce0 = 0x240;

extern "C" uint32_t bb_auto_return_constant_01d91ce0()
{
    return value_01d91ce0;
}

/**
 *
 * The part of the object that auto_return_field_01d91d20 reads.
 *
 */
struct Object01d91d20 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d91d20; meaning unknown. */
};
static_assert(offsetof(Object01d91d20, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d91d20(const Object01d91d20 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d91d30 reads.
 *
 */
struct Object01d91d30 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d91d30; meaning unknown. */
};
static_assert(offsetof(Object01d91d30, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d91d30(const Object01d91d30 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d91d80()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d92000 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01d92000()
{
    return value_01d92000;
}

/**
 *
 * The part of the object that auto_return_field_01d92040 reads.
 *
 */
struct Object01d92040 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d92040; meaning unknown. */
};
static_assert(offsetof(Object01d92040, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d92040(const Object01d92040 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d92050 reads.
 *
 */
struct Object01d92050 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d92050; meaning unknown. */
};
static_assert(offsetof(Object01d92050, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d92050(const Object01d92050 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d920a0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d92320 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01d92320()
{
    return value_01d92320;
}

/**
 *
 * The part of the object that auto_return_field_01d92360 reads.
 *
 */
struct Object01d92360 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d92360; meaning unknown. */
};
static_assert(offsetof(Object01d92360, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d92360(const Object01d92360 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d92370 reads.
 *
 */
struct Object01d92370 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d92370; meaning unknown. */
};
static_assert(offsetof(Object01d92370, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d92370(const Object01d92370 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d923c0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d92640 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01d92640()
{
    return value_01d92640;
}

/**
 *
 * The part of the object that auto_return_member_address_01d93d30 reads.
 *
 */
struct Object01d93d30 {
    uint8_t unknown_0x0000[0xd0];
    uint8_t member_0x00d0; /**< Read by auto_return_member_address_01d93d30; meaning unknown. */
};
static_assert(offsetof(Object01d93d30, member_0x00d0) == 0xd0);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01d93d30(Object01d93d30 *self)
{
    return &self->member_0x00d0;
}

/**
 *
 * The part of the object that auto_return_member_address_01d93d40 reads.
 *
 */
struct Object01d93d40 {
    uint8_t unknown_0x0000[0xd0];
    uint8_t member_0x00d0; /**< Read by auto_return_member_address_01d93d40; meaning unknown. */
};
static_assert(offsetof(Object01d93d40, member_0x00d0) == 0xd0);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01d93d40(Object01d93d40 *self)
{
    return &self->member_0x00d0;
}

/**
 *
 * The part of the object that auto_return_field_01d964a0 reads.
 *
 */
struct Object01d964a0 {
    uint8_t unknown_0x0000[0x58];
    uint32_t value_0x0058; /**< Read by auto_return_field_01d964a0; meaning unknown. */
};
static_assert(offsetof(Object01d964a0, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01d964a0(const Object01d964a0 *self)
{
    return self->value_0x0058;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d96570()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d96580()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d96590()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d96660()
{
}

/**
 *
 * The part of the object that auto_return_field_01d969c0 reads.
 *
 */
struct Object01d969c0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d969c0; meaning unknown. */
};
static_assert(offsetof(Object01d969c0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d969c0(const Object01d969c0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d969d0 reads.
 *
 */
struct Object01d969d0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d969d0; meaning unknown. */
};
static_assert(offsetof(Object01d969d0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d969d0(const Object01d969d0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d96a20()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d96ca0 = 0x250;

extern "C" uint32_t bb_auto_return_constant_01d96ca0()
{
    return value_01d96ca0;
}

/**
 *
 * The part of the object that auto_return_field_01d96ce0 reads.
 *
 */
struct Object01d96ce0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d96ce0; meaning unknown. */
};
static_assert(offsetof(Object01d96ce0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d96ce0(const Object01d96ce0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d96cf0 reads.
 *
 */
struct Object01d96cf0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d96cf0; meaning unknown. */
};
static_assert(offsetof(Object01d96cf0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d96cf0(const Object01d96cf0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d96d40()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d96fc0 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01d96fc0()
{
    return value_01d96fc0;
}

/**
 *
 * The part of the object that auto_return_field_01d97000 reads.
 *
 */
struct Object01d97000 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d97000; meaning unknown. */
};
static_assert(offsetof(Object01d97000, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d97000(const Object01d97000 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d97010 reads.
 *
 */
struct Object01d97010 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d97010; meaning unknown. */
};
static_assert(offsetof(Object01d97010, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d97010(const Object01d97010 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d97060()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d972e0 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01d972e0()
{
    return value_01d972e0;
}

/**
 *
 * The part of the object that auto_return_field_01d97320 reads.
 *
 */
struct Object01d97320 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d97320; meaning unknown. */
};
static_assert(offsetof(Object01d97320, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d97320(const Object01d97320 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d97330 reads.
 *
 */
struct Object01d97330 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d97330; meaning unknown. */
};
static_assert(offsetof(Object01d97330, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d97330(const Object01d97330 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d97380()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d97600 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01d97600()
{
    return value_01d97600;
}

/**
 *
 * The part of the object that auto_return_member_address_01d98720 reads.
 *
 */
struct Object01d98720 {
    uint8_t unknown_0x0000[0xd0];
    uint8_t member_0x00d0; /**< Read by auto_return_member_address_01d98720; meaning unknown. */
};
static_assert(offsetof(Object01d98720, member_0x00d0) == 0xd0);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01d98720(Object01d98720 *self)
{
    return &self->member_0x00d0;
}

/**
 *
 * The part of the object that auto_return_member_address_01d98730 reads.
 *
 */
struct Object01d98730 {
    uint8_t unknown_0x0000[0xd0];
    uint8_t member_0x00d0; /**< Read by auto_return_member_address_01d98730; meaning unknown. */
};
static_assert(offsetof(Object01d98730, member_0x00d0) == 0xd0);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01d98730(Object01d98730 *self)
{
    return &self->member_0x00d0;
}

/**
 *
 * The part of the object that auto_return_field_01d9a810 reads.
 *
 */
struct Object01d9a810 {
    uint8_t unknown_0x0000[0x58];
    uint32_t value_0x0058; /**< Read by auto_return_field_01d9a810; meaning unknown. */
};
static_assert(offsetof(Object01d9a810, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01d9a810(const Object01d9a810 *self)
{
    return self->value_0x0058;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d9a8e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d9a8f0()
{
}

/**
 *
 * The part of the object that auto_return_field_01d9ab60 reads.
 *
 */
struct Object01d9ab60 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d9ab60; meaning unknown. */
};
static_assert(offsetof(Object01d9ab60, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d9ab60(const Object01d9ab60 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d9ab70 reads.
 *
 */
struct Object01d9ab70 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d9ab70; meaning unknown. */
};
static_assert(offsetof(Object01d9ab70, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d9ab70(const Object01d9ab70 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d9abc0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d9ae40 = 0x230;

extern "C" uint32_t bb_auto_return_constant_01d9ae40()
{
    return value_01d9ae40;
}

/**
 *
 * The part of the object that auto_return_field_01d9ae80 reads.
 *
 */
struct Object01d9ae80 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d9ae80; meaning unknown. */
};
static_assert(offsetof(Object01d9ae80, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d9ae80(const Object01d9ae80 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d9ae90 reads.
 *
 */
struct Object01d9ae90 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d9ae90; meaning unknown. */
};
static_assert(offsetof(Object01d9ae90, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d9ae90(const Object01d9ae90 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d9aee0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d9b160 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01d9b160()
{
    return value_01d9b160;
}

/**
 *
 * The part of the object that auto_return_field_01d9b1a0 reads.
 *
 */
struct Object01d9b1a0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d9b1a0; meaning unknown. */
};
static_assert(offsetof(Object01d9b1a0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d9b1a0(const Object01d9b1a0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d9b1b0 reads.
 *
 */
struct Object01d9b1b0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d9b1b0; meaning unknown. */
};
static_assert(offsetof(Object01d9b1b0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d9b1b0(const Object01d9b1b0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d9b200()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d9b480 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01d9b480()
{
    return value_01d9b480;
}

/**
 *
 * The part of the object that auto_return_field_01d9b4c0 reads.
 *
 */
struct Object01d9b4c0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d9b4c0; meaning unknown. */
};
static_assert(offsetof(Object01d9b4c0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d9b4c0(const Object01d9b4c0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d9b4d0 reads.
 *
 */
struct Object01d9b4d0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d9b4d0; meaning unknown. */
};
static_assert(offsetof(Object01d9b4d0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d9b4d0(const Object01d9b4d0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d9b520()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d9b7a0 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01d9b7a0()
{
    return value_01d9b7a0;
}

/**
 *
 * The part of the object that auto_return_field_01d9d180 reads.
 *
 */
struct Object01d9d180 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d9d180; meaning unknown. */
};
static_assert(offsetof(Object01d9d180, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d9d180(const Object01d9d180 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d9d190 reads.
 *
 */
struct Object01d9d190 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d9d190; meaning unknown. */
};
static_assert(offsetof(Object01d9d190, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d9d190(const Object01d9d190 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d9d1e0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d9d460 = 0xf0;

extern "C" uint32_t bb_auto_return_constant_01d9d460()
{
    return value_01d9d460;
}

/**
 *
 * The part of the object that auto_return_field_01d9d4a0 reads.
 *
 */
struct Object01d9d4a0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d9d4a0; meaning unknown. */
};
static_assert(offsetof(Object01d9d4a0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d9d4a0(const Object01d9d4a0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d9d4b0 reads.
 *
 */
struct Object01d9d4b0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d9d4b0; meaning unknown. */
};
static_assert(offsetof(Object01d9d4b0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d9d4b0(const Object01d9d4b0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d9d500()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d9d780 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01d9d780()
{
    return value_01d9d780;
}

/**
 *
 * The part of the object that auto_return_field_01d9d7c0 reads.
 *
 */
struct Object01d9d7c0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d9d7c0; meaning unknown. */
};
static_assert(offsetof(Object01d9d7c0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d9d7c0(const Object01d9d7c0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d9d7d0 reads.
 *
 */
struct Object01d9d7d0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d9d7d0; meaning unknown. */
};
static_assert(offsetof(Object01d9d7d0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d9d7d0(const Object01d9d7d0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d9d820()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d9daa0 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01d9daa0()
{
    return value_01d9daa0;
}

/**
 *
 * The part of the object that auto_return_field_01d9dae0 reads.
 *
 */
struct Object01d9dae0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d9dae0; meaning unknown. */
};
static_assert(offsetof(Object01d9dae0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d9dae0(const Object01d9dae0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d9daf0 reads.
 *
 */
struct Object01d9daf0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d9daf0; meaning unknown. */
};
static_assert(offsetof(Object01d9daf0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d9daf0(const Object01d9daf0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d9db40()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d9ddc0 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01d9ddc0()
{
    return value_01d9ddc0;
}
