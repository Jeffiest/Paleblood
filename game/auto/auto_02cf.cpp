// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02cf5720()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_02cf99a0 reads.
 *
 */
struct Object02cf99a0 {
    uint8_t unknown_0x0000[0x170];
    uint64_t value_0x0170; /**< Read by auto_return_field_02cf99a0; meaning unknown. */
};
static_assert(offsetof(Object02cf99a0, value_0x0170) == 0x170);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cf99a0(const Object02cf99a0 *self)
{
    return self->value_0x0170;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02cf9a10 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02cf9a10()
{
    return value_02cf9a10;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02cf9a20()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_02cfa5a0 reads.
 *
 */
struct Object02cfa5a0 {
    uint8_t unknown_0x0000[0xd0];
    uint64_t value_0x00d0; /**< Read by auto_return_field_02cfa5a0; meaning unknown. */
};
static_assert(offsetof(Object02cfa5a0, value_0x00d0) == 0xd0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cfa5a0(const Object02cfa5a0 *self)
{
    return self->value_0x00d0;
}

/**
 *
 * The part of the object that auto_return_field_02cfa5b0 reads.
 *
 */
struct Object02cfa5b0 {
    uint8_t unknown_0x0000[0xd8];
    uint64_t value_0x00d8; /**< Read by auto_return_field_02cfa5b0; meaning unknown. */
};
static_assert(offsetof(Object02cfa5b0, value_0x00d8) == 0xd8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02cfa5b0(const Object02cfa5b0 *self)
{
    return self->value_0x00d8;
}

/**
 *
 * The part of the object that auto_return_field_02cfa5c0 reads.
 *
 */
struct Object02cfa5c0 {
    uint8_t unknown_0x0000[0xe0];
    uint32_t value_0x00e0; /**< Read by auto_return_field_02cfa5c0; meaning unknown. */
};
static_assert(offsetof(Object02cfa5c0, value_0x00e0) == 0xe0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02cfa5c0(const Object02cfa5c0 *self)
{
    return self->value_0x00e0;
}

/**
 *
 * The part of the object that auto_return_field_02cfa5d0 reads.
 *
 */
struct Object02cfa5d0 {
    uint8_t unknown_0x0000[0xe4];
    uint32_t value_0x00e4; /**< Read by auto_return_field_02cfa5d0; meaning unknown. */
};
static_assert(offsetof(Object02cfa5d0, value_0x00e4) == 0xe4);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02cfa5d0(const Object02cfa5d0 *self)
{
    return self->value_0x00e4;
}

/**
 *
 * The part of the object that auto_return_field_02cfa5e0 reads.
 *
 */
struct Object02cfa5e0 {
    uint8_t unknown_0x0000[0xe8];
    uint32_t value_0x00e8; /**< Read by auto_return_field_02cfa5e0; meaning unknown. */
};
static_assert(offsetof(Object02cfa5e0, value_0x00e8) == 0xe8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02cfa5e0(const Object02cfa5e0 *self)
{
    return self->value_0x00e8;
}

/**
 *
 * The part of the object that auto_return_field_02cfa5f0 reads.
 *
 */
struct Object02cfa5f0 {
    uint8_t unknown_0x0000[0xec];
    uint32_t value_0x00ec; /**< Read by auto_return_field_02cfa5f0; meaning unknown. */
};
static_assert(offsetof(Object02cfa5f0, value_0x00ec) == 0xec);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02cfa5f0(const Object02cfa5f0 *self)
{
    return self->value_0x00ec;
}

/**
 *
 * The part of the object that auto_return_field_02cfa600 reads.
 *
 */
struct Object02cfa600 {
    uint8_t unknown_0x0000[0xf0];
    uint32_t value_0x00f0; /**< Read by auto_return_field_02cfa600; meaning unknown. */
};
static_assert(offsetof(Object02cfa600, value_0x00f0) == 0xf0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02cfa600(const Object02cfa600 *self)
{
    return self->value_0x00f0;
}

/**
 *
 * The part of the object that auto_return_field_02cfa610 reads.
 *
 */
struct Object02cfa610 {
    uint8_t unknown_0x0000[0xf4];
    uint32_t value_0x00f4; /**< Read by auto_return_field_02cfa610; meaning unknown. */
};
static_assert(offsetof(Object02cfa610, value_0x00f4) == 0xf4);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02cfa610(const Object02cfa610 *self)
{
    return self->value_0x00f4;
}

/**
 *
 * The part of the object that auto_return_field_02cfdd50 reads.
 *
 */
struct Object02cfdd50 {
    uint8_t unknown_0x0000[0x2dd];
    uint8_t value_0x02dd; /**< Read by auto_return_field_02cfdd50; meaning unknown. */
};
static_assert(offsetof(Object02cfdd50, value_0x02dd) == 0x2dd);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02cfdd50(const Object02cfdd50 *self)
{
    return self->value_0x02dd;
}

/**
 *
 * The part of the object that auto_return_field_02cffeb0 reads.
 *
 */
struct Object02cffeb0 {
    uint8_t unknown_0x0000[0x10];
    uint32_t value_0x0010; /**< Read by auto_return_field_02cffeb0; meaning unknown. */
};
static_assert(offsetof(Object02cffeb0, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02cffeb0(const Object02cffeb0 *self)
{
    return self->value_0x0010;
}
