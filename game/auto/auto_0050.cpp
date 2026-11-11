// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_00503c50 reads.
 *
 */
struct Object00503c50 {
    uint8_t unknown_0x0000[0xa8];
    uint32_t value_0x00a8; /**< Read by auto_return_field_00503c50; meaning unknown. */
};
static_assert(offsetof(Object00503c50, value_0x00a8) == 0xa8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_00503c50(const Object00503c50 *self)
{
    return self->value_0x00a8;
}

/**
 *
 * The part of the object that auto_return_field_00508090 reads.
 *
 */
struct Object00508090 {
    uint8_t unknown_0x0000[0xb0];
    uint64_t value_0x00b0; /**< Read by auto_return_field_00508090; meaning unknown. */
};
static_assert(offsetof(Object00508090, value_0x00b0) == 0xb0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_00508090(const Object00508090 *self)
{
    return self->value_0x00b0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0050b420 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0050b420()
{
    return value_0050b420;
}
