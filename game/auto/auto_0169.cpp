// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

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
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0169b2f0()
{
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
