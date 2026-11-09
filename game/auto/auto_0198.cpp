// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01984ce0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01984d30()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01984e00()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01984e60()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01986030()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_019869d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01986a30()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01986a90()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01988410()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01988420()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0198be70()
{
}

/**
 *
 * The part of the object that auto_return_member_address_0198bf30 reads.
 *
 */
struct Object0198bf30 {
    uint8_t unknown_0x0000[0xd8];
    uint8_t member_0x00d8; /**< Read by auto_return_member_address_0198bf30; meaning unknown. */
};
static_assert(offsetof(Object0198bf30, member_0x00d8) == 0xd8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0198bf30(Object0198bf30 *self)
{
    return &self->member_0x00d8;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0198d250()
{
}

/**
 *
 * The part of the object that auto_return_field_0198d260 reads.
 *
 */
struct Object0198d260 {
    uint8_t unknown_0x0000[0x1a0];
    uint64_t value_0x01a0; /**< Read by auto_return_field_0198d260; meaning unknown. */
};
static_assert(offsetof(Object0198d260, value_0x01a0) == 0x1a0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0198d260(const Object0198d260 *self)
{
    return self->value_0x01a0;
}

/**
 *
 * The part of the object that auto_return_field_0198eba0 reads.
 *
 */
struct Object0198eba0 {
    uint8_t unknown_0x0000[0x58];
    uint8_t value_0x0058; /**< Read by auto_return_field_0198eba0; meaning unknown. */
};
static_assert(offsetof(Object0198eba0, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_0198eba0(const Object0198eba0 *self)
{
    return self->value_0x0058;
}

/**
 *
 * The part of the object that auto_return_field_0198f7a0 reads.
 *
 */
struct Object0198f7a0 {
    uint8_t unknown_0x0000[0x50];
    uint32_t value_0x0050; /**< Read by auto_return_field_0198f7a0; meaning unknown. */
};
static_assert(offsetof(Object0198f7a0, value_0x0050) == 0x50);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_0198f7a0(const Object0198f7a0 *self)
{
    return self->value_0x0050;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0198f870()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0198f880()
{
}

/**
 *
 * The part of the object that auto_return_field_0198fb70 reads.
 *
 */
struct Object0198fb70 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0198fb70; meaning unknown. */
};
static_assert(offsetof(Object0198fb70, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0198fb70(const Object0198fb70 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0198fb80 reads.
 *
 */
struct Object0198fb80 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0198fb80; meaning unknown. */
};
static_assert(offsetof(Object0198fb80, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0198fb80(const Object0198fb80 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0198fbd0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0198fe50 = 0x1a8;

extern "C" uint32_t bb_auto_return_constant_0198fe50()
{
    return value_0198fe50;
}

/**
 *
 * The part of the object that auto_return_field_0198fe90 reads.
 *
 */
struct Object0198fe90 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0198fe90; meaning unknown. */
};
static_assert(offsetof(Object0198fe90, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0198fe90(const Object0198fe90 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0198fea0 reads.
 *
 */
struct Object0198fea0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0198fea0; meaning unknown. */
};
static_assert(offsetof(Object0198fea0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0198fea0(const Object0198fea0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0198fef0()
{
    return 0;
}
