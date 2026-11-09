// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00820860()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00821de0()
{
}

/**
 *
 * The part of the object that auto_return_field_00821df0 reads.
 *
 */
struct Object00821df0 {
    uint8_t unknown_0x0000[0x68];
    uint32_t value_0x0068; /**< Read by auto_return_field_00821df0; meaning unknown. */
};
static_assert(offsetof(Object00821df0, value_0x0068) == 0x68);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_00821df0(const Object00821df0 *self)
{
    return self->value_0x0068;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00821e20()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00821f60()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00821fd0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00821fe0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_00821ff0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00822cc0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00822cd0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00822d30()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00822d40()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00822dc0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00822dd0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00822de0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00822df0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_00822e40 = 0x1;

extern "C" uint32_t bb_auto_return_constant_00822e40()
{
    return value_00822e40;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_00822e50 = 0xffffffff;

extern "C" uint32_t bb_auto_return_constant_00822e50()
{
    return value_00822e50;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_00822e60 = 0x1;

extern "C" uint8_t bb_auto_return_constant_00822e60()
{
    return value_00822e60;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_00822e70 = 0x1;

extern "C" uint8_t bb_auto_return_constant_00822e70()
{
    return value_00822e70;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_008234a0()
{
}

/**
 *
 * The part of the object that auto_return_field_00823b60 reads.
 *
 */
struct Object00823b60 {
    uint8_t unknown_0x0000[0x338];
    uint32_t value_0x0338; /**< Read by auto_return_field_00823b60; meaning unknown. */
};
static_assert(offsetof(Object00823b60, value_0x0338) == 0x338);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_00823b60(const Object00823b60 *self)
{
    return self->value_0x0338;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00823c80()
{
}

/**
 *
 * The part of the object that auto_return_field_008240d0 reads.
 *
 */
struct Object008240d0 {
    uint8_t unknown_0x0000[0x1a];
    int16_t value_0x001a; /**< Read by auto_return_field_008240d0; meaning unknown. */
};
static_assert(offsetof(Object008240d0, value_0x001a) == 0x1a);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" int32_t bb_auto_return_field_008240d0(const Object008240d0 *self)
{
    return self->value_0x001a;
}

/**
 *
 * The part of the object that auto_return_field_008240e0 reads.
 *
 */
struct Object008240e0 {
    uint8_t unknown_0x0000[0x8];
    uint64_t value_0x0008; /**< Read by auto_return_field_008240e0; meaning unknown. */
};
static_assert(offsetof(Object008240e0, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_008240e0(const Object008240e0 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_00824500 reads.
 *
 */
struct Object00824500 {
    uint8_t unknown_0x0000[0x19];
    uint8_t value_0x0019; /**< Read by auto_return_field_00824500; meaning unknown. */
};
static_assert(offsetof(Object00824500, value_0x0019) == 0x19);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_00824500(const Object00824500 *self)
{
    return self->value_0x0019;
}

/**
 *
 * The part of the object that auto_return_field_00824550 reads.
 *
 */
struct Object00824550 {
    uint8_t unknown_0x0000[0x8];
    uint64_t value_0x0008; /**< Read by auto_return_field_00824550; meaning unknown. */
};
static_assert(offsetof(Object00824550, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_00824550(const Object00824550 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_00824560 reads.
 *
 */
struct Object00824560 {
    uint8_t unknown_0x0000[0x10];
    uint64_t value_0x0010; /**< Read by auto_return_field_00824560; meaning unknown. */
};
static_assert(offsetof(Object00824560, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_00824560(const Object00824560 *self)
{
    return self->value_0x0010;
}

/**
 *
 * The part of the object that auto_return_field_00824570 reads.
 *
 */
struct Object00824570 {
    uint8_t unknown_0x0000[0x10];
    uint64_t value_0x0010; /**< Read by auto_return_field_00824570; meaning unknown. */
};
static_assert(offsetof(Object00824570, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_00824570(const Object00824570 *self)
{
    return self->value_0x0010;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00824a70()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00825d50()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00825d70()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00825ee0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00825ef0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00825fb0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00825fc0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00825fd0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_00826660 = 0x1;

extern "C" uint8_t bb_auto_return_constant_00826660()
{
    return value_00826660;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_008266f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00827130()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00827180()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_008271d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00827220()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00827280()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_008272d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00827720()
{
}

/**
 *
 * The part of the object that auto_return_field_00828f50 reads.
 *
 */
struct Object00828f50 {
    uint8_t unknown_0x0000[0x18];
    uint8_t value_0x0018; /**< Read by auto_return_field_00828f50; meaning unknown. */
};
static_assert(offsetof(Object00828f50, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_00828f50(const Object00828f50 *self)
{
    return self->value_0x0018;
}

/**
 *
 * The part of the object that auto_return_field_00828f70 reads.
 *
 */
struct Object00828f70 {
    uint8_t unknown_0x0000[0x10];
    uint64_t value_0x0010; /**< Read by auto_return_field_00828f70; meaning unknown. */
};
static_assert(offsetof(Object00828f70, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_00828f70(const Object00828f70 *self)
{
    return self->value_0x0010;
}

/**
 *
 * The part of the object that auto_return_field_00829640 reads.
 *
 */
struct Object00829640 {
    uint8_t unknown_0x0000[0x40];
    uint32_t value_0x0040; /**< Read by auto_return_field_00829640; meaning unknown. */
};
static_assert(offsetof(Object00829640, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_00829640(const Object00829640 *self)
{
    return self->value_0x0040;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0082a0f0()
{
}

/**
 *
 * The part of the object that auto_return_field_0082b1e0 reads.
 *
 */
struct Object0082b1e0 {
    uint8_t unknown_0x0000[0x18];
    uint64_t value_0x0018; /**< Read by auto_return_field_0082b1e0; meaning unknown. */
};
static_assert(offsetof(Object0082b1e0, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0082b1e0(const Object0082b1e0 *self)
{
    return self->value_0x0018;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0082b220()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0082b440()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0082f8a0()
{
}
