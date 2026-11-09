// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_013820a0 reads.
 *
 */
struct Object013820a0 {
    uint8_t unknown_0x0000[0x203];
    uint8_t value_0x0203; /**< Read by auto_return_field_013820a0; meaning unknown. */
};
static_assert(offsetof(Object013820a0, value_0x0203) == 0x203);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_013820a0(const Object013820a0 *self)
{
    return self->value_0x0203;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_013826b0()
{
}

/**
 *
 * The part of the object that auto_return_field_013826c0 reads.
 *
 */
struct Object013826c0 {
    uint8_t unknown_0x0000[0x10];
    uint32_t value_0x0010; /**< Read by auto_return_field_013826c0; meaning unknown. */
};
static_assert(offsetof(Object013826c0, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_013826c0(const Object013826c0 *self)
{
    return self->value_0x0010;
}

/**
 *
 * The part of the object that auto_return_field_013826d0 reads.
 *
 */
struct Object013826d0 {
    uint8_t unknown_0x0000[0x14];
    uint32_t value_0x0014; /**< Read by auto_return_field_013826d0; meaning unknown. */
};
static_assert(offsetof(Object013826d0, value_0x0014) == 0x14);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_013826d0(const Object013826d0 *self)
{
    return self->value_0x0014;
}

/**
 *
 * The part of the object that auto_return_field_013826e0 reads.
 *
 */
struct Object013826e0 {
    uint8_t unknown_0x0000[0x18];
    uint32_t value_0x0018; /**< Read by auto_return_field_013826e0; meaning unknown. */
};
static_assert(offsetof(Object013826e0, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_013826e0(const Object013826e0 *self)
{
    return self->value_0x0018;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_013826f0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01382700()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01382710()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01382720()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01382730 reads.
 *
 */
struct Object01382730 {
    uint8_t unknown_0x0000[0x8];
    uint64_t value_0x0008; /**< Read by auto_return_field_01382730; meaning unknown. */
};
static_assert(offsetof(Object01382730, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01382730(const Object01382730 *self)
{
    return self->value_0x0008;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_013827f0 = 0x200;

extern "C" uint32_t bb_auto_return_constant_013827f0()
{
    return value_013827f0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01382850 = 0xb00000;

extern "C" uint32_t bb_auto_return_constant_01382850()
{
    return value_01382850;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01382860()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01382870 = 0x180000;

extern "C" uint32_t bb_auto_return_constant_01382870()
{
    return value_01382870;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01382880 = 0x100;

extern "C" uint32_t bb_auto_return_constant_01382880()
{
    return value_01382880;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_013828a0 = 0xa;

extern "C" uint32_t bb_auto_return_constant_013828a0()
{
    return value_013828a0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_013828b0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01382c30()
{
}

/**
 *
 * The part of the object that auto_return_field_01383db0 reads.
 *
 */
struct Object01383db0 {
    uint8_t unknown_0x0000[0x50];
    uint64_t value_0x0050; /**< Read by auto_return_field_01383db0; meaning unknown. */
};
static_assert(offsetof(Object01383db0, value_0x0050) == 0x50);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01383db0(const Object01383db0 *self)
{
    return self->value_0x0050;
}

/**
 *
 * The part of the object that auto_return_field_01383dc0 reads.
 *
 */
struct Object01383dc0 {
    uint8_t unknown_0x0000[0x50];
    uint64_t value_0x0050; /**< Read by auto_return_field_01383dc0; meaning unknown. */
};
static_assert(offsetof(Object01383dc0, value_0x0050) == 0x50);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01383dc0(const Object01383dc0 *self)
{
    return self->value_0x0050;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01385230()
{
}

/**
 *
 * The part of the object that auto_return_field_01385240 reads.
 *
 */
struct Object01385240 {
    uint8_t unknown_0x0000[0x8];
    uint64_t value_0x0008; /**< Read by auto_return_field_01385240; meaning unknown. */
};
static_assert(offsetof(Object01385240, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01385240(const Object01385240 *self)
{
    return self->value_0x0008;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01386840()
{
}

/**
 *
 * The part of the object that auto_return_field_01386850 reads.
 *
 */
struct Object01386850 {
    uint8_t unknown_0x0000[0x8];
    uint64_t value_0x0008; /**< Read by auto_return_field_01386850; meaning unknown. */
};
static_assert(offsetof(Object01386850, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01386850(const Object01386850 *self)
{
    return self->value_0x0008;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01387100()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01387110()
{
}

/**
 *
 * The part of the object that auto_return_field_01388130 reads.
 *
 */
struct Object01388130 {
    uint8_t unknown_0x0000[0x18];
    uint64_t value_0x0018; /**< Read by auto_return_field_01388130; meaning unknown. */
};
static_assert(offsetof(Object01388130, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01388130(const Object01388130 *self)
{
    return self->value_0x0018;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0138c8c0()
{
}

/**
 *
 * The part of the object that auto_return_field_0138d030 reads.
 *
 */
struct Object0138d030 {
    uint8_t unknown_0x0000[0x10];
    uint64_t value_0x0010; /**< Read by auto_return_field_0138d030; meaning unknown. */
};
static_assert(offsetof(Object0138d030, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0138d030(const Object0138d030 *self)
{
    return self->value_0x0010;
}

/**
 *
 * The part of the object that auto_return_field_0138d0c0 reads.
 *
 */
struct Object0138d0c0 {
    uint8_t unknown_0x0000[0x70];
    uint32_t value_0x0070; /**< Read by auto_return_field_0138d0c0; meaning unknown. */
};
static_assert(offsetof(Object0138d0c0, value_0x0070) == 0x70);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_0138d0c0(const Object0138d0c0 *self)
{
    return self->value_0x0070;
}
