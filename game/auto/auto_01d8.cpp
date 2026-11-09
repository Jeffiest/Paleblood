// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d80130 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01d80130()
{
    return value_01d80130;
}

/**
 *
 * The part of the object that auto_return_field_01d80170 reads.
 *
 */
struct Object01d80170 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d80170; meaning unknown. */
};
static_assert(offsetof(Object01d80170, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d80170(const Object01d80170 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d80180 reads.
 *
 */
struct Object01d80180 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d80180; meaning unknown. */
};
static_assert(offsetof(Object01d80180, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d80180(const Object01d80180 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d801d0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d80450 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01d80450()
{
    return value_01d80450;
}

/**
 *
 * The part of the object that auto_return_member_address_01d81650 reads.
 *
 */
struct Object01d81650 {
    uint8_t unknown_0x0000[0xd0];
    uint8_t member_0x00d0; /**< Read by auto_return_member_address_01d81650; meaning unknown. */
};
static_assert(offsetof(Object01d81650, member_0x00d0) == 0xd0);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01d81650(Object01d81650 *self)
{
    return &self->member_0x00d0;
}

/**
 *
 * The part of the object that auto_return_member_address_01d81660 reads.
 *
 */
struct Object01d81660 {
    uint8_t unknown_0x0000[0xd0];
    uint8_t member_0x00d0; /**< Read by auto_return_member_address_01d81660; meaning unknown. */
};
static_assert(offsetof(Object01d81660, member_0x00d0) == 0xd0);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01d81660(Object01d81660 *self)
{
    return &self->member_0x00d0;
}

/**
 *
 * The part of the object that auto_return_field_01d83a60 reads.
 *
 */
struct Object01d83a60 {
    uint8_t unknown_0x0000[0x58];
    uint32_t value_0x0058; /**< Read by auto_return_field_01d83a60; meaning unknown. */
};
static_assert(offsetof(Object01d83a60, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01d83a60(const Object01d83a60 *self)
{
    return self->value_0x0058;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d83b30()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d83b40()
{
}

/**
 *
 * The part of the object that auto_return_field_01d83db0 reads.
 *
 */
struct Object01d83db0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d83db0; meaning unknown. */
};
static_assert(offsetof(Object01d83db0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d83db0(const Object01d83db0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d83dc0 reads.
 *
 */
struct Object01d83dc0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d83dc0; meaning unknown. */
};
static_assert(offsetof(Object01d83dc0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d83dc0(const Object01d83dc0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d83e10()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d84090 = 0x240;

extern "C" uint32_t bb_auto_return_constant_01d84090()
{
    return value_01d84090;
}

/**
 *
 * The part of the object that auto_return_field_01d840d0 reads.
 *
 */
struct Object01d840d0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d840d0; meaning unknown. */
};
static_assert(offsetof(Object01d840d0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d840d0(const Object01d840d0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d840e0 reads.
 *
 */
struct Object01d840e0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d840e0; meaning unknown. */
};
static_assert(offsetof(Object01d840e0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d840e0(const Object01d840e0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d84130()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d843b0 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01d843b0()
{
    return value_01d843b0;
}

/**
 *
 * The part of the object that auto_return_field_01d843f0 reads.
 *
 */
struct Object01d843f0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d843f0; meaning unknown. */
};
static_assert(offsetof(Object01d843f0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d843f0(const Object01d843f0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d84400 reads.
 *
 */
struct Object01d84400 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d84400; meaning unknown. */
};
static_assert(offsetof(Object01d84400, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d84400(const Object01d84400 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d84450()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d846d0 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01d846d0()
{
    return value_01d846d0;
}

/**
 *
 * The part of the object that auto_return_field_01d84710 reads.
 *
 */
struct Object01d84710 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d84710; meaning unknown. */
};
static_assert(offsetof(Object01d84710, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d84710(const Object01d84710 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d84720 reads.
 *
 */
struct Object01d84720 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d84720; meaning unknown. */
};
static_assert(offsetof(Object01d84720, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d84720(const Object01d84720 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d84770()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d849f0 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01d849f0()
{
    return value_01d849f0;
}

/**
 *
 * The part of the object that auto_return_member_address_01d85cc0 reads.
 *
 */
struct Object01d85cc0 {
    uint8_t unknown_0x0000[0xd0];
    uint8_t member_0x00d0; /**< Read by auto_return_member_address_01d85cc0; meaning unknown. */
};
static_assert(offsetof(Object01d85cc0, member_0x00d0) == 0xd0);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01d85cc0(Object01d85cc0 *self)
{
    return &self->member_0x00d0;
}

/**
 *
 * The part of the object that auto_return_member_address_01d85cd0 reads.
 *
 */
struct Object01d85cd0 {
    uint8_t unknown_0x0000[0xd0];
    uint8_t member_0x00d0; /**< Read by auto_return_member_address_01d85cd0; meaning unknown. */
};
static_assert(offsetof(Object01d85cd0, member_0x00d0) == 0xd0);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01d85cd0(Object01d85cd0 *self)
{
    return &self->member_0x00d0;
}

/**
 *
 * The part of the object that auto_return_field_01d88510 reads.
 *
 */
struct Object01d88510 {
    uint8_t unknown_0x0000[0x58];
    uint32_t value_0x0058; /**< Read by auto_return_field_01d88510; meaning unknown. */
};
static_assert(offsetof(Object01d88510, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01d88510(const Object01d88510 *self)
{
    return self->value_0x0058;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d885e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d885f0()
{
}

/**
 *
 * The part of the object that auto_return_field_01d88860 reads.
 *
 */
struct Object01d88860 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d88860; meaning unknown. */
};
static_assert(offsetof(Object01d88860, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d88860(const Object01d88860 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d88870 reads.
 *
 */
struct Object01d88870 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d88870; meaning unknown. */
};
static_assert(offsetof(Object01d88870, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d88870(const Object01d88870 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d888c0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d88b40 = 0x250;

extern "C" uint32_t bb_auto_return_constant_01d88b40()
{
    return value_01d88b40;
}

/**
 *
 * The part of the object that auto_return_field_01d88b80 reads.
 *
 */
struct Object01d88b80 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d88b80; meaning unknown. */
};
static_assert(offsetof(Object01d88b80, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d88b80(const Object01d88b80 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d88b90 reads.
 *
 */
struct Object01d88b90 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d88b90; meaning unknown. */
};
static_assert(offsetof(Object01d88b90, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d88b90(const Object01d88b90 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d88be0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d88e60 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01d88e60()
{
    return value_01d88e60;
}

/**
 *
 * The part of the object that auto_return_field_01d88ea0 reads.
 *
 */
struct Object01d88ea0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d88ea0; meaning unknown. */
};
static_assert(offsetof(Object01d88ea0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d88ea0(const Object01d88ea0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d88eb0 reads.
 *
 */
struct Object01d88eb0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d88eb0; meaning unknown. */
};
static_assert(offsetof(Object01d88eb0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d88eb0(const Object01d88eb0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d88f00()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d89180 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01d89180()
{
    return value_01d89180;
}

/**
 *
 * The part of the object that auto_return_field_01d891c0 reads.
 *
 */
struct Object01d891c0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d891c0; meaning unknown. */
};
static_assert(offsetof(Object01d891c0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d891c0(const Object01d891c0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d891d0 reads.
 *
 */
struct Object01d891d0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d891d0; meaning unknown. */
};
static_assert(offsetof(Object01d891d0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d891d0(const Object01d891d0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d89220()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d894a0 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01d894a0()
{
    return value_01d894a0;
}

/**
 *
 * The part of the object that auto_return_member_address_01d8a3b0 reads.
 *
 */
struct Object01d8a3b0 {
    uint8_t unknown_0x0000[0xd0];
    uint8_t member_0x00d0; /**< Read by auto_return_member_address_01d8a3b0; meaning unknown. */
};
static_assert(offsetof(Object01d8a3b0, member_0x00d0) == 0xd0);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01d8a3b0(Object01d8a3b0 *self)
{
    return &self->member_0x00d0;
}

/**
 *
 * The part of the object that auto_return_member_address_01d8a3c0 reads.
 *
 */
struct Object01d8a3c0 {
    uint8_t unknown_0x0000[0xd0];
    uint8_t member_0x00d0; /**< Read by auto_return_member_address_01d8a3c0; meaning unknown. */
};
static_assert(offsetof(Object01d8a3c0, member_0x00d0) == 0xd0);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01d8a3c0(Object01d8a3c0 *self)
{
    return &self->member_0x00d0;
}

/**
 *
 * The part of the object that auto_return_field_01d8c330 reads.
 *
 */
struct Object01d8c330 {
    uint8_t unknown_0x0000[0x58];
    uint32_t value_0x0058; /**< Read by auto_return_field_01d8c330; meaning unknown. */
};
static_assert(offsetof(Object01d8c330, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01d8c330(const Object01d8c330 *self)
{
    return self->value_0x0058;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d8c400()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d8c410()
{
}

/**
 *
 * The part of the object that auto_return_field_01d8c680 reads.
 *
 */
struct Object01d8c680 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d8c680; meaning unknown. */
};
static_assert(offsetof(Object01d8c680, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d8c680(const Object01d8c680 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d8c690 reads.
 *
 */
struct Object01d8c690 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d8c690; meaning unknown. */
};
static_assert(offsetof(Object01d8c690, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d8c690(const Object01d8c690 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d8c6e0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d8c960 = 0x210;

extern "C" uint32_t bb_auto_return_constant_01d8c960()
{
    return value_01d8c960;
}

/**
 *
 * The part of the object that auto_return_field_01d8c9a0 reads.
 *
 */
struct Object01d8c9a0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d8c9a0; meaning unknown. */
};
static_assert(offsetof(Object01d8c9a0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d8c9a0(const Object01d8c9a0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d8c9b0 reads.
 *
 */
struct Object01d8c9b0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d8c9b0; meaning unknown. */
};
static_assert(offsetof(Object01d8c9b0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d8c9b0(const Object01d8c9b0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d8ca00()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d8cc80 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01d8cc80()
{
    return value_01d8cc80;
}

/**
 *
 * The part of the object that auto_return_field_01d8ccc0 reads.
 *
 */
struct Object01d8ccc0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d8ccc0; meaning unknown. */
};
static_assert(offsetof(Object01d8ccc0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d8ccc0(const Object01d8ccc0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d8ccd0 reads.
 *
 */
struct Object01d8ccd0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d8ccd0; meaning unknown. */
};
static_assert(offsetof(Object01d8ccd0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d8ccd0(const Object01d8ccd0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d8cd20()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d8cfa0 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01d8cfa0()
{
    return value_01d8cfa0;
}

/**
 *
 * The part of the object that auto_return_field_01d8cfe0 reads.
 *
 */
struct Object01d8cfe0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d8cfe0; meaning unknown. */
};
static_assert(offsetof(Object01d8cfe0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d8cfe0(const Object01d8cfe0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d8cff0 reads.
 *
 */
struct Object01d8cff0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d8cff0; meaning unknown. */
};
static_assert(offsetof(Object01d8cff0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d8cff0(const Object01d8cff0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d8d040()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d8d2c0 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01d8d2c0()
{
    return value_01d8d2c0;
}

/**
 *
 * The part of the object that auto_return_member_address_01d8e8d0 reads.
 *
 */
struct Object01d8e8d0 {
    uint8_t unknown_0x0000[0xd0];
    uint8_t member_0x00d0; /**< Read by auto_return_member_address_01d8e8d0; meaning unknown. */
};
static_assert(offsetof(Object01d8e8d0, member_0x00d0) == 0xd0);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01d8e8d0(Object01d8e8d0 *self)
{
    return &self->member_0x00d0;
}

/**
 *
 * The part of the object that auto_return_member_address_01d8e8e0 reads.
 *
 */
struct Object01d8e8e0 {
    uint8_t unknown_0x0000[0xd0];
    uint8_t member_0x00d0; /**< Read by auto_return_member_address_01d8e8e0; meaning unknown. */
};
static_assert(offsetof(Object01d8e8e0, member_0x00d0) == 0xd0);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01d8e8e0(Object01d8e8e0 *self)
{
    return &self->member_0x00d0;
}
