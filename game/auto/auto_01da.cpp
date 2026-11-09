// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_01da40c0 reads.
 *
 */
struct Object01da40c0 {
    uint8_t unknown_0x0000[0x58];
    uint32_t value_0x0058; /**< Read by auto_return_field_01da40c0; meaning unknown. */
};
static_assert(offsetof(Object01da40c0, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01da40c0(const Object01da40c0 *self)
{
    return self->value_0x0058;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01da4190()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01da41a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01da41b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01da4280()
{
}

/**
 *
 * The part of the object that auto_return_field_01da45e0 reads.
 *
 */
struct Object01da45e0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01da45e0; meaning unknown. */
};
static_assert(offsetof(Object01da45e0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01da45e0(const Object01da45e0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01da45f0 reads.
 *
 */
struct Object01da45f0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01da45f0; meaning unknown. */
};
static_assert(offsetof(Object01da45f0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01da45f0(const Object01da45f0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01da4640()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01da48c0 = 0x530;

extern "C" uint32_t bb_auto_return_constant_01da48c0()
{
    return value_01da48c0;
}

/**
 *
 * The part of the object that auto_return_field_01da4900 reads.
 *
 */
struct Object01da4900 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01da4900; meaning unknown. */
};
static_assert(offsetof(Object01da4900, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01da4900(const Object01da4900 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01da4910 reads.
 *
 */
struct Object01da4910 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01da4910; meaning unknown. */
};
static_assert(offsetof(Object01da4910, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01da4910(const Object01da4910 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01da4960()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01da4be0 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01da4be0()
{
    return value_01da4be0;
}

/**
 *
 * The part of the object that auto_return_field_01da4c20 reads.
 *
 */
struct Object01da4c20 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01da4c20; meaning unknown. */
};
static_assert(offsetof(Object01da4c20, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01da4c20(const Object01da4c20 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01da4c30 reads.
 *
 */
struct Object01da4c30 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01da4c30; meaning unknown. */
};
static_assert(offsetof(Object01da4c30, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01da4c30(const Object01da4c30 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01da4c80()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01da4f00 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01da4f00()
{
    return value_01da4f00;
}

/**
 *
 * The part of the object that auto_return_field_01da4f40 reads.
 *
 */
struct Object01da4f40 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01da4f40; meaning unknown. */
};
static_assert(offsetof(Object01da4f40, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01da4f40(const Object01da4f40 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01da4f50 reads.
 *
 */
struct Object01da4f50 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01da4f50; meaning unknown. */
};
static_assert(offsetof(Object01da4f50, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01da4f50(const Object01da4f50 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01da4fa0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01da5220 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01da5220()
{
    return value_01da5220;
}

/**
 *
 * The part of the object that auto_return_field_01da9470 reads.
 *
 */
struct Object01da9470 {
    uint8_t unknown_0x0000[0x58];
    uint32_t value_0x0058; /**< Read by auto_return_field_01da9470; meaning unknown. */
};
static_assert(offsetof(Object01da9470, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01da9470(const Object01da9470 *self)
{
    return self->value_0x0058;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01da9540()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01da9550()
{
}

/**
 *
 * The part of the object that auto_return_field_01da97c0 reads.
 *
 */
struct Object01da97c0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01da97c0; meaning unknown. */
};
static_assert(offsetof(Object01da97c0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01da97c0(const Object01da97c0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01da97d0 reads.
 *
 */
struct Object01da97d0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01da97d0; meaning unknown. */
};
static_assert(offsetof(Object01da97d0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01da97d0(const Object01da97d0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01da9820()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01da9aa0 = 0x160;

extern "C" uint32_t bb_auto_return_constant_01da9aa0()
{
    return value_01da9aa0;
}

/**
 *
 * The part of the object that auto_return_field_01da9ae0 reads.
 *
 */
struct Object01da9ae0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01da9ae0; meaning unknown. */
};
static_assert(offsetof(Object01da9ae0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01da9ae0(const Object01da9ae0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01da9af0 reads.
 *
 */
struct Object01da9af0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01da9af0; meaning unknown. */
};
static_assert(offsetof(Object01da9af0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01da9af0(const Object01da9af0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01da9b40()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01da9dc0 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01da9dc0()
{
    return value_01da9dc0;
}

/**
 *
 * The part of the object that auto_return_field_01da9e00 reads.
 *
 */
struct Object01da9e00 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01da9e00; meaning unknown. */
};
static_assert(offsetof(Object01da9e00, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01da9e00(const Object01da9e00 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01da9e10 reads.
 *
 */
struct Object01da9e10 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01da9e10; meaning unknown. */
};
static_assert(offsetof(Object01da9e10, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01da9e10(const Object01da9e10 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01da9e60()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01daa0e0 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01daa0e0()
{
    return value_01daa0e0;
}

/**
 *
 * The part of the object that auto_return_field_01daa120 reads.
 *
 */
struct Object01daa120 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01daa120; meaning unknown. */
};
static_assert(offsetof(Object01daa120, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01daa120(const Object01daa120 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01daa130 reads.
 *
 */
struct Object01daa130 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01daa130; meaning unknown. */
};
static_assert(offsetof(Object01daa130, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01daa130(const Object01daa130 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01daa180()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01daa400 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01daa400()
{
    return value_01daa400;
}

/**
 *
 * The part of the object that auto_return_field_01dab860 reads.
 *
 */
struct Object01dab860 {
    uint8_t unknown_0x0000[0xc0];
    uint64_t value_0x00c0; /**< Read by auto_return_field_01dab860; meaning unknown. */
};
static_assert(offsetof(Object01dab860, value_0x00c0) == 0xc0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01dab860(const Object01dab860 *self)
{
    return self->value_0x00c0;
}

/**
 *
 * The part of the object that auto_return_field_01dabcb0 reads.
 *
 */
struct Object01dabcb0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t value_0x0008; /**< Read by auto_return_field_01dabcb0; meaning unknown. */
};
static_assert(offsetof(Object01dabcb0, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_01dabcb0(const Object01dabcb0 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_01dabe30 reads.
 *
 */
struct Object01dabe30 {
    uint8_t unknown_0x0000[0xe8];
    uint64_t value_0x00e8; /**< Read by auto_return_field_01dabe30; meaning unknown. */
};
static_assert(offsetof(Object01dabe30, value_0x00e8) == 0xe8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01dabe30(const Object01dabe30 *self)
{
    return self->value_0x00e8;
}

/**
 *
 * The part of the object that auto_return_field_01dabeb0 reads.
 *
 */
struct Object01dabeb0 {
    uint8_t unknown_0x0000[0xe0];
    uint64_t value_0x00e0; /**< Read by auto_return_field_01dabeb0; meaning unknown. */
};
static_assert(offsetof(Object01dabeb0, value_0x00e0) == 0xe0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01dabeb0(const Object01dabeb0 *self)
{
    return self->value_0x00e0;
}

/**
 *
 * The part of the object that auto_return_member_address_01dabed0 reads.
 *
 */
struct Object01dabed0 {
    uint8_t unknown_0x0000[0xc0];
    uint8_t member_0x00c0; /**< Read by auto_return_member_address_01dabed0; meaning unknown. */
};
static_assert(offsetof(Object01dabed0, member_0x00c0) == 0xc0);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01dabed0(Object01dabed0 *self)
{
    return &self->member_0x00c0;
}

/**
 *
 * The part of the object that auto_return_field_01dabf00 reads.
 *
 */
struct Object01dabf00 {
    uint8_t unknown_0x0000[0xf0];
    uint64_t value_0x00f0; /**< Read by auto_return_field_01dabf00; meaning unknown. */
};
static_assert(offsetof(Object01dabf00, value_0x00f0) == 0xf0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01dabf00(const Object01dabf00 *self)
{
    return self->value_0x00f0;
}

/**
 *
 * The part of the object that auto_return_field_01dabf10 reads.
 *
 */
struct Object01dabf10 {
    uint8_t unknown_0x0000[0x100];
    uint64_t value_0x0100; /**< Read by auto_return_field_01dabf10; meaning unknown. */
};
static_assert(offsetof(Object01dabf10, value_0x0100) == 0x100);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01dabf10(const Object01dabf10 *self)
{
    return self->value_0x0100;
}

/**
 *
 * The part of the object that auto_return_field_01dabf40 reads.
 *
 */
struct Object01dabf40 {
    uint8_t unknown_0x0000[0xf8];
    uint64_t value_0x00f8; /**< Read by auto_return_field_01dabf40; meaning unknown. */
};
static_assert(offsetof(Object01dabf40, value_0x00f8) == 0xf8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01dabf40(const Object01dabf40 *self)
{
    return self->value_0x00f8;
}

/**
 *
 * The part of the object that auto_return_field_01dabf50 reads.
 *
 */
struct Object01dabf50 {
    uint8_t unknown_0x0000[0x108];
    uint64_t value_0x0108; /**< Read by auto_return_field_01dabf50; meaning unknown. */
};
static_assert(offsetof(Object01dabf50, value_0x0108) == 0x108);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01dabf50(const Object01dabf50 *self)
{
    return self->value_0x0108;
}

/**
 *
 * The part of the object that auto_return_field_01dacab0 reads.
 *
 */
struct Object01dacab0 {
    uint8_t unknown_0x0000[0x101];
    uint8_t value_0x0101; /**< Read by auto_return_field_01dacab0; meaning unknown. */
};
static_assert(offsetof(Object01dacab0, value_0x0101) == 0x101);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_01dacab0(const Object01dacab0 *self)
{
    return self->value_0x0101;
}

/**
 *
 * The part of the object that auto_return_field_01dacac0 reads.
 *
 */
struct Object01dacac0 {
    uint8_t unknown_0x0000[0x102];
    uint8_t value_0x0102; /**< Read by auto_return_field_01dacac0; meaning unknown. */
};
static_assert(offsetof(Object01dacac0, value_0x0102) == 0x102);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_01dacac0(const Object01dacac0 *self)
{
    return self->value_0x0102;
}
