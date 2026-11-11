// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

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
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f24670()
{
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
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f24b60()
{
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
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f24ea0()
{
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
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f25570()
{
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
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f25d20()
{
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
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f26300()
{
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
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f26850()
{
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
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f27230()
{
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
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f27e70()
{
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
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f28920()
{
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
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f2f410()
{
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
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f2f750()
{
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
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f2fc10()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f2ff40()
{
}
