// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_025a2a10()
{
}

/**
 *
 * The part of the object that auto_return_field_025a7a30 reads.
 *
 */
struct Object025a7a30 {
    uint8_t unknown_0x0000[0x30];
    uint64_t value_0x0030; /**< Read by auto_return_field_025a7a30; meaning unknown. */
};
static_assert(offsetof(Object025a7a30, value_0x0030) == 0x30);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_025a7a30(const Object025a7a30 *self)
{
    return self->value_0x0030;
}

/**
 *
 * The part of the object that auto_return_field_025a85e0 reads.
 *
 */
struct Object025a85e0 {
    uint8_t unknown_0x0000[0x20];
    uint64_t value_0x0020; /**< Read by auto_return_field_025a85e0; meaning unknown. */
};
static_assert(offsetof(Object025a85e0, value_0x0020) == 0x20);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_025a85e0(const Object025a85e0 *self)
{
    return self->value_0x0020;
}
