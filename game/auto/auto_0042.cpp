// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_004261a0 reads.
 *
 */
struct Object004261a0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_004261a0; meaning unknown. */
};
static_assert(offsetof(Object004261a0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_004261a0(const Object004261a0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0042aa30()
{
}

/**
 *
 * The part of the object that auto_return_field_0042b2b0 reads.
 *
 */
struct Object0042b2b0 {
    uint8_t unknown_0x0000[0x5488];
    uint32_t value_0x5488; /**< Read by auto_return_field_0042b2b0; meaning unknown. */
};
static_assert(offsetof(Object0042b2b0, value_0x5488) == 0x5488);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_0042b2b0(const Object0042b2b0 *self)
{
    return self->value_0x5488;
}

/**
 *
 * The part of the object that auto_return_field_0042d830 reads.
 *
 */
struct Object0042d830 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0042d830; meaning unknown. */
};
static_assert(offsetof(Object0042d830, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0042d830(const Object0042d830 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0042e650 reads.
 *
 */
struct Object0042e650 {
    uint8_t unknown_0x0000[0x8];
    uint32_t value_0x0008; /**< Read by auto_return_field_0042e650; meaning unknown. */
};
static_assert(offsetof(Object0042e650, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_0042e650(const Object0042e650 *self)
{
    return self->value_0x0008;
}
