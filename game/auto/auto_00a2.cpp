// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_00a20860 = 0x1;

extern "C" uint8_t bb_auto_return_constant_00a20860()
{
    return value_00a20860;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_00a20870 = 0xb;

extern "C" uint32_t bb_auto_return_constant_00a20870()
{
    return value_00a20870;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_00a20b10 = 0x66;

extern "C" uint32_t bb_auto_return_constant_00a20b10()
{
    return value_00a20b10;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_00a22950 = 0xc;

extern "C" uint32_t bb_auto_return_constant_00a22950()
{
    return value_00a22950;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00a26bf0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00a27870()
{
}

/**
 *
 * The part of the object that auto_return_field_00a29db0 reads.
 *
 */
struct Object00a29db0 {
    uint8_t unknown_0x0000[0xc];
    uint32_t value_0x000c; /**< Read by auto_return_field_00a29db0; meaning unknown. */
};
static_assert(offsetof(Object00a29db0, value_0x000c) == 0xc);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_00a29db0(const Object00a29db0 *self)
{
    return self->value_0x000c;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_00a2a150 = 0x65;

extern "C" uint32_t bb_auto_return_constant_00a2a150()
{
    return value_00a2a150;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_00a2b170 = 0x1;

extern "C" uint32_t bb_auto_return_constant_00a2b170()
{
    return value_00a2b170;
}

/**
 *
 * The part of the object that auto_return_float_field_00a2c260 reads.
 *
 */
struct Object00a2c260 {
    uint8_t unknown_0x0000[0x40];
    float value_0x0040; /**< Read by auto_return_float_field_00a2c260; meaning unknown. */
};
static_assert(offsetof(Object00a2c260, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_00a2c260(const Object00a2c260 *self)
{
    return self->value_0x0040;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_00a2c270 = 0xd;

extern "C" uint32_t bb_auto_return_constant_00a2c270()
{
    return value_00a2c270;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00a2d010()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00a2d020()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_00a2d760 = 0x64;

extern "C" uint32_t bb_auto_return_constant_00a2d760()
{
    return value_00a2d760;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00a2e530()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00a2ee20()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00a2ef20()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00a2ef30()
{
}

/**
 *
 * The part of the object that auto_return_member_address_00a2f140 reads.
 *
 */
struct Object00a2f140 {
    uint8_t unknown_0x0000[0x70];
    uint8_t member_0x0070; /**< Read by auto_return_member_address_00a2f140; meaning unknown. */
};
static_assert(offsetof(Object00a2f140, member_0x0070) == 0x70);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_00a2f140(Object00a2f140 *self)
{
    return &self->member_0x0070;
}

/**
 *
 * The part of the object that auto_return_member_address_00a2f150 reads.
 *
 */
struct Object00a2f150 {
    uint8_t unknown_0x0000[0x70];
    uint8_t member_0x0070; /**< Read by auto_return_member_address_00a2f150; meaning unknown. */
};
static_assert(offsetof(Object00a2f150, member_0x0070) == 0x70);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_00a2f150(Object00a2f150 *self)
{
    return &self->member_0x0070;
}
