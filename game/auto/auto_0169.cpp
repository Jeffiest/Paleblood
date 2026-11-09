// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_01690b60 reads.
 *
 */
struct Object01690b60 {
    uint64_t value_0x0000; /**< Read by auto_return_field_01690b60; meaning unknown. */
};
static_assert(offsetof(Object01690b60, value_0x0000) == 0x0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01690b60(const Object01690b60 *self)
{
    return self->value_0x0000;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01691dc0()
{
}

/**
 *
 * The part of the object that auto_return_float_field_01692070 reads.
 *
 */
struct Object01692070 {
    uint8_t unknown_0x0000[0x588];
    float value_0x0588; /**< Read by auto_return_float_field_01692070; meaning unknown. */
};
static_assert(offsetof(Object01692070, value_0x0588) == 0x588);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_01692070(const Object01692070 *self)
{
    return self->value_0x0588;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01693000()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01693030()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01693040()
{
}

/**
 *
 * The part of the object that auto_return_field_01695e80 reads.
 *
 */
struct Object01695e80 {
    uint8_t unknown_0x0000[0x228];
    uint8_t value_0x0228; /**< Read by auto_return_field_01695e80; meaning unknown. */
};
static_assert(offsetof(Object01695e80, value_0x0228) == 0x228);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_01695e80(const Object01695e80 *self)
{
    return self->value_0x0228;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016991d0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_016991f0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01699200()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01699250()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016992b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01699310()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0169ad70()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0169b2f0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_0169b480 reads.
 *
 */
struct Object0169b480 {
    uint8_t unknown_0x0000[0x10];
    uint8_t member_0x0010; /**< Read by auto_return_member_address_0169b480; meaning unknown. */
};
static_assert(offsetof(Object0169b480, member_0x0010) == 0x10);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0169b480(Object0169b480 *self)
{
    return &self->member_0x0010;
}

/**
 *
 * The part of the object that auto_return_member_address_0169b490 reads.
 *
 */
struct Object0169b490 {
    uint8_t unknown_0x0000[0x24];
    uint8_t member_0x0024; /**< Read by auto_return_member_address_0169b490; meaning unknown. */
};
static_assert(offsetof(Object0169b490, member_0x0024) == 0x24);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0169b490(Object0169b490 *self)
{
    return &self->member_0x0024;
}

/**
 *
 * The part of the object that auto_return_field_0169c050 reads.
 *
 */
struct Object0169c050 {
    uint32_t value_0x0000; /**< Read by auto_return_field_0169c050; meaning unknown. */
};
static_assert(offsetof(Object0169c050, value_0x0000) == 0x0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_0169c050(const Object0169c050 *self)
{
    return self->value_0x0000;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0169df30()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0169eb60()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0169ebb0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0169ec10()
{
}
