// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_010d5180()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_010d5190()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_010d9f50()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_010dc100()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_010dc3c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_010dd400()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_010dd410()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_010dd420()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_010dd430()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_010dd440()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_010dd450()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_010dd460()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_010ddf70()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_010de6d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_010de6e0()
{
}

/**
 *
 * The part of the object that auto_return_field_010d2560 reads.
 *
 */
struct Object010d2560 {
    uint32_t value_0x0000; /**< Read by auto_return_field_010d2560; meaning unknown. */
};
static_assert(offsetof(Object010d2560, value_0x0000) == 0x0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_010d2560(const Object010d2560 *self)
{
    return self->value_0x0000;
}

/**
 *
 * The part of the object that auto_return_field_010d2570 reads.
 *
 */
struct Object010d2570 {
    uint8_t unknown_0x0000[0x4];
    uint8_t value_0x0004; /**< Read by auto_return_field_010d2570; meaning unknown. */
};
static_assert(offsetof(Object010d2570, value_0x0004) == 0x4);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_010d2570(const Object010d2570 *self)
{
    return self->value_0x0004;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_010d4cf0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_010d5150()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_010d5160()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_010d5170()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_010d51a0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_010d51a0()
{
    return value_010d51a0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_010d6d80()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_010d7040()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_010d71c0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_010d86b0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_010d86b0()
{
    return value_010d86b0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_010dc270()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_010dce50 = 0x1;

extern "C" uint32_t bb_auto_return_constant_010dce50()
{
    return value_010dce50;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_010dce60 = 0x1;

extern "C" uint32_t bb_auto_return_constant_010dce60()
{
    return value_010dce60;
}

/**
 *
 * The part of the object that auto_return_field_010de830 reads.
 *
 */
struct Object010de830 {
    uint64_t value_0x0000; /**< Read by auto_return_field_010de830; meaning unknown. */
};
static_assert(offsetof(Object010de830, value_0x0000) == 0x0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_010de830(const Object010de830 *self)
{
    return self->value_0x0000;
}

/**
 *
 * The part of the object that auto_return_field_010df740 reads.
 *
 */
struct Object010df740 {
    uint8_t unknown_0x0000[0xe0];
    uint64_t value_0x00e0; /**< Read by auto_return_field_010df740; meaning unknown. */
};
static_assert(offsetof(Object010df740, value_0x00e0) == 0xe0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_010df740(const Object010df740 *self)
{
    return self->value_0x00e0;
}

/**
 *
 * The part of the object that auto_return_field_010dfd80 reads.
 *
 */
struct Object010dfd80 {
    uint8_t unknown_0x0000[0x18];
    uint64_t value_0x0018; /**< Read by auto_return_field_010dfd80; meaning unknown. */
};
static_assert(offsetof(Object010dfd80, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_010dfd80(const Object010dfd80 *self)
{
    return self->value_0x0018;
}
