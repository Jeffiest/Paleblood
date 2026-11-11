// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_0081ca00 reads.
 *
 */
struct Object0081ca00 {
    uint8_t unknown_0x0000[0xb50];
    uint64_t value_0x0b50; /**< Read by auto_return_field_0081ca00; meaning unknown. */
};
static_assert(offsetof(Object0081ca00, value_0x0b50) == 0xb50);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0081ca00(const Object0081ca00 *self)
{
    return self->value_0x0b50;
}

/**
 *
 * The part of the object that auto_return_field_0081ca10 reads.
 *
 */
struct Object0081ca10 {
    uint8_t unknown_0x0000[0xb48];
    uint64_t value_0x0b48; /**< Read by auto_return_field_0081ca10; meaning unknown. */
};
static_assert(offsetof(Object0081ca10, value_0x0b48) == 0xb48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0081ca10(const Object0081ca10 *self)
{
    return self->value_0x0b48;
}
