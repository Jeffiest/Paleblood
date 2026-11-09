// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01f242f0 = 0x5;

extern "C" uint32_t bb_auto_return_constant_01f242f0()
{
    return value_01f242f0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f243b0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f243f0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f24410 reads.
 *
 */
struct Object01f24410 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f24410; meaning unknown. */
};
static_assert(offsetof(Object01f24410, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f24410(Object01f24410 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f24630()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f24670()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f24690 reads.
 *
 */
struct Object01f24690 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f24690; meaning unknown. */
};
static_assert(offsetof(Object01f24690, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f24690(Object01f24690 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f24740()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f24780()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f247a0 reads.
 *
 */
struct Object01f247a0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f247a0; meaning unknown. */
};
static_assert(offsetof(Object01f247a0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f247a0(Object01f247a0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f24b20()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f24b60()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f24b80 reads.
 *
 */
struct Object01f24b80 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f24b80; meaning unknown. */
};
static_assert(offsetof(Object01f24b80, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f24b80(Object01f24b80 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f24c40()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f24c80()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f24ca0 reads.
 *
 */
struct Object01f24ca0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f24ca0; meaning unknown. */
};
static_assert(offsetof(Object01f24ca0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f24ca0(Object01f24ca0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f24e60()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f24ea0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f24ec0 reads.
 *
 */
struct Object01f24ec0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f24ec0; meaning unknown. */
};
static_assert(offsetof(Object01f24ec0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f24ec0(Object01f24ec0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f24f60()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f24fa0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f24fc0 reads.
 *
 */
struct Object01f24fc0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f24fc0; meaning unknown. */
};
static_assert(offsetof(Object01f24fc0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f24fc0(Object01f24fc0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f253c0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f25530()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f25570()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f25590 reads.
 *
 */
struct Object01f25590 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f25590; meaning unknown. */
};
static_assert(offsetof(Object01f25590, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f25590(Object01f25590 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f25980()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f259c0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f259e0 reads.
 *
 */
struct Object01f259e0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f259e0; meaning unknown. */
};
static_assert(offsetof(Object01f259e0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f259e0(Object01f259e0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f25a80()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f25ac0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f25ae0 reads.
 *
 */
struct Object01f25ae0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f25ae0; meaning unknown. */
};
static_assert(offsetof(Object01f25ae0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f25ae0(Object01f25ae0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f25ce0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f25d20()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f25d40 reads.
 *
 */
struct Object01f25d40 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f25d40; meaning unknown. */
};
static_assert(offsetof(Object01f25d40, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f25d40(Object01f25d40 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f25de0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f25e20()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f25e40 reads.
 *
 */
struct Object01f25e40 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f25e40; meaning unknown. */
};
static_assert(offsetof(Object01f25e40, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f25e40(Object01f25e40 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f262c0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f26300()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f26320 reads.
 *
 */
struct Object01f26320 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f26320; meaning unknown. */
};
static_assert(offsetof(Object01f26320, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f26320(Object01f26320 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f26710()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f26750()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f26770 reads.
 *
 */
struct Object01f26770 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f26770; meaning unknown. */
};
static_assert(offsetof(Object01f26770, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f26770(Object01f26770 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f26810()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f26850()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f26870 reads.
 *
 */
struct Object01f26870 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f26870; meaning unknown. */
};
static_assert(offsetof(Object01f26870, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f26870(Object01f26870 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_01f27100 reads.
 *
 */
struct Object01f27100 {
    uint8_t unknown_0x0000[0x3c0];
    uint8_t value_0x03c0; /**< Read by auto_return_field_01f27100; meaning unknown. */
};
static_assert(offsetof(Object01f27100, value_0x03c0) == 0x3c0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_01f27100(const Object01f27100 *self)
{
    return self->value_0x03c0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f271f0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f27230()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f27250 reads.
 *
 */
struct Object01f27250 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f27250; meaning unknown. */
};
static_assert(offsetof(Object01f27250, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f27250(Object01f27250 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f27640()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f27680()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f276a0 reads.
 *
 */
struct Object01f276a0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f276a0; meaning unknown. */
};
static_assert(offsetof(Object01f276a0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f276a0(Object01f276a0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f279b0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f27c50()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_01f27d10 reads.
 *
 */
struct Object01f27d10 {
    uint8_t unknown_0x0000[0x10];
    uint8_t member_0x0010; /**< Read by auto_return_member_address_01f27d10; meaning unknown. */
};
static_assert(offsetof(Object01f27d10, member_0x0010) == 0x10);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f27d10(Object01f27d10 *self)
{
    return &self->member_0x0010;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f27e30()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f27e70()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f27e90 reads.
 *
 */
struct Object01f27e90 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f27e90; meaning unknown. */
};
static_assert(offsetof(Object01f27e90, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f27e90(Object01f27e90 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f28710()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f28750()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f28770 reads.
 *
 */
struct Object01f28770 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f28770; meaning unknown. */
};
static_assert(offsetof(Object01f28770, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f28770(Object01f28770 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f288e0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f28920()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f28940 reads.
 *
 */
struct Object01f28940 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f28940; meaning unknown. */
};
static_assert(offsetof(Object01f28940, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f28940(Object01f28940 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f289e0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f28a20()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f28a40 reads.
 *
 */
struct Object01f28a40 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f28a40; meaning unknown. */
};
static_assert(offsetof(Object01f28a40, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f28a40(Object01f28a40 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f2f3d0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f2f410()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f2f430 reads.
 *
 */
struct Object01f2f430 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f2f430; meaning unknown. */
};
static_assert(offsetof(Object01f2f430, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f2f430(Object01f2f430 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f2f4d0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f2f510()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f2f530 reads.
 *
 */
struct Object01f2f530 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f2f530; meaning unknown. */
};
static_assert(offsetof(Object01f2f530, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f2f530(Object01f2f530 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f2f710()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f2f750()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f2f770 reads.
 *
 */
struct Object01f2f770 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f2f770; meaning unknown. */
};
static_assert(offsetof(Object01f2f770, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f2f770(Object01f2f770 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f2fac0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f2fb00()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f2fb20 reads.
 *
 */
struct Object01f2fb20 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f2fb20; meaning unknown. */
};
static_assert(offsetof(Object01f2fb20, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f2fb20(Object01f2fb20 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f2fbd0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f2fc10()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f2fc30 reads.
 *
 */
struct Object01f2fc30 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f2fc30; meaning unknown. */
};
static_assert(offsetof(Object01f2fc30, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f2fc30(Object01f2fc30 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01f2ff00()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f2ff40()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f2ff60 reads.
 *
 */
struct Object01f2ff60 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f2ff60; meaning unknown. */
};
static_assert(offsetof(Object01f2ff60, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f2ff60(Object01f2ff60 *self)
{
    return &self->member_0x0008;
}
