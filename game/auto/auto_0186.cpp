// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_018600b0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_018600c0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01860100()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01860120 reads.
 *
 */
struct Object01860120 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01860120; meaning unknown. */
};
static_assert(offsetof(Object01860120, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01860120(Object01860120 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01860130()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01860200()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01860520()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_018605e0 reads.
 *
 */
struct Object018605e0 {
    uint8_t unknown_0x0000[0x10];
    uint8_t member_0x0010; /**< Read by auto_return_member_address_018605e0; meaning unknown. */
};
static_assert(offsetof(Object018605e0, member_0x0010) == 0x10);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_018605e0(Object018605e0 *self)
{
    return &self->member_0x0010;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_018605f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_018606c0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_018608c0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01860900()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01860920 reads.
 *
 */
struct Object01860920 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01860920; meaning unknown. */
};
static_assert(offsetof(Object01860920, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01860920(Object01860920 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01860be0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01860c20()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01860c40 reads.
 *
 */
struct Object01860c40 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01860c40; meaning unknown. */
};
static_assert(offsetof(Object01860c40, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01860c40(Object01860c40 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01860cd0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01863600()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_018636d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01863730()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01867870()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_018678f0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_018678f0()
{
    return value_018678f0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_01867cb0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_01867cb0()
{
    return value_01867cb0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_018681a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_018685b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01868610()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01868780()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_018687c0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_018687e0 reads.
 *
 */
struct Object018687e0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_018687e0; meaning unknown. */
};
static_assert(offsetof(Object018687e0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_018687e0(Object018687e0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_018687f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_018688c0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01868aa0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01868ae0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01868b00 reads.
 *
 */
struct Object01868b00 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01868b00; meaning unknown. */
};
static_assert(offsetof(Object01868b00, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01868b00(Object01868b00 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0186b0a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0186b170()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0186b1d0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0186d3d0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0186f2a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0186f370()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0186f590()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0186f5d0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_0186f5f0 reads.
 *
 */
struct Object0186f5f0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_0186f5f0; meaning unknown. */
};
static_assert(offsetof(Object0186f5f0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0186f5f0(Object0186f5f0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_0186f800 reads.
 *
 */
struct Object0186f800 {
    uint8_t unknown_0x0000[0x58];
    uint8_t value_0x0058; /**< Read by auto_return_field_0186f800; meaning unknown. */
};
static_assert(offsetof(Object0186f800, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_0186f800(const Object0186f800 *self)
{
    return self->value_0x0058;
}
