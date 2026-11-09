// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_00ec6f30 reads.
 *
 */
struct Object00ec6f30 {
    uint8_t unknown_0x0000[0x78];
    uint8_t value_0x0078; /**< Read by auto_return_field_00ec6f30; meaning unknown. */
};
static_assert(offsetof(Object00ec6f30, value_0x0078) == 0x78);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_00ec6f30(const Object00ec6f30 *self)
{
    return self->value_0x0078;
}

/**
 *
 * The part of the object that auto_return_field_00ec7fd0 reads.
 *
 */
struct Object00ec7fd0 {
    uint8_t unknown_0x0000[0x28];
    uint32_t value_0x0028; /**< Read by auto_return_field_00ec7fd0; meaning unknown. */
};
static_assert(offsetof(Object00ec7fd0, value_0x0028) == 0x28);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_00ec7fd0(const Object00ec7fd0 *self)
{
    return self->value_0x0028;
}

/**
 *
 * The part of the object that auto_return_field_00ec80f0 reads.
 *
 */
struct Object00ec80f0 {
    uint8_t unknown_0x0000[0x80];
    uint64_t value_0x0080; /**< Read by auto_return_field_00ec80f0; meaning unknown. */
};
static_assert(offsetof(Object00ec80f0, value_0x0080) == 0x80);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_00ec80f0(const Object00ec80f0 *self)
{
    return self->value_0x0080;
}

/**
 *
 * The part of the object that auto_return_field_00ec8510 reads.
 *
 */
struct Object00ec8510 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_00ec8510; meaning unknown. */
};
static_assert(offsetof(Object00ec8510, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_00ec8510(const Object00ec8510 *self)
{
    return self->value_0x0040;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_00ece870 = 0x1;

extern "C" uint8_t bb_auto_return_constant_00ece870()
{
    return value_00ece870;
}

/**
 *
 * The part of the object that auto_return_field_00ecf3f0 reads.
 *
 */
struct Object00ecf3f0 {
    uint8_t unknown_0x0000[0x40];
    uint32_t value_0x0040; /**< Read by auto_return_field_00ecf3f0; meaning unknown. */
};
static_assert(offsetof(Object00ecf3f0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_00ecf3f0(const Object00ecf3f0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_00ecf440 reads.
 *
 */
struct Object00ecf440 {
    uint8_t unknown_0x0000[0x44];
    uint32_t value_0x0044; /**< Read by auto_return_field_00ecf440; meaning unknown. */
};
static_assert(offsetof(Object00ecf440, value_0x0044) == 0x44);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_00ecf440(const Object00ecf440 *self)
{
    return self->value_0x0044;
}

/**
 *
 * The part of the object that auto_return_field_00ecf490 reads.
 *
 */
struct Object00ecf490 {
    uint8_t unknown_0x0000[0x48];
    uint32_t value_0x0048; /**< Read by auto_return_field_00ecf490; meaning unknown. */
};
static_assert(offsetof(Object00ecf490, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_00ecf490(const Object00ecf490 *self)
{
    return self->value_0x0048;
}

/**
 *
 * The part of the object that auto_return_field_00ecf4e0 reads.
 *
 */
struct Object00ecf4e0 {
    uint8_t unknown_0x0000[0x50];
    uint32_t value_0x0050; /**< Read by auto_return_field_00ecf4e0; meaning unknown. */
};
static_assert(offsetof(Object00ecf4e0, value_0x0050) == 0x50);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_00ecf4e0(const Object00ecf4e0 *self)
{
    return self->value_0x0050;
}

/**
 *
 * The part of the object that auto_return_field_00ecf530 reads.
 *
 */
struct Object00ecf530 {
    uint8_t unknown_0x0000[0x30];
    uint64_t value_0x0030; /**< Read by auto_return_field_00ecf530; meaning unknown. */
};
static_assert(offsetof(Object00ecf530, value_0x0030) == 0x30);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_00ecf530(const Object00ecf530 *self)
{
    return self->value_0x0030;
}

/**
 *
 * The part of the object that auto_return_field_00ecf550 reads.
 *
 */
struct Object00ecf550 {
    uint8_t unknown_0x0000[0x38];
    uint64_t value_0x0038; /**< Read by auto_return_field_00ecf550; meaning unknown. */
};
static_assert(offsetof(Object00ecf550, value_0x0038) == 0x38);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_00ecf550(const Object00ecf550 *self)
{
    return self->value_0x0038;
}
