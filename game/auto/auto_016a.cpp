// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016a2630()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016a2650()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_016a2690()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_016a26a0 reads.
 *
 */
struct Object016a26a0 {
    uint8_t unknown_0x0000[0x20];
    uint8_t value_0x0020; /**< Read by auto_return_field_016a26a0; meaning unknown. */
};
static_assert(offsetof(Object016a26a0, value_0x0020) == 0x20);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_016a26a0(const Object016a26a0 *self)
{
    return self->value_0x0020;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_016a26b0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_016a26c0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_016a26d0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_016a26e0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_016a26f0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_016a2700()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_016a2720()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_016a2730()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_016a27a0 = 0xffffffff;

extern "C" uint32_t bb_auto_return_constant_016a27a0()
{
    return value_016a27a0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_016a27b0 = 0xffffffff;

extern "C" uint32_t bb_auto_return_constant_016a27b0()
{
    return value_016a27b0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_016a27d0 = 0xffffffff;

extern "C" uint32_t bb_auto_return_constant_016a27d0()
{
    return value_016a27d0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_016a27f0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_016a2800()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_016a2820()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_016a2830()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_016a2850 reads.
 *
 */
struct Object016a2850 {
    uint8_t unknown_0x0000[0x24];
    uint32_t value_0x0024; /**< Read by auto_return_field_016a2850; meaning unknown. */
};
static_assert(offsetof(Object016a2850, value_0x0024) == 0x24);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_016a2850(const Object016a2850 *self)
{
    return self->value_0x0024;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016a2880()
{
}

/**
 *
 * The part of the object that auto_return_float_field_016a28b0 reads.
 *
 */
struct Object016a28b0 {
    uint8_t unknown_0x0000[0x30];
    float value_0x0030; /**< Read by auto_return_float_field_016a28b0; meaning unknown. */
};
static_assert(offsetof(Object016a28b0, value_0x0030) == 0x30);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_016a28b0(const Object016a28b0 *self)
{
    return self->value_0x0030;
}

/**
 *
 * The part of the object that auto_return_field_016a2950 reads.
 *
 */
struct Object016a2950 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_016a2950; meaning unknown. */
};
static_assert(offsetof(Object016a2950, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_016a2950(const Object016a2950 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_016a2960 reads.
 *
 */
struct Object016a2960 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_016a2960; meaning unknown. */
};
static_assert(offsetof(Object016a2960, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_016a2960(const Object016a2960 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_016a29b0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_016a2c30 = 0x40;

extern "C" uint32_t bb_auto_return_constant_016a2c30()
{
    return value_016a2c30;
}

/**
 *
 * The part of the object that auto_return_field_016a2c70 reads.
 *
 */
struct Object016a2c70 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_016a2c70; meaning unknown. */
};
static_assert(offsetof(Object016a2c70, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_016a2c70(const Object016a2c70 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_016a2c80 reads.
 *
 */
struct Object016a2c80 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_016a2c80; meaning unknown. */
};
static_assert(offsetof(Object016a2c80, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_016a2c80(const Object016a2c80 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_016a2cd0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_016a2f50 = 0x30;

extern "C" uint32_t bb_auto_return_constant_016a2f50()
{
    return value_016a2f50;
}

/**
 *
 * The part of the object that auto_return_field_016a2f90 reads.
 *
 */
struct Object016a2f90 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_016a2f90; meaning unknown. */
};
static_assert(offsetof(Object016a2f90, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_016a2f90(const Object016a2f90 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_016a2fa0 reads.
 *
 */
struct Object016a2fa0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_016a2fa0; meaning unknown. */
};
static_assert(offsetof(Object016a2fa0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_016a2fa0(const Object016a2fa0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_016a2ff0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_016a3270 = 0x18;

extern "C" uint32_t bb_auto_return_constant_016a3270()
{
    return value_016a3270;
}

/**
 *
 * The part of the object that auto_return_field_016a32b0 reads.
 *
 */
struct Object016a32b0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_016a32b0; meaning unknown. */
};
static_assert(offsetof(Object016a32b0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_016a32b0(const Object016a32b0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_016a32c0 reads.
 *
 */
struct Object016a32c0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_016a32c0; meaning unknown. */
};
static_assert(offsetof(Object016a32c0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_016a32c0(const Object016a32c0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_016a3310()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_016a3590 = 0x8;

extern "C" uint32_t bb_auto_return_constant_016a3590()
{
    return value_016a3590;
}

/**
 *
 * The part of the object that auto_return_field_016a35d0 reads.
 *
 */
struct Object016a35d0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_016a35d0; meaning unknown. */
};
static_assert(offsetof(Object016a35d0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_016a35d0(const Object016a35d0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_016a35e0 reads.
 *
 */
struct Object016a35e0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_016a35e0; meaning unknown. */
};
static_assert(offsetof(Object016a35e0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_016a35e0(const Object016a35e0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_016a3630()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_016a38b0 = 0x8;

extern "C" uint32_t bb_auto_return_constant_016a38b0()
{
    return value_016a38b0;
}

/**
 *
 * The part of the object that auto_return_field_016a38f0 reads.
 *
 */
struct Object016a38f0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_016a38f0; meaning unknown. */
};
static_assert(offsetof(Object016a38f0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_016a38f0(const Object016a38f0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_016a3900 reads.
 *
 */
struct Object016a3900 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_016a3900; meaning unknown. */
};
static_assert(offsetof(Object016a3900, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_016a3900(const Object016a3900 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_016a3950()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_016a3bd0 = 0x8;

extern "C" uint32_t bb_auto_return_constant_016a3bd0()
{
    return value_016a3bd0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016a4b60()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016a4bc0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016a4c90()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016a4cf0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_016a8f90 reads.
 *
 */
struct Object016a8f90 {
    uint8_t unknown_0x0000[0xc4];
    uint8_t member_0x00c4; /**< Read by auto_return_member_address_016a8f90; meaning unknown. */
};
static_assert(offsetof(Object016a8f90, member_0x00c4) == 0xc4);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_016a8f90(Object016a8f90 *self)
{
    return &self->member_0x00c4;
}

/**
 *
 * The part of the object that auto_return_field_016a8fd0 reads.
 *
 */
struct Object016a8fd0 {
    uint8_t unknown_0x0000[0xcc];
    uint32_t value_0x00cc; /**< Read by auto_return_field_016a8fd0; meaning unknown. */
};
static_assert(offsetof(Object016a8fd0, value_0x00cc) == 0xcc);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_016a8fd0(const Object016a8fd0 *self)
{
    return self->value_0x00cc;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016a9d00()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016aa990()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016aa9f0()
{
}

/**
 *
 * The part of the object that auto_return_field_016aaa80 reads.
 *
 */
struct Object016aaa80 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_016aaa80; meaning unknown. */
};
static_assert(offsetof(Object016aaa80, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_016aaa80(const Object016aaa80 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_016aaa90 reads.
 *
 */
struct Object016aaa90 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_016aaa90; meaning unknown. */
};
static_assert(offsetof(Object016aaa90, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_016aaa90(const Object016aaa90 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_016aaae0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_016aad60 = 0xe0;

extern "C" uint32_t bb_auto_return_constant_016aad60()
{
    return value_016aad60;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016af8d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016af8e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016af940()
{
}

/**
 *
 * The part of the object that auto_return_field_016af9d0 reads.
 *
 */
struct Object016af9d0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_016af9d0; meaning unknown. */
};
static_assert(offsetof(Object016af9d0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_016af9d0(const Object016af9d0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_016af9e0 reads.
 *
 */
struct Object016af9e0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_016af9e0; meaning unknown. */
};
static_assert(offsetof(Object016af9e0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_016af9e0(const Object016af9e0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_016afa30()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_016afad0 = 0x38;

extern "C" uint32_t bb_auto_return_constant_016afad0()
{
    return value_016afad0;
}
