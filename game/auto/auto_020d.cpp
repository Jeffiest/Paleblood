// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_020d26e0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_020d2b30 = 0x100;

extern "C" uint32_t bb_auto_return_constant_020d2b30()
{
    return value_020d2b30;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_020d2e50 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_020d2e50()
{
    return value_020d2e50;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_020d3170 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_020d3170()
{
    return value_020d3170;
}

/**
 *
 * The part of the object that auto_return_field_020d3ac0 reads.
 *
 */
struct Object020d3ac0 {
    uint8_t unknown_0x0000[0x94];
    uint32_t value_0x0094; /**< Read by auto_return_field_020d3ac0; meaning unknown. */
};
static_assert(offsetof(Object020d3ac0, value_0x0094) == 0x94);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_020d3ac0(const Object020d3ac0 *self)
{
    return self->value_0x0094;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_020d3b90()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_020d4240 = 0x98;

extern "C" uint32_t bb_auto_return_constant_020d4240()
{
    return value_020d4240;
}

/**
 *
 * The part of the object that auto_return_field_020d6980 reads.
 *
 */
struct Object020d6980 {
    uint8_t unknown_0x0000[0x58];
    uint8_t value_0x0058; /**< Read by auto_return_field_020d6980; meaning unknown. */
};
static_assert(offsetof(Object020d6980, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_020d6980(const Object020d6980 *self)
{
    return self->value_0x0058;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_020d7620()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_020d7bf0 = 0xe0;

extern "C" uint32_t bb_auto_return_constant_020d7bf0()
{
    return value_020d7bf0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_020d7f10 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_020d7f10()
{
    return value_020d7f10;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_020d8230 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_020d8230()
{
    return value_020d8230;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_020dac80()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_020dad50()
{
}

/**
 *
 * The part of the object that auto_return_field_020dec90 reads.
 *
 */
struct Object020dec90 {
    uint8_t unknown_0x0000[0x170];
    uint64_t value_0x0170; /**< Read by auto_return_field_020dec90; meaning unknown. */
};
static_assert(offsetof(Object020dec90, value_0x0170) == 0x170);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_020dec90(const Object020dec90 *self)
{
    return self->value_0x0170;
}

/**
 *
 * The part of the object that auto_return_field_020deca0 reads.
 *
 */
struct Object020deca0 {
    uint8_t unknown_0x0000[0x170];
    uint64_t value_0x0170; /**< Read by auto_return_field_020deca0; meaning unknown. */
};
static_assert(offsetof(Object020deca0, value_0x0170) == 0x170);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_020deca0(const Object020deca0 *self)
{
    return self->value_0x0170;
}

/**
 *
 * The part of the object that auto_return_field_020dfe30 reads.
 *
 */
struct Object020dfe30 {
    uint8_t unknown_0x0000[0x190];
    uint64_t value_0x0190; /**< Read by auto_return_field_020dfe30; meaning unknown. */
};
static_assert(offsetof(Object020dfe30, value_0x0190) == 0x190);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_020dfe30(const Object020dfe30 *self)
{
    return self->value_0x0190;
}

/**
 *
 * The part of the object that auto_return_member_address_020dfe60 reads.
 *
 */
struct Object020dfe60 {
    uint8_t unknown_0x0000[0x258];
    uint8_t member_0x0258; /**< Read by auto_return_member_address_020dfe60; meaning unknown. */
};
static_assert(offsetof(Object020dfe60, member_0x0258) == 0x258);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_020dfe60(Object020dfe60 *self)
{
    return &self->member_0x0258;
}

/**
 *
 * The part of the object that auto_return_member_address_020dfe70 reads.
 *
 */
struct Object020dfe70 {
    uint8_t unknown_0x0000[0x258];
    uint8_t member_0x0258; /**< Read by auto_return_member_address_020dfe70; meaning unknown. */
};
static_assert(offsetof(Object020dfe70, member_0x0258) == 0x258);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_020dfe70(Object020dfe70 *self)
{
    return &self->member_0x0258;
}
