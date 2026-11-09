// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_019102b0 = 0x60;

extern "C" uint32_t bb_auto_return_constant_019102b0()
{
    return value_019102b0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_019119e0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_019119e0()
{
    return value_019119e0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01913b50()
{
}

/**
 *
 * The part of the object that auto_return_field_01916510 reads.
 *
 */
struct Object01916510 {
    uint8_t unknown_0x0000[0x114];
    uint16_t value_0x0114; /**< Read by auto_return_field_01916510; meaning unknown. */
};
static_assert(offsetof(Object01916510, value_0x0114) == 0x114);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01916510(const Object01916510 *self)
{
    return self->value_0x0114;
}

/**
 *
 * The part of the object that auto_return_field_01916730 reads.
 *
 */
struct Object01916730 {
    uint8_t unknown_0x0000[0x1c0];
    uint64_t value_0x01c0; /**< Read by auto_return_field_01916730; meaning unknown. */
};
static_assert(offsetof(Object01916730, value_0x01c0) == 0x1c0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01916730(const Object01916730 *self)
{
    return self->value_0x01c0;
}

/**
 *
 * The part of the object that auto_return_field_01916c70 reads.
 *
 */
struct Object01916c70 {
    uint8_t unknown_0x0000[0xf0];
    uint64_t value_0x00f0; /**< Read by auto_return_field_01916c70; meaning unknown. */
};
static_assert(offsetof(Object01916c70, value_0x00f0) == 0xf0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01916c70(const Object01916c70 *self)
{
    return self->value_0x00f0;
}

/**
 *
 * The part of the object that auto_return_field_01916f90 reads.
 *
 */
struct Object01916f90 {
    uint8_t unknown_0x0000[0x1c8];
    uint64_t value_0x01c8; /**< Read by auto_return_field_01916f90; meaning unknown. */
};
static_assert(offsetof(Object01916f90, value_0x01c8) == 0x1c8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01916f90(const Object01916f90 *self)
{
    return self->value_0x01c8;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01916fa0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_float_field_019173c0 reads.
 *
 */
struct Object019173c0 {
    uint8_t unknown_0x0000[0x1dc];
    float value_0x01dc; /**< Read by auto_return_float_field_019173c0; meaning unknown. */
};
static_assert(offsetof(Object019173c0, value_0x01dc) == 0x1dc);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_019173c0(const Object019173c0 *self)
{
    return self->value_0x01dc;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01918220()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_019187b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_019187c0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_019187e0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_019187f0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01918800()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01918810()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01918820()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01918830()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01918840 = 0xa;

extern "C" uint32_t bb_auto_return_constant_01918840()
{
    return value_01918840;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01918850()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01918860()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01918870()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_019188c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01918920()
{
}

/**
 *
 * The part of the object that auto_return_field_019189b0 reads.
 *
 */
struct Object019189b0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_019189b0; meaning unknown. */
};
static_assert(offsetof(Object019189b0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_019189b0(const Object019189b0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_019189c0 reads.
 *
 */
struct Object019189c0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_019189c0; meaning unknown. */
};
static_assert(offsetof(Object019189c0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_019189c0(const Object019189c0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01918a10()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01918c90 = 0x2a0;

extern "C" uint32_t bb_auto_return_constant_01918c90()
{
    return value_01918c90;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01919200()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01919cb0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01919ce0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01919cf0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01919d00()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01919d10()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01919d20()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01919d30()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01919d40()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01919d50()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01919d60()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01919d70()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01919d80()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01919d90()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01919da0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01919dc0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01919dd0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01919de0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01919df0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01919e00()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01919e10()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01919e20()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01919e30()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01919e40()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01919e50()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01919e60()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01919e70 = 0xffffffff;

extern "C" uint32_t bb_auto_return_constant_01919e70()
{
    return value_01919e70;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01919e80()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01919e90()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01919ea0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01919ec0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01919ed0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01919ee0()
{
}

/**
 *
 * The part of the object that auto_return_field_01919f20 reads.
 *
 */
struct Object01919f20 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01919f20; meaning unknown. */
};
static_assert(offsetof(Object01919f20, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01919f20(const Object01919f20 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01919f30 reads.
 *
 */
struct Object01919f30 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01919f30; meaning unknown. */
};
static_assert(offsetof(Object01919f30, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01919f30(const Object01919f30 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01919f80()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0191a200 = 0xb0;

extern "C" uint32_t bb_auto_return_constant_0191a200()
{
    return value_0191a200;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0191b7f0 = 0x6;

extern "C" uint32_t bb_auto_return_constant_0191b7f0()
{
    return value_0191b7f0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0191cda0()
{
}

/**
 *
 * The part of the object that auto_return_field_0191d410 reads.
 *
 */
struct Object0191d410 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0191d410; meaning unknown. */
};
static_assert(offsetof(Object0191d410, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0191d410(const Object0191d410 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0191d420 reads.
 *
 */
struct Object0191d420 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0191d420; meaning unknown. */
};
static_assert(offsetof(Object0191d420, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0191d420(const Object0191d420 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0191d470()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0191d6f0 = 0x120;

extern "C" uint32_t bb_auto_return_constant_0191d6f0()
{
    return value_0191d6f0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0191eb60()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_0191f180 reads.
 *
 */
struct Object0191f180 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0191f180; meaning unknown. */
};
static_assert(offsetof(Object0191f180, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0191f180(const Object0191f180 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0191f190 reads.
 *
 */
struct Object0191f190 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0191f190; meaning unknown. */
};
static_assert(offsetof(Object0191f190, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0191f190(const Object0191f190 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0191f1e0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0191f460 = 0x2c0;

extern "C" uint32_t bb_auto_return_constant_0191f460()
{
    return value_0191f460;
}
