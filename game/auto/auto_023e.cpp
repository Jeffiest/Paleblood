// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_023e15f0 reads.
 *
 */
struct Object023e15f0 {
    uint8_t unknown_0x0000[0x58];
    uint8_t value_0x0058; /**< Read by auto_return_field_023e15f0; meaning unknown. */
};
static_assert(offsetof(Object023e15f0, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_023e15f0(const Object023e15f0 *self)
{
    return self->value_0x0058;
}

/**
 *
 * The part of the object that auto_return_field_023e21c0 reads.
 *
 */
struct Object023e21c0 {
    uint8_t unknown_0x0000[0x50];
    uint32_t value_0x0050; /**< Read by auto_return_field_023e21c0; meaning unknown. */
};
static_assert(offsetof(Object023e21c0, value_0x0050) == 0x50);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_023e21c0(const Object023e21c0 *self)
{
    return self->value_0x0050;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_023e2290()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_023e22a0()
{
}

/**
 *
 * The part of the object that auto_return_field_023e2590 reads.
 *
 */
struct Object023e2590 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_023e2590; meaning unknown. */
};
static_assert(offsetof(Object023e2590, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023e2590(const Object023e2590 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_023e25a0 reads.
 *
 */
struct Object023e25a0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_023e25a0; meaning unknown. */
};
static_assert(offsetof(Object023e25a0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023e25a0(const Object023e25a0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_023e25f0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_023e2870 = 0xf0;

extern "C" uint32_t bb_auto_return_constant_023e2870()
{
    return value_023e2870;
}

/**
 *
 * The part of the object that auto_return_field_023e28b0 reads.
 *
 */
struct Object023e28b0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_023e28b0; meaning unknown. */
};
static_assert(offsetof(Object023e28b0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023e28b0(const Object023e28b0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_023e28c0 reads.
 *
 */
struct Object023e28c0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_023e28c0; meaning unknown. */
};
static_assert(offsetof(Object023e28c0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023e28c0(const Object023e28c0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_023e2910()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_023e2b90 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_023e2b90()
{
    return value_023e2b90;
}

/**
 *
 * The part of the object that auto_return_field_023e2bd0 reads.
 *
 */
struct Object023e2bd0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_023e2bd0; meaning unknown. */
};
static_assert(offsetof(Object023e2bd0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023e2bd0(const Object023e2bd0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_023e2be0 reads.
 *
 */
struct Object023e2be0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_023e2be0; meaning unknown. */
};
static_assert(offsetof(Object023e2be0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023e2be0(const Object023e2be0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_023e2c30()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_023e2eb0 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_023e2eb0()
{
    return value_023e2eb0;
}

/**
 *
 * The part of the object that auto_return_field_023e2ef0 reads.
 *
 */
struct Object023e2ef0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_023e2ef0; meaning unknown. */
};
static_assert(offsetof(Object023e2ef0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023e2ef0(const Object023e2ef0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_023e2f00 reads.
 *
 */
struct Object023e2f00 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_023e2f00; meaning unknown. */
};
static_assert(offsetof(Object023e2f00, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023e2f00(const Object023e2f00 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_023e2f50()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_023e31d0 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_023e31d0()
{
    return value_023e31d0;
}

/**
 *
 * The part of the object that auto_return_field_023e3f50 reads.
 *
 */
struct Object023e3f50 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_023e3f50; meaning unknown. */
};
static_assert(offsetof(Object023e3f50, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023e3f50(const Object023e3f50 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_023e3f60 reads.
 *
 */
struct Object023e3f60 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_023e3f60; meaning unknown. */
};
static_assert(offsetof(Object023e3f60, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023e3f60(const Object023e3f60 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_023e3fb0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_023e4230 = 0x88;

extern "C" uint32_t bb_auto_return_constant_023e4230()
{
    return value_023e4230;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_023e74e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_023e7540()
{
}

/**
 *
 * The part of the object that auto_return_field_023e88e0 reads.
 *
 */
struct Object023e88e0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_023e88e0; meaning unknown. */
};
static_assert(offsetof(Object023e88e0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023e88e0(const Object023e88e0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_023e88f0 reads.
 *
 */
struct Object023e88f0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_023e88f0; meaning unknown. */
};
static_assert(offsetof(Object023e88f0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023e88f0(const Object023e88f0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_023e8940()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_023e8bc0 = 0x98;

extern "C" uint32_t bb_auto_return_constant_023e8bc0()
{
    return value_023e8bc0;
}

/**
 *
 * The part of the object that auto_return_field_023ed0a0 reads.
 *
 */
struct Object023ed0a0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_023ed0a0; meaning unknown. */
};
static_assert(offsetof(Object023ed0a0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023ed0a0(const Object023ed0a0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_023ed0b0 reads.
 *
 */
struct Object023ed0b0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_023ed0b0; meaning unknown. */
};
static_assert(offsetof(Object023ed0b0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023ed0b0(const Object023ed0b0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_023ed100()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_023ed380 = 0x8;

extern "C" uint32_t bb_auto_return_constant_023ed380()
{
    return value_023ed380;
}
