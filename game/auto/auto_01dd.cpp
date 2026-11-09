// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_01dd1ae0 reads.
 *
 */
struct Object01dd1ae0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01dd1ae0; meaning unknown. */
};
static_assert(offsetof(Object01dd1ae0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01dd1ae0(const Object01dd1ae0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01dd1af0 reads.
 *
 */
struct Object01dd1af0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01dd1af0; meaning unknown. */
};
static_assert(offsetof(Object01dd1af0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01dd1af0(const Object01dd1af0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01dd1b40()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01dd1be0 = 0x10;

extern "C" uint32_t bb_auto_return_constant_01dd1be0()
{
    return value_01dd1be0;
}

/**
 *
 * The part of the object that auto_return_field_01dd1c20 reads.
 *
 */
struct Object01dd1c20 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01dd1c20; meaning unknown. */
};
static_assert(offsetof(Object01dd1c20, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01dd1c20(const Object01dd1c20 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01dd1c30 reads.
 *
 */
struct Object01dd1c30 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01dd1c30; meaning unknown. */
};
static_assert(offsetof(Object01dd1c30, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01dd1c30(const Object01dd1c30 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01dd1c80()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01dd1f00 = 0x10;

extern "C" uint32_t bb_auto_return_constant_01dd1f00()
{
    return value_01dd1f00;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01dd1f10()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01dd1f20()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01dd1f30()
{
}

/**
 *
 * The part of the object that auto_return_field_01dd3050 reads.
 *
 */
struct Object01dd3050 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01dd3050; meaning unknown. */
};
static_assert(offsetof(Object01dd3050, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01dd3050(const Object01dd3050 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01dd3060 reads.
 *
 */
struct Object01dd3060 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01dd3060; meaning unknown. */
};
static_assert(offsetof(Object01dd3060, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01dd3060(const Object01dd3060 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01dd30b0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01dd3330 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01dd3330()
{
    return value_01dd3330;
}

/**
 *
 * The part of the object that auto_return_field_01dd3370 reads.
 *
 */
struct Object01dd3370 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01dd3370; meaning unknown. */
};
static_assert(offsetof(Object01dd3370, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01dd3370(const Object01dd3370 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01dd3380 reads.
 *
 */
struct Object01dd3380 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01dd3380; meaning unknown. */
};
static_assert(offsetof(Object01dd3380, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01dd3380(const Object01dd3380 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01dd33d0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01dd3650 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01dd3650()
{
    return value_01dd3650;
}

/**
 *
 * The part of the object that auto_return_field_01dd3690 reads.
 *
 */
struct Object01dd3690 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01dd3690; meaning unknown. */
};
static_assert(offsetof(Object01dd3690, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01dd3690(const Object01dd3690 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01dd36a0 reads.
 *
 */
struct Object01dd36a0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01dd36a0; meaning unknown. */
};
static_assert(offsetof(Object01dd36a0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01dd36a0(const Object01dd36a0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01dd36f0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01dd3970 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01dd3970()
{
    return value_01dd3970;
}

/**
 *
 * The part of the object that auto_return_field_01dd6a10 reads.
 *
 */
struct Object01dd6a10 {
    uint8_t unknown_0x0000[0x58];
    uint32_t value_0x0058; /**< Read by auto_return_field_01dd6a10; meaning unknown. */
};
static_assert(offsetof(Object01dd6a10, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01dd6a10(const Object01dd6a10 *self)
{
    return self->value_0x0058;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01dd6ae0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01dd6af0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01dd6ce0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01dd6d20()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01dd6d40 reads.
 *
 */
struct Object01dd6d40 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01dd6d40; meaning unknown. */
};
static_assert(offsetof(Object01dd6d40, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01dd6d40(Object01dd6d40 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_01dd6fb0 reads.
 *
 */
struct Object01dd6fb0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01dd6fb0; meaning unknown. */
};
static_assert(offsetof(Object01dd6fb0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01dd6fb0(const Object01dd6fb0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01dd6fc0 reads.
 *
 */
struct Object01dd6fc0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01dd6fc0; meaning unknown. */
};
static_assert(offsetof(Object01dd6fc0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01dd6fc0(const Object01dd6fc0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01dd7010()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01dd7290 = 0x160;

extern "C" uint32_t bb_auto_return_constant_01dd7290()
{
    return value_01dd7290;
}

/**
 *
 * The part of the object that auto_return_field_01dd72d0 reads.
 *
 */
struct Object01dd72d0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01dd72d0; meaning unknown. */
};
static_assert(offsetof(Object01dd72d0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01dd72d0(const Object01dd72d0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01dd72e0 reads.
 *
 */
struct Object01dd72e0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01dd72e0; meaning unknown. */
};
static_assert(offsetof(Object01dd72e0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01dd72e0(const Object01dd72e0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01dd7330()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01dd75b0 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01dd75b0()
{
    return value_01dd75b0;
}

/**
 *
 * The part of the object that auto_return_field_01dd75f0 reads.
 *
 */
struct Object01dd75f0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01dd75f0; meaning unknown. */
};
static_assert(offsetof(Object01dd75f0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01dd75f0(const Object01dd75f0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01dd7600 reads.
 *
 */
struct Object01dd7600 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01dd7600; meaning unknown. */
};
static_assert(offsetof(Object01dd7600, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01dd7600(const Object01dd7600 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01dd7650()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01dd78d0 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01dd78d0()
{
    return value_01dd78d0;
}

/**
 *
 * The part of the object that auto_return_field_01dd7910 reads.
 *
 */
struct Object01dd7910 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01dd7910; meaning unknown. */
};
static_assert(offsetof(Object01dd7910, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01dd7910(const Object01dd7910 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01dd7920 reads.
 *
 */
struct Object01dd7920 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01dd7920; meaning unknown. */
};
static_assert(offsetof(Object01dd7920, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01dd7920(const Object01dd7920 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01dd7970()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01dd7bf0 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01dd7bf0()
{
    return value_01dd7bf0;
}

/**
 *
 * The part of the object that auto_return_field_01dda850 reads.
 *
 */
struct Object01dda850 {
    uint8_t unknown_0x0000[0x58];
    uint32_t value_0x0058; /**< Read by auto_return_field_01dda850; meaning unknown. */
};
static_assert(offsetof(Object01dda850, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01dda850(const Object01dda850 *self)
{
    return self->value_0x0058;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01dda920()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01dda930()
{
}

/**
 *
 * The part of the object that auto_return_field_01ddaba0 reads.
 *
 */
struct Object01ddaba0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01ddaba0; meaning unknown. */
};
static_assert(offsetof(Object01ddaba0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01ddaba0(const Object01ddaba0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01ddabb0 reads.
 *
 */
struct Object01ddabb0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01ddabb0; meaning unknown. */
};
static_assert(offsetof(Object01ddabb0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01ddabb0(const Object01ddabb0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01ddac00()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01ddae80 = 0x170;

extern "C" uint32_t bb_auto_return_constant_01ddae80()
{
    return value_01ddae80;
}

/**
 *
 * The part of the object that auto_return_field_01ddaec0 reads.
 *
 */
struct Object01ddaec0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01ddaec0; meaning unknown. */
};
static_assert(offsetof(Object01ddaec0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01ddaec0(const Object01ddaec0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01ddaed0 reads.
 *
 */
struct Object01ddaed0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01ddaed0; meaning unknown. */
};
static_assert(offsetof(Object01ddaed0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01ddaed0(const Object01ddaed0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01ddaf20()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01ddb1a0 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01ddb1a0()
{
    return value_01ddb1a0;
}

/**
 *
 * The part of the object that auto_return_field_01ddb1e0 reads.
 *
 */
struct Object01ddb1e0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01ddb1e0; meaning unknown. */
};
static_assert(offsetof(Object01ddb1e0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01ddb1e0(const Object01ddb1e0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01ddb1f0 reads.
 *
 */
struct Object01ddb1f0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01ddb1f0; meaning unknown. */
};
static_assert(offsetof(Object01ddb1f0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01ddb1f0(const Object01ddb1f0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01ddb240()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01ddb4c0 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01ddb4c0()
{
    return value_01ddb4c0;
}

/**
 *
 * The part of the object that auto_return_field_01ddb500 reads.
 *
 */
struct Object01ddb500 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01ddb500; meaning unknown. */
};
static_assert(offsetof(Object01ddb500, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01ddb500(const Object01ddb500 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01ddb510 reads.
 *
 */
struct Object01ddb510 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01ddb510; meaning unknown. */
};
static_assert(offsetof(Object01ddb510, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01ddb510(const Object01ddb510 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01ddb560()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01ddb7e0 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01ddb7e0()
{
    return value_01ddb7e0;
}

/**
 *
 * The part of the object that auto_return_field_01dde570 reads.
 *
 */
struct Object01dde570 {
    uint8_t unknown_0x0000[0x58];
    uint32_t value_0x0058; /**< Read by auto_return_field_01dde570; meaning unknown. */
};
static_assert(offsetof(Object01dde570, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01dde570(const Object01dde570 *self)
{
    return self->value_0x0058;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01dde640()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01dde650()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01dde840()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01dde880()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01dde8a0 reads.
 *
 */
struct Object01dde8a0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01dde8a0; meaning unknown. */
};
static_assert(offsetof(Object01dde8a0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01dde8a0(Object01dde8a0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_01ddeb10 reads.
 *
 */
struct Object01ddeb10 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01ddeb10; meaning unknown. */
};
static_assert(offsetof(Object01ddeb10, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01ddeb10(const Object01ddeb10 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01ddeb20 reads.
 *
 */
struct Object01ddeb20 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01ddeb20; meaning unknown. */
};
static_assert(offsetof(Object01ddeb20, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01ddeb20(const Object01ddeb20 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01ddeb70()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01ddedf0 = 0x170;

extern "C" uint32_t bb_auto_return_constant_01ddedf0()
{
    return value_01ddedf0;
}

/**
 *
 * The part of the object that auto_return_field_01ddee30 reads.
 *
 */
struct Object01ddee30 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01ddee30; meaning unknown. */
};
static_assert(offsetof(Object01ddee30, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01ddee30(const Object01ddee30 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01ddee40 reads.
 *
 */
struct Object01ddee40 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01ddee40; meaning unknown. */
};
static_assert(offsetof(Object01ddee40, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01ddee40(const Object01ddee40 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01ddee90()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01ddf110 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01ddf110()
{
    return value_01ddf110;
}

/**
 *
 * The part of the object that auto_return_field_01ddf150 reads.
 *
 */
struct Object01ddf150 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01ddf150; meaning unknown. */
};
static_assert(offsetof(Object01ddf150, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01ddf150(const Object01ddf150 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01ddf160 reads.
 *
 */
struct Object01ddf160 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01ddf160; meaning unknown. */
};
static_assert(offsetof(Object01ddf160, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01ddf160(const Object01ddf160 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01ddf1b0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01ddf430 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01ddf430()
{
    return value_01ddf430;
}

/**
 *
 * The part of the object that auto_return_field_01ddf470 reads.
 *
 */
struct Object01ddf470 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01ddf470; meaning unknown. */
};
static_assert(offsetof(Object01ddf470, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01ddf470(const Object01ddf470 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01ddf480 reads.
 *
 */
struct Object01ddf480 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01ddf480; meaning unknown. */
};
static_assert(offsetof(Object01ddf480, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01ddf480(const Object01ddf480 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01ddf4d0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01ddf750 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01ddf750()
{
    return value_01ddf750;
}
