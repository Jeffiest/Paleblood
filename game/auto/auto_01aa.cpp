// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01aa18c0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01aa18e0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01aa1a30 reads.
 *
 */
struct Object01aa1a30 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01aa1a30; meaning unknown. */
};
static_assert(offsetof(Object01aa1a30, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01aa1a30(const Object01aa1a30 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01aa1a40 reads.
 *
 */
struct Object01aa1a40 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01aa1a40; meaning unknown. */
};
static_assert(offsetof(Object01aa1a40, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01aa1a40(const Object01aa1a40 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01aa1a90()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01aa1d10 = 0x1d8;

extern "C" uint32_t bb_auto_return_constant_01aa1d10()
{
    return value_01aa1d10;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01aa1f40()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01aa5c00()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01aa5c20()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01aa5d70 reads.
 *
 */
struct Object01aa5d70 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01aa5d70; meaning unknown. */
};
static_assert(offsetof(Object01aa5d70, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01aa5d70(const Object01aa5d70 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01aa5d80 reads.
 *
 */
struct Object01aa5d80 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01aa5d80; meaning unknown. */
};
static_assert(offsetof(Object01aa5d80, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01aa5d80(const Object01aa5d80 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01aa5dd0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01aa6050 = 0x188;

extern "C" uint32_t bb_auto_return_constant_01aa6050()
{
    return value_01aa6050;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01aa7880()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01aa78a0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01aa79f0 reads.
 *
 */
struct Object01aa79f0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01aa79f0; meaning unknown. */
};
static_assert(offsetof(Object01aa79f0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01aa79f0(const Object01aa79f0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01aa7a00 reads.
 *
 */
struct Object01aa7a00 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01aa7a00; meaning unknown. */
};
static_assert(offsetof(Object01aa7a00, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01aa7a00(const Object01aa7a00 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01aa7a50()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01aa7cd0 = 0x1c8;

extern "C" uint32_t bb_auto_return_constant_01aa7cd0()
{
    return value_01aa7cd0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01aa9eb0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01aa9ed0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01aaa020 reads.
 *
 */
struct Object01aaa020 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01aaa020; meaning unknown. */
};
static_assert(offsetof(Object01aaa020, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01aaa020(const Object01aaa020 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01aaa030 reads.
 *
 */
struct Object01aaa030 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01aaa030; meaning unknown. */
};
static_assert(offsetof(Object01aaa030, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01aaa030(const Object01aaa030 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01aaa080()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01aaa300 = 0x180;

extern "C" uint32_t bb_auto_return_constant_01aaa300()
{
    return value_01aaa300;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01aab500()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01aab520()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01aab670 reads.
 *
 */
struct Object01aab670 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01aab670; meaning unknown. */
};
static_assert(offsetof(Object01aab670, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01aab670(const Object01aab670 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01aab680 reads.
 *
 */
struct Object01aab680 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01aab680; meaning unknown. */
};
static_assert(offsetof(Object01aab680, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01aab680(const Object01aab680 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01aab6d0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01aab950 = 0x170;

extern "C" uint32_t bb_auto_return_constant_01aab950()
{
    return value_01aab950;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01aadc90()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01aadcb0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01aade00 reads.
 *
 */
struct Object01aade00 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01aade00; meaning unknown. */
};
static_assert(offsetof(Object01aade00, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01aade00(const Object01aade00 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01aade10 reads.
 *
 */
struct Object01aade10 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01aade10; meaning unknown. */
};
static_assert(offsetof(Object01aade10, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01aade10(const Object01aade10 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01aade60()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01aae0e0 = 0x1c0;

extern "C" uint32_t bb_auto_return_constant_01aae0e0()
{
    return value_01aae0e0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01aaef80()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01aaf250()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01aaf270()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01aaf3c0 reads.
 *
 */
struct Object01aaf3c0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01aaf3c0; meaning unknown. */
};
static_assert(offsetof(Object01aaf3c0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01aaf3c0(const Object01aaf3c0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01aaf3d0 reads.
 *
 */
struct Object01aaf3d0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01aaf3d0; meaning unknown. */
};
static_assert(offsetof(Object01aaf3d0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01aaf3d0(const Object01aaf3d0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01aaf420()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01aaf6a0 = 0x178;

extern "C" uint32_t bb_auto_return_constant_01aaf6a0()
{
    return value_01aaf6a0;
}
