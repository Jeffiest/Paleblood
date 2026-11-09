// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a00320()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a00340()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01a00490 reads.
 *
 */
struct Object01a00490 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01a00490; meaning unknown. */
};
static_assert(offsetof(Object01a00490, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a00490(const Object01a00490 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01a004a0 reads.
 *
 */
struct Object01a004a0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01a004a0; meaning unknown. */
};
static_assert(offsetof(Object01a004a0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a004a0(const Object01a004a0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a004f0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01a00770 = 0x1f0;

extern "C" uint32_t bb_auto_return_constant_01a00770()
{
    return value_01a00770;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a02220()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a02240()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01a02390 reads.
 *
 */
struct Object01a02390 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01a02390; meaning unknown. */
};
static_assert(offsetof(Object01a02390, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a02390(const Object01a02390 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01a023a0 reads.
 *
 */
struct Object01a023a0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01a023a0; meaning unknown. */
};
static_assert(offsetof(Object01a023a0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a023a0(const Object01a023a0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a023f0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01a02670 = 0x1e8;

extern "C" uint32_t bb_auto_return_constant_01a02670()
{
    return value_01a02670;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a056f0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a05710()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01a05860 reads.
 *
 */
struct Object01a05860 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01a05860; meaning unknown. */
};
static_assert(offsetof(Object01a05860, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a05860(const Object01a05860 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01a05870 reads.
 *
 */
struct Object01a05870 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01a05870; meaning unknown. */
};
static_assert(offsetof(Object01a05870, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a05870(const Object01a05870 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a058c0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01a05b40 = 0x1a8;

extern "C" uint32_t bb_auto_return_constant_01a05b40()
{
    return value_01a05b40;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a07e70()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a08140()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a08160()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01a082b0 reads.
 *
 */
struct Object01a082b0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01a082b0; meaning unknown. */
};
static_assert(offsetof(Object01a082b0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a082b0(const Object01a082b0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01a082c0 reads.
 *
 */
struct Object01a082c0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01a082c0; meaning unknown. */
};
static_assert(offsetof(Object01a082c0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a082c0(const Object01a082c0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a08310()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01a08590 = 0x188;

extern "C" uint32_t bb_auto_return_constant_01a08590()
{
    return value_01a08590;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a0d8f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a0dbc0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a0dbe0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01a0dd30 reads.
 *
 */
struct Object01a0dd30 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01a0dd30; meaning unknown. */
};
static_assert(offsetof(Object01a0dd30, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a0dd30(const Object01a0dd30 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01a0dd40 reads.
 *
 */
struct Object01a0dd40 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01a0dd40; meaning unknown. */
};
static_assert(offsetof(Object01a0dd40, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a0dd40(const Object01a0dd40 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a0dd90()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01a0e010 = 0x188;

extern "C" uint32_t bb_auto_return_constant_01a0e010()
{
    return value_01a0e010;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_01a0e200 = 0x1;

extern "C" uint8_t bb_auto_return_constant_01a0e200()
{
    return value_01a0e200;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a0f1a0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a0f1c0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01a0f310 reads.
 *
 */
struct Object01a0f310 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01a0f310; meaning unknown. */
};
static_assert(offsetof(Object01a0f310, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a0f310(const Object01a0f310 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01a0f320 reads.
 *
 */
struct Object01a0f320 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01a0f320; meaning unknown. */
};
static_assert(offsetof(Object01a0f320, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a0f320(const Object01a0f320 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a0f370()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01a0f5f0 = 0x188;

extern "C" uint32_t bb_auto_return_constant_01a0f5f0()
{
    return value_01a0f5f0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_01a0f7e0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_01a0f7e0()
{
    return value_01a0f7e0;
}
