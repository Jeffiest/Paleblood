// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02333e30()
{
}

/**
 *
 * The part of the object that auto_return_field_02335cb0 reads.
 *
 */
struct Object02335cb0 {
    uint8_t unknown_0x0000[0x58];
    uint32_t value_0x0058; /**< Read by auto_return_field_02335cb0; meaning unknown. */
};
static_assert(offsetof(Object02335cb0, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02335cb0(const Object02335cb0 *self)
{
    return self->value_0x0058;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02335d80()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02335d90()
{
}

/**
 *
 * The part of the object that auto_return_field_02336000 reads.
 *
 */
struct Object02336000 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02336000; meaning unknown. */
};
static_assert(offsetof(Object02336000, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02336000(const Object02336000 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02336010 reads.
 *
 */
struct Object02336010 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02336010; meaning unknown. */
};
static_assert(offsetof(Object02336010, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02336010(const Object02336010 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02336060()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_023362e0 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_023362e0()
{
    return value_023362e0;
}

/**
 *
 * The part of the object that auto_return_field_02336320 reads.
 *
 */
struct Object02336320 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02336320; meaning unknown. */
};
static_assert(offsetof(Object02336320, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02336320(const Object02336320 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02336330 reads.
 *
 */
struct Object02336330 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02336330; meaning unknown. */
};
static_assert(offsetof(Object02336330, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02336330(const Object02336330 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02336380()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02336600 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_02336600()
{
    return value_02336600;
}

/**
 *
 * The part of the object that auto_return_field_02336640 reads.
 *
 */
struct Object02336640 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02336640; meaning unknown. */
};
static_assert(offsetof(Object02336640, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02336640(const Object02336640 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02336650 reads.
 *
 */
struct Object02336650 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02336650; meaning unknown. */
};
static_assert(offsetof(Object02336650, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02336650(const Object02336650 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_023366a0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02336920 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_02336920()
{
    return value_02336920;
}

/**
 *
 * The part of the object that auto_return_field_02336960 reads.
 *
 */
struct Object02336960 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02336960; meaning unknown. */
};
static_assert(offsetof(Object02336960, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02336960(const Object02336960 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02336970 reads.
 *
 */
struct Object02336970 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02336970; meaning unknown. */
};
static_assert(offsetof(Object02336970, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02336970(const Object02336970 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_023369c0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02336c40 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_02336c40()
{
    return value_02336c40;
}

/**
 *
 * The part of the object that auto_return_field_02337e00 reads.
 *
 */
struct Object02337e00 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02337e00; meaning unknown. */
};
static_assert(offsetof(Object02337e00, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02337e00(const Object02337e00 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02337e10 reads.
 *
 */
struct Object02337e10 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02337e10; meaning unknown. */
};
static_assert(offsetof(Object02337e10, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02337e10(const Object02337e10 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02337e60()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_023380e0 = 0x98;

extern "C" uint32_t bb_auto_return_constant_023380e0()
{
    return value_023380e0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02338310()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02338320()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02338330 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02338330()
{
    return value_02338330;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_023387a0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02339d90()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02339da0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02339db0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02339ee0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02339ef0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02339f00()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02339f10()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0233bbd0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0233efc0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0233efd0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0233eff0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0233f270()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0233f300()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_0233f840 reads.
 *
 */
struct Object0233f840 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0233f840; meaning unknown. */
};
static_assert(offsetof(Object0233f840, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0233f840(const Object0233f840 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0233f850 reads.
 *
 */
struct Object0233f850 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0233f850; meaning unknown. */
};
static_assert(offsetof(Object0233f850, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0233f850(const Object0233f850 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0233f8a0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0233fb20 = 0x28;

extern "C" uint32_t bb_auto_return_constant_0233fb20()
{
    return value_0233fb20;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0233fba0()
{
}
