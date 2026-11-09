// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_013b1160()
{
}

/**
 *
 * The part of the object that auto_return_field_013b95a0 reads.
 *
 */
struct Object013b95a0 {
    uint8_t unknown_0x0000[0x8];
    uint64_t value_0x0008; /**< Read by auto_return_field_013b95a0; meaning unknown. */
};
static_assert(offsetof(Object013b95a0, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_013b95a0(const Object013b95a0 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_013b95d0 reads.
 *
 */
struct Object013b95d0 {
    uint8_t unknown_0x0000[0x80];
    uint64_t value_0x0080; /**< Read by auto_return_field_013b95d0; meaning unknown. */
};
static_assert(offsetof(Object013b95d0, value_0x0080) == 0x80);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_013b95d0(const Object013b95d0 *self)
{
    return self->value_0x0080;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_013b9cd0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_013bac20()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_013bc0b0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_013bc0c0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_013bc0d0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_013bc0e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_013bc0f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_013bc200()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_013bc210()
{
}
