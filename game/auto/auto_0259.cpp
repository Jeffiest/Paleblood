// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02590f90()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02590fa0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02590fb0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02590fc0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02590fd0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02590fe0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02592850()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02592890 = 0x8;

extern "C" uint32_t bb_auto_return_constant_02592890()
{
    return value_02592890;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_025928a0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02592910 = 0x7;

extern "C" uint32_t bb_auto_return_constant_02592910()
{
    return value_02592910;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02592920()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02592980 = 0x6;

extern "C" uint32_t bb_auto_return_constant_02592980()
{
    return value_02592980;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02592990()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_025929f0 = 0x5;

extern "C" uint32_t bb_auto_return_constant_025929f0()
{
    return value_025929f0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02592a00()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02592a60 = 0x4;

extern "C" uint32_t bb_auto_return_constant_02592a60()
{
    return value_02592a60;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02592a70()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02592ad0 = 0x3;

extern "C" uint32_t bb_auto_return_constant_02592ad0()
{
    return value_02592ad0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02592ae0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02592b40 = 0x2;

extern "C" uint32_t bb_auto_return_constant_02592b40()
{
    return value_02592b40;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02599c20()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02599c30 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02599c30()
{
    return value_02599c30;
}

/**
 *
 * The part of the object that auto_return_field_02599c50 reads.
 *
 */
struct Object02599c50 {
    uint8_t unknown_0x0000[0x248];
    uint64_t value_0x0248; /**< Read by auto_return_field_02599c50; meaning unknown. */
};
static_assert(offsetof(Object02599c50, value_0x0248) == 0x248);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02599c50(const Object02599c50 *self)
{
    return self->value_0x0248;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02599c60()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02599c70 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02599c70()
{
    return value_02599c70;
}

/**
 *
 * The part of the object that auto_return_field_02599d30 reads.
 *
 */
struct Object02599d30 {
    uint8_t unknown_0x0000[0x100];
    uint32_t value_0x0100; /**< Read by auto_return_field_02599d30; meaning unknown. */
};
static_assert(offsetof(Object02599d30, value_0x0100) == 0x100);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02599d30(const Object02599d30 *self)
{
    return self->value_0x0100;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0259c1d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0259c8a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0259d2a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0259d9a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0259d9b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0259e5e0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0259e5f0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0259e5f0()
{
    return value_0259e5f0;
}

/**
 *
 * The part of the object that auto_return_field_0259f810 reads.
 *
 */
struct Object0259f810 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0259f810; meaning unknown. */
};
static_assert(offsetof(Object0259f810, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0259f810(const Object0259f810 *self)
{
    return self->value_0x0048;
}

/**
 *
 * The part of the object that auto_return_field_0259f820 reads.
 *
 */
struct Object0259f820 {
    uint8_t unknown_0x0000[0x50];
    uint64_t value_0x0050; /**< Read by auto_return_field_0259f820; meaning unknown. */
};
static_assert(offsetof(Object0259f820, value_0x0050) == 0x50);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0259f820(const Object0259f820 *self)
{
    return self->value_0x0050;
}

/**
 *
 * The part of the object that auto_return_field_0259f830 reads.
 *
 */
struct Object0259f830 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0259f830; meaning unknown. */
};
static_assert(offsetof(Object0259f830, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0259f830(const Object0259f830 *self)
{
    return self->value_0x0040;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0259f840()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0259f890 = 0x1;

extern "C" uint32_t bb_auto_return_constant_0259f890()
{
    return value_0259f890;
}

/**
 *
 * The part of the object that auto_return_field_0259f8a0 reads.
 *
 */
struct Object0259f8a0 {
    uint8_t unknown_0x0000[0x58];
    uint32_t value_0x0058; /**< Read by auto_return_field_0259f8a0; meaning unknown. */
};
static_assert(offsetof(Object0259f8a0, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_0259f8a0(const Object0259f8a0 *self)
{
    return self->value_0x0058;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0259f8d0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0259f8e0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0259f8f0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0259f900()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0259f910()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0259f920()
{
    return 0;
}
