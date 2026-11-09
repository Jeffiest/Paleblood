// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b50d80()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01b50da0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01b50ef0 reads.
 *
 */
struct Object01b50ef0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01b50ef0; meaning unknown. */
};
static_assert(offsetof(Object01b50ef0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01b50ef0(const Object01b50ef0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01b50f00 reads.
 *
 */
struct Object01b50f00 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01b50f00; meaning unknown. */
};
static_assert(offsetof(Object01b50f00, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01b50f00(const Object01b50f00 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01b50f50()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01b511d0 = 0x1e0;

extern "C" uint32_t bb_auto_return_constant_01b511d0()
{
    return value_01b511d0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b51380()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b54870()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b55400()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b55f20()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b55f80()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b57bf0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01b57c10()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01b57d60 reads.
 *
 */
struct Object01b57d60 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01b57d60; meaning unknown. */
};
static_assert(offsetof(Object01b57d60, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01b57d60(const Object01b57d60 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01b57d70 reads.
 *
 */
struct Object01b57d70 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01b57d70; meaning unknown. */
};
static_assert(offsetof(Object01b57d70, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01b57d70(const Object01b57d70 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01b57dc0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01b58040 = 0x1e8;

extern "C" uint32_t bb_auto_return_constant_01b58040()
{
    return value_01b58040;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b59d40()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01b59d60()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01b59eb0 reads.
 *
 */
struct Object01b59eb0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01b59eb0; meaning unknown. */
};
static_assert(offsetof(Object01b59eb0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01b59eb0(const Object01b59eb0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01b59ec0 reads.
 *
 */
struct Object01b59ec0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01b59ec0; meaning unknown. */
};
static_assert(offsetof(Object01b59ec0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01b59ec0(const Object01b59ec0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01b59f10()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01b5a190 = 0x198;

extern "C" uint32_t bb_auto_return_constant_01b5a190()
{
    return value_01b5a190;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b5a1d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b5a4d0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_01b5a860 = 0x1;

extern "C" uint8_t bb_auto_return_constant_01b5a860()
{
    return value_01b5a860;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_01b5a870 = 0x1;

extern "C" uint8_t bb_auto_return_constant_01b5a870()
{
    return value_01b5a870;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01b5c480 = 0xface;

extern "C" uint32_t bb_auto_return_constant_01b5c480()
{
    return value_01b5c480;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01b5c490 = 0x800;

extern "C" uint32_t bb_auto_return_constant_01b5c490()
{
    return value_01b5c490;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01b5c540 = 0x1;

extern "C" uint32_t bb_auto_return_constant_01b5c540()
{
    return value_01b5c540;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01b5c550 = 0x20;

extern "C" uint32_t bb_auto_return_constant_01b5c550()
{
    return value_01b5c550;
}

/**
 *
 * The part of the object that auto_return_field_01b5e3c0 reads.
 *
 */
struct Object01b5e3c0 {
    uint8_t unknown_0x0000[0x40];
    uint32_t value_0x0040; /**< Read by auto_return_field_01b5e3c0; meaning unknown. */
};
static_assert(offsetof(Object01b5e3c0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01b5e3c0(const Object01b5e3c0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_01b5e410 = 0x1;

extern "C" uint8_t bb_auto_return_constant_01b5e410()
{
    return value_01b5e410;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01b5e4e0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b5e790()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_01b5efa0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_01b5efa0()
{
    return value_01b5efa0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b5efb0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b5efc0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b5efd0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b5efe0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b5eff0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b5f000()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b5f9a0()
{
}
