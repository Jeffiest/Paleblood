// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_009356b0 reads.
 *
 */
struct Object009356b0 {
    uint8_t unknown_0x0000[0x10];
    uint64_t value_0x0010; /**< Read by auto_return_field_009356b0; meaning unknown. */
};
static_assert(offsetof(Object009356b0, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_009356b0(const Object009356b0 *self)
{
    return self->value_0x0010;
}

/**
 *
 * The part of the object that auto_return_field_00936c80 reads.
 *
 */
struct Object00936c80 {
    uint8_t unknown_0x0000[0x38];
    uint32_t value_0x0038; /**< Read by auto_return_field_00936c80; meaning unknown. */
};
static_assert(offsetof(Object00936c80, value_0x0038) == 0x38);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_00936c80(const Object00936c80 *self)
{
    return self->value_0x0038;
}
