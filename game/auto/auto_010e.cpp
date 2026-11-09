// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_010e2440()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_010e42d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_010e42e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_010e5830()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_010e6040()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_010edae0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_010edf20()
{
}

/**
 *
 * The part of the object that auto_return_field_010e0b10 reads.
 *
 */
struct Object010e0b10 {
    uint8_t unknown_0x0000[0x160];
    uint64_t value_0x0160; /**< Read by auto_return_field_010e0b10; meaning unknown. */
};
static_assert(offsetof(Object010e0b10, value_0x0160) == 0x160);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_010e0b10(const Object010e0b10 *self)
{
    return self->value_0x0160;
}

/**
 *
 * The part of the object that auto_return_field_010e1660 reads.
 *
 */
struct Object010e1660 {
    uint8_t unknown_0x0000[0x11];
    uint8_t value_0x0011; /**< Read by auto_return_field_010e1660; meaning unknown. */
};
static_assert(offsetof(Object010e1660, value_0x0011) == 0x11);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_010e1660(const Object010e1660 *self)
{
    return self->value_0x0011;
}

/**
 *
 * The part of the object that auto_return_field_010e52d0 reads.
 *
 */
struct Object010e52d0 {
    uint8_t unknown_0x0000[0x160];
    uint64_t value_0x0160; /**< Read by auto_return_field_010e52d0; meaning unknown. */
};
static_assert(offsetof(Object010e52d0, value_0x0160) == 0x160);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_010e52d0(const Object010e52d0 *self)
{
    return self->value_0x0160;
}

/**
 *
 * The part of the object that auto_return_field_010e58a0 reads.
 *
 */
struct Object010e58a0 {
    uint8_t unknown_0x0000[0x1a0];
    uint64_t value_0x01a0; /**< Read by auto_return_field_010e58a0; meaning unknown. */
};
static_assert(offsetof(Object010e58a0, value_0x01a0) == 0x1a0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_010e58a0(const Object010e58a0 *self)
{
    return self->value_0x01a0;
}

/**
 *
 * The part of the object that auto_return_field_010e6b60 reads.
 *
 */
struct Object010e6b60 {
    uint8_t unknown_0x0000[0x188];
    uint64_t value_0x0188; /**< Read by auto_return_field_010e6b60; meaning unknown. */
};
static_assert(offsetof(Object010e6b60, value_0x0188) == 0x188);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_010e6b60(const Object010e6b60 *self)
{
    return self->value_0x0188;
}

/**
 *
 * The part of the object that auto_return_field_010e8910 reads.
 *
 */
struct Object010e8910 {
    uint8_t unknown_0x0000[0xb0];
    uint64_t value_0x00b0; /**< Read by auto_return_field_010e8910; meaning unknown. */
};
static_assert(offsetof(Object010e8910, value_0x00b0) == 0xb0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_010e8910(const Object010e8910 *self)
{
    return self->value_0x00b0;
}

/**
 *
 * The part of the object that auto_return_field_010e89a0 reads.
 *
 */
struct Object010e89a0 {
    uint8_t unknown_0x0000[0x20];
    uint32_t value_0x0020; /**< Read by auto_return_field_010e89a0; meaning unknown. */
};
static_assert(offsetof(Object010e89a0, value_0x0020) == 0x20);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_010e89a0(const Object010e89a0 *self)
{
    return self->value_0x0020;
}

/**
 *
 * The part of the object that auto_return_field_010eaf40 reads.
 *
 */
struct Object010eaf40 {
    uint8_t unknown_0x0000[0xdd];
    uint8_t value_0x00dd; /**< Read by auto_return_field_010eaf40; meaning unknown. */
};
static_assert(offsetof(Object010eaf40, value_0x00dd) == 0xdd);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_010eaf40(const Object010eaf40 *self)
{
    return self->value_0x00dd;
}

/**
 *
 * The part of the object that auto_return_field_010ebaa0 reads.
 *
 */
struct Object010ebaa0 {
    uint8_t unknown_0x0000[0x58];
    uint64_t value_0x0058; /**< Read by auto_return_field_010ebaa0; meaning unknown. */
};
static_assert(offsetof(Object010ebaa0, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_010ebaa0(const Object010ebaa0 *self)
{
    return self->value_0x0058;
}

/**
 *
 * The part of the object that auto_return_field_010ec320 reads.
 *
 */
struct Object010ec320 {
    uint8_t unknown_0x0000[0x58];
    uint64_t value_0x0058; /**< Read by auto_return_field_010ec320; meaning unknown. */
};
static_assert(offsetof(Object010ec320, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_010ec320(const Object010ec320 *self)
{
    return self->value_0x0058;
}

/**
 *
 * The part of the object that auto_return_field_010ed8f0 reads.
 *
 */
struct Object010ed8f0 {
    uint8_t unknown_0x0000[0x140];
    uint64_t value_0x0140; /**< Read by auto_return_field_010ed8f0; meaning unknown. */
};
static_assert(offsetof(Object010ed8f0, value_0x0140) == 0x140);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_010ed8f0(const Object010ed8f0 *self)
{
    return self->value_0x0140;
}

/**
 *
 * The part of the object that auto_return_field_010edaa0 reads.
 *
 */
struct Object010edaa0 {
    uint8_t unknown_0x0000[0x140];
    uint64_t value_0x0140; /**< Read by auto_return_field_010edaa0; meaning unknown. */
};
static_assert(offsetof(Object010edaa0, value_0x0140) == 0x140);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_010edaa0(const Object010edaa0 *self)
{
    return self->value_0x0140;
}

/**
 *
 * The part of the object that auto_return_field_010edc60 reads.
 *
 */
struct Object010edc60 {
    uint8_t unknown_0x0000[0x50];
    uint64_t value_0x0050; /**< Read by auto_return_field_010edc60; meaning unknown. */
};
static_assert(offsetof(Object010edc60, value_0x0050) == 0x50);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_010edc60(const Object010edc60 *self)
{
    return self->value_0x0050;
}

/**
 *
 * The part of the object that auto_return_field_010edc70 reads.
 *
 */
struct Object010edc70 {
    uint8_t unknown_0x0000[0xdc];
    uint8_t value_0x00dc; /**< Read by auto_return_field_010edc70; meaning unknown. */
};
static_assert(offsetof(Object010edc70, value_0x00dc) == 0xdc);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_010edc70(const Object010edc70 *self)
{
    return self->value_0x00dc;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_010edf30()
{
}

/**
 *
 * The part of the object that auto_return_field_010edf40 reads.
 *
 */
struct Object010edf40 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_010edf40; meaning unknown. */
};
static_assert(offsetof(Object010edf40, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_010edf40(const Object010edf40 *self)
{
    return self->value_0x0048;
}

/**
 *
 * The part of the object that auto_return_field_010edf50 reads.
 *
 */
struct Object010edf50 {
    uint8_t unknown_0x0000[0xe4];
    uint32_t value_0x00e4; /**< Read by auto_return_field_010edf50; meaning unknown. */
};
static_assert(offsetof(Object010edf50, value_0x00e4) == 0xe4);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_010edf50(const Object010edf50 *self)
{
    return self->value_0x00e4;
}

/**
 *
 * The part of the object that auto_return_field_010ee630 reads.
 *
 */
struct Object010ee630 {
    uint8_t unknown_0x0000[0x20];
    uint64_t value_0x0020; /**< Read by auto_return_field_010ee630; meaning unknown. */
};
static_assert(offsetof(Object010ee630, value_0x0020) == 0x20);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_010ee630(const Object010ee630 *self)
{
    return self->value_0x0020;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_010ee8d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_010ee8e0()
{
}

/**
 *
 * The part of the object that auto_return_field_010ee8f0 reads.
 *
 */
struct Object010ee8f0 {
    uint8_t unknown_0x0000[0x10];
    uint32_t value_0x0010; /**< Read by auto_return_field_010ee8f0; meaning unknown. */
};
static_assert(offsetof(Object010ee8f0, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_010ee8f0(const Object010ee8f0 *self)
{
    return self->value_0x0010;
}

/**
 *
 * The part of the object that auto_return_field_010ee900 reads.
 *
 */
struct Object010ee900 {
    uint8_t unknown_0x0000[0x14];
    uint32_t value_0x0014; /**< Read by auto_return_field_010ee900; meaning unknown. */
};
static_assert(offsetof(Object010ee900, value_0x0014) == 0x14);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_010ee900(const Object010ee900 *self)
{
    return self->value_0x0014;
}

/**
 *
 * The part of the object that auto_return_field_010ee990 reads.
 *
 */
struct Object010ee990 {
    uint8_t unknown_0x0000[0x18];
    uint64_t value_0x0018; /**< Read by auto_return_field_010ee990; meaning unknown. */
};
static_assert(offsetof(Object010ee990, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_010ee990(const Object010ee990 *self)
{
    return self->value_0x0018;
}
