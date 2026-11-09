// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a20980()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a209a0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01a20af0 reads.
 *
 */
struct Object01a20af0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01a20af0; meaning unknown. */
};
static_assert(offsetof(Object01a20af0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a20af0(const Object01a20af0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01a20b00 reads.
 *
 */
struct Object01a20b00 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01a20b00; meaning unknown. */
};
static_assert(offsetof(Object01a20b00, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a20b00(const Object01a20b00 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a20b50()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01a20dd0 = 0x188;

extern "C" uint32_t bb_auto_return_constant_01a20dd0()
{
    return value_01a20dd0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a22b50()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a22b70()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01a22cc0 reads.
 *
 */
struct Object01a22cc0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01a22cc0; meaning unknown. */
};
static_assert(offsetof(Object01a22cc0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a22cc0(const Object01a22cc0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01a22cd0 reads.
 *
 */
struct Object01a22cd0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01a22cd0; meaning unknown. */
};
static_assert(offsetof(Object01a22cd0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a22cd0(const Object01a22cd0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a22d20()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01a22fa0 = 0x188;

extern "C" uint32_t bb_auto_return_constant_01a22fa0()
{
    return value_01a22fa0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a25170()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a25190()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01a252e0 reads.
 *
 */
struct Object01a252e0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01a252e0; meaning unknown. */
};
static_assert(offsetof(Object01a252e0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a252e0(const Object01a252e0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01a252f0 reads.
 *
 */
struct Object01a252f0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01a252f0; meaning unknown. */
};
static_assert(offsetof(Object01a252f0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a252f0(const Object01a252f0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a25340()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01a255c0 = 0x190;

extern "C" uint32_t bb_auto_return_constant_01a255c0()
{
    return value_01a255c0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a267e0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a26800()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01a26950 reads.
 *
 */
struct Object01a26950 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01a26950; meaning unknown. */
};
static_assert(offsetof(Object01a26950, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a26950(const Object01a26950 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01a26960 reads.
 *
 */
struct Object01a26960 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01a26960; meaning unknown. */
};
static_assert(offsetof(Object01a26960, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a26960(const Object01a26960 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a269b0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01a26c30 = 0x40;

extern "C" uint32_t bb_auto_return_constant_01a26c30()
{
    return value_01a26c30;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a2ca60()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a2ca80()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01a2cbd0 reads.
 *
 */
struct Object01a2cbd0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01a2cbd0; meaning unknown. */
};
static_assert(offsetof(Object01a2cbd0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a2cbd0(const Object01a2cbd0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01a2cbe0 reads.
 *
 */
struct Object01a2cbe0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01a2cbe0; meaning unknown. */
};
static_assert(offsetof(Object01a2cbe0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a2cbe0(const Object01a2cbe0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a2cc30()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01a2ceb0 = 0x1a0;

extern "C" uint32_t bb_auto_return_constant_01a2ceb0()
{
    return value_01a2ceb0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a2f360()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a2f380()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01a2f4d0 reads.
 *
 */
struct Object01a2f4d0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01a2f4d0; meaning unknown. */
};
static_assert(offsetof(Object01a2f4d0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a2f4d0(const Object01a2f4d0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01a2f4e0 reads.
 *
 */
struct Object01a2f4e0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01a2f4e0; meaning unknown. */
};
static_assert(offsetof(Object01a2f4e0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a2f4e0(const Object01a2f4e0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a2f530()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01a2f7b0 = 0x190;

extern "C" uint32_t bb_auto_return_constant_01a2f7b0()
{
    return value_01a2f7b0;
}
