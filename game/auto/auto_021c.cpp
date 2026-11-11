// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_021c0c20()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_021c23c0 = 0x98;

extern "C" uint32_t bb_auto_return_constant_021c23c0()
{
    return value_021c23c0;
}

/**
 *
 * The part of the object that auto_return_field_021c3c10 reads.
 *
 */
struct Object021c3c10 {
    uint8_t unknown_0x0000[0x8];
    uint64_t value_0x0008; /**< Read by auto_return_field_021c3c10; meaning unknown. */
};
static_assert(offsetof(Object021c3c10, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_021c3c10(const Object021c3c10 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_021c4830 reads.
 *
 */
struct Object021c4830 {
    uint8_t unknown_0x0000[0xc0];
    uint32_t value_0x00c0; /**< Read by auto_return_field_021c4830; meaning unknown. */
};
static_assert(offsetof(Object021c4830, value_0x00c0) == 0xc0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_021c4830(const Object021c4830 *self)
{
    return self->value_0x00c0;
}

/**
 *
 * The part of the object that auto_return_field_021c5370 reads.
 *
 */
struct Object021c5370 {
    uint8_t unknown_0x0000[0x8];
    uint64_t value_0x0008; /**< Read by auto_return_field_021c5370; meaning unknown. */
};
static_assert(offsetof(Object021c5370, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_021c5370(const Object021c5370 *self)
{
    return self->value_0x0008;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_021c6330()
{
}

/**
 *
 * The part of the object that auto_return_field_021c81e0 reads.
 *
 */
struct Object021c81e0 {
    uint8_t unknown_0x0000[0x64];
    uint8_t value_0x0064; /**< Read by auto_return_field_021c81e0; meaning unknown. */
};
static_assert(offsetof(Object021c81e0, value_0x0064) == 0x64);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_021c81e0(const Object021c81e0 *self)
{
    return self->value_0x0064;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_021c84a0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_021c84a0()
{
    return value_021c84a0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_021c84b0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_021c84b0()
{
    return value_021c84b0;
}

/**
 *
 * The part of the object that auto_return_field_021cade0 reads.
 *
 */
struct Object021cade0 {
    uint8_t unknown_0x0000[0xb8];
    uint64_t value_0x00b8; /**< Read by auto_return_field_021cade0; meaning unknown. */
};
static_assert(offsetof(Object021cade0, value_0x00b8) == 0xb8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_021cade0(const Object021cade0 *self)
{
    return self->value_0x00b8;
}

/**
 *
 * The part of the object that auto_return_field_021cb0e0 reads.
 *
 */
struct Object021cb0e0 {
    uint8_t unknown_0x0000[0xa0];
    uint64_t value_0x00a0; /**< Read by auto_return_field_021cb0e0; meaning unknown. */
};
static_assert(offsetof(Object021cb0e0, value_0x00a0) == 0xa0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_021cb0e0(const Object021cb0e0 *self)
{
    return self->value_0x00a0;
}

/**
 *
 * The part of the object that auto_return_field_021cb0f0 reads.
 *
 */
struct Object021cb0f0 {
    uint8_t unknown_0x0000[0xa8];
    uint64_t value_0x00a8; /**< Read by auto_return_field_021cb0f0; meaning unknown. */
};
static_assert(offsetof(Object021cb0f0, value_0x00a8) == 0xa8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_021cb0f0(const Object021cb0f0 *self)
{
    return self->value_0x00a8;
}

/**
 *
 * The part of the object that auto_return_field_021cb100 reads.
 *
 */
struct Object021cb100 {
    uint8_t unknown_0x0000[0xb0];
    uint64_t value_0x00b0; /**< Read by auto_return_field_021cb100; meaning unknown. */
};
static_assert(offsetof(Object021cb100, value_0x00b0) == 0xb0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_021cb100(const Object021cb100 *self)
{
    return self->value_0x00b0;
}

/**
 *
 * The part of the object that auto_return_field_021cb4e0 reads.
 *
 */
struct Object021cb4e0 {
    uint8_t unknown_0x0000[0x90];
    uint64_t value_0x0090; /**< Read by auto_return_field_021cb4e0; meaning unknown. */
};
static_assert(offsetof(Object021cb4e0, value_0x0090) == 0x90);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_021cb4e0(const Object021cb4e0 *self)
{
    return self->value_0x0090;
}
