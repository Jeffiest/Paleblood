// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01af01b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01af1680()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01af16a0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01af17f0 reads.
 *
 */
struct Object01af17f0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01af17f0; meaning unknown. */
};
static_assert(offsetof(Object01af17f0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01af17f0(const Object01af17f0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01af1800 reads.
 *
 */
struct Object01af1800 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01af1800; meaning unknown. */
};
static_assert(offsetof(Object01af1800, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01af1800(const Object01af1800 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01af1850()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01af1ad0 = 0x188;

extern "C" uint32_t bb_auto_return_constant_01af1ad0()
{
    return value_01af1ad0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01af1d70()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01af1d90()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01af1ee0 reads.
 *
 */
struct Object01af1ee0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01af1ee0; meaning unknown. */
};
static_assert(offsetof(Object01af1ee0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01af1ee0(const Object01af1ee0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01af1ef0 reads.
 *
 */
struct Object01af1ef0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01af1ef0; meaning unknown. */
};
static_assert(offsetof(Object01af1ef0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01af1ef0(const Object01af1ef0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01af1f40()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01af21c0 = 0x1e0;

extern "C" uint32_t bb_auto_return_constant_01af21c0()
{
    return value_01af21c0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01af5820()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01af5840()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01af5990 reads.
 *
 */
struct Object01af5990 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01af5990; meaning unknown. */
};
static_assert(offsetof(Object01af5990, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01af5990(const Object01af5990 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01af59a0 reads.
 *
 */
struct Object01af59a0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01af59a0; meaning unknown. */
};
static_assert(offsetof(Object01af59a0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01af59a0(const Object01af59a0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01af59f0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01af5c70 = 0x188;

extern "C" uint32_t bb_auto_return_constant_01af5c70()
{
    return value_01af5c70;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01af82d0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01af82f0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01af8440 reads.
 *
 */
struct Object01af8440 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01af8440; meaning unknown. */
};
static_assert(offsetof(Object01af8440, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01af8440(const Object01af8440 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01af8450 reads.
 *
 */
struct Object01af8450 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01af8450; meaning unknown. */
};
static_assert(offsetof(Object01af8450, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01af8450(const Object01af8450 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01af84a0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01af8720 = 0x178;

extern "C" uint32_t bb_auto_return_constant_01af8720()
{
    return value_01af8720;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01afd380()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01afd390()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01afd3e0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01afd3f0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01afe000()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01afe020()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01afe170 reads.
 *
 */
struct Object01afe170 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01afe170; meaning unknown. */
};
static_assert(offsetof(Object01afe170, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01afe170(const Object01afe170 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01afe180 reads.
 *
 */
struct Object01afe180 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01afe180; meaning unknown. */
};
static_assert(offsetof(Object01afe180, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01afe180(const Object01afe180 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01afe1d0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01afe450 = 0x170;

extern "C" uint32_t bb_auto_return_constant_01afe450()
{
    return value_01afe450;
}
