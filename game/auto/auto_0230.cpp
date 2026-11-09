// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_023002d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02300530()
{
}

/**
 *
 * The part of the object that auto_return_field_02300b50 reads.
 *
 */
struct Object02300b50 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02300b50; meaning unknown. */
};
static_assert(offsetof(Object02300b50, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02300b50(const Object02300b50 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02307820 reads.
 *
 */
struct Object02307820 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02307820; meaning unknown. */
};
static_assert(offsetof(Object02307820, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02307820(const Object02307820 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02307830 reads.
 *
 */
struct Object02307830 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02307830; meaning unknown. */
};
static_assert(offsetof(Object02307830, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02307830(const Object02307830 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02307880()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02307b00 = 0x90;

extern "C" uint32_t bb_auto_return_constant_02307b00()
{
    return value_02307b00;
}

/**
 *
 * The part of the object that auto_return_field_023083b0 reads.
 *
 */
struct Object023083b0 {
    uint8_t unknown_0x0000[0xc0];
    uint32_t value_0x00c0; /**< Read by auto_return_field_023083b0; meaning unknown. */
};
static_assert(offsetof(Object023083b0, value_0x00c0) == 0xc0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_023083b0(const Object023083b0 *self)
{
    return self->value_0x00c0;
}

/**
 *
 * The part of the object that auto_return_field_023083e0 reads.
 *
 */
struct Object023083e0 {
    uint8_t unknown_0x0000[0xc8];
    uint32_t value_0x00c8; /**< Read by auto_return_field_023083e0; meaning unknown. */
};
static_assert(offsetof(Object023083e0, value_0x00c8) == 0xc8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_023083e0(const Object023083e0 *self)
{
    return self->value_0x00c8;
}

/**
 *
 * The part of the object that auto_return_field_02308410 reads.
 *
 */
struct Object02308410 {
    uint8_t unknown_0x0000[0xd0];
    uint32_t value_0x00d0; /**< Read by auto_return_field_02308410; meaning unknown. */
};
static_assert(offsetof(Object02308410, value_0x00d0) == 0xd0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02308410(const Object02308410 *self)
{
    return self->value_0x00d0;
}

/**
 *
 * The part of the object that auto_return_field_02308480 reads.
 *
 */
struct Object02308480 {
    uint8_t unknown_0x0000[0xdc];
    uint32_t value_0x00dc; /**< Read by auto_return_field_02308480; meaning unknown. */
};
static_assert(offsetof(Object02308480, value_0x00dc) == 0xdc);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02308480(const Object02308480 *self)
{
    return self->value_0x00dc;
}

/**
 *
 * The part of the object that auto_return_field_02308a70 reads.
 *
 */
struct Object02308a70 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02308a70; meaning unknown. */
};
static_assert(offsetof(Object02308a70, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02308a70(const Object02308a70 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02308a80 reads.
 *
 */
struct Object02308a80 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02308a80; meaning unknown. */
};
static_assert(offsetof(Object02308a80, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02308a80(const Object02308a80 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02308ad0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02308d50 = 0xe8;

extern "C" uint32_t bb_auto_return_constant_02308d50()
{
    return value_02308d50;
}

/**
 *
 * The part of the object that auto_return_field_02309800 reads.
 *
 */
struct Object02309800 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02309800; meaning unknown. */
};
static_assert(offsetof(Object02309800, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02309800(const Object02309800 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02309810 reads.
 *
 */
struct Object02309810 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02309810; meaning unknown. */
};
static_assert(offsetof(Object02309810, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02309810(const Object02309810 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02309860()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02309ae0 = 0x90;

extern "C" uint32_t bb_auto_return_constant_02309ae0()
{
    return value_02309ae0;
}

/**
 *
 * The part of the object that auto_return_field_0230ace0 reads.
 *
 */
struct Object0230ace0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0230ace0; meaning unknown. */
};
static_assert(offsetof(Object0230ace0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0230ace0(const Object0230ace0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0230acf0 reads.
 *
 */
struct Object0230acf0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0230acf0; meaning unknown. */
};
static_assert(offsetof(Object0230acf0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0230acf0(const Object0230acf0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0230ad40()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0230afc0 = 0x188;

extern "C" uint32_t bb_auto_return_constant_0230afc0()
{
    return value_0230afc0;
}

/**
 *
 * The part of the object that auto_return_field_0230bb10 reads.
 *
 */
struct Object0230bb10 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0230bb10; meaning unknown. */
};
static_assert(offsetof(Object0230bb10, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0230bb10(const Object0230bb10 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0230bb20 reads.
 *
 */
struct Object0230bb20 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0230bb20; meaning unknown. */
};
static_assert(offsetof(Object0230bb20, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0230bb20(const Object0230bb20 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0230bb70()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0230bdf0 = 0x98;

extern "C" uint32_t bb_auto_return_constant_0230bdf0()
{
    return value_0230bdf0;
}

/**
 *
 * The part of the object that auto_return_field_0230c8f0 reads.
 *
 */
struct Object0230c8f0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0230c8f0; meaning unknown. */
};
static_assert(offsetof(Object0230c8f0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0230c8f0(const Object0230c8f0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0230c900 reads.
 *
 */
struct Object0230c900 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0230c900; meaning unknown. */
};
static_assert(offsetof(Object0230c900, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0230c900(const Object0230c900 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0230c950()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0230cbd0 = 0x80;

extern "C" uint32_t bb_auto_return_constant_0230cbd0()
{
    return value_0230cbd0;
}

/**
 *
 * The part of the object that auto_return_field_0230da30 reads.
 *
 */
struct Object0230da30 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0230da30; meaning unknown. */
};
static_assert(offsetof(Object0230da30, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0230da30(const Object0230da30 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0230da40 reads.
 *
 */
struct Object0230da40 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0230da40; meaning unknown. */
};
static_assert(offsetof(Object0230da40, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0230da40(const Object0230da40 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0230da90()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0230dd10 = 0xc0;

extern "C" uint32_t bb_auto_return_constant_0230dd10()
{
    return value_0230dd10;
}

/**
 *
 * The part of the object that auto_return_field_0230f860 reads.
 *
 */
struct Object0230f860 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0230f860; meaning unknown. */
};
static_assert(offsetof(Object0230f860, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0230f860(const Object0230f860 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0230f870 reads.
 *
 */
struct Object0230f870 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0230f870; meaning unknown. */
};
static_assert(offsetof(Object0230f870, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0230f870(const Object0230f870 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0230f8c0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0230fb40 = 0x98;

extern "C" uint32_t bb_auto_return_constant_0230fb40()
{
    return value_0230fb40;
}
