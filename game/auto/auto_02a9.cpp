// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02a90010 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02a90010()
{
    return value_02a90010;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02a90040 = 0xffffffff;

extern "C" uint32_t bb_auto_return_constant_02a90040()
{
    return value_02a90040;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02a90070()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02a90080 = 0xffffffff;

extern "C" uint32_t bb_auto_return_constant_02a90080()
{
    return value_02a90080;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02a909c0 = 0x2;

extern "C" uint32_t bb_auto_return_constant_02a909c0()
{
    return value_02a909c0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a90cd0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a90ce0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a90cf0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a90d00()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a91770()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02a917f0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02a917f0()
{
    return value_02a917f0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02a91820 = 0xffffffff;

extern "C" uint32_t bb_auto_return_constant_02a91820()
{
    return value_02a91820;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02a91850()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02a91860 = 0xffffffff;

extern "C" uint32_t bb_auto_return_constant_02a91860()
{
    return value_02a91860;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02a92270 = 0x2;

extern "C" uint32_t bb_auto_return_constant_02a92270()
{
    return value_02a92270;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a92490()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a924a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a924b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a924c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a92810()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a92f30()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02a934f0 = 0x1;

extern "C" uint32_t bb_auto_return_constant_02a934f0()
{
    return value_02a934f0;
}

/**
 *
 * The part of the object that auto_return_field_02a93720 reads.
 *
 */
struct Object02a93720 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02a93720; meaning unknown. */
};
static_assert(offsetof(Object02a93720, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02a93720(const Object02a93720 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02a93730 reads.
 *
 */
struct Object02a93730 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02a93730; meaning unknown. */
};
static_assert(offsetof(Object02a93730, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02a93730(const Object02a93730 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02a93780()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02a938d0 = 0x8;

extern "C" uint32_t bb_auto_return_constant_02a938d0()
{
    return value_02a938d0;
}

/**
 *
 * The part of the object that auto_return_field_02a93d30 reads.
 *
 */
struct Object02a93d30 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02a93d30; meaning unknown. */
};
static_assert(offsetof(Object02a93d30, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02a93d30(const Object02a93d30 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02a93d40 reads.
 *
 */
struct Object02a93d40 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02a93d40; meaning unknown. */
};
static_assert(offsetof(Object02a93d40, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02a93d40(const Object02a93d40 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02a93d90()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02a93ee0 = 0x8;

extern "C" uint32_t bb_auto_return_constant_02a93ee0()
{
    return value_02a93ee0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a94290()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a942a0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02a95180 = 0x1;

extern "C" uint32_t bb_auto_return_constant_02a95180()
{
    return value_02a95180;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02a95600 = 0x1;

extern "C" uint32_t bb_auto_return_constant_02a95600()
{
    return value_02a95600;
}

/**
 *
 * The part of the object that auto_return_field_02a95830 reads.
 *
 */
struct Object02a95830 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02a95830; meaning unknown. */
};
static_assert(offsetof(Object02a95830, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02a95830(const Object02a95830 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02a95840 reads.
 *
 */
struct Object02a95840 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02a95840; meaning unknown. */
};
static_assert(offsetof(Object02a95840, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02a95840(const Object02a95840 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02a95890()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02a959e0 = 0x8;

extern "C" uint32_t bb_auto_return_constant_02a959e0()
{
    return value_02a959e0;
}

/**
 *
 * The part of the object that auto_return_field_02a95ae0 reads.
 *
 */
struct Object02a95ae0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02a95ae0; meaning unknown. */
};
static_assert(offsetof(Object02a95ae0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02a95ae0(const Object02a95ae0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02a95af0 reads.
 *
 */
struct Object02a95af0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02a95af0; meaning unknown. */
};
static_assert(offsetof(Object02a95af0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02a95af0(const Object02a95af0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02a95b40()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02a95c90 = 0x8;

extern "C" uint32_t bb_auto_return_constant_02a95c90()
{
    return value_02a95c90;
}

/**
 *
 * The part of the object that auto_return_field_02a96f80 reads.
 *
 */
struct Object02a96f80 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02a96f80; meaning unknown. */
};
static_assert(offsetof(Object02a96f80, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02a96f80(const Object02a96f80 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02a96f90 reads.
 *
 */
struct Object02a96f90 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02a96f90; meaning unknown. */
};
static_assert(offsetof(Object02a96f90, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02a96f90(const Object02a96f90 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02a96fe0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02a97130 = 0x30;

extern "C" uint32_t bb_auto_return_constant_02a97130()
{
    return value_02a97130;
}

/**
 *
 * The part of the object that auto_return_field_02a97230 reads.
 *
 */
struct Object02a97230 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02a97230; meaning unknown. */
};
static_assert(offsetof(Object02a97230, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02a97230(const Object02a97230 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02a97240 reads.
 *
 */
struct Object02a97240 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02a97240; meaning unknown. */
};
static_assert(offsetof(Object02a97240, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02a97240(const Object02a97240 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02a97290()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02a973e0 = 0x30;

extern "C" uint32_t bb_auto_return_constant_02a973e0()
{
    return value_02a973e0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a976f0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02a97dc0 = 0x1;

extern "C" uint32_t bb_auto_return_constant_02a97dc0()
{
    return value_02a97dc0;
}

/**
 *
 * The part of the object that auto_return_field_02a97ff0 reads.
 *
 */
struct Object02a97ff0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02a97ff0; meaning unknown. */
};
static_assert(offsetof(Object02a97ff0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02a97ff0(const Object02a97ff0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02a98000 reads.
 *
 */
struct Object02a98000 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02a98000; meaning unknown. */
};
static_assert(offsetof(Object02a98000, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02a98000(const Object02a98000 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02a98050()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02a981a0 = 0x8;

extern "C" uint32_t bb_auto_return_constant_02a981a0()
{
    return value_02a981a0;
}

/**
 *
 * The part of the object that auto_return_field_02a98600 reads.
 *
 */
struct Object02a98600 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02a98600; meaning unknown. */
};
static_assert(offsetof(Object02a98600, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02a98600(const Object02a98600 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02a98610 reads.
 *
 */
struct Object02a98610 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02a98610; meaning unknown. */
};
static_assert(offsetof(Object02a98610, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02a98610(const Object02a98610 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02a98660()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02a987b0 = 0x8;

extern "C" uint32_t bb_auto_return_constant_02a987b0()
{
    return value_02a987b0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a98a00()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02a992d0 = 0x1;

extern "C" uint32_t bb_auto_return_constant_02a992d0()
{
    return value_02a992d0;
}

/**
 *
 * The part of the object that auto_return_field_02a99500 reads.
 *
 */
struct Object02a99500 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02a99500; meaning unknown. */
};
static_assert(offsetof(Object02a99500, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02a99500(const Object02a99500 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02a99510 reads.
 *
 */
struct Object02a99510 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02a99510; meaning unknown. */
};
static_assert(offsetof(Object02a99510, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02a99510(const Object02a99510 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02a99560()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02a996b0 = 0x8;

extern "C" uint32_t bb_auto_return_constant_02a996b0()
{
    return value_02a996b0;
}

/**
 *
 * The part of the object that auto_return_field_02a99b10 reads.
 *
 */
struct Object02a99b10 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02a99b10; meaning unknown. */
};
static_assert(offsetof(Object02a99b10, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02a99b10(const Object02a99b10 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02a99b20 reads.
 *
 */
struct Object02a99b20 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02a99b20; meaning unknown. */
};
static_assert(offsetof(Object02a99b20, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02a99b20(const Object02a99b20 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02a99b70()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02a99cc0 = 0x8;

extern "C" uint32_t bb_auto_return_constant_02a99cc0()
{
    return value_02a99cc0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a99dd0()
{
}

/**
 *
 * The part of the object that auto_return_field_02a9a950 reads.
 *
 */
struct Object02a9a950 {
    uint64_t value_0x0000; /**< Read by auto_return_field_02a9a950; meaning unknown. */
};
static_assert(offsetof(Object02a9a950, value_0x0000) == 0x0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02a9a950(const Object02a9a950 *self)
{
    return self->value_0x0000;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a9ac30()
{
}

/**
 *
 * The part of the object that auto_return_field_02a9b330 reads.
 *
 */
struct Object02a9b330 {
    uint64_t value_0x0000; /**< Read by auto_return_field_02a9b330; meaning unknown. */
};
static_assert(offsetof(Object02a9b330, value_0x0000) == 0x0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02a9b330(const Object02a9b330 *self)
{
    return self->value_0x0000;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a9b610()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a9bad0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a9bf90()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a9c780()
{
}

/**
 *
 * The part of the object that auto_return_field_02a9c870 reads.
 *
 */
struct Object02a9c870 {
    uint8_t unknown_0x0000[0xc];
    uint8_t value_0x000c; /**< Read by auto_return_field_02a9c870; meaning unknown. */
};
static_assert(offsetof(Object02a9c870, value_0x000c) == 0xc);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02a9c870(const Object02a9c870 *self)
{
    return self->value_0x000c;
}

/**
 *
 * The part of the object that auto_return_field_02a9ca00 reads.
 *
 */
struct Object02a9ca00 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02a9ca00; meaning unknown. */
};
static_assert(offsetof(Object02a9ca00, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02a9ca00(const Object02a9ca00 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02a9ca10 reads.
 *
 */
struct Object02a9ca10 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02a9ca10; meaning unknown. */
};
static_assert(offsetof(Object02a9ca10, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02a9ca10(const Object02a9ca10 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02a9ca60()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02a9cbb0 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02a9cbb0()
{
    return value_02a9cbb0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a9d330()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02a9d600()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02a9d610()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a9de30()
{
}

/**
 *
 * The part of the object that auto_return_field_02a9eec0 reads.
 *
 */
struct Object02a9eec0 {
    uint8_t unknown_0x0000[0x20];
    uint8_t value_0x0020; /**< Read by auto_return_field_02a9eec0; meaning unknown. */
};
static_assert(offsetof(Object02a9eec0, value_0x0020) == 0x20);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02a9eec0(const Object02a9eec0 *self)
{
    return self->value_0x0020;
}

/**
 *
 * The part of the object that auto_return_field_02a9eed0 reads.
 *
 */
struct Object02a9eed0 {
    uint8_t unknown_0x0000[0x18];
    uint64_t value_0x0018; /**< Read by auto_return_field_02a9eed0; meaning unknown. */
};
static_assert(offsetof(Object02a9eed0, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02a9eed0(const Object02a9eed0 *self)
{
    return self->value_0x0018;
}

/**
 *
 * The part of the object that auto_return_field_02a9fd50 reads.
 *
 */
struct Object02a9fd50 {
    uint8_t unknown_0x0000[0x20];
    uint8_t value_0x0020; /**< Read by auto_return_field_02a9fd50; meaning unknown. */
};
static_assert(offsetof(Object02a9fd50, value_0x0020) == 0x20);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02a9fd50(const Object02a9fd50 *self)
{
    return self->value_0x0020;
}

/**
 *
 * The part of the object that auto_return_field_02a9fd60 reads.
 *
 */
struct Object02a9fd60 {
    uint8_t unknown_0x0000[0x18];
    uint64_t value_0x0018; /**< Read by auto_return_field_02a9fd60; meaning unknown. */
};
static_assert(offsetof(Object02a9fd60, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02a9fd60(const Object02a9fd60 *self)
{
    return self->value_0x0018;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02a9ff60()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_02a9ff90 reads.
 *
 */
struct Object02a9ff90 {
    uint8_t unknown_0x0000[0x10];
    uint64_t value_0x0010; /**< Read by auto_return_field_02a9ff90; meaning unknown. */
};
static_assert(offsetof(Object02a9ff90, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02a9ff90(const Object02a9ff90 *self)
{
    return self->value_0x0010;
}
