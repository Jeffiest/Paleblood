// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009d25b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009d25c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009d3230()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009d3240()
{
}

/**
 *
 * The part of the object that auto_return_float_field_009d54e0 reads.
 *
 */
struct Object009d54e0 {
    uint8_t unknown_0x0000[0x1c];
    float value_0x001c; /**< Read by auto_return_float_field_009d54e0; meaning unknown. */
};
static_assert(offsetof(Object009d54e0, value_0x001c) == 0x1c);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_009d54e0(const Object009d54e0 *self)
{
    return self->value_0x001c;
}

/**
 *
 * The part of the object that auto_return_member_address_009d6670 reads.
 *
 */
struct Object009d6670 {
    uint8_t unknown_0x0000[0x18];
    uint8_t member_0x0018; /**< Read by auto_return_member_address_009d6670; meaning unknown. */
};
static_assert(offsetof(Object009d6670, member_0x0018) == 0x18);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_009d6670(Object009d6670 *self)
{
    return &self->member_0x0018;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009d6680()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009d6690()
{
}

/**
 *
 * The part of the object that auto_return_member_address_009d74f0 reads.
 *
 */
struct Object009d74f0 {
    uint8_t unknown_0x0000[0x48];
    uint8_t member_0x0048; /**< Read by auto_return_member_address_009d74f0; meaning unknown. */
};
static_assert(offsetof(Object009d74f0, member_0x0048) == 0x48);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_009d74f0(Object009d74f0 *self)
{
    return &self->member_0x0048;
}

/**
 *
 * The part of the object that auto_return_member_address_009d79a0 reads.
 *
 */
struct Object009d79a0 {
    uint8_t unknown_0x0000[0x20];
    uint8_t member_0x0020; /**< Read by auto_return_member_address_009d79a0; meaning unknown. */
};
static_assert(offsetof(Object009d79a0, member_0x0020) == 0x20);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_009d79a0(Object009d79a0 *self)
{
    return &self->member_0x0020;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_009d8b00 = 0x120;

extern "C" uint32_t bb_auto_return_constant_009d8b00()
{
    return value_009d8b00;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009da7f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009dae80()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009daf40()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_009db410()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_009db420()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_009dd140 reads.
 *
 */
struct Object009dd140 {
    uint8_t unknown_0x0000[0x30];
    uint32_t value_0x0030; /**< Read by auto_return_field_009dd140; meaning unknown. */
};
static_assert(offsetof(Object009dd140, value_0x0030) == 0x30);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_009dd140(const Object009dd140 *self)
{
    return self->value_0x0030;
}

/**
 *
 * The part of the object that auto_return_member_address_009dd670 reads.
 *
 */
struct Object009dd670 {
    uint8_t unknown_0x0000[0x20];
    uint8_t member_0x0020; /**< Read by auto_return_member_address_009dd670; meaning unknown. */
};
static_assert(offsetof(Object009dd670, member_0x0020) == 0x20);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_009dd670(Object009dd670 *self)
{
    return &self->member_0x0020;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_009dd680()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_009dd690()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009dd720()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009dd750()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009dd9c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009dd9d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009de5a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009de5b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009de7c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009de7d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009de9e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009de9f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009dec10()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009dee50()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009dee60()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009df710()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009df750()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009dfde0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009dfdf0()
{
}
