// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_float_field_01937110 reads.
 *
 */
struct Object01937110 {
    uint8_t unknown_0x0000[0x230];
    float value_0x0230; /**< Read by auto_return_float_field_01937110; meaning unknown. */
};
static_assert(offsetof(Object01937110, value_0x0230) == 0x230);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_01937110(const Object01937110 *self)
{
    return self->value_0x0230;
}

/**
 *
 * The part of the object that auto_return_float_field_01937130 reads.
 *
 */
struct Object01937130 {
    uint8_t unknown_0x0000[0x234];
    float value_0x0234; /**< Read by auto_return_float_field_01937130; meaning unknown. */
};
static_assert(offsetof(Object01937130, value_0x0234) == 0x234);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_01937130(const Object01937130 *self)
{
    return self->value_0x0234;
}

/**
 *
 * The part of the object that auto_return_float_field_01937150 reads.
 *
 */
struct Object01937150 {
    uint8_t unknown_0x0000[0x25c];
    float value_0x025c; /**< Read by auto_return_float_field_01937150; meaning unknown. */
};
static_assert(offsetof(Object01937150, value_0x025c) == 0x25c);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_01937150(const Object01937150 *self)
{
    return self->value_0x025c;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01937160()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_019371c0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01939e50()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0193e900()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0193e9d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0193ea30()
{
}
