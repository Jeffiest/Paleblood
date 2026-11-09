// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_019f1060()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_019f1080()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_019f11d0 reads.
 *
 */
struct Object019f11d0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_019f11d0; meaning unknown. */
};
static_assert(offsetof(Object019f11d0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_019f11d0(const Object019f11d0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_019f11e0 reads.
 *
 */
struct Object019f11e0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_019f11e0; meaning unknown. */
};
static_assert(offsetof(Object019f11e0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_019f11e0(const Object019f11e0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_019f1230()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_019f14b0 = 0x1c8;

extern "C" uint32_t bb_auto_return_constant_019f14b0()
{
    return value_019f14b0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_019f2b70()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_019f2b90()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_019f2ce0 reads.
 *
 */
struct Object019f2ce0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_019f2ce0; meaning unknown. */
};
static_assert(offsetof(Object019f2ce0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_019f2ce0(const Object019f2ce0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_019f2cf0 reads.
 *
 */
struct Object019f2cf0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_019f2cf0; meaning unknown. */
};
static_assert(offsetof(Object019f2cf0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_019f2cf0(const Object019f2cf0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_019f2d40()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_019f2fc0 = 0x180;

extern "C" uint32_t bb_auto_return_constant_019f2fc0()
{
    return value_019f2fc0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_019f8360()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_019f8370 = 0x5;

extern "C" uint32_t bb_auto_return_constant_019f8370()
{
    return value_019f8370;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_019f8380()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_019f8390()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_019f83a0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_019f8910()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_019f8930()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_019f8a80 reads.
 *
 */
struct Object019f8a80 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_019f8a80; meaning unknown. */
};
static_assert(offsetof(Object019f8a80, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_019f8a80(const Object019f8a80 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_019f8a90 reads.
 *
 */
struct Object019f8a90 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_019f8a90; meaning unknown. */
};
static_assert(offsetof(Object019f8a90, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_019f8a90(const Object019f8a90 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_019f8ae0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_019f8d60 = 0x208;

extern "C" uint32_t bb_auto_return_constant_019f8d60()
{
    return value_019f8d60;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_019f9030 = 0x1;

extern "C" uint8_t bb_auto_return_constant_019f9030()
{
    return value_019f9030;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_019fa030()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_019fa300()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_019fa320()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_019fa470 reads.
 *
 */
struct Object019fa470 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_019fa470; meaning unknown. */
};
static_assert(offsetof(Object019fa470, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_019fa470(const Object019fa470 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_019fa480 reads.
 *
 */
struct Object019fa480 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_019fa480; meaning unknown. */
};
static_assert(offsetof(Object019fa480, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_019fa480(const Object019fa480 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_019fa4d0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_019fa750 = 0x188;

extern "C" uint32_t bb_auto_return_constant_019fa750()
{
    return value_019fa750;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_019fbd90()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_019fbdb0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_019fbf00 reads.
 *
 */
struct Object019fbf00 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_019fbf00; meaning unknown. */
};
static_assert(offsetof(Object019fbf00, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_019fbf00(const Object019fbf00 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_019fbf10 reads.
 *
 */
struct Object019fbf10 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_019fbf10; meaning unknown. */
};
static_assert(offsetof(Object019fbf10, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_019fbf10(const Object019fbf10 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_019fbf60()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_019fc1e0 = 0x180;

extern "C" uint32_t bb_auto_return_constant_019fc1e0()
{
    return value_019fc1e0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_019fe7b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_019ffef0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_019fff20 = 0x4;

extern "C" uint32_t bb_auto_return_constant_019fff20()
{
    return value_019fff20;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_019fff30()
{
    return 0;
}
