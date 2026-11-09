// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_02500af0 reads.
 *
 */
struct Object02500af0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02500af0; meaning unknown. */
};
static_assert(offsetof(Object02500af0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02500af0(const Object02500af0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02500b00 reads.
 *
 */
struct Object02500b00 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02500b00; meaning unknown. */
};
static_assert(offsetof(Object02500b00, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02500b00(const Object02500b00 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02500b50()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02500dd0 = 0xa8;

extern "C" uint32_t bb_auto_return_constant_02500dd0()
{
    return value_02500dd0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02500de0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_025039a0()
{
}

/**
 *
 * The part of the object that auto_return_field_025039b0 reads.
 *
 */
struct Object025039b0 {
    uint64_t value_0x0000; /**< Read by auto_return_field_025039b0; meaning unknown. */
};
static_assert(offsetof(Object025039b0, value_0x0000) == 0x0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_025039b0(const Object025039b0 *self)
{
    return self->value_0x0000;
}

/**
 *
 * The part of the object that auto_return_field_025039c0 reads.
 *
 */
struct Object025039c0 {
    uint8_t unknown_0x0000[0x8];
    uint64_t value_0x0008; /**< Read by auto_return_field_025039c0; meaning unknown. */
};
static_assert(offsetof(Object025039c0, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_025039c0(const Object025039c0 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_02504390 reads.
 *
 */
struct Object02504390 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02504390; meaning unknown. */
};
static_assert(offsetof(Object02504390, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02504390(const Object02504390 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_025043a0 reads.
 *
 */
struct Object025043a0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_025043a0; meaning unknown. */
};
static_assert(offsetof(Object025043a0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_025043a0(const Object025043a0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_025043f0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02504670 = 0x18;

extern "C" uint32_t bb_auto_return_constant_02504670()
{
    return value_02504670;
}

/**
 *
 * The part of the object that auto_return_field_02505b70 reads.
 *
 */
struct Object02505b70 {
    uint8_t unknown_0x0000[0x10];
    uint64_t value_0x0010; /**< Read by auto_return_field_02505b70; meaning unknown. */
};
static_assert(offsetof(Object02505b70, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02505b70(const Object02505b70 *self)
{
    return self->value_0x0010;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02505f30()
{
}

/**
 *
 * The part of the object that auto_return_field_02506700 reads.
 *
 */
struct Object02506700 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02506700; meaning unknown. */
};
static_assert(offsetof(Object02506700, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02506700(const Object02506700 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02506710 reads.
 *
 */
struct Object02506710 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02506710; meaning unknown. */
};
static_assert(offsetof(Object02506710, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02506710(const Object02506710 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02506760()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_025069e0 = 0x18;

extern "C" uint32_t bb_auto_return_constant_025069e0()
{
    return value_025069e0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02506de0()
{
}

/**
 *
 * The part of the object that auto_return_field_025070c0 reads.
 *
 */
struct Object025070c0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_025070c0; meaning unknown. */
};
static_assert(offsetof(Object025070c0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_025070c0(const Object025070c0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_025070d0 reads.
 *
 */
struct Object025070d0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_025070d0; meaning unknown. */
};
static_assert(offsetof(Object025070d0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_025070d0(const Object025070d0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02507120()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_025073a0 = 0x18;

extern "C" uint32_t bb_auto_return_constant_025073a0()
{
    return value_025073a0;
}

/**
 *
 * The part of the object that auto_return_field_02509970 reads.
 *
 */
struct Object02509970 {
    uint8_t unknown_0x0000[0x68];
    uint64_t value_0x0068; /**< Read by auto_return_field_02509970; meaning unknown. */
};
static_assert(offsetof(Object02509970, value_0x0068) == 0x68);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02509970(const Object02509970 *self)
{
    return self->value_0x0068;
}

/**
 *
 * The part of the object that auto_return_field_02509980 reads.
 *
 */
struct Object02509980 {
    uint8_t unknown_0x0000[0x5c];
    uint8_t value_0x005c; /**< Read by auto_return_field_02509980; meaning unknown. */
};
static_assert(offsetof(Object02509980, value_0x005c) == 0x5c);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02509980(const Object02509980 *self)
{
    return self->value_0x005c;
}

/**
 *
 * The part of the object that auto_return_field_02509990 reads.
 *
 */
struct Object02509990 {
    uint8_t unknown_0x0000[0x60];
    uint32_t value_0x0060; /**< Read by auto_return_field_02509990; meaning unknown. */
};
static_assert(offsetof(Object02509990, value_0x0060) == 0x60);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02509990(const Object02509990 *self)
{
    return self->value_0x0060;
}
