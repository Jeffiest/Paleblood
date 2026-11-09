// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_02252650 reads.
 *
 */
struct Object02252650 {
    uint8_t unknown_0x0000[0x58];
    uint8_t value_0x0058; /**< Read by auto_return_field_02252650; meaning unknown. */
};
static_assert(offsetof(Object02252650, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02252650(const Object02252650 *self)
{
    return self->value_0x0058;
}

/**
 *
 * The part of the object that auto_return_field_02253230 reads.
 *
 */
struct Object02253230 {
    uint8_t unknown_0x0000[0x50];
    uint32_t value_0x0050; /**< Read by auto_return_field_02253230; meaning unknown. */
};
static_assert(offsetof(Object02253230, value_0x0050) == 0x50);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02253230(const Object02253230 *self)
{
    return self->value_0x0050;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02253300()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02253310()
{
}

/**
 *
 * The part of the object that auto_return_field_02253600 reads.
 *
 */
struct Object02253600 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02253600; meaning unknown. */
};
static_assert(offsetof(Object02253600, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02253600(const Object02253600 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02253610 reads.
 *
 */
struct Object02253610 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02253610; meaning unknown. */
};
static_assert(offsetof(Object02253610, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02253610(const Object02253610 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02253660()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_022538e0 = 0x100;

extern "C" uint32_t bb_auto_return_constant_022538e0()
{
    return value_022538e0;
}

/**
 *
 * The part of the object that auto_return_field_02253920 reads.
 *
 */
struct Object02253920 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02253920; meaning unknown. */
};
static_assert(offsetof(Object02253920, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02253920(const Object02253920 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02253930 reads.
 *
 */
struct Object02253930 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02253930; meaning unknown. */
};
static_assert(offsetof(Object02253930, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02253930(const Object02253930 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02253980()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02253c00 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_02253c00()
{
    return value_02253c00;
}

/**
 *
 * The part of the object that auto_return_field_02253c40 reads.
 *
 */
struct Object02253c40 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02253c40; meaning unknown. */
};
static_assert(offsetof(Object02253c40, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02253c40(const Object02253c40 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02253c50 reads.
 *
 */
struct Object02253c50 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02253c50; meaning unknown. */
};
static_assert(offsetof(Object02253c50, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02253c50(const Object02253c50 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02253ca0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02253f20 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_02253f20()
{
    return value_02253f20;
}

/**
 *
 * The part of the object that auto_return_field_02253f60 reads.
 *
 */
struct Object02253f60 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02253f60; meaning unknown. */
};
static_assert(offsetof(Object02253f60, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02253f60(const Object02253f60 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02253f70 reads.
 *
 */
struct Object02253f70 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02253f70; meaning unknown. */
};
static_assert(offsetof(Object02253f70, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02253f70(const Object02253f70 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02253fc0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02254240 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_02254240()
{
    return value_02254240;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02254730()
{
}

/**
 *
 * The part of the object that auto_return_field_02259040 reads.
 *
 */
struct Object02259040 {
    uint8_t unknown_0x0000[0x58];
    uint8_t value_0x0058; /**< Read by auto_return_field_02259040; meaning unknown. */
};
static_assert(offsetof(Object02259040, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02259040(const Object02259040 *self)
{
    return self->value_0x0058;
}

/**
 *
 * The part of the object that auto_return_field_02259c10 reads.
 *
 */
struct Object02259c10 {
    uint8_t unknown_0x0000[0x50];
    uint32_t value_0x0050; /**< Read by auto_return_field_02259c10; meaning unknown. */
};
static_assert(offsetof(Object02259c10, value_0x0050) == 0x50);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02259c10(const Object02259c10 *self)
{
    return self->value_0x0050;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02259ce0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02259cf0()
{
}

/**
 *
 * The part of the object that auto_return_field_0225a080 reads.
 *
 */
struct Object0225a080 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0225a080; meaning unknown. */
};
static_assert(offsetof(Object0225a080, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0225a080(const Object0225a080 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0225a090 reads.
 *
 */
struct Object0225a090 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0225a090; meaning unknown. */
};
static_assert(offsetof(Object0225a090, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0225a090(const Object0225a090 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0225a0e0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0225a360 = 0x110;

extern "C" uint32_t bb_auto_return_constant_0225a360()
{
    return value_0225a360;
}

/**
 *
 * The part of the object that auto_return_field_0225a3a0 reads.
 *
 */
struct Object0225a3a0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0225a3a0; meaning unknown. */
};
static_assert(offsetof(Object0225a3a0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0225a3a0(const Object0225a3a0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0225a3b0 reads.
 *
 */
struct Object0225a3b0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0225a3b0; meaning unknown. */
};
static_assert(offsetof(Object0225a3b0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0225a3b0(const Object0225a3b0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0225a400()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0225a680 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_0225a680()
{
    return value_0225a680;
}

/**
 *
 * The part of the object that auto_return_field_0225a6c0 reads.
 *
 */
struct Object0225a6c0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0225a6c0; meaning unknown. */
};
static_assert(offsetof(Object0225a6c0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0225a6c0(const Object0225a6c0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0225a6d0 reads.
 *
 */
struct Object0225a6d0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0225a6d0; meaning unknown. */
};
static_assert(offsetof(Object0225a6d0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0225a6d0(const Object0225a6d0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0225a720()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0225a9a0 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_0225a9a0()
{
    return value_0225a9a0;
}

/**
 *
 * The part of the object that auto_return_field_0225a9e0 reads.
 *
 */
struct Object0225a9e0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0225a9e0; meaning unknown. */
};
static_assert(offsetof(Object0225a9e0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0225a9e0(const Object0225a9e0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0225a9f0 reads.
 *
 */
struct Object0225a9f0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0225a9f0; meaning unknown. */
};
static_assert(offsetof(Object0225a9f0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0225a9f0(const Object0225a9f0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0225aa40()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0225acc0 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_0225acc0()
{
    return value_0225acc0;
}

/**
 *
 * The part of the object that auto_return_field_0225e330 reads.
 *
 */
struct Object0225e330 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0225e330; meaning unknown. */
};
static_assert(offsetof(Object0225e330, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0225e330(const Object0225e330 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0225e340 reads.
 *
 */
struct Object0225e340 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0225e340; meaning unknown. */
};
static_assert(offsetof(Object0225e340, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0225e340(const Object0225e340 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0225e390()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0225e610 = 0xe0;

extern "C" uint32_t bb_auto_return_constant_0225e610()
{
    return value_0225e610;
}

/**
 *
 * The part of the object that auto_return_field_0225e650 reads.
 *
 */
struct Object0225e650 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0225e650; meaning unknown. */
};
static_assert(offsetof(Object0225e650, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0225e650(const Object0225e650 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0225e660 reads.
 *
 */
struct Object0225e660 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0225e660; meaning unknown. */
};
static_assert(offsetof(Object0225e660, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0225e660(const Object0225e660 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0225e6b0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0225e930 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_0225e930()
{
    return value_0225e930;
}

/**
 *
 * The part of the object that auto_return_field_0225e970 reads.
 *
 */
struct Object0225e970 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0225e970; meaning unknown. */
};
static_assert(offsetof(Object0225e970, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0225e970(const Object0225e970 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0225e980 reads.
 *
 */
struct Object0225e980 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0225e980; meaning unknown. */
};
static_assert(offsetof(Object0225e980, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0225e980(const Object0225e980 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0225e9d0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0225ec50 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_0225ec50()
{
    return value_0225ec50;
}

/**
 *
 * The part of the object that auto_return_field_0225ec90 reads.
 *
 */
struct Object0225ec90 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0225ec90; meaning unknown. */
};
static_assert(offsetof(Object0225ec90, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0225ec90(const Object0225ec90 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0225eca0 reads.
 *
 */
struct Object0225eca0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0225eca0; meaning unknown. */
};
static_assert(offsetof(Object0225eca0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0225eca0(const Object0225eca0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0225ecf0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0225ef70 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_0225ef70()
{
    return value_0225ef70;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0225efa0()
{
}
