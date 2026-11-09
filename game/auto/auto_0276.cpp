// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02761540()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_02761580 reads.
 *
 */
struct Object02761580 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02761580; meaning unknown. */
};
static_assert(offsetof(Object02761580, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02761580(const Object02761580 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02761590 reads.
 *
 */
struct Object02761590 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02761590; meaning unknown. */
};
static_assert(offsetof(Object02761590, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02761590(const Object02761590 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_027615e0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02761860 = 0x140;

extern "C" uint32_t bb_auto_return_constant_02761860()
{
    return value_02761860;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_027627e0()
{
}

/**
 *
 * The part of the object that auto_return_field_02762820 reads.
 *
 */
struct Object02762820 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02762820; meaning unknown. */
};
static_assert(offsetof(Object02762820, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02762820(const Object02762820 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02762830 reads.
 *
 */
struct Object02762830 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02762830; meaning unknown. */
};
static_assert(offsetof(Object02762830, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02762830(const Object02762830 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02762880()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02762b00 = 0x18;

extern "C" uint32_t bb_auto_return_constant_02762b00()
{
    return value_02762b00;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_027653c0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_027653e0 = 0x1;

extern "C" uint32_t bb_auto_return_constant_027653e0()
{
    return value_027653e0;
}

/**
 *
 * The part of the object that auto_return_field_02765550 reads.
 *
 */
struct Object02765550 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02765550; meaning unknown. */
};
static_assert(offsetof(Object02765550, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02765550(const Object02765550 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02765560 reads.
 *
 */
struct Object02765560 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02765560; meaning unknown. */
};
static_assert(offsetof(Object02765560, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02765560(const Object02765560 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_027655b0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02765830 = 0x178;

extern "C" uint32_t bb_auto_return_constant_02765830()
{
    return value_02765830;
}

/**
 *
 * The part of the object that auto_return_field_0276a7b0 reads.
 *
 */
struct Object0276a7b0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0276a7b0; meaning unknown. */
};
static_assert(offsetof(Object0276a7b0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0276a7b0(const Object0276a7b0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0276a7c0 reads.
 *
 */
struct Object0276a7c0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0276a7c0; meaning unknown. */
};
static_assert(offsetof(Object0276a7c0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0276a7c0(const Object0276a7c0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0276a810()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0276aa90 = 0x160;

extern "C" uint32_t bb_auto_return_constant_0276aa90()
{
    return value_0276aa90;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0276b0a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0276b4d0()
{
}

/**
 *
 * The part of the object that auto_return_field_0276bec0 reads.
 *
 */
struct Object0276bec0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0276bec0; meaning unknown. */
};
static_assert(offsetof(Object0276bec0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0276bec0(const Object0276bec0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0276bed0 reads.
 *
 */
struct Object0276bed0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0276bed0; meaning unknown. */
};
static_assert(offsetof(Object0276bed0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0276bed0(const Object0276bed0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0276bf20()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0276c1a0 = 0x18;

extern "C" uint32_t bb_auto_return_constant_0276c1a0()
{
    return value_0276c1a0;
}

/**
 *
 * The part of the object that auto_return_field_0276c1e0 reads.
 *
 */
struct Object0276c1e0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0276c1e0; meaning unknown. */
};
static_assert(offsetof(Object0276c1e0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0276c1e0(const Object0276c1e0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0276c1f0 reads.
 *
 */
struct Object0276c1f0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0276c1f0; meaning unknown. */
};
static_assert(offsetof(Object0276c1f0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0276c1f0(const Object0276c1f0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0276c240()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0276c4c0 = 0x10;

extern "C" uint32_t bb_auto_return_constant_0276c4c0()
{
    return value_0276c4c0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0276f580()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0276f5a0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_0276f6f0 reads.
 *
 */
struct Object0276f6f0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0276f6f0; meaning unknown. */
};
static_assert(offsetof(Object0276f6f0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0276f6f0(const Object0276f6f0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0276f700 reads.
 *
 */
struct Object0276f700 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0276f700; meaning unknown. */
};
static_assert(offsetof(Object0276f700, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0276f700(const Object0276f700 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0276f750()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0276f9d0 = 0x38;

extern "C" uint32_t bb_auto_return_constant_0276f9d0()
{
    return value_0276f9d0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0276fc50()
{
}
