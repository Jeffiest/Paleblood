// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_023f9800()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_023f9820()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_023f9ba0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_023f9ee0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_023f9f40()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_023fa6d0()
{
}

/**
 *
 * The part of the object that auto_return_field_023faaa0 reads.
 *
 */
struct Object023faaa0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_023faaa0; meaning unknown. */
};
static_assert(offsetof(Object023faaa0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023faaa0(const Object023faaa0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_023faab0 reads.
 *
 */
struct Object023faab0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_023faab0; meaning unknown. */
};
static_assert(offsetof(Object023faab0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023faab0(const Object023faab0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_023fab00()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_023fad80 = 0x18;

extern "C" uint32_t bb_auto_return_constant_023fad80()
{
    return value_023fad80;
}

/**
 *
 * The part of the object that auto_return_field_023fcfe0 reads.
 *
 */
struct Object023fcfe0 {
    uint8_t unknown_0x0000[0x58];
    uint32_t value_0x0058; /**< Read by auto_return_field_023fcfe0; meaning unknown. */
};
static_assert(offsetof(Object023fcfe0, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_023fcfe0(const Object023fcfe0 *self)
{
    return self->value_0x0058;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_023fd0b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_023fd0c0()
{
}

/**
 *
 * The part of the object that auto_return_field_023fd330 reads.
 *
 */
struct Object023fd330 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_023fd330; meaning unknown. */
};
static_assert(offsetof(Object023fd330, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023fd330(const Object023fd330 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_023fd340 reads.
 *
 */
struct Object023fd340 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_023fd340; meaning unknown. */
};
static_assert(offsetof(Object023fd340, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023fd340(const Object023fd340 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_023fd390()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_023fd610 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_023fd610()
{
    return value_023fd610;
}

/**
 *
 * The part of the object that auto_return_field_023fd650 reads.
 *
 */
struct Object023fd650 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_023fd650; meaning unknown. */
};
static_assert(offsetof(Object023fd650, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023fd650(const Object023fd650 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_023fd660 reads.
 *
 */
struct Object023fd660 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_023fd660; meaning unknown. */
};
static_assert(offsetof(Object023fd660, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023fd660(const Object023fd660 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_023fd6b0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_023fd930 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_023fd930()
{
    return value_023fd930;
}

/**
 *
 * The part of the object that auto_return_field_023fd970 reads.
 *
 */
struct Object023fd970 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_023fd970; meaning unknown. */
};
static_assert(offsetof(Object023fd970, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023fd970(const Object023fd970 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_023fd980 reads.
 *
 */
struct Object023fd980 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_023fd980; meaning unknown. */
};
static_assert(offsetof(Object023fd980, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023fd980(const Object023fd980 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_023fd9d0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_023fdc50 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_023fdc50()
{
    return value_023fdc50;
}

/**
 *
 * The part of the object that auto_return_field_023fdc90 reads.
 *
 */
struct Object023fdc90 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_023fdc90; meaning unknown. */
};
static_assert(offsetof(Object023fdc90, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023fdc90(const Object023fdc90 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_023fdca0 reads.
 *
 */
struct Object023fdca0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_023fdca0; meaning unknown. */
};
static_assert(offsetof(Object023fdca0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023fdca0(const Object023fdca0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_023fdcf0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_023fdf70 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_023fdf70()
{
    return value_023fdf70;
}
