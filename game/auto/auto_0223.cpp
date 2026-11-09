// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02233170()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_022331d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02233230()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02233d00()
{
}

/**
 *
 * The part of the object that auto_return_field_02234ca0 reads.
 *
 */
struct Object02234ca0 {
    uint8_t unknown_0x0000[0x58];
    uint8_t value_0x0058; /**< Read by auto_return_field_02234ca0; meaning unknown. */
};
static_assert(offsetof(Object02234ca0, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02234ca0(const Object02234ca0 *self)
{
    return self->value_0x0058;
}

/**
 *
 * The part of the object that auto_return_field_02235870 reads.
 *
 */
struct Object02235870 {
    uint8_t unknown_0x0000[0x50];
    uint32_t value_0x0050; /**< Read by auto_return_field_02235870; meaning unknown. */
};
static_assert(offsetof(Object02235870, value_0x0050) == 0x50);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02235870(const Object02235870 *self)
{
    return self->value_0x0050;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02235940()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02235950()
{
}

/**
 *
 * The part of the object that auto_return_field_02235b30 reads.
 *
 */
struct Object02235b30 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02235b30; meaning unknown. */
};
static_assert(offsetof(Object02235b30, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02235b30(const Object02235b30 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02235b40 reads.
 *
 */
struct Object02235b40 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02235b40; meaning unknown. */
};
static_assert(offsetof(Object02235b40, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02235b40(const Object02235b40 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02235b90()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02235e10 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_02235e10()
{
    return value_02235e10;
}

/**
 *
 * The part of the object that auto_return_field_02235e50 reads.
 *
 */
struct Object02235e50 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02235e50; meaning unknown. */
};
static_assert(offsetof(Object02235e50, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02235e50(const Object02235e50 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02235e60 reads.
 *
 */
struct Object02235e60 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02235e60; meaning unknown. */
};
static_assert(offsetof(Object02235e60, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02235e60(const Object02235e60 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02235eb0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02236130 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_02236130()
{
    return value_02236130;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02236510()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02236520()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02237000()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02237010()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02237020()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02237030()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02238100()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02238830()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02238840()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02238ae0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02238af0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02238b00()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02238b20()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02238d60()
{
}

/**
 *
 * The part of the object that auto_return_field_02239d70 reads.
 *
 */
struct Object02239d70 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02239d70; meaning unknown. */
};
static_assert(offsetof(Object02239d70, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02239d70(const Object02239d70 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02239d80 reads.
 *
 */
struct Object02239d80 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02239d80; meaning unknown. */
};
static_assert(offsetof(Object02239d80, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02239d80(const Object02239d80 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02239dd0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0223a050 = 0x88;

extern "C" uint32_t bb_auto_return_constant_0223a050()
{
    return value_0223a050;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0223b070()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0223b360()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0223b3c0()
{
}

/**
 *
 * The part of the object that auto_return_field_0223e4a0 reads.
 *
 */
struct Object0223e4a0 {
    uint8_t unknown_0x0000[0x8];
    uint32_t value_0x0008; /**< Read by auto_return_field_0223e4a0; meaning unknown. */
};
static_assert(offsetof(Object0223e4a0, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_0223e4a0(const Object0223e4a0 *self)
{
    return self->value_0x0008;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0223f740()
{
}
