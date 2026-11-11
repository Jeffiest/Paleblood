// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_02c44d70 reads.
 *
 */
struct Object02c44d70 {
    uint8_t unknown_0x0000[0x10];
    uint64_t value_0x0010; /**< Read by auto_return_field_02c44d70; meaning unknown. */
};
static_assert(offsetof(Object02c44d70, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c44d70(const Object02c44d70 *self)
{
    return self->value_0x0010;
}

/**
 *
 * The part of the object that auto_return_member_address_02c45e10 reads.
 *
 */
struct Object02c45e10 {
    uint8_t unknown_0x0000[0x218];
    uint8_t member_0x0218; /**< Read by auto_return_member_address_02c45e10; meaning unknown. */
};
static_assert(offsetof(Object02c45e10, member_0x0218) == 0x218);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02c45e10(Object02c45e10 *self)
{
    return &self->member_0x0218;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c46280 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02c46280()
{
    return value_02c46280;
}

/**
 *
 * The part of the object that auto_return_field_02c462e0 reads.
 *
 */
struct Object02c462e0 {
    uint8_t unknown_0x0000[0x28];
    uint64_t value_0x0028; /**< Read by auto_return_field_02c462e0; meaning unknown. */
};
static_assert(offsetof(Object02c462e0, value_0x0028) == 0x28);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c462e0(const Object02c462e0 *self)
{
    return self->value_0x0028;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c4ace0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c4ad90()
{
}
