// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_023c0420 = 0x1;

extern "C" uint8_t bb_auto_return_constant_023c0420()
{
    return value_023c0420;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_023c0c60()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_023c4620 reads.
 *
 */
struct Object023c4620 {
    uint8_t unknown_0x0000[0x518];
    uint64_t value_0x0518; /**< Read by auto_return_field_023c4620; meaning unknown. */
};
static_assert(offsetof(Object023c4620, value_0x0518) == 0x518);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023c4620(const Object023c4620 *self)
{
    return self->value_0x0518;
}

/**
 *
 * The part of the object that auto_return_field_023c4650 reads.
 *
 */
struct Object023c4650 {
    uint8_t unknown_0x0000[0x528];
    uint32_t value_0x0528; /**< Read by auto_return_field_023c4650; meaning unknown. */
};
static_assert(offsetof(Object023c4650, value_0x0528) == 0x528);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_023c4650(const Object023c4650 *self)
{
    return self->value_0x0528;
}

/**
 *
 * The part of the object that auto_return_field_023c4660 reads.
 *
 */
struct Object023c4660 {
    uint8_t unknown_0x0000[0x52c];
    uint32_t value_0x052c; /**< Read by auto_return_field_023c4660; meaning unknown. */
};
static_assert(offsetof(Object023c4660, value_0x052c) == 0x52c);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_023c4660(const Object023c4660 *self)
{
    return self->value_0x052c;
}

/**
 *
 * The part of the object that auto_return_field_023c4670 reads.
 *
 */
struct Object023c4670 {
    uint8_t unknown_0x0000[0x530];
    uint64_t value_0x0530; /**< Read by auto_return_field_023c4670; meaning unknown. */
};
static_assert(offsetof(Object023c4670, value_0x0530) == 0x530);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023c4670(const Object023c4670 *self)
{
    return self->value_0x0530;
}

/**
 *
 * The part of the object that auto_return_field_023c4680 reads.
 *
 */
struct Object023c4680 {
    uint8_t unknown_0x0000[0x538];
    uint64_t value_0x0538; /**< Read by auto_return_field_023c4680; meaning unknown. */
};
static_assert(offsetof(Object023c4680, value_0x0538) == 0x538);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023c4680(const Object023c4680 *self)
{
    return self->value_0x0538;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_023c4720()
{
}

/**
 *
 * The part of the object that auto_return_field_023c5140 reads.
 *
 */
struct Object023c5140 {
    uint8_t unknown_0x0000[0x118];
    uint64_t value_0x0118; /**< Read by auto_return_field_023c5140; meaning unknown. */
};
static_assert(offsetof(Object023c5140, value_0x0118) == 0x118);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023c5140(const Object023c5140 *self)
{
    return self->value_0x0118;
}

/**
 *
 * The part of the object that auto_return_field_023c5170 reads.
 *
 */
struct Object023c5170 {
    uint8_t unknown_0x0000[0x128];
    uint32_t value_0x0128; /**< Read by auto_return_field_023c5170; meaning unknown. */
};
static_assert(offsetof(Object023c5170, value_0x0128) == 0x128);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_023c5170(const Object023c5170 *self)
{
    return self->value_0x0128;
}

/**
 *
 * The part of the object that auto_return_field_023c5180 reads.
 *
 */
struct Object023c5180 {
    uint8_t unknown_0x0000[0x12c];
    uint32_t value_0x012c; /**< Read by auto_return_field_023c5180; meaning unknown. */
};
static_assert(offsetof(Object023c5180, value_0x012c) == 0x12c);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_023c5180(const Object023c5180 *self)
{
    return self->value_0x012c;
}

/**
 *
 * The part of the object that auto_return_field_023c5190 reads.
 *
 */
struct Object023c5190 {
    uint8_t unknown_0x0000[0x130];
    uint64_t value_0x0130; /**< Read by auto_return_field_023c5190; meaning unknown. */
};
static_assert(offsetof(Object023c5190, value_0x0130) == 0x130);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023c5190(const Object023c5190 *self)
{
    return self->value_0x0130;
}

/**
 *
 * The part of the object that auto_return_field_023c51a0 reads.
 *
 */
struct Object023c51a0 {
    uint8_t unknown_0x0000[0x138];
    uint64_t value_0x0138; /**< Read by auto_return_field_023c51a0; meaning unknown. */
};
static_assert(offsetof(Object023c51a0, value_0x0138) == 0x138);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023c51a0(const Object023c51a0 *self)
{
    return self->value_0x0138;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_023c51b0()
{
}

/**
 *
 * The part of the object that auto_return_field_023c5c70 reads.
 *
 */
struct Object023c5c70 {
    uint8_t unknown_0x0000[0x498];
    uint64_t value_0x0498; /**< Read by auto_return_field_023c5c70; meaning unknown. */
};
static_assert(offsetof(Object023c5c70, value_0x0498) == 0x498);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023c5c70(const Object023c5c70 *self)
{
    return self->value_0x0498;
}

/**
 *
 * The part of the object that auto_return_field_023c5ca0 reads.
 *
 */
struct Object023c5ca0 {
    uint8_t unknown_0x0000[0x4a8];
    uint32_t value_0x04a8; /**< Read by auto_return_field_023c5ca0; meaning unknown. */
};
static_assert(offsetof(Object023c5ca0, value_0x04a8) == 0x4a8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_023c5ca0(const Object023c5ca0 *self)
{
    return self->value_0x04a8;
}

/**
 *
 * The part of the object that auto_return_field_023c5cb0 reads.
 *
 */
struct Object023c5cb0 {
    uint8_t unknown_0x0000[0x4ac];
    uint32_t value_0x04ac; /**< Read by auto_return_field_023c5cb0; meaning unknown. */
};
static_assert(offsetof(Object023c5cb0, value_0x04ac) == 0x4ac);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_023c5cb0(const Object023c5cb0 *self)
{
    return self->value_0x04ac;
}

/**
 *
 * The part of the object that auto_return_field_023c5cc0 reads.
 *
 */
struct Object023c5cc0 {
    uint8_t unknown_0x0000[0x4b0];
    uint64_t value_0x04b0; /**< Read by auto_return_field_023c5cc0; meaning unknown. */
};
static_assert(offsetof(Object023c5cc0, value_0x04b0) == 0x4b0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023c5cc0(const Object023c5cc0 *self)
{
    return self->value_0x04b0;
}

/**
 *
 * The part of the object that auto_return_field_023c5cd0 reads.
 *
 */
struct Object023c5cd0 {
    uint8_t unknown_0x0000[0x4b8];
    uint64_t value_0x04b8; /**< Read by auto_return_field_023c5cd0; meaning unknown. */
};
static_assert(offsetof(Object023c5cd0, value_0x04b8) == 0x4b8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023c5cd0(const Object023c5cd0 *self)
{
    return self->value_0x04b8;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_023c5ce0()
{
}

/**
 *
 * The part of the object that auto_return_field_023c64d0 reads.
 *
 */
struct Object023c64d0 {
    uint8_t unknown_0x0000[0xb8];
    uint64_t value_0x00b8; /**< Read by auto_return_field_023c64d0; meaning unknown. */
};
static_assert(offsetof(Object023c64d0, value_0x00b8) == 0xb8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023c64d0(const Object023c64d0 *self)
{
    return self->value_0x00b8;
}

/**
 *
 * The part of the object that auto_return_field_023c6500 reads.
 *
 */
struct Object023c6500 {
    uint8_t unknown_0x0000[0xc8];
    uint32_t value_0x00c8; /**< Read by auto_return_field_023c6500; meaning unknown. */
};
static_assert(offsetof(Object023c6500, value_0x00c8) == 0xc8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_023c6500(const Object023c6500 *self)
{
    return self->value_0x00c8;
}

/**
 *
 * The part of the object that auto_return_field_023c6510 reads.
 *
 */
struct Object023c6510 {
    uint8_t unknown_0x0000[0xcc];
    uint32_t value_0x00cc; /**< Read by auto_return_field_023c6510; meaning unknown. */
};
static_assert(offsetof(Object023c6510, value_0x00cc) == 0xcc);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_023c6510(const Object023c6510 *self)
{
    return self->value_0x00cc;
}

/**
 *
 * The part of the object that auto_return_field_023c6520 reads.
 *
 */
struct Object023c6520 {
    uint8_t unknown_0x0000[0xd0];
    uint64_t value_0x00d0; /**< Read by auto_return_field_023c6520; meaning unknown. */
};
static_assert(offsetof(Object023c6520, value_0x00d0) == 0xd0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023c6520(const Object023c6520 *self)
{
    return self->value_0x00d0;
}

/**
 *
 * The part of the object that auto_return_field_023c6530 reads.
 *
 */
struct Object023c6530 {
    uint8_t unknown_0x0000[0xd8];
    uint64_t value_0x00d8; /**< Read by auto_return_field_023c6530; meaning unknown. */
};
static_assert(offsetof(Object023c6530, value_0x00d8) == 0xd8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023c6530(const Object023c6530 *self)
{
    return self->value_0x00d8;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_023c6540()
{
}

/**
 *
 * The part of the object that auto_return_field_023c7000 reads.
 *
 */
struct Object023c7000 {
    uint8_t unknown_0x0000[0x90];
    uint64_t value_0x0090; /**< Read by auto_return_field_023c7000; meaning unknown. */
};
static_assert(offsetof(Object023c7000, value_0x0090) == 0x90);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023c7000(const Object023c7000 *self)
{
    return self->value_0x0090;
}

/**
 *
 * The part of the object that auto_return_field_023c7030 reads.
 *
 */
struct Object023c7030 {
    uint8_t unknown_0x0000[0xa0];
    uint32_t value_0x00a0; /**< Read by auto_return_field_023c7030; meaning unknown. */
};
static_assert(offsetof(Object023c7030, value_0x00a0) == 0xa0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_023c7030(const Object023c7030 *self)
{
    return self->value_0x00a0;
}

/**
 *
 * The part of the object that auto_return_field_023c7040 reads.
 *
 */
struct Object023c7040 {
    uint8_t unknown_0x0000[0xa4];
    uint32_t value_0x00a4; /**< Read by auto_return_field_023c7040; meaning unknown. */
};
static_assert(offsetof(Object023c7040, value_0x00a4) == 0xa4);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_023c7040(const Object023c7040 *self)
{
    return self->value_0x00a4;
}

/**
 *
 * The part of the object that auto_return_field_023c7050 reads.
 *
 */
struct Object023c7050 {
    uint8_t unknown_0x0000[0xa8];
    uint64_t value_0x00a8; /**< Read by auto_return_field_023c7050; meaning unknown. */
};
static_assert(offsetof(Object023c7050, value_0x00a8) == 0xa8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023c7050(const Object023c7050 *self)
{
    return self->value_0x00a8;
}

/**
 *
 * The part of the object that auto_return_field_023c7060 reads.
 *
 */
struct Object023c7060 {
    uint8_t unknown_0x0000[0xb0];
    uint64_t value_0x00b0; /**< Read by auto_return_field_023c7060; meaning unknown. */
};
static_assert(offsetof(Object023c7060, value_0x00b0) == 0xb0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023c7060(const Object023c7060 *self)
{
    return self->value_0x00b0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_023c7070()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_023cc070()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_023cc0d0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_023cc720()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_023cd890 reads.
 *
 */
struct Object023cd890 {
    uint8_t unknown_0x0000[0x168];
    uint8_t value_0x0168; /**< Read by auto_return_field_023cd890; meaning unknown. */
};
static_assert(offsetof(Object023cd890, value_0x0168) == 0x168);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_023cd890(const Object023cd890 *self)
{
    return self->value_0x0168;
}

/**
 *
 * The part of the object that auto_return_field_023cd8b0 reads.
 *
 */
struct Object023cd8b0 {
    uint8_t unknown_0x0000[0xc8];
    uint64_t value_0x00c8; /**< Read by auto_return_field_023cd8b0; meaning unknown. */
};
static_assert(offsetof(Object023cd8b0, value_0x00c8) == 0xc8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023cd8b0(const Object023cd8b0 *self)
{
    return self->value_0x00c8;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_023ce820()
{
}
