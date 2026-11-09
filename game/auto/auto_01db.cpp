// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_01db0f40 reads.
 *
 */
struct Object01db0f40 {
    uint8_t unknown_0x0000[0x58];
    uint8_t value_0x0058; /**< Read by auto_return_field_01db0f40; meaning unknown. */
};
static_assert(offsetof(Object01db0f40, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_01db0f40(const Object01db0f40 *self)
{
    return self->value_0x0058;
}

/**
 *
 * The part of the object that auto_return_field_01db1b10 reads.
 *
 */
struct Object01db1b10 {
    uint8_t unknown_0x0000[0x50];
    uint32_t value_0x0050; /**< Read by auto_return_field_01db1b10; meaning unknown. */
};
static_assert(offsetof(Object01db1b10, value_0x0050) == 0x50);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01db1b10(const Object01db1b10 *self)
{
    return self->value_0x0050;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01db1be0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01db1bf0()
{
}

/**
 *
 * The part of the object that auto_return_field_01db1ee0 reads.
 *
 */
struct Object01db1ee0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01db1ee0; meaning unknown. */
};
static_assert(offsetof(Object01db1ee0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01db1ee0(const Object01db1ee0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01db1ef0 reads.
 *
 */
struct Object01db1ef0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01db1ef0; meaning unknown. */
};
static_assert(offsetof(Object01db1ef0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01db1ef0(const Object01db1ef0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01db1f40()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01db21c0 = 0x198;

extern "C" uint32_t bb_auto_return_constant_01db21c0()
{
    return value_01db21c0;
}

/**
 *
 * The part of the object that auto_return_field_01db2200 reads.
 *
 */
struct Object01db2200 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01db2200; meaning unknown. */
};
static_assert(offsetof(Object01db2200, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01db2200(const Object01db2200 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01db2210 reads.
 *
 */
struct Object01db2210 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01db2210; meaning unknown. */
};
static_assert(offsetof(Object01db2210, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01db2210(const Object01db2210 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01db2260()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01db24e0 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_01db24e0()
{
    return value_01db24e0;
}

/**
 *
 * The part of the object that auto_return_field_01db2520 reads.
 *
 */
struct Object01db2520 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01db2520; meaning unknown. */
};
static_assert(offsetof(Object01db2520, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01db2520(const Object01db2520 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01db2530 reads.
 *
 */
struct Object01db2530 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01db2530; meaning unknown. */
};
static_assert(offsetof(Object01db2530, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01db2530(const Object01db2530 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01db2580()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01db2800 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_01db2800()
{
    return value_01db2800;
}

/**
 *
 * The part of the object that auto_return_field_01db2840 reads.
 *
 */
struct Object01db2840 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01db2840; meaning unknown. */
};
static_assert(offsetof(Object01db2840, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01db2840(const Object01db2840 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01db2850 reads.
 *
 */
struct Object01db2850 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01db2850; meaning unknown. */
};
static_assert(offsetof(Object01db2850, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01db2850(const Object01db2850 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01db28a0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01db2b20 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_01db2b20()
{
    return value_01db2b20;
}

/**
 *
 * The part of the object that auto_return_field_01db8220 reads.
 *
 */
struct Object01db8220 {
    uint8_t unknown_0x0000[0x58];
    uint32_t value_0x0058; /**< Read by auto_return_field_01db8220; meaning unknown. */
};
static_assert(offsetof(Object01db8220, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01db8220(const Object01db8220 *self)
{
    return self->value_0x0058;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01db82f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01db8300()
{
}

/**
 *
 * The part of the object that auto_return_field_01db8570 reads.
 *
 */
struct Object01db8570 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01db8570; meaning unknown. */
};
static_assert(offsetof(Object01db8570, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01db8570(const Object01db8570 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01db8580 reads.
 *
 */
struct Object01db8580 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01db8580; meaning unknown. */
};
static_assert(offsetof(Object01db8580, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01db8580(const Object01db8580 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01db85d0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01db8850 = 0x130;

extern "C" uint32_t bb_auto_return_constant_01db8850()
{
    return value_01db8850;
}

/**
 *
 * The part of the object that auto_return_field_01db8890 reads.
 *
 */
struct Object01db8890 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01db8890; meaning unknown. */
};
static_assert(offsetof(Object01db8890, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01db8890(const Object01db8890 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01db88a0 reads.
 *
 */
struct Object01db88a0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01db88a0; meaning unknown. */
};
static_assert(offsetof(Object01db88a0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01db88a0(const Object01db88a0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01db88f0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01db8b70 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01db8b70()
{
    return value_01db8b70;
}

/**
 *
 * The part of the object that auto_return_field_01db8bb0 reads.
 *
 */
struct Object01db8bb0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01db8bb0; meaning unknown. */
};
static_assert(offsetof(Object01db8bb0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01db8bb0(const Object01db8bb0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01db8bc0 reads.
 *
 */
struct Object01db8bc0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01db8bc0; meaning unknown. */
};
static_assert(offsetof(Object01db8bc0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01db8bc0(const Object01db8bc0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01db8c10()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01db8e90 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01db8e90()
{
    return value_01db8e90;
}

/**
 *
 * The part of the object that auto_return_field_01db8ed0 reads.
 *
 */
struct Object01db8ed0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01db8ed0; meaning unknown. */
};
static_assert(offsetof(Object01db8ed0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01db8ed0(const Object01db8ed0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01db8ee0 reads.
 *
 */
struct Object01db8ee0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01db8ee0; meaning unknown. */
};
static_assert(offsetof(Object01db8ee0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01db8ee0(const Object01db8ee0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01db8f30()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01db91b0 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01db91b0()
{
    return value_01db91b0;
}

/**
 *
 * The part of the object that auto_return_field_01dbcc60 reads.
 *
 */
struct Object01dbcc60 {
    uint8_t unknown_0x0000[0x58];
    uint32_t value_0x0058; /**< Read by auto_return_field_01dbcc60; meaning unknown. */
};
static_assert(offsetof(Object01dbcc60, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01dbcc60(const Object01dbcc60 *self)
{
    return self->value_0x0058;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01dbcd30()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01dbcd40()
{
}

/**
 *
 * The part of the object that auto_return_field_01dbcfb0 reads.
 *
 */
struct Object01dbcfb0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01dbcfb0; meaning unknown. */
};
static_assert(offsetof(Object01dbcfb0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01dbcfb0(const Object01dbcfb0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01dbcfc0 reads.
 *
 */
struct Object01dbcfc0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01dbcfc0; meaning unknown. */
};
static_assert(offsetof(Object01dbcfc0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01dbcfc0(const Object01dbcfc0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01dbd010()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01dbd290 = 0x180;

extern "C" uint32_t bb_auto_return_constant_01dbd290()
{
    return value_01dbd290;
}

/**
 *
 * The part of the object that auto_return_field_01dbd2d0 reads.
 *
 */
struct Object01dbd2d0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01dbd2d0; meaning unknown. */
};
static_assert(offsetof(Object01dbd2d0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01dbd2d0(const Object01dbd2d0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01dbd2e0 reads.
 *
 */
struct Object01dbd2e0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01dbd2e0; meaning unknown. */
};
static_assert(offsetof(Object01dbd2e0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01dbd2e0(const Object01dbd2e0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01dbd330()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01dbd5b0 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01dbd5b0()
{
    return value_01dbd5b0;
}

/**
 *
 * The part of the object that auto_return_field_01dbd5f0 reads.
 *
 */
struct Object01dbd5f0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01dbd5f0; meaning unknown. */
};
static_assert(offsetof(Object01dbd5f0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01dbd5f0(const Object01dbd5f0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01dbd600 reads.
 *
 */
struct Object01dbd600 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01dbd600; meaning unknown. */
};
static_assert(offsetof(Object01dbd600, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01dbd600(const Object01dbd600 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01dbd650()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01dbd8d0 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01dbd8d0()
{
    return value_01dbd8d0;
}

/**
 *
 * The part of the object that auto_return_field_01dbd910 reads.
 *
 */
struct Object01dbd910 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01dbd910; meaning unknown. */
};
static_assert(offsetof(Object01dbd910, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01dbd910(const Object01dbd910 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01dbd920 reads.
 *
 */
struct Object01dbd920 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01dbd920; meaning unknown. */
};
static_assert(offsetof(Object01dbd920, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01dbd920(const Object01dbd920 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01dbd970()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01dbdbf0 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01dbdbf0()
{
    return value_01dbdbf0;
}
