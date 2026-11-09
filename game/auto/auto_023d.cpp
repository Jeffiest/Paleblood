// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_023d0020 reads.
 *
 */
struct Object023d0020 {
    uint8_t unknown_0x0000[0x58];
    uint8_t value_0x0058; /**< Read by auto_return_field_023d0020; meaning unknown. */
};
static_assert(offsetof(Object023d0020, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_023d0020(const Object023d0020 *self)
{
    return self->value_0x0058;
}

/**
 *
 * The part of the object that auto_return_field_023d0c00 reads.
 *
 */
struct Object023d0c00 {
    uint8_t unknown_0x0000[0x50];
    uint32_t value_0x0050; /**< Read by auto_return_field_023d0c00; meaning unknown. */
};
static_assert(offsetof(Object023d0c00, value_0x0050) == 0x50);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_023d0c00(const Object023d0c00 *self)
{
    return self->value_0x0050;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_023d0cd0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_023d0ce0()
{
}

/**
 *
 * The part of the object that auto_return_field_023d1070 reads.
 *
 */
struct Object023d1070 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_023d1070; meaning unknown. */
};
static_assert(offsetof(Object023d1070, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023d1070(const Object023d1070 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_023d1080 reads.
 *
 */
struct Object023d1080 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_023d1080; meaning unknown. */
};
static_assert(offsetof(Object023d1080, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023d1080(const Object023d1080 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_023d10d0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_023d1350 = 0x5f8;

extern "C" uint32_t bb_auto_return_constant_023d1350()
{
    return value_023d1350;
}

/**
 *
 * The part of the object that auto_return_field_023d1390 reads.
 *
 */
struct Object023d1390 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_023d1390; meaning unknown. */
};
static_assert(offsetof(Object023d1390, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023d1390(const Object023d1390 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_023d13a0 reads.
 *
 */
struct Object023d13a0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_023d13a0; meaning unknown. */
};
static_assert(offsetof(Object023d13a0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023d13a0(const Object023d13a0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_023d13f0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_023d1670 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_023d1670()
{
    return value_023d1670;
}

/**
 *
 * The part of the object that auto_return_field_023d16b0 reads.
 *
 */
struct Object023d16b0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_023d16b0; meaning unknown. */
};
static_assert(offsetof(Object023d16b0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023d16b0(const Object023d16b0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_023d16c0 reads.
 *
 */
struct Object023d16c0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_023d16c0; meaning unknown. */
};
static_assert(offsetof(Object023d16c0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023d16c0(const Object023d16c0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_023d1710()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_023d1990 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_023d1990()
{
    return value_023d1990;
}

/**
 *
 * The part of the object that auto_return_field_023d19d0 reads.
 *
 */
struct Object023d19d0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_023d19d0; meaning unknown. */
};
static_assert(offsetof(Object023d19d0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023d19d0(const Object023d19d0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_023d19e0 reads.
 *
 */
struct Object023d19e0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_023d19e0; meaning unknown. */
};
static_assert(offsetof(Object023d19e0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023d19e0(const Object023d19e0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_023d1a30()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_023d1cb0 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_023d1cb0()
{
    return value_023d1cb0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_023d4420()
{
}

/**
 *
 * The part of the object that auto_return_field_023d7fb0 reads.
 *
 */
struct Object023d7fb0 {
    uint8_t unknown_0x0000[0x58];
    uint32_t value_0x0058; /**< Read by auto_return_field_023d7fb0; meaning unknown. */
};
static_assert(offsetof(Object023d7fb0, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_023d7fb0(const Object023d7fb0 *self)
{
    return self->value_0x0058;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_023d8080()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_023d8090()
{
}

/**
 *
 * The part of the object that auto_return_field_023d8300 reads.
 *
 */
struct Object023d8300 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_023d8300; meaning unknown. */
};
static_assert(offsetof(Object023d8300, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023d8300(const Object023d8300 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_023d8310 reads.
 *
 */
struct Object023d8310 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_023d8310; meaning unknown. */
};
static_assert(offsetof(Object023d8310, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023d8310(const Object023d8310 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_023d8360()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_023d85e0 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_023d85e0()
{
    return value_023d85e0;
}

/**
 *
 * The part of the object that auto_return_field_023d8620 reads.
 *
 */
struct Object023d8620 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_023d8620; meaning unknown. */
};
static_assert(offsetof(Object023d8620, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023d8620(const Object023d8620 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_023d8630 reads.
 *
 */
struct Object023d8630 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_023d8630; meaning unknown. */
};
static_assert(offsetof(Object023d8630, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023d8630(const Object023d8630 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_023d8680()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_023d8900 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_023d8900()
{
    return value_023d8900;
}

/**
 *
 * The part of the object that auto_return_field_023d8940 reads.
 *
 */
struct Object023d8940 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_023d8940; meaning unknown. */
};
static_assert(offsetof(Object023d8940, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023d8940(const Object023d8940 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_023d8950 reads.
 *
 */
struct Object023d8950 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_023d8950; meaning unknown. */
};
static_assert(offsetof(Object023d8950, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023d8950(const Object023d8950 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_023d89a0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_023d8c20 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_023d8c20()
{
    return value_023d8c20;
}

/**
 *
 * The part of the object that auto_return_field_023d8c60 reads.
 *
 */
struct Object023d8c60 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_023d8c60; meaning unknown. */
};
static_assert(offsetof(Object023d8c60, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023d8c60(const Object023d8c60 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_023d8c70 reads.
 *
 */
struct Object023d8c70 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_023d8c70; meaning unknown. */
};
static_assert(offsetof(Object023d8c70, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023d8c70(const Object023d8c70 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_023d8cc0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_023d8f40 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_023d8f40()
{
    return value_023d8f40;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_023d9e20()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_023da7a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_023ddfe0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_023de040()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_023de530()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_023de540()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_023de550()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_023de560()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_023de580()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_023debe0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_023debf0()
{
}
