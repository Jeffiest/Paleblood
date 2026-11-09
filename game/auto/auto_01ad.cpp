// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01ad04a0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01ad04c0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01ad0610 reads.
 *
 */
struct Object01ad0610 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01ad0610; meaning unknown. */
};
static_assert(offsetof(Object01ad0610, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01ad0610(const Object01ad0610 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01ad0620 reads.
 *
 */
struct Object01ad0620 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01ad0620; meaning unknown. */
};
static_assert(offsetof(Object01ad0620, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01ad0620(const Object01ad0620 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01ad0670()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01ad08f0 = 0x188;

extern "C" uint32_t bb_auto_return_constant_01ad08f0()
{
    return value_01ad08f0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01ad1cb0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01ad1cd0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01ad1e20 reads.
 *
 */
struct Object01ad1e20 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01ad1e20; meaning unknown. */
};
static_assert(offsetof(Object01ad1e20, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01ad1e20(const Object01ad1e20 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01ad1e30 reads.
 *
 */
struct Object01ad1e30 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01ad1e30; meaning unknown. */
};
static_assert(offsetof(Object01ad1e30, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01ad1e30(const Object01ad1e30 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01ad1e80()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01ad2100 = 0x178;

extern "C" uint32_t bb_auto_return_constant_01ad2100()
{
    return value_01ad2100;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01ad2290()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01ad4560()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01ad62b0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01ad62d0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01ad6420 reads.
 *
 */
struct Object01ad6420 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01ad6420; meaning unknown. */
};
static_assert(offsetof(Object01ad6420, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01ad6420(const Object01ad6420 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01ad6430 reads.
 *
 */
struct Object01ad6430 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01ad6430; meaning unknown. */
};
static_assert(offsetof(Object01ad6430, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01ad6430(const Object01ad6430 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01ad6480()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01ad6700 = 0x178;

extern "C" uint32_t bb_auto_return_constant_01ad6700()
{
    return value_01ad6700;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01ad7e90()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01ad7eb0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01ad8000 reads.
 *
 */
struct Object01ad8000 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01ad8000; meaning unknown. */
};
static_assert(offsetof(Object01ad8000, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01ad8000(const Object01ad8000 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01ad8010 reads.
 *
 */
struct Object01ad8010 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01ad8010; meaning unknown. */
};
static_assert(offsetof(Object01ad8010, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01ad8010(const Object01ad8010 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01ad8060()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01ad82e0 = 0x180;

extern "C" uint32_t bb_auto_return_constant_01ad82e0()
{
    return value_01ad82e0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01ad8ca0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01adab40()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01adab60()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01adacb0 reads.
 *
 */
struct Object01adacb0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01adacb0; meaning unknown. */
};
static_assert(offsetof(Object01adacb0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01adacb0(const Object01adacb0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01adacc0 reads.
 *
 */
struct Object01adacc0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01adacc0; meaning unknown. */
};
static_assert(offsetof(Object01adacc0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01adacc0(const Object01adacc0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01adad10()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01adaf90 = 0x1c0;

extern "C" uint32_t bb_auto_return_constant_01adaf90()
{
    return value_01adaf90;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01adb0a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01add320()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01add500()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01add6d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01add8b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01addc60()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01addcc0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01adf5d0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01adf5f0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01adf740 reads.
 *
 */
struct Object01adf740 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01adf740; meaning unknown. */
};
static_assert(offsetof(Object01adf740, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01adf740(const Object01adf740 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01adf750 reads.
 *
 */
struct Object01adf750 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01adf750; meaning unknown. */
};
static_assert(offsetof(Object01adf750, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01adf750(const Object01adf750 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01adf7a0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01adfa20 = 0x198;

extern "C" uint32_t bb_auto_return_constant_01adfa20()
{
    return value_01adfa20;
}
