// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_023a01f0 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_023a01f0()
{
    return value_023a01f0;
}

/**
 *
 * The part of the object that auto_return_field_023a0230 reads.
 *
 */
struct Object023a0230 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_023a0230; meaning unknown. */
};
static_assert(offsetof(Object023a0230, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023a0230(const Object023a0230 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_023a0240 reads.
 *
 */
struct Object023a0240 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_023a0240; meaning unknown. */
};
static_assert(offsetof(Object023a0240, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023a0240(const Object023a0240 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_023a0290()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_023a0510 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_023a0510()
{
    return value_023a0510;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_023a0bd0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_023a0be0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_023a1010()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_023a1bb0()
{
}

/**
 *
 * The part of the object that auto_return_field_023a34e0 reads.
 *
 */
struct Object023a34e0 {
    uint8_t unknown_0x0000[0x58];
    uint32_t value_0x0058; /**< Read by auto_return_field_023a34e0; meaning unknown. */
};
static_assert(offsetof(Object023a34e0, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_023a34e0(const Object023a34e0 *self)
{
    return self->value_0x0058;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_023a35b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_023a35c0()
{
}

/**
 *
 * The part of the object that auto_return_field_023a3830 reads.
 *
 */
struct Object023a3830 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_023a3830; meaning unknown. */
};
static_assert(offsetof(Object023a3830, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023a3830(const Object023a3830 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_023a3840 reads.
 *
 */
struct Object023a3840 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_023a3840; meaning unknown. */
};
static_assert(offsetof(Object023a3840, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023a3840(const Object023a3840 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_023a3890()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_023a3b10 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_023a3b10()
{
    return value_023a3b10;
}

/**
 *
 * The part of the object that auto_return_field_023a3b50 reads.
 *
 */
struct Object023a3b50 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_023a3b50; meaning unknown. */
};
static_assert(offsetof(Object023a3b50, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023a3b50(const Object023a3b50 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_023a3b60 reads.
 *
 */
struct Object023a3b60 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_023a3b60; meaning unknown. */
};
static_assert(offsetof(Object023a3b60, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023a3b60(const Object023a3b60 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_023a3bb0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_023a3e30 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_023a3e30()
{
    return value_023a3e30;
}

/**
 *
 * The part of the object that auto_return_field_023a3e70 reads.
 *
 */
struct Object023a3e70 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_023a3e70; meaning unknown. */
};
static_assert(offsetof(Object023a3e70, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023a3e70(const Object023a3e70 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_023a3e80 reads.
 *
 */
struct Object023a3e80 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_023a3e80; meaning unknown. */
};
static_assert(offsetof(Object023a3e80, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023a3e80(const Object023a3e80 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_023a3ed0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_023a4150 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_023a4150()
{
    return value_023a4150;
}

/**
 *
 * The part of the object that auto_return_field_023a4190 reads.
 *
 */
struct Object023a4190 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_023a4190; meaning unknown. */
};
static_assert(offsetof(Object023a4190, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023a4190(const Object023a4190 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_023a41a0 reads.
 *
 */
struct Object023a41a0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_023a41a0; meaning unknown. */
};
static_assert(offsetof(Object023a41a0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023a41a0(const Object023a41a0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_023a41f0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_023a4470 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_023a4470()
{
    return value_023a4470;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_023a5ab0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_023a5c20()
{
}

/**
 *
 * The part of the object that auto_return_field_023a82e0 reads.
 *
 */
struct Object023a82e0 {
    uint8_t unknown_0x0000[0x58];
    uint32_t value_0x0058; /**< Read by auto_return_field_023a82e0; meaning unknown. */
};
static_assert(offsetof(Object023a82e0, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_023a82e0(const Object023a82e0 *self)
{
    return self->value_0x0058;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_023a83b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_023a83c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_023a83d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_023a8430()
{
}

/**
 *
 * The part of the object that auto_return_field_023a86f0 reads.
 *
 */
struct Object023a86f0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_023a86f0; meaning unknown. */
};
static_assert(offsetof(Object023a86f0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023a86f0(const Object023a86f0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_023a8700 reads.
 *
 */
struct Object023a8700 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_023a8700; meaning unknown. */
};
static_assert(offsetof(Object023a8700, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023a8700(const Object023a8700 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_023a8750()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_023a89d0 = 0x160;

extern "C" uint32_t bb_auto_return_constant_023a89d0()
{
    return value_023a89d0;
}

/**
 *
 * The part of the object that auto_return_field_023a8a10 reads.
 *
 */
struct Object023a8a10 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_023a8a10; meaning unknown. */
};
static_assert(offsetof(Object023a8a10, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023a8a10(const Object023a8a10 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_023a8a20 reads.
 *
 */
struct Object023a8a20 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_023a8a20; meaning unknown. */
};
static_assert(offsetof(Object023a8a20, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023a8a20(const Object023a8a20 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_023a8a70()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_023a8cf0 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_023a8cf0()
{
    return value_023a8cf0;
}

/**
 *
 * The part of the object that auto_return_field_023a8d30 reads.
 *
 */
struct Object023a8d30 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_023a8d30; meaning unknown. */
};
static_assert(offsetof(Object023a8d30, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023a8d30(const Object023a8d30 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_023a8d40 reads.
 *
 */
struct Object023a8d40 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_023a8d40; meaning unknown. */
};
static_assert(offsetof(Object023a8d40, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023a8d40(const Object023a8d40 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_023a8d90()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_023a9010 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_023a9010()
{
    return value_023a9010;
}

/**
 *
 * The part of the object that auto_return_field_023a9050 reads.
 *
 */
struct Object023a9050 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_023a9050; meaning unknown. */
};
static_assert(offsetof(Object023a9050, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023a9050(const Object023a9050 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_023a9060 reads.
 *
 */
struct Object023a9060 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_023a9060; meaning unknown. */
};
static_assert(offsetof(Object023a9060, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023a9060(const Object023a9060 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_023a90b0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_023a9330 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_023a9330()
{
    return value_023a9330;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_023a9aa0()
{
}

/**
 *
 * The part of the object that auto_return_field_023ab080 reads.
 *
 */
struct Object023ab080 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_023ab080; meaning unknown. */
};
static_assert(offsetof(Object023ab080, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023ab080(const Object023ab080 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_023ab090 reads.
 *
 */
struct Object023ab090 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_023ab090; meaning unknown. */
};
static_assert(offsetof(Object023ab090, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023ab090(const Object023ab090 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_023ab0e0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_023ab360 = 0x18;

extern "C" uint32_t bb_auto_return_constant_023ab360()
{
    return value_023ab360;
}

/**
 *
 * The part of the object that auto_return_field_023ad880 reads.
 *
 */
struct Object023ad880 {
    uint8_t unknown_0x0000[0x58];
    uint32_t value_0x0058; /**< Read by auto_return_field_023ad880; meaning unknown. */
};
static_assert(offsetof(Object023ad880, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_023ad880(const Object023ad880 *self)
{
    return self->value_0x0058;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_023ad950()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_023ad960()
{
}

/**
 *
 * The part of the object that auto_return_field_023adbd0 reads.
 *
 */
struct Object023adbd0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_023adbd0; meaning unknown. */
};
static_assert(offsetof(Object023adbd0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023adbd0(const Object023adbd0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_023adbe0 reads.
 *
 */
struct Object023adbe0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_023adbe0; meaning unknown. */
};
static_assert(offsetof(Object023adbe0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023adbe0(const Object023adbe0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_023adc30()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_023adeb0 = 0xd8;

extern "C" uint32_t bb_auto_return_constant_023adeb0()
{
    return value_023adeb0;
}

/**
 *
 * The part of the object that auto_return_field_023adef0 reads.
 *
 */
struct Object023adef0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_023adef0; meaning unknown. */
};
static_assert(offsetof(Object023adef0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023adef0(const Object023adef0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_023adf00 reads.
 *
 */
struct Object023adf00 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_023adf00; meaning unknown. */
};
static_assert(offsetof(Object023adf00, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023adf00(const Object023adf00 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_023adf50()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_023ae1d0 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_023ae1d0()
{
    return value_023ae1d0;
}

/**
 *
 * The part of the object that auto_return_field_023ae210 reads.
 *
 */
struct Object023ae210 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_023ae210; meaning unknown. */
};
static_assert(offsetof(Object023ae210, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023ae210(const Object023ae210 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_023ae220 reads.
 *
 */
struct Object023ae220 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_023ae220; meaning unknown. */
};
static_assert(offsetof(Object023ae220, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023ae220(const Object023ae220 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_023ae270()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_023ae4f0 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_023ae4f0()
{
    return value_023ae4f0;
}

/**
 *
 * The part of the object that auto_return_field_023ae530 reads.
 *
 */
struct Object023ae530 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_023ae530; meaning unknown. */
};
static_assert(offsetof(Object023ae530, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023ae530(const Object023ae530 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_023ae540 reads.
 *
 */
struct Object023ae540 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_023ae540; meaning unknown. */
};
static_assert(offsetof(Object023ae540, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023ae540(const Object023ae540 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_023ae590()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_023ae810 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_023ae810()
{
    return value_023ae810;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_023aea90()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_023aeaa0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_023aeab0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_023af310()
{
}
