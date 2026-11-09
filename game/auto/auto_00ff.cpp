// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_00ff9290 reads.
 *
 */
struct Object00ff9290 {
    uint8_t unknown_0x0000[0x3a4];
    uint32_t value_0x03a4; /**< Read by auto_return_field_00ff9290; meaning unknown. */
};
static_assert(offsetof(Object00ff9290, value_0x03a4) == 0x3a4);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_00ff9290(const Object00ff9290 *self)
{
    return self->value_0x03a4;
}

/**
 *
 * The part of the object that auto_return_field_00ff92a0 reads.
 *
 */
struct Object00ff92a0 {
    uint8_t unknown_0x0000[0x3e8];
    uint32_t value_0x03e8; /**< Read by auto_return_field_00ff92a0; meaning unknown. */
};
static_assert(offsetof(Object00ff92a0, value_0x03e8) == 0x3e8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_00ff92a0(const Object00ff92a0 *self)
{
    return self->value_0x03e8;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_00ffef30()
{
    return 0;
}
