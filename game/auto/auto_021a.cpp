// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_021a0640()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_021a0830()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_021a3990 reads.
 *
 */
struct Object021a3990 {
    uint8_t unknown_0x0000[0x58];
    uint8_t value_0x0058; /**< Read by auto_return_field_021a3990; meaning unknown. */
};
static_assert(offsetof(Object021a3990, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_021a3990(const Object021a3990 *self)
{
    return self->value_0x0058;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_021a4630()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_021a4bf0 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_021a4bf0()
{
    return value_021a4bf0;
}

/**
 *
 * The part of the object that auto_return_field_021a87a0 reads.
 *
 */
struct Object021a87a0 {
    uint8_t unknown_0x0000[0x58];
    uint8_t value_0x0058; /**< Read by auto_return_field_021a87a0; meaning unknown. */
};
static_assert(offsetof(Object021a87a0, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_021a87a0(const Object021a87a0 *self)
{
    return self->value_0x0058;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_021a8dc0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_021a8e20()
{
}

/**
 *
 * The part of the object that auto_return_member_address_021ab010 reads.
 *
 */
struct Object021ab010 {
    uint8_t unknown_0x0000[0x138];
    uint8_t member_0x0138; /**< Read by auto_return_member_address_021ab010; meaning unknown. */
};
static_assert(offsetof(Object021ab010, member_0x0138) == 0x138);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_021ab010(Object021ab010 *self)
{
    return &self->member_0x0138;
}

/**
 *
 * The part of the object that auto_return_member_address_021ab020 reads.
 *
 */
struct Object021ab020 {
    uint8_t unknown_0x0000[0x4a8];
    uint8_t member_0x04a8; /**< Read by auto_return_member_address_021ab020; meaning unknown. */
};
static_assert(offsetof(Object021ab020, member_0x04a8) == 0x4a8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_021ab020(Object021ab020 *self)
{
    return &self->member_0x04a8;
}

/**
 *
 * The part of the object that auto_return_field_021adf20 reads.
 *
 */
struct Object021adf20 {
    uint8_t unknown_0x0000[0x58];
    uint8_t value_0x0058; /**< Read by auto_return_field_021adf20; meaning unknown. */
};
static_assert(offsetof(Object021adf20, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_021adf20(const Object021adf20 *self)
{
    return self->value_0x0058;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_021aebe0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_021af250 = 0x800;

extern "C" uint32_t bb_auto_return_constant_021af250()
{
    return value_021af250;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_021af570 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_021af570()
{
    return value_021af570;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_021af890 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_021af890()
{
    return value_021af890;
}
