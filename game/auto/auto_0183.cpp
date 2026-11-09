// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01830ba0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01830c00()
{
}

/**
 *
 * The part of the object that auto_return_field_01831f20 reads.
 *
 */
struct Object01831f20 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01831f20; meaning unknown. */
};
static_assert(offsetof(Object01831f20, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01831f20(const Object01831f20 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01831f30 reads.
 *
 */
struct Object01831f30 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01831f30; meaning unknown. */
};
static_assert(offsetof(Object01831f30, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01831f30(const Object01831f30 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01831f80()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01832200 = 0xe0;

extern "C" uint32_t bb_auto_return_constant_01832200()
{
    return value_01832200;
}

/**
 *
 * The part of the object that auto_return_field_018327b0 reads.
 *
 */
struct Object018327b0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_018327b0; meaning unknown. */
};
static_assert(offsetof(Object018327b0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_018327b0(const Object018327b0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_018327c0 reads.
 *
 */
struct Object018327c0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_018327c0; meaning unknown. */
};
static_assert(offsetof(Object018327c0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_018327c0(const Object018327c0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01832810()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01832a90 = 0x90;

extern "C" uint32_t bb_auto_return_constant_01832a90()
{
    return value_01832a90;
}

/**
 *
 * The part of the object that auto_return_field_01835af0 reads.
 *
 */
struct Object01835af0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01835af0; meaning unknown. */
};
static_assert(offsetof(Object01835af0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01835af0(const Object01835af0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01835b00 reads.
 *
 */
struct Object01835b00 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01835b00; meaning unknown. */
};
static_assert(offsetof(Object01835b00, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01835b00(const Object01835b00 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01835b50()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01835dd0 = 0x1d0;

extern "C" uint32_t bb_auto_return_constant_01835dd0()
{
    return value_01835dd0;
}

/**
 *
 * The part of the object that auto_return_field_01838030 reads.
 *
 */
struct Object01838030 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01838030; meaning unknown. */
};
static_assert(offsetof(Object01838030, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01838030(const Object01838030 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01838040 reads.
 *
 */
struct Object01838040 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01838040; meaning unknown. */
};
static_assert(offsetof(Object01838040, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01838040(const Object01838040 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01838090()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01838310 = 0x1150;

extern "C" uint32_t bb_auto_return_constant_01838310()
{
    return value_01838310;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01839420()
{
}

/**
 *
 * The part of the object that auto_return_field_01839cf0 reads.
 *
 */
struct Object01839cf0 {
    uint8_t unknown_0x0000[0x71];
    uint8_t value_0x0071; /**< Read by auto_return_field_01839cf0; meaning unknown. */
};
static_assert(offsetof(Object01839cf0, value_0x0071) == 0x71);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_01839cf0(const Object01839cf0 *self)
{
    return self->value_0x0071;
}
