// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_023287b0 reads.
 *
 */
struct Object023287b0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_023287b0; meaning unknown. */
};
static_assert(offsetof(Object023287b0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023287b0(const Object023287b0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_023287c0 reads.
 *
 */
struct Object023287c0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_023287c0; meaning unknown. */
};
static_assert(offsetof(Object023287c0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023287c0(const Object023287c0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02328810()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02328a90 = 0x1230;

extern "C" uint32_t bb_auto_return_constant_02328a90()
{
    return value_02328a90;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0232a100 = 0x2a;

extern "C" uint32_t bb_auto_return_constant_0232a100()
{
    return value_0232a100;
}

/**
 *
 * The part of the object that auto_return_field_0232d650 reads.
 *
 */
struct Object0232d650 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0232d650; meaning unknown. */
};
static_assert(offsetof(Object0232d650, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0232d650(const Object0232d650 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0232d660 reads.
 *
 */
struct Object0232d660 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0232d660; meaning unknown. */
};
static_assert(offsetof(Object0232d660, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0232d660(const Object0232d660 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0232d6b0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0232d930 = 0x140;

extern "C" uint32_t bb_auto_return_constant_0232d930()
{
    return value_0232d930;
}

/**
 *
 * The part of the object that auto_return_field_0232f3e0 reads.
 *
 */
struct Object0232f3e0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0232f3e0; meaning unknown. */
};
static_assert(offsetof(Object0232f3e0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0232f3e0(const Object0232f3e0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0232f3f0 reads.
 *
 */
struct Object0232f3f0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0232f3f0; meaning unknown. */
};
static_assert(offsetof(Object0232f3f0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0232f3f0(const Object0232f3f0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0232f440()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0232f6c0 = 0x80;

extern "C" uint32_t bb_auto_return_constant_0232f6c0()
{
    return value_0232f6c0;
}
