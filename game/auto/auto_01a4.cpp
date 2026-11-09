// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a406d0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a406f0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01a40840 reads.
 *
 */
struct Object01a40840 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01a40840; meaning unknown. */
};
static_assert(offsetof(Object01a40840, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a40840(const Object01a40840 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01a40850 reads.
 *
 */
struct Object01a40850 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01a40850; meaning unknown. */
};
static_assert(offsetof(Object01a40850, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a40850(const Object01a40850 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a408a0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01a40b20 = 0x170;

extern "C" uint32_t bb_auto_return_constant_01a40b20()
{
    return value_01a40b20;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a43550()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a43570()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01a436c0 reads.
 *
 */
struct Object01a436c0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01a436c0; meaning unknown. */
};
static_assert(offsetof(Object01a436c0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a436c0(const Object01a436c0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01a436d0 reads.
 *
 */
struct Object01a436d0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01a436d0; meaning unknown. */
};
static_assert(offsetof(Object01a436d0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a436d0(const Object01a436d0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a43720()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01a439a0 = 0x1b0;

extern "C" uint32_t bb_auto_return_constant_01a439a0()
{
    return value_01a439a0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a47e50()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a47e70()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01a47fc0 reads.
 *
 */
struct Object01a47fc0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01a47fc0; meaning unknown. */
};
static_assert(offsetof(Object01a47fc0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a47fc0(const Object01a47fc0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01a47fd0 reads.
 *
 */
struct Object01a47fd0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01a47fd0; meaning unknown. */
};
static_assert(offsetof(Object01a47fd0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a47fd0(const Object01a47fd0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a48020()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01a482a0 = 0x188;

extern "C" uint32_t bb_auto_return_constant_01a482a0()
{
    return value_01a482a0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a49a00()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a49a20()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01a49b70 reads.
 *
 */
struct Object01a49b70 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01a49b70; meaning unknown. */
};
static_assert(offsetof(Object01a49b70, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a49b70(const Object01a49b70 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01a49b80 reads.
 *
 */
struct Object01a49b80 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01a49b80; meaning unknown. */
};
static_assert(offsetof(Object01a49b80, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a49b80(const Object01a49b80 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a49bd0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01a49e50 = 0x190;

extern "C" uint32_t bb_auto_return_constant_01a49e50()
{
    return value_01a49e50;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a4afd0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a4aff0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01a4b140 reads.
 *
 */
struct Object01a4b140 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01a4b140; meaning unknown. */
};
static_assert(offsetof(Object01a4b140, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a4b140(const Object01a4b140 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01a4b150 reads.
 *
 */
struct Object01a4b150 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01a4b150; meaning unknown. */
};
static_assert(offsetof(Object01a4b150, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a4b150(const Object01a4b150 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a4b1a0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01a4b420 = 0x188;

extern "C" uint32_t bb_auto_return_constant_01a4b420()
{
    return value_01a4b420;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a4d540()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a4d560()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01a4d6b0 reads.
 *
 */
struct Object01a4d6b0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01a4d6b0; meaning unknown. */
};
static_assert(offsetof(Object01a4d6b0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a4d6b0(const Object01a4d6b0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01a4d6c0 reads.
 *
 */
struct Object01a4d6c0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01a4d6c0; meaning unknown. */
};
static_assert(offsetof(Object01a4d6c0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a4d6c0(const Object01a4d6c0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a4d710()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01a4d990 = 0x190;

extern "C" uint32_t bb_auto_return_constant_01a4d990()
{
    return value_01a4d990;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a4f260()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a4f270()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a4f280()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a4f290()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a4f570()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a4f590()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01a4f6e0 reads.
 *
 */
struct Object01a4f6e0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01a4f6e0; meaning unknown. */
};
static_assert(offsetof(Object01a4f6e0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a4f6e0(const Object01a4f6e0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01a4f6f0 reads.
 *
 */
struct Object01a4f6f0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01a4f6f0; meaning unknown. */
};
static_assert(offsetof(Object01a4f6f0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a4f6f0(const Object01a4f6f0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a4f740()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01a4f9c0 = 0x188;

extern "C" uint32_t bb_auto_return_constant_01a4f9c0()
{
    return value_01a4f9c0;
}
