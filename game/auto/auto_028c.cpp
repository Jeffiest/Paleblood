// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028c0220()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028c0230()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028c0240()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028c0250()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028c0260()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028c0650()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_028c0660 = 0x100;

extern "C" uint32_t bb_auto_return_constant_028c0660()
{
    return value_028c0660;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028c1bd0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028c31e0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028c3470()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028c3480()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028c3490()
{
}

/**
 *
 * The part of the object that auto_return_field_028c34b0 reads.
 *
 */
struct Object028c34b0 {
    uint8_t unknown_0x0000[0x30];
    uint64_t value_0x0030; /**< Read by auto_return_field_028c34b0; meaning unknown. */
};
static_assert(offsetof(Object028c34b0, value_0x0030) == 0x30);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_028c34b0(const Object028c34b0 *self)
{
    return self->value_0x0030;
}

/**
 *
 * The part of the object that auto_return_field_028c3560 reads.
 *
 */
struct Object028c3560 {
    uint8_t unknown_0x0000[0xc8];
    uint64_t value_0x00c8; /**< Read by auto_return_field_028c3560; meaning unknown. */
};
static_assert(offsetof(Object028c3560, value_0x00c8) == 0xc8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_028c3560(const Object028c3560 *self)
{
    return self->value_0x00c8;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_028c3570 = 0x1;

extern "C" uint32_t bb_auto_return_constant_028c3570()
{
    return value_028c3570;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_028c3580 = 0x1;

extern "C" uint32_t bb_auto_return_constant_028c3580()
{
    return value_028c3580;
}

/**
 *
 * The part of the object that auto_return_member_address_028c35a0 reads.
 *
 */
struct Object028c35a0 {
    uint8_t unknown_0x0000[0xd0];
    uint8_t member_0x00d0; /**< Read by auto_return_member_address_028c35a0; meaning unknown. */
};
static_assert(offsetof(Object028c35a0, member_0x00d0) == 0xd0);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_028c35a0(Object028c35a0 *self)
{
    return &self->member_0x00d0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028c3bf0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028c3e80()
{
}

/**
 *
 * The part of the object that auto_return_member_address_028c4040 reads.
 *
 */
struct Object028c4040 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_028c4040; meaning unknown. */
};
static_assert(offsetof(Object028c4040, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_028c4040(Object028c4040 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028c4250()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028c42a0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_028c42f0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_028c42f0()
{
    return value_028c42f0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028c43e0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028c4410()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028c5270()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028c53b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028c53c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028c5460()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028c5470()
{
}

/**
 *
 * The part of the object that auto_return_field_028c5fd0 reads.
 *
 */
struct Object028c5fd0 {
    uint8_t unknown_0x0000[0x8];
    uint32_t value_0x0008; /**< Read by auto_return_field_028c5fd0; meaning unknown. */
};
static_assert(offsetof(Object028c5fd0, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_028c5fd0(const Object028c5fd0 *self)
{
    return self->value_0x0008;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028c62a0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028c62b0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_028c62c0 = 0x1;

extern "C" uint32_t bb_auto_return_constant_028c62c0()
{
    return value_028c62c0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_028c62d0 = 0x1;

extern "C" uint32_t bb_auto_return_constant_028c62d0()
{
    return value_028c62d0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028c62e0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_028c62f0 = 0x1;

extern "C" uint32_t bb_auto_return_constant_028c62f0()
{
    return value_028c62f0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028c6300()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028c6320()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028c6370()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028c68d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028c6c10()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028c6eb0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028c6ec0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028c7890()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028c78a0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_028c78c0 reads.
 *
 */
struct Object028c78c0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_028c78c0; meaning unknown. */
};
static_assert(offsetof(Object028c78c0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_028c78c0(Object028c78c0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028c7960()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028c7970()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028c7aa0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028c7ab0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028c7ac0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028c7ad0()
{
}

/**
 *
 * The part of the object that auto_return_field_028c8240 reads.
 *
 */
struct Object028c8240 {
    uint64_t value_0x0000; /**< Read by auto_return_field_028c8240; meaning unknown. */
};
static_assert(offsetof(Object028c8240, value_0x0000) == 0x0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_028c8240(const Object028c8240 *self)
{
    return self->value_0x0000;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028c8460()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028c8470()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028c85d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028c85e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028c8e90()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028c8f60()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028c8fb0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028c8fc0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028c9010()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_028c9060 = 0x1;

extern "C" uint32_t bb_auto_return_constant_028c9060()
{
    return value_028c9060;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028c9070()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028c9320()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028c9330()
{
}

/**
 *
 * The part of the object that auto_return_field_028c9eb0 reads.
 *
 */
struct Object028c9eb0 {
    uint8_t unknown_0x0000[0x8];
    uint32_t value_0x0008; /**< Read by auto_return_field_028c9eb0; meaning unknown. */
};
static_assert(offsetof(Object028c9eb0, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_028c9eb0(const Object028c9eb0 *self)
{
    return self->value_0x0008;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028ca2a0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_028ca620 = 0x1;

extern "C" uint8_t bb_auto_return_constant_028ca620()
{
    return value_028ca620;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028ca630()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_028ca640 = 0x1;

extern "C" uint32_t bb_auto_return_constant_028ca640()
{
    return value_028ca640;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_028ca760 = 0x1;

extern "C" uint8_t bb_auto_return_constant_028ca760()
{
    return value_028ca760;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_028ca770 = 0x1;

extern "C" uint8_t bb_auto_return_constant_028ca770()
{
    return value_028ca770;
}

/**
 *
 * The part of the object that auto_return_field_028ca780 reads.
 *
 */
struct Object028ca780 {
    uint8_t unknown_0x0000[0x20];
    uint32_t value_0x0020; /**< Read by auto_return_field_028ca780; meaning unknown. */
};
static_assert(offsetof(Object028ca780, value_0x0020) == 0x20);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_028ca780(const Object028ca780 *self)
{
    return self->value_0x0020;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028ca7b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028cade0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028cae30()
{
}

/**
 *
 * The part of the object that auto_return_field_028cae90 reads.
 *
 */
struct Object028cae90 {
    uint8_t unknown_0x0000[0x60];
    uint64_t value_0x0060; /**< Read by auto_return_field_028cae90; meaning unknown. */
};
static_assert(offsetof(Object028cae90, value_0x0060) == 0x60);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_028cae90(const Object028cae90 *self)
{
    return self->value_0x0060;
}

/**
 *
 * The part of the object that auto_return_field_028caeb0 reads.
 *
 */
struct Object028caeb0 {
    uint8_t unknown_0x0000[0x68];
    uint64_t value_0x0068; /**< Read by auto_return_field_028caeb0; meaning unknown. */
};
static_assert(offsetof(Object028caeb0, value_0x0068) == 0x68);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_028caeb0(const Object028caeb0 *self)
{
    return self->value_0x0068;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028caec0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028caed0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028caee0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028caef0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028caf00()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028caf10()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028caf20()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028caf30()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028caf40()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028caf50()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028caf60()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028caf70()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028caf80()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028caf90()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028caff0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028cb2f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028cb340()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028cb390()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028cb3e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028cb430()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028cb510()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028cb520()
{
}

/**
 *
 * The part of the object that auto_return_field_028cc260 reads.
 *
 */
struct Object028cc260 {
    uint64_t value_0x0000; /**< Read by auto_return_field_028cc260; meaning unknown. */
};
static_assert(offsetof(Object028cc260, value_0x0000) == 0x0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_028cc260(const Object028cc260 *self)
{
    return self->value_0x0000;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028cc3e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028cc3f0()
{
}

/**
 *
 * The part of the object that auto_return_field_028cd100 reads.
 *
 */
struct Object028cd100 {
    uint64_t value_0x0000; /**< Read by auto_return_field_028cd100; meaning unknown. */
};
static_assert(offsetof(Object028cd100, value_0x0000) == 0x0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_028cd100(const Object028cd100 *self)
{
    return self->value_0x0000;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028cd1f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028cd240()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028cd290()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028cd2e0()
{
}

/**
 *
 * The part of the object that auto_return_field_028cd330 reads.
 *
 */
struct Object028cd330 {
    uint8_t unknown_0x0000[0x58];
    uint64_t value_0x0058; /**< Read by auto_return_field_028cd330; meaning unknown. */
};
static_assert(offsetof(Object028cd330, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_028cd330(const Object028cd330 *self)
{
    return self->value_0x0058;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_028cd430 = 0x1;

extern "C" uint32_t bb_auto_return_constant_028cd430()
{
    return value_028cd430;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028cd440()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028cd450()
{
}

/**
 *
 * The part of the object that auto_return_field_028cd760 reads.
 *
 */
struct Object028cd760 {
    uint8_t unknown_0x0000[0x148];
    uint32_t value_0x0148; /**< Read by auto_return_field_028cd760; meaning unknown. */
};
static_assert(offsetof(Object028cd760, value_0x0148) == 0x148);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_028cd760(const Object028cd760 *self)
{
    return self->value_0x0148;
}

/**
 *
 * The part of the object that auto_return_field_028cdcb0 reads.
 *
 */
struct Object028cdcb0 {
    uint8_t unknown_0x0000[0x1a8];
    uint32_t value_0x01a8; /**< Read by auto_return_field_028cdcb0; meaning unknown. */
};
static_assert(offsetof(Object028cdcb0, value_0x01a8) == 0x1a8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_028cdcb0(const Object028cdcb0 *self)
{
    return self->value_0x01a8;
}

/**
 *
 * The part of the object that auto_return_field_028ce060 reads.
 *
 */
struct Object028ce060 {
    uint8_t unknown_0x0000[0x70];
    uint64_t value_0x0070; /**< Read by auto_return_field_028ce060; meaning unknown. */
};
static_assert(offsetof(Object028ce060, value_0x0070) == 0x70);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_028ce060(const Object028ce060 *self)
{
    return self->value_0x0070;
}

/**
 *
 * The part of the object that auto_return_float_field_028ce080 reads.
 *
 */
struct Object028ce080 {
    uint8_t unknown_0x0000[0x78];
    float value_0x0078; /**< Read by auto_return_float_field_028ce080; meaning unknown. */
};
static_assert(offsetof(Object028ce080, value_0x0078) == 0x78);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_028ce080(const Object028ce080 *self)
{
    return self->value_0x0078;
}

/**
 *
 * The part of the object that auto_return_float_field_028ce0a0 reads.
 *
 */
struct Object028ce0a0 {
    uint8_t unknown_0x0000[0x7c];
    float value_0x007c; /**< Read by auto_return_float_field_028ce0a0; meaning unknown. */
};
static_assert(offsetof(Object028ce0a0, value_0x007c) == 0x7c);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_028ce0a0(const Object028ce0a0 *self)
{
    return self->value_0x007c;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028ce380()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028ce420()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028ce430()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028ce440()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028ce450()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028ce460()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028ce8a0()
{
}
