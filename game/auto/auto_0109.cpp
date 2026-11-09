// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01091ae0()
{
}

/**
 *
 * The part of the object that auto_return_field_01091af0 reads.
 *
 */
struct Object01091af0 {
    uint32_t value_0x0000; /**< Read by auto_return_field_01091af0; meaning unknown. */
};
static_assert(offsetof(Object01091af0, value_0x0000) == 0x0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01091af0(const Object01091af0 *self)
{
    return self->value_0x0000;
}

/**
 *
 * The part of the object that auto_return_field_01091b10 reads.
 *
 */
struct Object01091b10 {
    uint8_t unknown_0x0000[0x4];
    uint32_t value_0x0004; /**< Read by auto_return_field_01091b10; meaning unknown. */
};
static_assert(offsetof(Object01091b10, value_0x0004) == 0x4);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01091b10(const Object01091b10 *self)
{
    return self->value_0x0004;
}

/**
 *
 * The part of the object that auto_return_field_01091b20 reads.
 *
 */
struct Object01091b20 {
    uint8_t unknown_0x0000[0x8];
    uint32_t value_0x0008; /**< Read by auto_return_field_01091b20; meaning unknown. */
};
static_assert(offsetof(Object01091b20, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01091b20(const Object01091b20 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_01092690 reads.
 *
 */
struct Object01092690 {
    uint8_t unknown_0x0000[0xc];
    uint32_t value_0x000c; /**< Read by auto_return_field_01092690; meaning unknown. */
};
static_assert(offsetof(Object01092690, value_0x000c) == 0xc);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01092690(const Object01092690 *self)
{
    return self->value_0x000c;
}

/**
 *
 * The part of the object that auto_return_field_010926a0 reads.
 *
 */
struct Object010926a0 {
    uint8_t unknown_0x0000[0x68];
    uint64_t value_0x0068; /**< Read by auto_return_field_010926a0; meaning unknown. */
};
static_assert(offsetof(Object010926a0, value_0x0068) == 0x68);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_010926a0(const Object010926a0 *self)
{
    return self->value_0x0068;
}

/**
 *
 * The part of the object that auto_return_field_010926b0 reads.
 *
 */
struct Object010926b0 {
    uint8_t unknown_0x0000[0x14];
    uint32_t value_0x0014; /**< Read by auto_return_field_010926b0; meaning unknown. */
};
static_assert(offsetof(Object010926b0, value_0x0014) == 0x14);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_010926b0(const Object010926b0 *self)
{
    return self->value_0x0014;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01095e20()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01095e30()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01095e50()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01097540 reads.
 *
 */
struct Object01097540 {
    uint8_t unknown_0x0000[0x120];
    uint8_t member_0x0120; /**< Read by auto_return_member_address_01097540; meaning unknown. */
};
static_assert(offsetof(Object01097540, member_0x0120) == 0x120);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01097540(Object01097540 *self)
{
    return &self->member_0x0120;
}

/**
 *
 * The part of the object that auto_return_member_address_010976b0 reads.
 *
 */
struct Object010976b0 {
    uint8_t unknown_0x0000[0x2d0];
    uint8_t member_0x02d0; /**< Read by auto_return_member_address_010976b0; meaning unknown. */
};
static_assert(offsetof(Object010976b0, member_0x02d0) == 0x2d0);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_010976b0(Object010976b0 *self)
{
    return &self->member_0x02d0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_01098470 = 0x1;

extern "C" uint8_t bb_auto_return_constant_01098470()
{
    return value_01098470;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_010994d0()
{
    return 0;
}
