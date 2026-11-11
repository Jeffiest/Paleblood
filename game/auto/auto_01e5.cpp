// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e50040()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e500a0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01e53190()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e54040()
{
}

/**
 *
 * The part of the object that auto_return_float_field_01e57770 reads.
 *
 */
struct Object01e57770 {
    uint8_t unknown_0x0000[0x148];
    float value_0x0148; /**< Read by auto_return_float_field_01e57770; meaning unknown. */
};
static_assert(offsetof(Object01e57770, value_0x0148) == 0x148);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_01e57770(const Object01e57770 *self)
{
    return self->value_0x0148;
}

/**
 *
 * The part of the object that auto_return_field_01e58830 reads.
 *
 */
struct Object01e58830 {
    uint8_t unknown_0x0000[0x130];
    uint32_t value_0x0130; /**< Read by auto_return_field_01e58830; meaning unknown. */
};
static_assert(offsetof(Object01e58830, value_0x0130) == 0x130);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01e58830(const Object01e58830 *self)
{
    return self->value_0x0130;
}

/**
 *
 * The part of the object that auto_return_field_01e58840 reads.
 *
 */
struct Object01e58840 {
    uint8_t unknown_0x0000[0x13c];
    uint32_t value_0x013c; /**< Read by auto_return_field_01e58840; meaning unknown. */
};
static_assert(offsetof(Object01e58840, value_0x013c) == 0x13c);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01e58840(const Object01e58840 *self)
{
    return self->value_0x013c;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e58850()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e588b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e5a330()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e5d090()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e5d0f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e5f230()
{
}
