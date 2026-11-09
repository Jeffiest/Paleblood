// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_024206c0()
{
}

/**
 *
 * The part of the object that auto_return_field_02421ea0 reads.
 *
 */
struct Object02421ea0 {
    uint8_t unknown_0x0000[0x58];
    uint8_t value_0x0058; /**< Read by auto_return_field_02421ea0; meaning unknown. */
};
static_assert(offsetof(Object02421ea0, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02421ea0(const Object02421ea0 *self)
{
    return self->value_0x0058;
}

/**
 *
 * The part of the object that auto_return_field_02422a80 reads.
 *
 */
struct Object02422a80 {
    uint8_t unknown_0x0000[0x50];
    uint32_t value_0x0050; /**< Read by auto_return_field_02422a80; meaning unknown. */
};
static_assert(offsetof(Object02422a80, value_0x0050) == 0x50);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02422a80(const Object02422a80 *self)
{
    return self->value_0x0050;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02422b50()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02422b60()
{
}

/**
 *
 * The part of the object that auto_return_field_02422e50 reads.
 *
 */
struct Object02422e50 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02422e50; meaning unknown. */
};
static_assert(offsetof(Object02422e50, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02422e50(const Object02422e50 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02422e60 reads.
 *
 */
struct Object02422e60 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02422e60; meaning unknown. */
};
static_assert(offsetof(Object02422e60, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02422e60(const Object02422e60 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02422eb0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02423130 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_02423130()
{
    return value_02423130;
}

/**
 *
 * The part of the object that auto_return_field_02423170 reads.
 *
 */
struct Object02423170 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02423170; meaning unknown. */
};
static_assert(offsetof(Object02423170, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02423170(const Object02423170 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02423180 reads.
 *
 */
struct Object02423180 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02423180; meaning unknown. */
};
static_assert(offsetof(Object02423180, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02423180(const Object02423180 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_024231d0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02423450 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_02423450()
{
    return value_02423450;
}

/**
 *
 * The part of the object that auto_return_field_02423490 reads.
 *
 */
struct Object02423490 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02423490; meaning unknown. */
};
static_assert(offsetof(Object02423490, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02423490(const Object02423490 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_024234a0 reads.
 *
 */
struct Object024234a0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_024234a0; meaning unknown. */
};
static_assert(offsetof(Object024234a0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_024234a0(const Object024234a0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_024234f0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02423770 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_02423770()
{
    return value_02423770;
}

/**
 *
 * The part of the object that auto_return_field_024237b0 reads.
 *
 */
struct Object024237b0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_024237b0; meaning unknown. */
};
static_assert(offsetof(Object024237b0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_024237b0(const Object024237b0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_024237c0 reads.
 *
 */
struct Object024237c0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_024237c0; meaning unknown. */
};
static_assert(offsetof(Object024237c0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_024237c0(const Object024237c0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02423810()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02423a90 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_02423a90()
{
    return value_02423a90;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02424230()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02424240()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02424250()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02424260 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02424260()
{
    return value_02424260;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02424270()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02424280()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02424950()
{
}

/**
 *
 * The part of the object that auto_return_field_02424960 reads.
 *
 */
struct Object02424960 {
    uint8_t unknown_0x0000[0x40];
    uint8_t value_0x0040; /**< Read by auto_return_field_02424960; meaning unknown. */
};
static_assert(offsetof(Object02424960, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02424960(const Object02424960 *self)
{
    return self->value_0x0040;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02425cd0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02425e80()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02425ee0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_024262e0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_024266e0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_02428b90 reads.
 *
 */
struct Object02428b90 {
    uint8_t unknown_0x0000[0x58];
    uint32_t value_0x0058; /**< Read by auto_return_field_02428b90; meaning unknown. */
};
static_assert(offsetof(Object02428b90, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02428b90(const Object02428b90 *self)
{
    return self->value_0x0058;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02428c60()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02428c70()
{
}

/**
 *
 * The part of the object that auto_return_field_02428ee0 reads.
 *
 */
struct Object02428ee0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02428ee0; meaning unknown. */
};
static_assert(offsetof(Object02428ee0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02428ee0(const Object02428ee0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02428ef0 reads.
 *
 */
struct Object02428ef0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02428ef0; meaning unknown. */
};
static_assert(offsetof(Object02428ef0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02428ef0(const Object02428ef0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02428f40()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_024291c0 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_024291c0()
{
    return value_024291c0;
}

/**
 *
 * The part of the object that auto_return_field_02429200 reads.
 *
 */
struct Object02429200 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02429200; meaning unknown. */
};
static_assert(offsetof(Object02429200, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02429200(const Object02429200 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02429210 reads.
 *
 */
struct Object02429210 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02429210; meaning unknown. */
};
static_assert(offsetof(Object02429210, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02429210(const Object02429210 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02429260()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_024294e0 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_024294e0()
{
    return value_024294e0;
}

/**
 *
 * The part of the object that auto_return_field_02429520 reads.
 *
 */
struct Object02429520 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02429520; meaning unknown. */
};
static_assert(offsetof(Object02429520, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02429520(const Object02429520 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02429530 reads.
 *
 */
struct Object02429530 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02429530; meaning unknown. */
};
static_assert(offsetof(Object02429530, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02429530(const Object02429530 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02429580()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02429800 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_02429800()
{
    return value_02429800;
}

/**
 *
 * The part of the object that auto_return_field_02429840 reads.
 *
 */
struct Object02429840 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02429840; meaning unknown. */
};
static_assert(offsetof(Object02429840, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02429840(const Object02429840 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02429850 reads.
 *
 */
struct Object02429850 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02429850; meaning unknown. */
};
static_assert(offsetof(Object02429850, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02429850(const Object02429850 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_024298a0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02429b20 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_02429b20()
{
    return value_02429b20;
}

/**
 *
 * The part of the object that auto_return_field_0242a6d0 reads.
 *
 */
struct Object0242a6d0 {
    uint8_t unknown_0x0000[0x30];
    uint32_t value_0x0030; /**< Read by auto_return_field_0242a6d0; meaning unknown. */
};
static_assert(offsetof(Object0242a6d0, value_0x0030) == 0x30);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_0242a6d0(const Object0242a6d0 *self)
{
    return self->value_0x0030;
}

/**
 *
 * The part of the object that auto_return_field_0242a7c0 reads.
 *
 */
struct Object0242a7c0 {
    uint8_t unknown_0x0000[0x34];
    uint32_t value_0x0034; /**< Read by auto_return_field_0242a7c0; meaning unknown. */
};
static_assert(offsetof(Object0242a7c0, value_0x0034) == 0x34);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_0242a7c0(const Object0242a7c0 *self)
{
    return self->value_0x0034;
}

/**
 *
 * The part of the object that auto_return_field_0242a7d0 reads.
 *
 */
struct Object0242a7d0 {
    uint8_t unknown_0x0000[0x39];
    uint8_t value_0x0039; /**< Read by auto_return_field_0242a7d0; meaning unknown. */
};
static_assert(offsetof(Object0242a7d0, value_0x0039) == 0x39);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_0242a7d0(const Object0242a7d0 *self)
{
    return self->value_0x0039;
}

/**
 *
 * The part of the object that auto_return_field_0242a7e0 reads.
 *
 */
struct Object0242a7e0 {
    uint8_t unknown_0x0000[0x3a];
    uint8_t value_0x003a; /**< Read by auto_return_field_0242a7e0; meaning unknown. */
};
static_assert(offsetof(Object0242a7e0, value_0x003a) == 0x3a);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_0242a7e0(const Object0242a7e0 *self)
{
    return self->value_0x003a;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0242ae40()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0242c740()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0242c750()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0242c760()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0242cac0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0242def0()
{
}

/**
 *
 * The part of the object that auto_return_field_0242e2f0 reads.
 *
 */
struct Object0242e2f0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0242e2f0; meaning unknown. */
};
static_assert(offsetof(Object0242e2f0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0242e2f0(const Object0242e2f0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0242e300 reads.
 *
 */
struct Object0242e300 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0242e300; meaning unknown. */
};
static_assert(offsetof(Object0242e300, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0242e300(const Object0242e300 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0242e350()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0242e3f0 = 0x8;

extern "C" uint32_t bb_auto_return_constant_0242e3f0()
{
    return value_0242e3f0;
}
