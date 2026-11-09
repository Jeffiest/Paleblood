// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a50980()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a50990()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a50a30()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02a50a40()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02a50d50()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_02a50d60 reads.
 *
 */
struct Object02a50d60 {
    uint8_t unknown_0x0000[0x50];
    uint8_t member_0x0050; /**< Read by auto_return_member_address_02a50d60; meaning unknown. */
};
static_assert(offsetof(Object02a50d60, member_0x0050) == 0x50);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02a50d60(Object02a50d60 *self)
{
    return &self->member_0x0050;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02a50e90 = 0x1;

extern "C" uint32_t bb_auto_return_constant_02a50e90()
{
    return value_02a50e90;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02a51510 = 0x1;

extern "C" uint32_t bb_auto_return_constant_02a51510()
{
    return value_02a51510;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02a51970()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_02a51b80 reads.
 *
 */
struct Object02a51b80 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02a51b80; meaning unknown. */
};
static_assert(offsetof(Object02a51b80, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02a51b80(const Object02a51b80 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02a51b90 reads.
 *
 */
struct Object02a51b90 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02a51b90; meaning unknown. */
};
static_assert(offsetof(Object02a51b90, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02a51b90(const Object02a51b90 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02a51be0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02a51d30 = 0x88;

extern "C" uint32_t bb_auto_return_constant_02a51d30()
{
    return value_02a51d30;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a52070()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a52080()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a520a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a52170()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02a52fd0 = 0x1;

extern "C" uint32_t bb_auto_return_constant_02a52fd0()
{
    return value_02a52fd0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02a533a0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02a536d0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02a53c20()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_02a53ec0 reads.
 *
 */
struct Object02a53ec0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02a53ec0; meaning unknown. */
};
static_assert(offsetof(Object02a53ec0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02a53ec0(const Object02a53ec0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02a53ed0 reads.
 *
 */
struct Object02a53ed0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02a53ed0; meaning unknown. */
};
static_assert(offsetof(Object02a53ed0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02a53ed0(const Object02a53ed0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02a53f20()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02a54070 = 0x48;

extern "C" uint32_t bb_auto_return_constant_02a54070()
{
    return value_02a54070;
}
