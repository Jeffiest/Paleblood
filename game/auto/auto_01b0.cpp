// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b00050()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b00e20()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01b00e40()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01b00f90 reads.
 *
 */
struct Object01b00f90 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01b00f90; meaning unknown. */
};
static_assert(offsetof(Object01b00f90, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01b00f90(const Object01b00f90 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01b00fa0 reads.
 *
 */
struct Object01b00fa0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01b00fa0; meaning unknown. */
};
static_assert(offsetof(Object01b00fa0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01b00fa0(const Object01b00fa0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01b00ff0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01b01270 = 0x1a8;

extern "C" uint32_t bb_auto_return_constant_01b01270()
{
    return value_01b01270;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b056c0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01b056e0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01b05830 reads.
 *
 */
struct Object01b05830 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01b05830; meaning unknown. */
};
static_assert(offsetof(Object01b05830, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01b05830(const Object01b05830 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01b05840 reads.
 *
 */
struct Object01b05840 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01b05840; meaning unknown. */
};
static_assert(offsetof(Object01b05840, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01b05840(const Object01b05840 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01b05890()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01b05b10 = 0x2a8;

extern "C" uint32_t bb_auto_return_constant_01b05b10()
{
    return value_01b05b10;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b06780()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b08100()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b08f80()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01b08fa0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01b090f0 reads.
 *
 */
struct Object01b090f0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01b090f0; meaning unknown. */
};
static_assert(offsetof(Object01b090f0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01b090f0(const Object01b090f0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01b09100 reads.
 *
 */
struct Object01b09100 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01b09100; meaning unknown. */
};
static_assert(offsetof(Object01b09100, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01b09100(const Object01b09100 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01b09150()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01b093d0 = 0x330;

extern "C" uint32_t bb_auto_return_constant_01b093d0()
{
    return value_01b093d0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b0c2d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b0d0b0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01b0d0d0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01b0d220 reads.
 *
 */
struct Object01b0d220 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01b0d220; meaning unknown. */
};
static_assert(offsetof(Object01b0d220, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01b0d220(const Object01b0d220 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01b0d230 reads.
 *
 */
struct Object01b0d230 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01b0d230; meaning unknown. */
};
static_assert(offsetof(Object01b0d230, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01b0d230(const Object01b0d230 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01b0d280()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01b0d500 = 0x1f8;

extern "C" uint32_t bb_auto_return_constant_01b0d500()
{
    return value_01b0d500;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b0e910()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b0f7e0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01b0f800()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01b0f950 reads.
 *
 */
struct Object01b0f950 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01b0f950; meaning unknown. */
};
static_assert(offsetof(Object01b0f950, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01b0f950(const Object01b0f950 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01b0f960 reads.
 *
 */
struct Object01b0f960 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01b0f960; meaning unknown. */
};
static_assert(offsetof(Object01b0f960, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01b0f960(const Object01b0f960 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01b0f9b0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01b0fc30 = 0x1d0;

extern "C" uint32_t bb_auto_return_constant_01b0fc30()
{
    return value_01b0fc30;
}
