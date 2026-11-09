// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00695380()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_006966a0 = 0x1;

extern "C" uint32_t bb_auto_return_constant_006966a0()
{
    return value_006966a0;
}

/**
 *
 * The part of the object that auto_return_field_006966b0 reads.
 *
 */
struct Object006966b0 {
    uint8_t unknown_0x0000[0x50];
    uint64_t value_0x0050; /**< Read by auto_return_field_006966b0; meaning unknown. */
};
static_assert(offsetof(Object006966b0, value_0x0050) == 0x50);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_006966b0(const Object006966b0 *self)
{
    return self->value_0x0050;
}

/**
 *
 * The part of the object that auto_return_member_address_006966c0 reads.
 *
 */
struct Object006966c0 {
    uint8_t unknown_0x0000[0x58];
    uint8_t member_0x0058; /**< Read by auto_return_member_address_006966c0; meaning unknown. */
};
static_assert(offsetof(Object006966c0, member_0x0058) == 0x58);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_006966c0(Object006966c0 *self)
{
    return &self->member_0x0058;
}

/**
 *
 * The part of the object that auto_return_field_0069afd0 reads.
 *
 */
struct Object0069afd0 {
    uint8_t unknown_0x0000[0x50];
    uint64_t value_0x0050; /**< Read by auto_return_field_0069afd0; meaning unknown. */
};
static_assert(offsetof(Object0069afd0, value_0x0050) == 0x50);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0069afd0(const Object0069afd0 *self)
{
    return self->value_0x0050;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0069ce70 = 0x2;

extern "C" uint32_t bb_auto_return_constant_0069ce70()
{
    return value_0069ce70;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0069ce80 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0069ce80()
{
    return value_0069ce80;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0069d410 = 0x5;

extern "C" uint32_t bb_auto_return_constant_0069d410()
{
    return value_0069d410;
}

/**
 *
 * The part of the object that auto_return_field_0069d420 reads.
 *
 */
struct Object0069d420 {
    uint8_t unknown_0x0000[0x50];
    uint64_t value_0x0050; /**< Read by auto_return_field_0069d420; meaning unknown. */
};
static_assert(offsetof(Object0069d420, value_0x0050) == 0x50);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0069d420(const Object0069d420 *self)
{
    return self->value_0x0050;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0069d9d0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0069d9d0()
{
    return value_0069d9d0;
}

/**
 *
 * The part of the object that auto_return_field_0069da50 reads.
 *
 */
struct Object0069da50 {
    uint8_t unknown_0x0000[0x50];
    uint64_t value_0x0050; /**< Read by auto_return_field_0069da50; meaning unknown. */
};
static_assert(offsetof(Object0069da50, value_0x0050) == 0x50);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0069da50(const Object0069da50 *self)
{
    return self->value_0x0050;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0069dad0 = 0x4;

extern "C" uint32_t bb_auto_return_constant_0069dad0()
{
    return value_0069dad0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0069ddd0 = 0x3;

extern "C" uint32_t bb_auto_return_constant_0069ddd0()
{
    return value_0069ddd0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0069e590()
{
}
